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

#ifndef _GRECS_MEM_H
#define _GRECS_MEM_H

extern void *(*grecs_malloc_fun)(size_t size);
extern void *(*grecs_realloc_fun)(void *ptr, size_t size);
extern void (*grecs_alloc_die_fun)(void);
extern void (*grecs_free_fun)(void *ptr);

void *grecs_malloc(size_t size);
void *grecs_zalloc(size_t size);
void *grecs_calloc(size_t nmemb, size_t size);
void *grecs_realloc(void *ptr, size_t size);
void grecs_alloc_die(void);
char *grecs_strdup(const char *str);
void grecs_free(void *ptr);

#endif
