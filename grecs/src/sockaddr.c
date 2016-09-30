/* grecs - Gray's Extensible Configuration System
   Copyright (C) 2007-2016 Sergey Poznyakoff

   Grecs is free software; you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published by the
   Free Software Foundation; either version 3 of the License, or (at your
   option) any later version.

   Grecs is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License along
   with Grecs. If not, see <http://www.gnu.org/licenses/>. */

/* Network-specific functions */

#ifdef HAVE_CONFIG_H
# include <config.h>
#endif
#include <string.h>
#include <ctype.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <errno.h>
#include <stdlib.h>
#include "grecs.h"

struct grecs_sockaddr *
grecs_sockaddr_new(size_t s)
{
	struct grecs_sockaddr *sp = grecs_malloc(sizeof(*sp));
	sp->next = NULL;
	sp->sa = grecs_zalloc(s);
	sp->len = s;
	return sp;
}

void
grecs_sockaddr_free(struct grecs_sockaddr *p)
{
	while (p) {
		struct grecs_sockaddr *next = p->next;
		free(p->sa);
		free(p);
		p = next;
	}
}

static int
parse_unix(struct grecs_sockaddr **ret, const char *arg, const char *addrstr,
	   struct grecs_sockaddr_hints *gh, grecs_locus_t const *locus)
{
	struct sockaddr_un *s_un;
	size_t slen = strlen(addrstr);
	struct grecs_sockaddr *sp;
	
	if (slen >= sizeof s_un->sun_path) {
		grecs_error(locus, 0, _("socket path name too long: %s"), arg);
		return -1;
	}
	
	sp = grecs_sockaddr_new(sizeof(s_un[0]));
	s_un = (struct sockaddr_un *) sp->sa;
	s_un->sun_family = AF_UNIX;
	strcpy(s_un->sun_path, addrstr);

	*ret = sp;
	return 0;
}

static int
parse_inet(struct grecs_sockaddr **ret,
	   int family, const char *arg, const char *addrstr,
	   struct grecs_sockaddr_hints *gh, grecs_locus_t const *locus)
{
	int rc;
	struct addrinfo hints;
	struct addrinfo *res, *ap;
	const char *node = NULL;
	char *nodebuf = NULL;
	const char *service = NULL;
	struct grecs_sockaddr *head = NULL, *tail = NULL;
	char portbuf[64];

	memset(&hints, 0, sizeof(hints));
	hints.ai_family = family;
	hints.ai_socktype = SOCK_STREAM;

	if ((family == AF_INET6 || family == AF_UNSPEC)
	    && addrstr[0] == '[') {
		char *p = strchr(addrstr + 1, ']');
		if (p && p > addrstr + 1) {
			size_t len;
			
			addrstr++;
			len = p - addrstr;
			nodebuf = grecs_malloc(len + 1);
			memcpy(nodebuf, addrstr, len);
			nodebuf[len] = 0;
			node = nodebuf;
			service = p + 1;
			family = AF_INET6;
		} else
			service = strchr(addrstr, ':');
	} else
		service = strrchr(addrstr, ':');

	if (service && *service) {
		if (*service != ':') {
			grecs_error(locus, 0,
				    _("%s: garbage near %s"), arg, service);
			return -1;
		}
		service++;
	}
	
	if (!node) {
		if (service) {
			size_t len = service - addrstr - 1;
			
			if (len == 0)
				node = NULL;
			else {
				nodebuf = grecs_malloc(len + 1);
				memcpy(nodebuf, addrstr, len);
				nodebuf[len] = 0;
				node = nodebuf;
			}
		} else {
			if (grecs_str_is_ipaddr(addrstr))
				node = addrstr;
			else if (grecs_str_is_num(addrstr)) {
				service = addrstr;
				hints.ai_flags |= AI_NUMERICSERV;
			}
		}
	}
	
	if (!service || !*service) {
		if (!node && addrstr[0])
			node = addrstr;
		if (gh->flags & GRECS_HINT_SERVICE) {
			service = gh->service;
		} else if (gh->flags & GRECS_HINT_PORT) {
			snprintf(portbuf, sizeof portbuf, "%hu", gh->port);
			service = portbuf;
			hints.ai_flags |= AI_NUMERICSERV;
		} else if (!(gh->flags & GRECS_AH_PASSIVE)) {
			grecs_error(locus, 0,
				    _("service not specified: %s"), arg);
			return -1;
		}
	}
	
