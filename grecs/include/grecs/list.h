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

#ifndef _GRECS_LIST_H
#define _GRECS_LIST_H

typedef struct grecs_list_entry *grecs_list_entry_ptr_t;
typedef struct grecs_list *grecs_list_ptr_t;

struct grecs_list_entry {
	struct grecs_list_entry *next, *prev;
	void *data;
};

struct grecs_list {
	struct grecs_list_entry *head, *tail;
	size_t count;
	int (*cmp)(const void *, const void *);
	void (*free_entry)(void *);
};

grecs_list_ptr_t grecs_list_create(void);
size_t grecs_list_size(grecs_list_ptr_t);
void grecs_list_append(grecs_list_ptr_t, void *);
void grecs_list_push(grecs_list_ptr_t, void *);
void *grecs_list_pop(grecs_list_ptr_t);
void *grecs_list_locate(grecs_list_ptr_t, void *);
void *grecs_list_index(grecs_list_ptr_t, size_t);
void *grecs_list_remove_tail(grecs_list_ptr_t);
void grecs_list_remove_entry(grecs_list_ptr_t, grecs_list_entry_ptr_t);
void grecs_list_clear(grecs_list_ptr_t);
void grecs_list_free(grecs_list_ptr_t);
void grecs_list_add(grecs_list_ptr_t, grecs_list_ptr_t);
int grecs_list_compare(grecs_list_ptr_t, grecs_list_ptr_t);

/* FIXME */
struct grecs_list *_grecs_simple_list_create(int dispose);
struct grecs_list *grecs_value_list_create(void);


#endif
