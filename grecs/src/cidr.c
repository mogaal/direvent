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

#ifdef HAVE_CONFIG_H
# include <config.h>
#endif
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdlib.h>
#include "grecs.h"

static void
uint32_to_bytes (unsigned char *bytes, uint32_t u)
{
	int i;

	for (i = 0; i < 4; i++)	{
		bytes[i] = u & 0xff;
		u >>= 8;
	}
}

int
grecs_inaddr_to_bytes(int af, void *buf, unsigned char *bytes)
{
	uint32_t u;

	switch (af) {
	case AF_INET:
		memcpy(&u, buf, sizeof u);
		uint32_to_bytes(bytes, u);
		return 4;

	case AF_INET6:
		memcpy(bytes, buf, 16);
		return 16;
	}
	return 0;
}

int
grecs_sockaddr_to_bytes(unsigned char *bytes, struct sockaddr const *sa)
{
	switch (sa->sa_family) {
	case AF_INET:
		uint32_to_bytes(bytes,
				((struct sockaddr_in*)sa)->sin_addr.s_addr);
		return 4;

	case AF_INET6:
		memcpy(bytes, &((struct sockaddr_in6*)sa)->sin6_addr, 16);
		return 16;
	}
	return 0;
}

int
grecs_sockaddr_to_cidr(struct grecs_cidr *cidr, const struct sockaddr *sa)
{
	unsigned char address[GRECS_INADDR_BYTES];
	int len;
	int i;

	len = grecs_sockaddr_to_bytes(address, sa);
	if (len == 0)
		return -1;
	cidr->family = sa->sa_family;
	cidr->len = len;
	memcpy(cidr->address, address, sizeof(cidr->address));
	for (i = 0; i < GRECS_INADDR_BYTES; i++)
		cidr->netmask[i] = 0xff;
	return 0;
}

static void
masklen_to_netmask(unsigned char *buf, size_t len, size_t masklen)
{
	int i, cnt;

	cnt = masklen / 8;
	for (i = 0; i < cnt; i++)
		buf[i] = 0xff;
	if (i == GRECS_INADDR_BYTES)
		return;
	cnt = 8 - masklen % 8;
	buf[i++] = (0xff >> cnt) << cnt;
	for (; i < GRECS_INADDR_BYTES; i++)
		buf[i] = 0;
}

int
grecs_str_to_cidr(struct grecs_cidr *pcidr, const char *str,
		  grecs_locus_t const *locus)
{
	int rc;
	char ipbuf[41];
	struct grecs_cidr cidr;
	char *p;
	size_t len;
	union {
		struct in_addr in;
		struct in6_addr in6;
	} inaddr;
  
	p = strchr(str, '/');
	if (p)
		len = p - str;
	else
		len = strlen(str);

	if (len > sizeof(ipbuf)) {
		grecs_error(locus, 0, _("invalid network mask: %s"),
			    str);
		return -1;
	}
  
	memcpy(ipbuf, str, len);
	ipbuf[len] = 0;

	if (grecs_str_is_ipv4(ipbuf))
		cidr.family = AF_INET;
	else if (grecs_str_is_ipv6(ipbuf))
		cidr.family = AF_INET6;
	else {
		grecs_error(locus, 0, _("unrecognized address family: %s"),
			    str);
		return -1;
	}
	
	rc = inet_pton(cidr.family, ipbuf, &inaddr);
	if (rc == -1) {
		grecs_error(locus, 0, _("unrecognized address family: %s"),
			    str);
		return -1;
	} else if (rc != 1) {
		grecs_error(locus, 0, _("invalid network address: %s"),
			    str);
		return -1;
	}

	cidr.len = grecs_inaddr_to_bytes(cidr.family, &inaddr, cidr.address);
	if (cidr.len == 0) {
		grecs_error(locus, 0, _("unrecognized address family: %s"),
			    str);
		return -1;
	}

	if (p) {
		char *end;
		unsigned long masklen;
      
		p++;

		masklen = strtoul(p, &end, 10);
		if (*end == 0)
			masklen_to_netmask(cidr.netmask, cidr.len, masklen);
		else if ((cidr.family == AF_INET && grecs_str_is_ipv4(p))
			 || (cidr.family == AF_INET6
			     && grecs_str_is_ipv6(ipbuf))) {
			rc = inet_pton(cidr.family, p, &inaddr);
			if (rc != 1) {
				grecs_error(locus, 0, _("invalid network mask: %s"),
					    str);
				return -1;
			}
			grecs_inaddr_to_bytes(cidr.family, &inaddr,
					      cidr.netmask);
		} else {
			grecs_error(locus, 0, _("invalid network mask: %s"),
				    str);
			return -1;
		}
	} else
		masklen_to_netmask(cidr.netmask, cidr.len, cidr.len * 8);

	memcpy(pcidr, &cidr, sizeof(*pcidr));
	return 0;
}

int
grecs_cidr_match(struct grecs_cidr *a, struct grecs_cidr *b)
{
	int i;

	if (a->family != b->family)
		return 1;
	for (i = 0; i < a->len; i++) {
		if (a->address[i] != (b->address[i] & a->netmask[i]))
			return 1;
	}
	return 0;
}

int
grecs_sockadd_cidr_match(struct sockaddr *sa, struct grecs_cidr *cidr)
{
	struct grecs_cidr t;
	if (grecs_sockaddr_to_cidr(&t, sa))
		return 1;
	return grecs_cidr_match(cidr, &t);
}