	if (!node) {
		if (gh->flags & GRECS_AH_PASSIVE)
			hints.ai_flags |= AI_PASSIVE;
	}
	
	rc = getaddrinfo(node, service, &hints, &res);
	free(nodebuf);
	switch (rc) {
	case 0:
		break;
	case EAI_SYSTEM:
		grecs_error(locus, 0,
			    _("%s: cannot parse address: %s"),
			    arg, strerror(errno));
		break;
	case EAI_BADFLAGS:
	case EAI_SOCKTYPE:
		grecs_error(locus, 0,
			    "%s:%d: internal error converting %s",
			    __FILE__,__LINE__,arg);
		break;
	case EAI_MEMORY:
		grecs_alloc_die();
	default:
		grecs_error(locus, 0,
			    "%s: %s", arg, gai_strerror(rc));
		return -1;
	}

	for (ap = res; ap; ap = ap->ai_next) {
		if (family == AF_UNSPEC || ap->ai_addr->sa_family == family) {
			struct grecs_sockaddr *sp =
				grecs_sockaddr_new(ap->ai_addrlen);
			memcpy(sp->sa, ap->ai_addr, ap->ai_addrlen);
			sp->len = ap->ai_addrlen;
			if (!head)
				head = sp;
			else
				tail->next = sp;
			tail = sp;
		}
	}
	freeaddrinfo(res);
	*ret = head;
	return 0;
}

static int
parse_inet4(struct grecs_sockaddr **ret, const char *arg, const char *addrstr,
	    struct grecs_sockaddr_hints *gh, grecs_locus_t const *locus)
{
	return parse_inet(ret, AF_INET, arg, addrstr, gh, locus);
}

static int
parse_inet6(struct grecs_sockaddr **ret, const char *arg, const char *addrstr,
	    struct grecs_sockaddr_hints *gh, grecs_locus_t const *locus)
{
	return parse_inet(ret, AF_INET6, arg, addrstr, gh, locus);
}

struct schemetab {
	const char *scheme;
	size_t len;
	int (*parser)(struct grecs_sockaddr **ret,
		      const char *arg, const char *addr,
		      struct grecs_sockaddr_hints *gh,
		      grecs_locus_t const *locus);
};

struct schemetab schemetab[] = {
	{ "inet",  4, parse_inet4 },
	{ "inet4", 5, parse_inet4 },
	{ "inet6", 5, parse_inet6 },
	{ "unix",  4, parse_unix },
	{ NULL }
};

int
grecs_str_to_sockaddr(struct grecs_sockaddr **sap,
		      const char *arg, struct grecs_sockaddr_hints *gh,
		      grecs_locus_t const *locus)
{
	char *p;
	struct grecs_sockaddr_hints ghints;
	
	if (!gh) {
		memset(&ghints, 0, sizeof(ghints));
		if (grecs_default_port) {
			ghints.flags = GRECS_HINT_PORT;
			ghints.port = ntohs(grecs_default_port);
		}
		gh = &ghints;
	}
	
	p = strchr(arg, ':');
	if (p && p > arg && p[1] == '/' && p[2] == '/') {
		size_t len = p - arg;
		struct schemetab *sp;

		for (sp = schemetab; sp->scheme; sp++)
			if (len == sp->len &&
			    memcmp(arg, sp->scheme, len) == 0)
				return sp->parser(sap, arg, p + 3, gh, locus);
		grecs_error(locus, 0,
			    _("unknown or unsupported scheme: %s"), arg);
		return -1;
	}

	if (arg[0] == '/')
		return parse_unix(sap, arg, arg, gh, locus);
	else if (strlen(arg) > 5 && memcmp(arg, "unix:", 5) == 0) {
		if (arg[5] != '/')
			grecs_error(locus, 0,
				    _("%s: UNIX socket must be an absolute file name"),
				    arg);
		return parse_unix(sap, arg, arg + 5, gh, locus);
	}
	
	return parse_inet(sap, AF_UNSPEC, arg, arg, gh, locus);
}
