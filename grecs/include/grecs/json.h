/* This file is part of Grecs.
   Copyright (C) 2012-2016 Sergey Poznyakoff.
 
   Grecs is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.
 
   Grecs is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
 
   You should have received a copy of the GNU General Public License
   along with Grecs.  If not, see <http://www.gnu.org/licenses/>. */

#include <grecs.h>

enum json_value_type
{
	json_null,
	json_bool,
	json_number,
	json_string,
	json_arr,
	json_object
};

struct json_value;
struct json_array {
	size_t oc;
	struct json_value **ov;
	struct grecs_list *ol;
};

struct json_value {
	enum json_value_type type;
	union {
		int b;                  /* json_bool */
		double n;               /* json_number */
		char *s;                /* json_string */
		struct json_array *a;   /* json_arr */
		struct grecs_symtab *o; /* json_object */
	} v;
};

struct json_pair {
	char *k;
	struct json_value *v;
};

extern char const *json_err_diag;
extern struct grecs_locus json_err_locus;
extern struct json_value *json_return_obj;

void jsonlex_setup(char const *s, size_t l);
void jsonlex_diag(const char *s);
int json_unescape(char c, char *o);

struct json_value *json_value_create(int type);
struct grecs_symtab *json_assoc_create(void);
void json_value_free(struct json_value *obj);

struct json_value *json_parse_string(char const *input, size_t len);

struct json_value *json_value_lookup(struct json_value *obj,
				       const char *ident);


struct json_format
{
	size_t indent;
	int precision;
	void (*write) (void *, char const *, size_t);
	void *data;
};

void json_format_value(struct json_value *obj, struct json_format *fmt);

struct json_value *json_new_null(void);
struct json_value *json_new_bool(int b);
struct json_value *json_new_number(double n);
struct json_value *json_new_string(char const *str);

struct json_value *json_new_object(void);
int json_object_set(struct json_value *obj, char const *name,
		    struct json_value *val);
int json_object_get(struct json_value *obj, char const *name,
		    struct json_value **retval);

struct json_value *json_new_array(void);
size_t json_array_size(struct json_value *j);
void json_array_flatten(struct json_value *j);
int json_array_insert(struct json_value *j, size_t idx, struct json_value *v);
int json_array_append(struct json_value *j, struct json_value *v);
int json_array_set(struct json_value *j, size_t idx, struct json_value *v);
int json_array_get(struct json_value *j, size_t idx,
		   struct json_value **retval);

