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

#ifndef _GRECS_UTIL_H
#define _GRECS_UTIL_H

#include <stdarg.h>

ssize_t grecs_getline(char **pbuf, size_t *psize, FILE *fp);
int grecs_vasprintf(char **pbuf, size_t *psize, const char *fmt, va_list ap);
int grecs_asprintf(char **pbuf, size_t *psize, const char *fmt, ...);

#endif
