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

#ifndef _GRECS_LOCUS_H
#define _GRECS_LOCUS_H

struct grecs_locus_point {
	char *file;
	unsigned line;
	unsigned col;
};

#define grecs_locus_point_advance_line(loc) do {	\
		(loc).line++;				\
		(loc).col = 0;				\
	} while (0)

#define GRECS_LOCUS_POINT_EQ(a,b) \
	((strcmp((a)->file, (b)->file) == 0) && ((a)->line == (b)->line))

typedef struct grecs_locus {
	struct grecs_locus_point beg;
	struct grecs_locus_point end;
} grecs_locus_t;

#define YYLTYPE grecs_locus_t

#define YYLLOC_DEFAULT(Current, Rhs, N)				 \
	do {							 \
		if (N) {					 \
			(Current).beg = YYRHSLOC(Rhs, 1).beg;	 \
			(Current).end = YYRHSLOC(Rhs, N).end;	 \
		} else {					 \
			(Current).beg = YYRHSLOC(Rhs, 0).end;	 \
			(Current).end = (Current).beg;		 \
		}						 \
	} while (0)

#define YY_LOCATION_PRINT(File, Loc) do {				\
		if ((Loc).beg.col == 0)					\
			fprintf(File, "%s:%u",				\
				(Loc).beg.file,				\
				(Loc).beg.line);			\
		else if (strcmp((Loc).beg.file, (Loc).end.file))	\
			fprintf(File, "%s:%u.%u-%s:%u.%u",		\
				(Loc).beg.file,				\
				(Loc).beg.line, (Loc).beg.col,		\
				(Loc).end.file,				\
				(Loc).end.line, (Loc).end.col);		\
		else if ((Loc).beg.line != (Loc).end.line)		\
			fprintf(File, "%s:%u.%u-%u.%u",			\
				(Loc).beg.file,				\
				(Loc).beg.line, (Loc).beg.col,		\
				(Loc).end.line, (Loc).end.col);		\
		else if ((Loc).beg.col != (Loc).end.col)		\
			fprintf(File, "%s:%u.%u-%u",			\
				(Loc).beg.file,				\
				(Loc).beg.line, (Loc).beg.col,		\
				(Loc).end.col);				\
		else							\
			fprintf(File, "%s:%u.%u",			\
				(Loc).beg.file,				\
				(Loc).beg.line,				\
                                (Loc).beg.col);				\
	} while (0)

#endif
