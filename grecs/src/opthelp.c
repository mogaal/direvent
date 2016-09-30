/* grecs - Gray's Extensible Configuration System
   Copyright (C) 2007-2012 Sergey Poznyakoff

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
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "grecs.h"
#include "grecsopt.h"
#include "wordsplit.h"

static void
indent(size_t start, size_t col)
{
	for (; start < col; start++)
		putchar(' ');
}

static void
print_option_descr(const char *descr, size_t lmargin, size_t rmargin)
{
	while (*descr) {
		int i, s = 0;
		size_t width = rmargin - lmargin;

		for (i = 0; ; i++) {
			if (descr[i] == 0 || descr[i] == ' ' ||
			    descr[i] == '\t') {
				if (i > width)
					break;
				s = i;
				if (descr[i] == 0)
					break;
			}
		}
		printf("%*.*s\n", s, s, descr);
		descr += s;
		if (*descr) {
			indent(0, lmargin);
			descr++;
		}
	}
}

static int
optcmp(const void *a, const void *b)
{
	struct grecs_opthelp const *ap = (struct grecs_opthelp const *)a;
	struct grecs_opthelp const *bp = (struct grecs_opthelp const *)b;
	const char *opta, *optb;
	size_t alen, blen;
	
	for (opta = ap->opt; *opta == '-'; opta++)
		;
	alen = strcspn (opta, ",");
  
	for (optb = bp->opt; *optb == '-'; optb++)
		;
	blen = strcspn (optb, ",");
	
	if (alen > blen)
		blen = alen;
	
	return strncmp (opta, optb, blen);
}

static void
sort_options(struct grecs_opthelp *opthelp, int start, int count)
{
	qsort(opthelp + start, count, sizeof(opthelp[0]), optcmp);
}

static int
sort_group(struct grecs_opthelp *opthelp, size_t optcount, int start)
{
	int i;
  
	for (i = start; i < optcount && opthelp[i].opt; i++)
		;
	sort_options(opthelp, start, i - start);
	return i + 1;
}

static void
sort_opthelp(struct grecs_opthelp *opthelp, size_t optcount)
{
	int start;

	for (start = 0; start < optcount; ) {
		if (!opthelp[start].opt)
			start = sort_group(opthelp, optcount, start + 1);
		else 
			start = sort_group(opthelp, optcount, start);
	}
}

#define ISEMPTY(s) ((s) == NULL || *(s) == 0)

void
grecs_print_help(struct grecs_proginfo *pinfo)
{
	unsigned i;
	int argsused = 0;
	struct grecs_opthelp *opthelp;
	size_t optcount;

	printf("%s %s ",
	       _("Usage:"), pinfo->progname);
	if (pinfo->subcmd)
		printf("%s ", pinfo->subcmd[0]);
	printf("[%s]... %s\n",
	       _("OPTION"),
	       !ISEMPTY(pinfo->args_doc) ? gettext(pinfo->args_doc) : "");
	if (pinfo->subcmd && pinfo->subcmd[1]) {
		char **p;

		printf("%s: ", pinfo->subcmd[2] ? _("Aliases") : _("Alias"));
		for (p = pinfo->subcmd + 1; *p; p++)
			printf("%s%c", *p, p[1] ? ' ' : '\n');
	}
	if (!ISEMPTY(pinfo->docstring))
		print_option_descr(gettext(pinfo->docstring), 0, RMARGIN);
	putchar('\n');

	opthelp = pinfo->opthelp;
	optcount = pinfo->optcount;
	sort_opthelp(opthelp, optcount);
	for (i = 0; i < optcount; i++) {
		unsigned n;
		if (opthelp[i].opt) {
			n = printf("  %s", opthelp[i].opt);
			if (opthelp[i].arg) {
				char *cb, *ce;
				argsused = 1;
				if (strlen(opthelp[i].opt) == 2) {
					if (!opthelp[i].is_optional) {
						putchar(' ');
						n++;
					}
				} else {
					putchar ('=');
					n++;
				}
				if (opthelp[i].is_optional) {
					cb = "[";
					ce = "]";
				} else
					cb = ce = "";
				n += printf("%s%s%s", cb,
					    gettext(opthelp[i].arg), ce);
			}
			if (n >= DESCRCOLUMN) {
				putchar('\n');
				n = 0;
			}
			indent(n, DESCRCOLUMN);
			print_option_descr(gettext(opthelp[i].descr),
					   DESCRCOLUMN, RMARGIN);
		} else {
			if (i)
				putchar('\n');
			indent(0, GROUPCOLUMN);
			print_option_descr(gettext(opthelp[i].descr),
					   GROUPCOLUMN, RMARGIN);
			putchar('\n');
		}
	}

	putchar('\n');
	if (argsused) {
		print_option_descr(_("Mandatory or optional arguments to "
				     "long options are also mandatory or "
				     "optional for any corresponding short "
				     "options."), 0, RMARGIN);
		putchar('\n');
	}
 
	if (pinfo->print_help_hook)
		pinfo->print_help_hook(stdout);

	if (!ISEMPTY(pinfo->bug_address))
		/* TRANSLATORS: The placeholder indicates the bug-reporting
		   address for this package.  Please add _another line_ saying
		   "Report translation bugs to <...>\n" with the address for
		   translation bugs (typically your translation team's web or
		   email address).  */
		printf(_("Report bugs to %s.\n"), pinfo->bug_address);

	if (!ISEMPTY(pinfo->url))
		printf(_("%s home page: <%s>\n"), pinfo->package, pinfo->url);
	if (!ISEMPTY(pinfo->epilogue))
		printf("%s", gettext(pinfo->epilogue));
}

