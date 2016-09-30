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

#ifndef _GRECS_PREPROC_H
#define _GRECS_PREPROC_H

#include <sys/types.h>

extern const char *grecs_preprocessor;

size_t grecs_preproc_fill_buffer(char *buf, size_t size);
void grecs_preproc_add_include_dir(char *dir);
int grecs_preproc_init(const char *name);
void grecs_preproc_done(void);
int grecs_preproc_run(const char *config_file, const char *extpp);

#define GRECS_STD_INCLUDE 0x01
#define GRECS_USR_INCLUDE 0x02

size_t grecs_include_path_count(int flag);
int grecs_foreach_include_dir(int flag, int (*fun)(int, const char *, void *),
			      void *data);

char *grecs_find_include_file(const char *name, int allow_cwd);

FILE *grecs_preproc_extrn_start(const char *file, pid_t *ppid);
void grecs_preproc_extrn_shutdown(pid_t pid);

void grecs_include_path_clear(void);
void grecs_include_path_setup(const char *dir, ...);
void grecs_include_path_setup_v(char **dirs);

#endif
