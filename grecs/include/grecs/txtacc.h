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

#ifndef _GRECS_TXTACC_H
#define _GRECS_TXTACC_H

#define GRECS_TXTACC_BUFSIZE 1024
typedef struct grecs_txtacc *grecs_txtacc_t;

grecs_txtacc_t grecs_txtacc_create(void);
void grecs_txtacc_free(grecs_txtacc_t);
void grecs_txtacc_grow(grecs_txtacc_t, const char *, size_t);
void grecs_txtacc_grow_string(grecs_txtacc_t, const char *);
void grecs_txtacc_grow_string_escape(grecs_txtacc_t, const char *);
#define grecs_txtacc_grow_char(acc,c)		\
	do {					\
		char __ch = c;			\
		grecs_txtacc_grow(acc,&__ch,1);	\
	} while (0)
char *grecs_txtacc_finish(grecs_txtacc_t, int);
void grecs_txtacc_free_string(grecs_txtacc_t, char *);

#endif
