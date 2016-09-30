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

#ifndef _GRECS_SYMTAB_H
#define _GRECS_SYMTAB_H

typedef struct grecs_symtab *grecs_symtab_ptr_t;
typedef struct grecs_syment *grecs_syment_ptr_t;

struct grecs_syment {
	char *name;
};

typedef int (*grecs_symtab_enumerator_t)(void *sym, void *data);

const char *grecs_symtab_strerror(int rc);

void *grecs_symtab_lookup_or_install(grecs_symtab_ptr_t st,
				     void *key, int *install);
void grecs_symtab_clear(grecs_symtab_ptr_t st);
grecs_symtab_ptr_t grecs_symtab_create(size_t elsize, 
				   unsigned (*hash_fun)(void *, unsigned long),
				   int (*cmp_fun)(const void *, const void *),
				   int (*copy_fun)(void *, void *),
				   void *(*alloc_fun)(size_t),
				   void (*free_fun)(void *));
grecs_symtab_ptr_t grecs_symtab_create_default(size_t elsize);

void grecs_symtab_free(grecs_symtab_ptr_t pst);
int grecs_symtab_remove(grecs_symtab_ptr_t st, void *elt);
int grecs_symtab_replace(grecs_symtab_ptr_t st, void *ent, void **old_ent);
int grecs_symtab_enumerate(grecs_symtab_ptr_t st,
			   grecs_symtab_enumerator_t fun, void *data);

size_t grecs_symtab_count_entries(grecs_symtab_ptr_t st);

unsigned grecs_hash_string(const char *name, unsigned long hashsize);
unsigned grecs_hash_string_ci(const char *name, unsigned long hashsize);

#endif