static int
cmpidx_short(const void *a, const void *b)
{
	struct grecs_opthelp const **opta = (struct grecs_opthelp const **)a;
	struct grecs_opthelp const **optb = (struct grecs_opthelp const **)b;

	return (*opta)->opt[1] - (*optb)->opt[1];
}
  
#ifdef HAVE_GETOPT_LONG
static int
cmpidx_long(const void *a, const void *b)
{
	struct grecs_opthelp const **ap = (struct grecs_opthelp const **)a;
	struct grecs_opthelp const **bp = (struct grecs_opthelp const **)b;
	char const *opta, *optb;
	size_t lena, lenb;

	if ((*ap)->opt[1] == '-')
		opta = (*ap)->opt;
	else
		opta = (*ap)->opt + 4;
	lena = strcspn(opta, ",");
  
	if ((*bp)->opt[1] == '-')
		optb = (*bp)->opt;
	else
		optb = (*bp)->opt + 4;
	lenb = strcspn(optb, ",");
	return strncmp(opta, optb, lena > lenb ? lenb : lena);
}
#endif

void
grecs_print_usage(struct grecs_proginfo *pinfo)
{
	unsigned i;
	unsigned n;
	char *buf;
	size_t bufsize;
	unsigned nidx;
	struct grecs_opthelp **optidx;
	struct grecs_opthelp *opthelp = pinfo->opthelp;
	size_t optcount = pinfo->optcount;
  
#define FLUSH do {				\
		buf[n] = 0;			\
		printf("%s\n", buf);		\
		n = USAGECOLUMN;		\
		memset(buf, ' ', n);		\
	}  while (0)
