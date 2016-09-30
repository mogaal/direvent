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

#ifndef _GRECS_TABLE_H
#define _GRECS_TABLE_H

#include <grecs/node.h>

enum grecs_data_type {
	grecs_type_void,
	grecs_type_string,
	grecs_type_short,
	grecs_type_ushort,
	grecs_type_int,
	grecs_type_uint,
	grecs_type_long,
	grecs_type_ulong,
	grecs_type_size,
/*    grecs_type_off,*/
	grecs_type_time,
	grecs_type_bool,
	grecs_type_ipv4,
	grecs_type_cidr,
	grecs_type_host,
	grecs_type_sockaddr,
	grecs_type_section,
	grecs_type_null
};

#define GRECS_DFLT   0x00   /* Default keyword flags */
#define GRECS_AGGR   0x01   /* Multiple entries aggregate */
#define GRECS_MULT   0x02   /* Statement can appear multiple times */
#define GRECS_INAC   0x04   /* Inactive keyword */
#define GRECS_LIST   0x08   /* Value is a list of declared type */
#define GRECS_HIDDEN 0x10   /* Hidden keyword: don't display in help output */
#define GRECS_CONST  0x20   /* For string types: initial value is constant,
			       don't try to free it before assigning new value.
			       This flag is cleared after the first assignment.
			    */

enum grecs_callback_command {
	grecs_callback_section_begin,
	grecs_callback_section_end,
	grecs_callback_set_value
};

typedef int (*grecs_callback_fn)(
#if GRECS_TREE_API
	enum grecs_callback_command cmd,
	grecs_node_t *     /* node */,
	void *             /* varptr */,
	void *             /* cb_data */
#else
	enum grecs_callback_command cmd,
	grecs_locus_t *    /* locus */,
	void *             /* varptr */,
	grecs_value_t *    /* value */,
	void *             /* cb_data */
#endif
	);

struct grecs_keyword {
	const char *ident;
	const char *argname;
	const char *docstring;
	enum grecs_data_type type;
	int flags;
	void *varptr;
	size_t offset;
	grecs_callback_fn callback;
	void *callback_data;
	struct grecs_keyword *kwd;
};

extern int grecs_string_convert(void *target, enum grecs_data_type type,
				const char *string,
				grecs_locus_t const *locus);
extern void grecs_process_ident(struct grecs_keyword *kwp,
				grecs_value_t *value,
				void *base,
				grecs_locus_t *locus);

const char *grecs_data_type_string(enum grecs_data_type type);

int grecs_tree_process(struct grecs_node *node, struct grecs_keyword *kwd);
int grecs_tree_reduce(struct grecs_node *node, struct grecs_keyword *kwd,
		      int flags);

#endif
