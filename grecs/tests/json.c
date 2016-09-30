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
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>
#include "grecs.h"
#include "grecs/json.h"

static void
printer(void *d, char const *buf, size_t size)
{
	FILE *fp = d;
	fwrite(buf, size, 1, fp);
}

struct json_format fmt = { 0, -1, printer, NULL };

static void
usage(const char *arg, FILE *fp, int code)
{
	fprintf(fp,
		"usage: %s [-file=FILE][-indent=N][-precision=N] [expr]\n",
		arg);
	exit(code);
}

int
main(int argc, char **argv)
{
	char *progname = argv[0];
	char *file = NULL;
	char *input;
	size_t size;
	struct json_value *obj;
	char *key = NULL;
	
	while (--argc) {
		char *arg = *++argv;
		if (strncmp(arg, "-file=", 6) == 0)
			file = arg + 6;
		else if (strncmp(arg, "-indent=", 8) == 0)
			fmt.indent = atoi(arg + 8);
		else if (strncmp(arg, "-search=", 8) == 0)
			key = arg + 8;
		else if (strncmp(arg, "-precision=", 11) == 0)
			fmt.precision = atoi(arg + 11);
		else if (arg[0] == '-')
			usage(progname, stderr, 1);
		else
			break;
	}

	if (file) {
		struct stat st;
		int fd;
		ssize_t n;
		
		if (argc != 0)
			usage(progname, stderr, 1);
		
		fd = open(file, O_RDONLY);
		if (fd == -1) {
			perror(file);
			return 2;
		}
		if (fstat(fd, &st)) {
			perror("fstat");
			return 2;
		}
		size = (size_t) st.st_size;
		if (size != st.st_size)
			abort();
		input = grecs_malloc(size + 1);
		n = read(fd, input, size);
		if (n == -1) {
			perror("read");
			return 2;
		}
		if (n != size) {
			fprintf(stderr, "%s: short read from %s\n",
				progname, file);
			return 2;
		}
		input[n] = 0;
		close(fd);
	} else if (argc == 1) {
		if (file)
			usage(progname, stderr, 1);
		input = *argv;
		size = strlen(input);
	} else
		usage(progname, stderr, 1);
	
	obj = json_parse_string(input, size);
	if (!obj) {
		json_err_locus.beg.file = json_err_locus.end.file =
			file ? file : "input";
		grecs_error(&json_err_locus, 0, "%s", json_err_diag);
		return 3;
	}
	if (key) {
		struct json_value *p = json_value_lookup(obj, key);
		if (!p)
			return 4;
		obj = p;
	}
	fmt.data = stdout;
	json_format_value(obj, &fmt);
	putchar('\n');
	return 0;
}
