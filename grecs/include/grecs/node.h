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

#ifndef _GRECS_NODE_H
#define _GRECS_NODE_H

#include <grecs/locus.h>
#include <grecs/symtab.h>
#include <grecs/value.h>

enum grecs_node_type {
	grecs_node_root,
	grecs_node_stmt,
	grecs_node_block
};

typedef struct grecs_node {
	enum grecs_node_type type;
	grecs_locus_t locus;
	struct grecs_node *up;
	struct grecs_node *down;
	struct grecs_node *next;
	struct grecs_node *prev;
	char *ident;
	grecs_locus_t idloc;
	union {
		grecs_value_t *value;
		grecs_symtab_ptr_t texttab;
	} v;
} grecs_node_t;

void grecs_node_free(struct grecs_node *node);
struct grecs_node *grecs_node_create(enum grecs_node_type type,
				     grecs_locus_t *loc);
struct grecs_node *grecs_node_create_points(enum grecs_node_type type,
					    struct grecs_locus_point beg,
					    struct grecs_locus_point end);
void grecs_node_bind(struct grecs_node *master, struct grecs_node *node,
		     int dn);
int grecs_node_eq(struct grecs_node *a, struct grecs_node *b);
int grecs_node_unlink(struct grecs_node *node);

struct grecs_node *grecs_node_from_path(const char *path, const char *value);
struct grecs_node *grecs_node_from_path_locus(const char *path,
					      const char *value,
					      grecs_locus_t *locus,
					      grecs_locus_t *vallocus);

#endif
