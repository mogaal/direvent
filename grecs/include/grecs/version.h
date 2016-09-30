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

#ifndef _GRECS_VERSION_H
#define _GRECS_VERSION_H

struct grecs_version_info {
	const char *package;
	const char *version;
	const char *id;
	int major;
	int minor;
	int patch;
	char *suffix;
	char *buffer;
};

struct grecs_version_info *grecs_version(void);
int grecs_version_cmp(const char *, const char *, int *);
int grecs_version_ok(const char *);
void grecs_version_info_free(struct grecs_version_info *);
struct grecs_version_info *grecs_version_split(const char *);
int grecs_version_info_cmp(struct grecs_version_info *,
			   struct grecs_version_info *,
			   int *);

#endif
