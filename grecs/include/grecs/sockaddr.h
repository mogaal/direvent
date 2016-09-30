/* grecs - Gray's Extensible Configuration System -*- c -*-
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

#ifndef _GRECS_SOCKADDR_H
#define _GRECS_SOCKADDR_H

struct grecs_sockaddr {
#if GRECS_SOCKADDR_LIST
	struct grecs_sockaddr *next;
#endif
	int len;
	struct sockaddr *sa;
};

#if GRECS_SOCKADDR_LIST

#define GRECS_AH_PASSIVE 0x01
#define GRECS_HINT_SERVICE 0x02
#define GRECS_HINT_PORT 0x04

struct grecs_sockaddr_hints {
	int flags;
	char *service;
	unsigned short port;
};

extern struct grecs_sockaddr_hints *grecs_sockaddr_hints;

struct grecs_sockaddr *grecs_sockaddr_new(size_t s);
void grecs_sockaddr_free(struct grecs_sockaddr *p);

int grecs_str_to_sockaddr(struct grecs_sockaddr **sap,
			  const char *arg, struct grecs_sockaddr_hints *gh,
			  grecs_locus_t const *locus);
#endif

#define GRECS_INADDR_BYTES 16

struct grecs_cidr
{
    int family;
    int len;
    unsigned char address[GRECS_INADDR_BYTES];
    unsigned char netmask[GRECS_INADDR_BYTES];
};

int grecs_str_to_cidr(struct grecs_cidr *pcidr, const char *str,
		      grecs_locus_t const *locus);

int grecs_sockaddr_to_cidr(struct grecs_cidr *cidr, const struct sockaddr *sa);
int grecs_sockadd_cidr_match(struct sockaddr *sa, struct grecs_cidr *cidr);

#endif
