%{
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

#ifdef HAVE_CONFIG_H
# include <config.h>
#endif
#include "grecs.h"
#include <string.h>
#include <errno.h>
#include <stdlib.h>  
#include "json-gram.h"
#include "grecs/json.h"

struct json_value *json_return_obj;

extern int yylex(void);
static int yyerror(char const *s);

static void
pairfree(void *ptr)
{
	struct json_pair *p = ptr;
	grecs_free(p->k);
	json_value_free(p->v);
	free(p);
}

static void
objfree(void *ptr)
{
	struct json_value *o = ptr;
	json_value_free(o);
}

%}

%error-verbose
%locations

%token <n> T_NUMBER
%token <s> T_STRING
%token <b> T_BOOL
%token T_NULL T_ERR

%type <list> objects objlist pairs pairlist
%type <p> pair
%type <obj> object array
%type <o> assoc
	 
%union {
	int b;
	double n;
	char *s;
	struct grecs_symtab *o;
	struct json_value *obj;
	struct grecs_list *list;
	struct json_pair *p;
}
%%

input   : object
          {
  	      json_return_obj = $1;
	  }
        ;

object  : T_NUMBER
	  {
	      $$ = json_value_create(json_number);
	      $$->v.n = $1;
          }
        | T_STRING
	  {
	      $$ = json_value_create(json_string);
	      $$->v.s = $1;
          }
        | T_BOOL
	  {
	      $$ = json_value_create(json_bool);
	      $$->v.b = $1;
          }
        | T_NULL
	  {
	      $$ = json_value_create(json_null);
          }
        | array
        | assoc
	  {
	      $$ = json_value_create(json_object);
	      $$->v.o = $1;
          }
        ;

array   : '[' objects ']'
	  {
	       $$ = json_new_array();
	       $$->v.a->ol = $2;
          }
        ;

objects : /* empty */
	  {
	       $$ = NULL;
          }
        | objlist
	;

objlist : object
	  {
	       $$ = grecs_list_create();
 	       grecs_list_append($$, $1);
          }
        | objlist ',' object
	  {
 	       grecs_list_append($1, $3);
          }
        ;

assoc   : '{' pairs '}'
	  {
	      struct grecs_symtab *s;

	      s = json_assoc_create();
	      if ($2) {
	          struct grecs_list_entry *ep;
                  for (ep = $2->head; ep; ep = ep->next) {
	              struct json_pair *p = ep->data;
		      int install = 1;
		      grecs_symtab_lookup_or_install(s, p, &install);
		      if (install) {
	                  p->k = NULL;
			  p->v = NULL;
                      }
                  }
		  grecs_list_free($2);
              }
	      $$ = s;
          }
        ;

pairs   : /* empty */
	  {
	       $$ = NULL;
          }
        | pairlist
	;

pairlist: pair
	  {
	       $$ = grecs_list_create();
	       $$->free_entry = pairfree;
 	       grecs_list_append($$, $1);
          }
        | pairlist ',' pair
	  {
 	       grecs_list_append($1, $3);
          }
        ;

pair    : T_STRING ':' object
	  {
	       struct json_pair *p = grecs_malloc(sizeof(*p));
	       p->k = $1;
	       p->v = $3;
	       $$ = p;
          }
        ;
%%

static int
yyerror(char const *s)
{
	jsonlex_diag(s);
	return 0;
}

struct json_value *
json_value_create(int type)
{
	struct json_value *obj = grecs_zalloc(sizeof(*obj));
	obj->type = type;
	return obj;
}

void
json_value_free(struct json_value *obj)
{
	size_t i;
	
	if (!obj)
		return;

	switch (obj->type) {
	case json_null:
        case json_bool:
        case json_number:
		break;
	case json_string:
		grecs_free(obj->v.s);
		break;
	case json_arr:
		for (i = 0; i < obj->v.a->oc; i++)
			json_value_free(obj->v.a->ov[i]);
		grecs_free (obj->v.a->ov);
		if (obj->v.a->ol) {
			obj->v.a->ol->free_entry = objfree;
			grecs_list_free(obj->v.a->ol);
		}
		grecs_free(obj->v.a);
		break;
	case json_object:
		grecs_symtab_free(obj->v.o);
	}
	free(obj);
}

static unsigned
json_st_hash(void *data, unsigned long n_buckets)
{
	struct json_pair *p = data;
	return grecs_hash_string(p->k, n_buckets);
}	

static int
json_st_cmp(const void *a, const void *b)
{
	struct json_pair const *pa = a;
	struct json_pair const *pb = b;
	return strcmp(pa->k, pb->k);
}

static int
json_st_copy(void *a, void *b)
{
	struct json_pair *pa = a;
	struct json_pair *pb = b;
	memcpy(pa, pb, sizeof(*pa));
	return 0;
}

static void
json_st_free(void *ptr)
{
	struct json_pair *p = ptr;
	free(p->k);
	json_value_free(p->v);
	free(p);
}

struct grecs_symtab *
json_assoc_create()
{
	return grecs_symtab_create(sizeof(struct json_pair),
				   json_st_hash,
				   json_st_cmp,
				   json_st_copy,
				   NULL,
				   json_st_free);
}

struct json_value *
json_parse_string(char const *input, size_t len)
{
	jsonlex_setup(input, len);
	if (yyparse()) {
		/* FIXME: error recovery */
		return NULL;
	}
	return json_return_obj;
}

