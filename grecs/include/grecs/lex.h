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

#ifndef _GRECS_LEX_H
#define _GRECS_LEX_H

int grecs_lex_begin(const char*, int);  
void grecs_lex_end(int err);

char *grecs_install_text(const char *str);
void grecs_destroy_text(void);
struct grecs_symtab *grecs_text_table(void);

void grecs_parse_line_directive(char *text, grecs_locus_t *ploc,
				struct grecs_locus_point *ppoint, 
				size_t *pxlines);
void grecs_parse_line_directive_cpp(char *text, grecs_locus_t *ploc,
				    struct grecs_locus_point *ppoint, 
				    size_t *pxlines);

void grecs_line_acc_create(void);
void grecs_line_acc_free(void);
void grecs_line_acc_grow_char(int c);
int grecs_line_acc_grow_char_unescape(int c);
void grecs_line_acc_grow(const char *text, size_t len);
void grecs_line_acc_grow_unescape_last(char *text, size_t len,
                                       grecs_locus_t const *loc);

void grecs_line_begin(void);
#define grecs_line_add grecs_line_acc_grow
char *grecs_line_finish(void);

int grecs_str_is_ipv4(const char *addr);
int grecs_str_is_num(const char *s);
int grecs_str_is_ipv6(const char *addr);
int grecs_str_is_num(const char *s);
int grecs_str_is_ipaddr(const char *addr);

#endif