#define ADDC(c) \
  do { if (n == RMARGIN) FLUSH; buf[n++] = c; } while (0)

	optidx = grecs_calloc(optcount, sizeof(optidx[0]));

	bufsize = RMARGIN + 1;
	buf = grecs_malloc(bufsize);
	
	n = snprintf(buf, bufsize, "%s %s ", _("Usage:"), pinfo->progname);
	if (pinfo->subcmd)
		n += snprintf(buf + n, bufsize - n, "%s ", pinfo->subcmd[0]);
	
	/* Print a list of short options without arguments. */
	for (i = nidx = 0; i < optcount; i++)
		if (opthelp[i].opt &&
		    opthelp[i].descr &&
		    opthelp[i].opt[1] != '-' &&
		    opthelp[i].arg == NULL)
			optidx[nidx++] = opthelp + i;

	if (nidx) {
		qsort(optidx, nidx, sizeof(optidx[0]), cmpidx_short);

		ADDC('[');
		ADDC('-');
		for (i = 0; i < nidx; i++) {
			ADDC(optidx[i]->opt[1]);
		}
		ADDC(']');
	}

	/* Print a list of short options with arguments. */
	for (i = nidx = 0; i < optcount; i++) {
		if (opthelp[i].opt &&
		    opthelp[i].descr &&
		    opthelp[i].opt[1] != '-' &&
		    opthelp[i].arg)
			optidx[nidx++] = opthelp + i;
	}

	if (nidx) {
		qsort(optidx, nidx, sizeof(optidx[0]), cmpidx_short);
    
		for (i = 0; i < nidx; i++) {
			struct grecs_opthelp *opt = optidx[i];
			size_t len = 5 + strlen(opt->arg)
				       + (opt->is_optional ? 2 : 1);
      
			if (n + len > RMARGIN)
				FLUSH;
			buf[n++] = ' ';
			buf[n++] = '[';
			buf[n++] = '-';
			buf[n++] = opt->opt[1];
			if (opt->is_optional) {
				buf[n++] = '[';
				strcpy(&buf[n], opt->arg);
				n += strlen(opt->arg);
				buf[n++] = ']';
			} else {
				buf[n++] = ' ';
				strcpy(&buf[n], opt->arg);
				n += strlen(opt->arg);
			}
			buf[n++] = ']';
		}
	}
  
#ifdef HAVE_GETOPT_LONG
	/* Print a list of long options */
	for (i = nidx = 0; i < optcount; i++) {
		if (opthelp[i].opt && opthelp[i].descr
		    && (opthelp[i].opt[1] == '-' || opthelp[i].opt[2] == ','))
			optidx[nidx++] = opthelp + i;
	}

	if (nidx) {
		qsort (optidx, nidx, sizeof(optidx[0]), cmpidx_long);
	
		for (i = 0; i < nidx; i++) {
			struct grecs_opthelp *opt = optidx[i];
			size_t len;
			const char *longopt;
	  
			if (opt->opt[1] == '-')
				longopt = opt->opt;
			else if (opt->opt[2] == ',')
				longopt = opt->opt + 4;
			else
				continue;

			len = 3 + strlen(longopt)
				+ (opt->arg ? 1 + strlen(opt->arg)
				+ (opt->is_optional ? 2 : 0) : 0);
			if (n + len > RMARGIN) {
				FLUSH;
				/* Make sure we have enough buffer space if
                                   the string cannot be split */
				if (n + len > bufsize) {
					bufsize = n + len;
					buf = grecs_realloc(buf, bufsize);
				}
			}
			buf[n++] = ' ';
			buf[n++] = '[';
			strcpy(&buf[n], longopt);
			n += strlen(longopt);
			if (opt->arg) {
				buf[n++] = '=';
				if (opt->is_optional) {
					buf[n++] = '[';
					strcpy(&buf[n], opt->arg);
					n += strlen(opt->arg);
					buf[n++] = ']';
				} else {
					strcpy(&buf[n], opt->arg);
					n += strlen(opt->arg);
				}
			}
			buf[n++] = ']';
		}
	}
