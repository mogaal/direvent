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

#ifndef _GRECS_DOC_H
#define _GRECS_DOC_H

#include <stdio.h>
#include <grecs/table.h>

void grecs_print_docstring(const char *docstring, unsigned level,
			   FILE *stream);
void grecs_print_simple_statement(struct grecs_keyword *kwp,
				  unsigned level, FILE *stream);
void grecs_print_block_statement(struct grecs_keyword *kwp,
				 unsigned level, FILE *stream);
void grecs_print_statement_array(struct grecs_keyword *kwp,
				 unsigned n,
				 unsigned level, FILE *stream);
#endif
