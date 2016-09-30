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

#ifndef _GRECS_TREE_H
#define _GRECS_TREE_H

#include <grecs/node.h>

int grecs_tree_free(struct grecs_node *node);
void  grecs_tree_sort(struct grecs_node *node,
		      int (*compare)(struct grecs_node const *,
				     struct grecs_node const *));
struct grecs_node *grecs_tree_first_node(struct grecs_node *tree);
struct grecs_node *grecs_next_node(struct grecs_node *node);

struct grecs_node *grecs_find_node(struct grecs_node *node, const char *path);

enum grecs_tree_recurse_op {
	grecs_tree_recurse_set,
	grecs_tree_recurse_pre,
	grecs_tree_recurse_post
};

enum grecs_tree_recurse_res {
	grecs_tree_recurse_ok,
	grecs_tree_recurse_fail,
	grecs_tree_recurse_skip,
	grecs_tree_recurse_stop
};
	
typedef enum grecs_tree_recurse_res
       (*grecs_tree_recursor_t)(enum grecs_tree_recurse_op,
				struct grecs_node *, void *);

int grecs_tree_recurse(struct grecs_node *node, grecs_tree_recursor_t recfun,
		       void *data);
int grecs_tree_join(struct grecs_node *dst, struct grecs_node *src);

enum grecs_tree_recurse_res grecs_node_exact_match(
	enum grecs_tree_recurse_op op,
	struct grecs_node *node, void *data);

typedef struct grecs_match_buf *grecs_match_buf_t;
struct grecs_node *grecs_match_first(struct grecs_node *tree,
				     const char *pattern,
				     grecs_match_buf_t *buf);
struct grecs_node *grecs_match_next(struct grecs_match_buf *buf);
void grecs_match_buf_free(struct grecs_match_buf *buf);
grecs_match_buf_t grecs_match_buf_create(int argc, char **argv,
					 struct grecs_value **labelv);
struct grecs_node *grecs_match_buf_first(struct grecs_match_buf *buf,
					 struct grecs_node *tree);
struct grecs_node *grecs_match_buf_get_node(grecs_match_buf_t buf);
size_t grecs_match_buf_get_args(grecs_match_buf_t buf, char ***argv);
struct grecs_node *grecs_match_buf_get_root(grecs_match_buf_t buf);
void grecs_match_buf_set_root(grecs_match_buf_t buf, struct grecs_node *root);

#endif
