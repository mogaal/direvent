%option noinput
%option nounput
%top {
#ifdef HAVE_CONFIG_H
# include <config.h>
#endif
}
%{
/* This file is part of Grecs.
   Copyright (C) 2012-2016 Sergey Poznyakoff.
 
   Grecs is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.
 
   Grecs is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
 
   You should have received a copy of the GNU General Public License
   along with Grecs.  If not, see <http://www.gnu.org/licenses/>. */

#include "grecs.h"
#include "json-gram.h"
#include "grecs/json.h"

static char const *input_ptr;
static size_t input_size;
struct grecs_locus_point json_current_locus_point;   /* Input location */

char const *json_err_diag;
struct grecs_locus json_err_locus;

#undef YY_INPUT
#define YY_INPUT(buf,result,max_size)					\
	do {								\
		size_t n = (max_size > input_size) ? input_size : max_size; \
		if (n) {						\
			memcpy(buf, input_ptr, n);			\
			input_ptr += n;					\
			input_size -= n;				\
		}							\
		result = n;						\
	} while(0)

#define YY_USER_ACTION do {						\
		if (YYSTATE == 0) {					\
			yylloc.beg = json_current_locus_point;		\
			yylloc.beg.col++;				\
		}							\
  		json_current_locus_point.col += yyleng;			\
 		yylloc.end = json_current_locus_point;			\
   	} while (0);

void
jsonlex_setup(char const *s, size_t l)
{
	input_ptr = s;
	input_size = l;
	json_current_locus_point.file = NULL;
	json_current_locus_point.line = 1;
	json_current_locus_point.col = 0;
	json_err_diag = NULL;
	yy_flex_debug = 0;
}

void
jsonlex_diag(const char *s)
{
	if (!json_err_diag) {
		json_err_diag = s;
		json_err_locus = yylloc;
	}
}
		
static int
utf8_wctomb(char *u)
{
	unsigned int wc = strtoul(u, NULL, 16);
	int count;
	char r[6];
	
	if (wc < 0x80)
		count = 1;
	else if (wc < 0x800)
		count = 2;
	else if (wc < 0x10000)
		count = 3;
	else if (wc < 0x200000)
		count = 4;
	else if (wc < 0x4000000)
		count = 5;
	else if (wc <= 0x7fffffff)
		count = 6;
	else
		return -1;

	switch (count) {
		/* Note: code falls through cases! */
	case 6:
		r[5] = 0x80 | (wc & 0x3f);
		wc = wc >> 6;
		wc |= 0x4000000;
	case 5:
		r[4] = 0x80 | (wc & 0x3f);
		wc = wc >> 6;
		wc |= 0x200000;
	case 4:
		r[3] = 0x80 | (wc & 0x3f);
		wc = wc >> 6;
		wc |= 0x10000;
	case 3:
		r[2] = 0x80 | (wc & 0x3f);
		wc = wc >> 6;
		wc |= 0x800;
	case 2:
		r[1] = 0x80 | (wc & 0x3f);
		wc = wc >> 6;
		wc |= 0xc0;
	case 1:
		r[0] = wc;
	}
	grecs_line_acc_grow(r, count);
	return count;
}

int
json_unescape(char c, char *o)
{
	static char transtab[] = "\\\\\"\"b\bf\fn\nr\rt\t";
	char *p;

	for (p = transtab; *p; p += 2) {
		if (p[0] == c) {
			*o = p[1];
			return 0;
		}
	}
	return -1;
}

#define YY_SKIP_YYWRAP 1
static int
yywrap()
{
	return 1;
}

static struct grecs_txtacc *json_line_acc;

static void
json_line_begin()
{
	if (!json_line_acc)
		json_line_acc = grecs_txtacc_create();
}

static char *
json_line_finish()
{
	if (json_line_acc) {
		char nil = 0;
		grecs_txtacc_grow(json_line_acc, &nil, 1);
		return grecs_txtacc_finish(json_line_acc, 1);
	}
	return NULL;
}

static void
json_line_grow(char const *text, size_t len)	
{
	grecs_txtacc_grow(json_line_acc, text, len);
}	
%}	
D [0-9]
X [0-9a-fA-F]
%x STR
%%
"-"?{D}{D}*(.{D}{D}*)?([eE][-+]?{D}{D}*)?  {
	yylval.n = strtod(yytext, NULL);
	return T_NUMBER;
      }
\"[^\\\"]*\"       { json_line_begin();
                     json_line_grow(yytext + 1, yyleng - 2);
                     yylval.s = json_line_finish();
                     return T_STRING; }
\"[^\\\"]*\\{X}{4} { BEGIN(STR);
                     json_line_begin();
                     json_line_grow(yytext + 1, yyleng - 5);
                     utf8_wctomb(yytext + yyleng - 4);
                   }
\"[^\\\"]*\\.      { char c;
                     BEGIN(STR);
                     json_line_begin();
                     json_line_grow(yytext + 1, yyleng - 3);
                     if (json_unescape(yytext[yyleng - 1], &c)) {
                             jsonlex_diag("invalid UTF-8 codepoint");
                             return T_ERR;
                     }
		     json_line_grow(&c, 1);
                   }
<STR>[^\\\"]*\"       { BEGIN(INITIAL);
                        if (yyleng > 1)
				json_line_grow(yytext, yyleng - 1); 
                        yylval.s = json_line_finish();
	                return T_STRING; }
<STR>[^\\\"]*\\{X}{4} {
                     json_line_grow(yytext, yyleng - 5);
                     utf8_wctomb(yytext + yyleng - 4);
}
<STR>[^\\\"]*\\.      {
                     char c;
                     json_line_grow(yytext, yyleng - 2);
                     if (json_unescape(yytext[yyleng - 1], &c)) {
                             jsonlex_diag("invalid UTF-8 codepoint");
                             return T_ERR;
                     }
                     json_line_grow(&c, 1); }

null      { return T_NULL; }
true      { yylval.b = 1; return T_BOOL; }
false     { yylval.b = 0; return T_BOOL; }
"{"|"}"|"["|"]"|":"|","  return yytext[0];
[ \t]*    ;
\n        grecs_locus_point_advance_line(json_current_locus_point);
.         { jsonlex_diag("bogus character");
            return T_ERR; }
