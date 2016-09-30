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

#ifndef _GRECS_ERROR_H
#define _GRECS_ERROR_H

#include <grecs/locus.h>

extern int grecs_log_to_stderr;
extern void (*grecs_log_setup_hook)(void);

extern void (*grecs_print_diag_fun)(grecs_locus_t const *, int, int,
				    const char*);

void grecs_warning(grecs_locus_t const *locus,
		   int errcode, const char *fmt, ...)
	__attribute__ ((__format__ (__printf__, 3, 4)));
void grecs_error(grecs_locus_t const *locus, int errcode,
		 const char *fmt, ...)
	__attribute__ ((__format__ (__printf__, 3, 4)));

int grecs_asprint_locus(char **locstr, size_t *size,
			grecs_locus_t const *locus);

#endif
