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

#ifndef _GRECS_PARSER_H
#define _GRECS_PARSER_H

typedef struct grecs_node *(*grecs_parser_t)(const char *name, int trace);

#define GRECS_TRACE_GRAM 0x01
#define GRECS_TRACE_LEX  0x02

extern int grecs_trace_flags;
extern grecs_parser_t grecs_parser_fun;
extern int grecs_default_port;

extern struct grecs_locus_point grecs_current_locus_point;
extern grecs_locus_t grecs_locus;
extern int grecs_adjust_string_locations;
extern int grecs_error_count;    

/* Main entry point */
struct grecs_node *grecs_parse(const char *name);
void grecs_gram_trace(int n);
void grecs_lex_trace(int n);

/* Parsers: */
struct grecs_node *grecs_grecs_parser(const char *name, int traceflags);
struct grecs_node *grecs_meta1_parser(const char *name, int traceflags);
struct grecs_node *grecs_bind_parser(const char *name, int traceflags);
struct grecs_node *grecs_dhcpd_parser(const char *name, int traceflags);
struct grecs_node *grecs_git_parser(const char *name, int traceflags);
struct grecs_node *grecs_path_parser(const char *name, int traceflags);


/* Parser database */
int grecs_enumerate_parsers(int (*fun)(const char *, grecs_parser_t, void *),
			    void *);
grecs_parser_t grecs_get_parser_by_type(const char *type);

#endif
