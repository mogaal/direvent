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

#ifndef _GRECS_VALUE_H
#define _GRECS_VALUE_H

#include <grecs/locus.h>
#include <grecs/list.h>

#define GRECS_TYPE_STRING 0
#define GRECS_TYPE_LIST   1
#define GRECS_TYPE_ARRAY  2

typedef struct grecs_value {
	int type;
	grecs_locus_t locus;
	union {
		grecs_list_ptr_t list;
		char *string;
		struct {
			size_t c;
			struct grecs_value **v;
		} arg;
	} v;
} grecs_value_t;

#define GRECS_VALUE_EMPTY_P(val) \
	(!(val) ||						\
	 ((val)->type == GRECS_TYPE_STRING && (val)->v.string == NULL))

void grecs_value_free(struct grecs_value *val);
void grecs_value_free_content(struct grecs_value *val);
grecs_value_t *grecs_value_ptr_from_static(grecs_value_t *input);

int grecs_value_eq(struct grecs_value *a, struct grecs_value *b);
int grecs_value_match(struct grecs_value *pat, struct grecs_value *b,
		      int flags);

#endif
