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

#ifndef _GRECS_FORMAT_H
#define _GRECS_FORMAT_H

#include <grecs/value.h>
#include <grecs/locus.h>
#include <grecs/node.h>
#include <grecs/txtacc.h>

struct grecs_format_closure {
	int (*fmtfun)(const char *, void *);
	void *data;
};

void grecs_format_locus(grecs_locus_t *locus, struct grecs_format_closure *fp);
void grecs_format_node_path(struct grecs_node *node, int flag,
			    struct grecs_format_closure *fp);
void grecs_format_value(struct grecs_value *val, int flags,
			struct grecs_format_closure *fp);

#define GRECS_NODE_FLAG_PATH      0x00100
#define GRECS_NODE_FLAG_VALUE     0x00200
#define GRECS_NODE_FLAG_DESCEND   0x01000
#define GRECS_NODE_FLAG_LOCUS     0x02000
#define GRECS_NODE_FLAG_QUOTE     0x04000
#define GRECS_NODE_FLAG_NOQUOTE   0x08000
#define GRECS_NODE_FLAG_QUOTE_HEX 0x10000

#define _GRECS_NODE_MASK_DELIM    0x000ff
#define _GRECS_NODE_MASK_OUTPUT   0x00f00

#define GRECS_NODE_FLAG_DEFAULT \
	(GRECS_NODE_FLAG_PATH|GRECS_NODE_FLAG_VALUE|\
	 GRECS_NODE_FLAG_DESCEND|GRECS_NODE_FLAG_QUOTE)
int grecs_format_node(struct grecs_node *node, int flags,
		      struct grecs_format_closure *fp);

void grecs_print_locus(grecs_locus_t *locus, FILE *fp);
void grecs_print_node_path(struct grecs_node *node, int flag, FILE *fp);
void grecs_print_value(struct grecs_value *val, int flags, FILE *fp);

int grecs_print_node(struct grecs_node *node, int flags, FILE *fp);

void grecs_txtacc_format_value(struct grecs_value *val, int flags,
			       grecs_txtacc_t acc);

#endif
