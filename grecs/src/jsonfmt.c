/* grecs - Gray's Extensible Configuration System
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

#ifdef HAVE_CONFIG_H
# include <config.h>
#endif
#include <string.h>
#include <stdlib.h>
#include "grecs.h"
#include "grecs/json.h"

static void
json_writez(struct json_format *fmt, char const *str)
{
	size_t len = strlen(str);
	fmt->write(fmt->data, str, len);
}

static void
json_writec(struct json_format *fmt, char c)
{
	fmt->write(fmt->data, &c, 1);
}

static void
json_indent(struct json_format *fmt, size_t level)
{
	level *= fmt->indent;
	while (level--)
		json_writec(fmt, ' ');
}

static void
json_format_delim(struct json_format *fmt, size_t level)
{
	json_writec(fmt, ',');
	if (fmt->indent) {
		json_writec(fmt, '\n');
		json_indent(fmt, level);
	} else
		json_writec(fmt, ' ');
}

static int
escape(char c, char *o)
{
	static char transtab[] = "\\\\\"\"b\bf\fn\nr\rt\t";
	char *p;

	for (p = transtab; *p; p += 2) {
		if (p[1] == c) {
			*o = p[0];
			return 0;
		}
	}
	return -1;
}

static void
json_format_string(struct json_format *fmt, const char *s)
{
	json_writec(fmt, '"');
	for (; *s; s++) {
		char c;
		if (!escape(*s, &c)) {
			json_writec(fmt, '\\');
			json_writec(fmt, c);
		} else
			json_writec(fmt, *s);
	}
	json_writec(fmt, '"');
}

static void
json_format_number(struct json_format *fmt, double n)
{
	char *buffer = NULL;
	size_t size = 0;
	if (fmt->precision == -1) 
		grecs_asprintf(&buffer, &size, "%e", n);
	else
		grecs_asprintf(&buffer, &size, "%.*f", fmt->precision, n);
	json_writez(fmt, buffer);
	free(buffer);
}

static int
collect_keypairs(void *sym, void *data)
{
	struct json_pair *p = sym;
	struct json_pair ***kp = data;
	**kp = p;
	++*kp;
	return 0;
}

static void json_formatter(struct json_format *fmt, struct json_value *obj,
			   size_t level);

static int
keypair_cmp_name(const void *a, const void *b)
{
	struct json_pair const * const *kpa = a;
	struct json_pair const * const *kpb = b;
	return strcmp((*kpa)->k, (*kpb)->k);
}

static void
json_format_obj(struct json_format *fmt, struct json_value *obj, size_t level)
{
	size_t count, i;
	struct json_pair **keypairs, **kp;
	
	count = grecs_symtab_count_entries(obj->v.o);
	keypairs = grecs_calloc(count, sizeof(*keypairs));
	kp = keypairs;
	grecs_symtab_enumerate(obj->v.o, collect_keypairs, &kp);
	qsort(keypairs, count, sizeof(*keypairs), keypair_cmp_name);

	json_writec(fmt, '{');
	if (count) {
		if (fmt->indent)
			json_writec(fmt, '\n');
		for (i = 0; i < count; i++) {
			(i ? json_format_delim : json_indent)(fmt, level);
			json_format_string(fmt, keypairs[i]->k);
			json_writec(fmt, ':');
			if (fmt->indent)
				json_writec(fmt, ' ');
			json_formatter(fmt, keypairs[i]->v, level);
		}
		if (fmt->indent) {
			json_writec(fmt, '\n');
			json_indent(fmt, level-1);
		}
	}
	json_writec(fmt, '}');
	grecs_free(keypairs);
}

static void
json_format_array(struct json_format *fmt, struct json_value *obj,
		  size_t level)
{
	size_t i;

	json_array_flatten(obj);
	
	json_writec(fmt, '[');
	if (obj->v.a->oc) {
		if (fmt->indent)
			json_writec(fmt, '\n');
		for (i = 0; i < obj->v.a->oc; i++) {
			(i ? json_format_delim : json_indent)(fmt, level);
			json_formatter(fmt, obj->v.a->ov[i], level);
		}
		if (fmt->indent) {
			json_writec(fmt, '\n');
			json_indent(fmt, level-1);
		}
	}
	json_writec(fmt, ']');
}

static void
json_formatter(struct json_format *fmt, struct json_value *obj, size_t level)
{
	if (!obj) {
		json_writez(fmt, "null");
		return;
	}

	++level;
	switch (obj->type) {
	case json_null:
		json_writez(fmt, "null");
		break;
		
	case json_bool:
		json_writez(fmt, obj->v.b ? "true" : "false");
		break;
		
	case json_number:
		json_format_number(fmt, obj->v.n);
		break;

	case json_string:
		json_format_string(fmt, obj->v.s);
		break;
		
	case json_arr:
		json_format_array(fmt, obj, level);
		break;

	case json_object: 
		json_format_obj(fmt, obj, level);
		break;
	}
}		

void
json_format_value(struct json_value *obj, struct json_format *fmt)
{
	json_formatter(fmt, obj, 0);
}