#endif
	/* Print argument list */
	if (pinfo->args_doc) {
		size_t len = strlen(pinfo->args_doc) + 1;
		if (n + len <= RMARGIN) {
			buf[n++] = ' ';
			strcpy(buf + n, pinfo->args_doc);
			n += len;
		} else {
			struct wordsplit ws;

			if (wordsplit(pinfo->args_doc, &ws, 
				      WRDSF_SHOWERR |
				      WRDSF_NOVAR |
				      WRDSF_NOCMD |
				      WRDSF_QUOTE |
				      WRDSF_SQUEEZE_DELIMS))
				abort();

			for (i = 0; i < ws.ws_wordc; i++) {
				len = strlen(ws.ws_wordv[i]) + 1;
				if (n + len > RMARGIN) {
					FLUSH;
					/* Make sure we have enough buffer
					   space if the string cannot be
					   split */
					if (n + len > bufsize) {
						bufsize = n + len;
						buf = grecs_realloc(buf,
								    bufsize);
					}
				}
				buf[n++] = ' ';
				strcpy(buf + n, ws.ws_wordv[i]);
				n += len;
			}
		}	
	}
	
	FLUSH;

	if (pinfo->subcmd && pinfo->subcmd[1]) {
		char **p;
		
		printf("%s: %s", pinfo->subcmd[2] ? _("Aliases") : _("Alias"),
			pinfo->progname);
		for (p = pinfo->subcmd + 1; *p; p++)
			printf(" %s", *p);
		putchar('\n');
	}
	
	free(optidx);
	free(buf);
}

const char version_etc_copyright[] =
  /* Do *not* mark this string for translation.  First %s is a copyright
     symbol suitable for this locale, and second %s are the copyright
     years.  */
  "Copyright %s %s %s";

void
grecs_print_version_only(struct grecs_proginfo *pinfo, FILE *stream)
{
	fprintf(stream, "%s", pinfo->progname);
	if (!ISEMPTY(pinfo->package))
		fprintf(stream, " (%s)", pinfo->package);
	if (!ISEMPTY(pinfo->version))
		fprintf(stream, " %s", pinfo->version);
	fputc('\n', stream);
	
	/* TRANSLATORS: Translate "(C)" to the copyright symbol
	   (C-in-a-circle), if this symbol is available in the user's
	   locale.  Otherwise, do not translate "(C)"; leave it as-is.  */
	fprintf(stream, version_etc_copyright, _("(C)"),
		 ISEMPTY(pinfo->copyright_year) ?
		         "2012" : pinfo->copyright_year,
		 ISEMPTY(pinfo->copyright_holder) ?
		"Free Software Foundation, inc." : pinfo->copyright_holder);
	fputc('\n', stream);
}

static const char gplv3[] =
	N_("License GPLv3+: GNU GPL version 3 or later "
	   "<http://gnu.org/licenses/gpl.html>\n"
	   "This is free software: you are free to change and redistribute it.\n"
	   "There is NO WARRANTY, to the extent permitted by law.\n\n");

void
grecs_print_version(struct grecs_proginfo *pinfo, FILE *stream)
{
	grecs_print_version_only(pinfo, stream);
	fputs(gettext(ISEMPTY(pinfo->license) ?
		        gplv3 : pinfo->license), stream);
	if (pinfo->print_version_hook)
		pinfo->print_version_hook(stream);

	if (pinfo->authors) {
		int i;
		unsigned width;
		const char *written_by = _("Written by ");
		/* TRANSLATORS: This string is used as a delimiter between
		   authors' names as in:

		     Written by Winnie the Pooh, Piglet ...
		*/
		const char *middle_delim = _(", ");
		/* TRANSLATORS: This string acts as a delimiter before the
		   last author's names, e.g.:
  
		   Written by Winnie the Pooh, Piglet and Christopher Robin.
		*/
		const char *final_delim = _(" and ");

		width = strlen(written_by);
		fputs(written_by, stream);
		for (i = 0; ; ) {
			const char *author = pinfo->authors[i++];
			size_t len = strlen(author);
			const char *delim = NULL;
			
			if (pinfo->authors[i]) {
				delim = pinfo->authors[i+1] ?
					middle_delim : final_delim;
				len += strlen (delim);
			} else
				len++;
			if (width + len > RMARGIN) {
				fputc('\n', stream);
				width = 0;
			}
			fputs(author, stream);
			width += len;
			if (delim)
				fputs(delim, stream);
			else
				break;
		}
		fputc('.', stream);
		fputc('\n', stream);
	}
}
