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

#ifndef _GRECS_OPT_H
#define _GRECS_OPT_H

struct grecs_proginfo {
	const char *progname;
	char **subcmd;
	const char *docstring;
	const char *args_doc;
	struct grecs_opthelp *opthelp;
	size_t optcount;
	void (*print_help_hook)(FILE *stream);
	void (*print_version_hook)(FILE *stream);
	const char *package;
	const char *version;
	const char *license;
	const char *copyright_year;
	const char *copyright_holder;
	const char **authors;
	const char *bug_address;
	const char *url;
	const char *epilogue;
};

struct grecs_opthelp {
	const char *opt;
	const char *arg;
	int is_optional;
	const char *descr;
};

#define DESCRCOLUMN 30
#define RMARGIN 79
#define GROUPCOLUMN 2
#define USAGECOLUMN 13

void grecs_print_help(struct grecs_proginfo *pinfo);
void grecs_print_usage(struct grecs_proginfo *pinfo);
void grecs_print_version_only(struct grecs_proginfo *pinfo, FILE *stream);
void grecs_print_version(struct grecs_proginfo *pinfo, FILE *stream);

#endif