struct json_value *
json_value_lookup(struct json_value *obj, const char *ident)
{
	char *qbuf = NULL;
	size_t qlen = 0;
	
	while (obj && *ident) {
		char const *p;
		char *q;
		size_t l;
		
		for (p = ident; *p; p++) {
			if (*p == '\\')
				++p;
			else if (*p == '.')
				break;
		}
		l = p - ident + 1;
		if (l > qlen) {
			qlen = l;
			qbuf = grecs_realloc(qbuf, qlen);
		}
		q = qbuf;
		while (*ident) {
			if (*ident == '\\') {
				char c;
				++ident;
				if (json_unescape(*ident, &c))
					*q++ = *ident++;
				else
					*q++ = c;
			} else if (*ident == '.') {
				++ident;
				break;
			} else
				*q++ = *ident++;
		}
		*q = 0;
		
		switch (obj->type) {
		case json_null:
		case json_bool:
		case json_number:
		case json_string:
			obj = NULL;
			break;
		case json_arr:
			l = strtoul(qbuf, &q, 10);
			if (*q != 0 || json_array_get(obj, l, &obj))
				obj = NULL;
			break;
		case json_object:
			if (json_object_get(obj, qbuf, &obj))
				obj = NULL;
		}	
	}
	if (*ident)
		obj = NULL;
	free(qbuf);
	return obj;
}

struct json_value *
json_new_string(char const *str)
{
	struct json_value *j = json_value_create(json_string);
	j->v.s = grecs_strdup(str);
	return j;
}

struct json_value *
json_new_number(double n)
{
	struct json_value *j = json_value_create(json_number);
	j->v.n = n;
	return j;
}

struct json_value *
json_new_bool(int b)
{
	struct json_value *j = json_value_create(json_bool);
	j->v.b = b;
	return j;
}

struct json_value *
json_new_null(void)
{
	return json_value_create(json_null);
}

struct json_value *
json_new_object(void)
{
	struct json_value *j = json_value_create(json_object);
	j->v.o = json_assoc_create();
	return j;
}

int
json_object_set(struct json_value *obj, char const *name,
		struct json_value *val)
{
	struct json_pair pair, *ret;
	int install;
	if (obj->type != json_object) {
		errno = EINVAL;
		return -1;
	}
	pair.k = (char*) name;
	pair.v = NULL;
	ret = grecs_symtab_lookup_or_install(obj->v.o, &pair, &install);
	if (install)
		ret->k = grecs_strdup(ret->k);
	ret->v = val;
	return 0;
}

int
json_object_get(struct json_value *obj, char const *name,
		struct json_value **retval)
{
	struct json_pair pair, *ret;
	if (obj->type != json_object) {
		errno = EINVAL;
		return -1;
	}
	pair.k = (char*) name;
	pair.v = NULL;
	ret = grecs_symtab_lookup_or_install(obj->v.o, &pair, NULL);
	if (ret) {
		*retval = ret->v;
		return 0;
	}
	return 1;
}
	
struct json_value *
json_new_array(void)
{
	struct json_value *j = json_value_create(json_arr);
	j->v.a = grecs_malloc(sizeof(*j->v.a));
	j->v.a->oc = 0;
	j->v.a->ov = NULL;
	j->v.a->ol = NULL;
	return j;
}

size_t
json_array_size(struct json_value *j)
{
	if (j->type != json_arr) {
		errno = EINVAL;
		return 0;
	}
	return j->v.a->oc + grecs_list_size(j->v.a->ol);
}

void
json_array_flatten(struct json_value *j)
{
	size_t size, i;
	struct grecs_list_entry *ep;

	size = grecs_list_size(j->v.a->ol);

	if (size == 0)
		return;

	j->v.a->ov = grecs_realloc(j->v.a->ov,
				 (j->v.a->oc + size) * sizeof(j->v.a->ov[0]));

	for (ep = j->v.a->ol->head, i = j->v.a->oc; ep; ep = ep->next, i++)
		j->v.a->ov[i] = ep->data;
	j->v.a->oc = i;
	grecs_list_clear(j->v.a->ol);
}

int
json_array_insert(struct json_value *j, size_t idx, struct json_value *v)
{
	size_t size;
	if (j->type != json_arr) {
		errno = EINVAL;
		return -1;
	}
	size = json_array_size(j);
	if (idx < size) {
		json_array_flatten(j);
		j->v.a->ov[idx] = v;
	} else {
		size_t i;
		for (i = size; i < idx; i++)
			json_array_append(j, NULL);
		json_array_append(j, v);
	}
	return 0;
}

int
json_array_append(struct json_value *j, struct json_value *v)
{
 	if (j->type != json_arr) {
		errno = EINVAL;
		return -1;
	}

	if (!j->v.a->ol)
		j->v.a->ol = grecs_list_create();
	grecs_list_append(j->v.a->ol, v);
	return 0;
}
		  
int
json_array_set(struct json_value *j, size_t idx, struct json_value *v)
{
 	if (j->type != json_arr) {
		errno = EINVAL;
		return -1;
	}
	if (idx >= json_array_size(j)) {
		errno = ENOENT;
		return -1;
	}
	json_array_flatten(j);
	j->v.a->ov[idx] = v;
	return 0;
}

int
json_array_get(struct json_value *j, size_t idx, struct json_value **retval)
{
	if (j->type != json_arr) {
		errno = EINVAL;
		return -1;
	}
	if (idx >= json_array_size(j)) {
		errno = ENOENT;
		return -1;
	}
		
	json_array_flatten(j);
	*retval = j->v.a->ov[idx];
	return 0;
}
