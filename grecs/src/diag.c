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
#include <grecs.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>

static void
default_print_diag(grecs_locus_t const *locus, int err, int errcode,
		   const char *msg)
{
	fflush(stdout);
	if (locus) {
		YY_LOCATION_PRINT(stderr, *locus);
		fputc(':', stderr);
		fputc(' ', stderr);
	}
	if (!err)
		fprintf(stderr, "warning: ");
	fprintf(stderr, "%s", msg);
	if (errcode)
		fprintf(stderr, ": %s", strerror(errno));
	fputc('\n', stderr);
}

void (*grecs_print_diag_fun)(grecs_locus_t const *, int, int,
			     const char *msg) =
	default_print_diag;

void
grecs_warning(grecs_locus_t const *locus, int errcode, const char *fmt, ...)
{
	va_list ap;
	char *buf = NULL;
	size_t size = 0;
	
	va_start(ap, fmt);
	if (grecs_vasprintf(&buf, &size, fmt, ap))
		grecs_alloc_die();
	va_end(ap);
	grecs_print_diag_fun(locus, 0, errcode, buf);
	free(buf);
}    

void
grecs_error(grecs_locus_t const *locus, int errcode, const char *fmt, ...)
{
	va_list ap;
	char *buf = NULL;
	size_t size = 0;
	
	va_start(ap, fmt);
	if (grecs_vasprintf(&buf, &size, fmt, ap))
		grecs_alloc_die();
	va_end(ap);
	grecs_print_diag_fun(locus, 1, errcode, buf);
	free(buf);
	grecs_error_count++;
}

int
grecs_asprint_locus(char **locstr, size_t *size, grecs_locus_t const *locus)
{
	int rc;
	
	if (locus->beg.col == 0)
		rc = grecs_asprintf(locstr, size, "%s:%u",
				    locus->beg.file,
				    locus->beg.line);
	else if (strcmp(locus->beg.file, locus->end.file))
		rc = grecs_asprintf(locstr, size, "%s:%u.%u-%s:%u.%u",
				    locus->beg.file,
				    locus->beg.line, locus->beg.col,
				    locus->end.file,
				    locus->end.line, locus->end.col);
	else if (locus->beg.line != locus->end.line)
		rc = grecs_asprintf(locstr, size, "%s:%u.%u-%u.%u",
				    locus->beg.file,
				    locus->beg.line, locus->beg.col,
				    locus->end.line, locus->end.col);
	else
		rc = grecs_asprintf(locstr, size, "%s:%u.%u-%u",
				    locus->beg.file,
				    locus->beg.line, locus->beg.col,
				    locus->end.col);
	return rc;
}


