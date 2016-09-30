/* A Bison parser, made by GNU Bison 2.5.1.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with grecs_dhcpd or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 1



/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 1 "dhcpd-gram.y"

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
#include <grecs.h>
#include <grecs-locus.h>
#include <dhcpd-gram.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <errno.h>

int grecs_dhcpdlex(void);
int grecs_dhcpderror(char const *s);

static struct grecs_node *parse_tree;
extern int grecs_dhcpd_flex_debug;
extern int grecs_dhcpd_new_source(const char *name, grecs_locus_t *loc);
extern void grecs_dhcpd_close_sources(void);



/* Line 268 of yacc.c  */
#line 110 "dhcpd-gram.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum grecs_dhcpdtokentype {
     DHCPD_STRING = 258,
     DHCPD_IDENT = 259
   };
#endif
/* Tokens.  */
#define DHCPD_STRING 258
#define DHCPD_IDENT 259




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 295 of yacc.c  */
#line 42 "dhcpd-gram.y"

	char *string;
	grecs_value_t svalue, *pvalue;
	struct grecs_list *list;
	struct grecs_node *node;
	grecs_locus_t locus;
	struct { struct grecs_node *head, *tail; } node_list;



/* Line 295 of yacc.c  */
#line 173 "dhcpd-gram.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define grecs_dhcpdstype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define grecs_dhcpdltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */


/* Line 345 of yacc.c  */
#line 198 "dhcpd-gram.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 grecs_dhcpdtype_uint8;
#else
typedef unsigned char grecs_dhcpdtype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 grecs_dhcpdtype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char grecs_dhcpdtype_int8;
#else
typedef short int grecs_dhcpdtype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 grecs_dhcpdtype_uint16;
#else
typedef unsigned short int grecs_dhcpdtype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 grecs_dhcpdtype_int16;
#else
typedef short int grecs_dhcpdtype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int grecs_dhcpdi)
#else
static int
YYID (grecs_dhcpdi)
    int grecs_dhcpdi;
#endif
{
  return grecs_dhcpdi;
}
#endif

#if ! defined grecs_dhcpdoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined grecs_dhcpdoverflow || YYERROR_VERBOSE */


#if (! defined grecs_dhcpdoverflow \
     && (! defined __cplusplus \
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union grecs_dhcpdalloc
{
  grecs_dhcpdtype_int16 grecs_dhcpdss_alloc;
  YYSTYPE grecs_dhcpdvs_alloc;
  YYLTYPE grecs_dhcpdls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union grecs_dhcpdalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (grecs_dhcpdtype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T grecs_dhcpdnewbytes;						\
	YYCOPY (&grecs_dhcpdptr->Stack_alloc, Stack, grecs_dhcpdsize);			\
	Stack = &grecs_dhcpdptr->Stack_alloc;					\
	grecs_dhcpdnewbytes = grecs_dhcpdstacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	grecs_dhcpdptr += grecs_dhcpdnewbytes / sizeof (*grecs_dhcpdptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T grecs_dhcpdi;                         \
          for (grecs_dhcpdi = 0; grecs_dhcpdi < (Count); grecs_dhcpdi++)   \
            (Dst)[grecs_dhcpdi] = (Src)[grecs_dhcpdi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  18
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   25

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  9
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  14
/* YYNRULES -- Number of rules.  */
#define YYNRULES  24
/* YYNRULES -- Number of states.  */
#define YYNSTATES  32

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   259

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? grecs_dhcpdtranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const grecs_dhcpdtype_uint8 grecs_dhcpdtranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     8,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     5,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     6,     2,     7,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const grecs_dhcpdtype_uint8 grecs_dhcpdprhs[] =
{
       0,     0,     3,     5,     6,     8,    10,    13,    15,    17,
      21,    24,    31,    32,    34,    35,    37,    39,    41,    44,
      46,    48,    50,    52,    56
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const grecs_dhcpdtype_int8 grecs_dhcpdrhs[] =
{
      10,     0,    -1,    11,    -1,    -1,    12,    -1,    13,    -1,
      12,    13,    -1,    14,    -1,    15,    -1,     4,    18,     5,
      -1,    21,     5,    -1,     4,    17,     6,    11,     7,    16,
      -1,    -1,     5,    -1,    -1,    18,    -1,    19,    -1,    20,
      -1,    19,    20,    -1,    21,    -1,    22,    -1,     3,    -1,
       4,    -1,     3,     8,     3,    -1,    22,     8,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const grecs_dhcpdtype_uint8 grecs_dhcpdrline[] =
{
       0,    61,    61,    71,    74,    80,    84,    96,    97,   100,
     114,   123,   134,   135,   139,   142,   145,   169,   174,   180,
     186,   194,   195,   198,   214
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const grecs_dhcpdtname[] =
{
  "$end", "error", "$undefined", "DHCPD_STRING", "DHCPD_IDENT", "';'",
  "'{'", "'}'", "','", "$accept", "input", "maybe_stmtlist", "stmtlist",
  "stmt", "simple", "block", "opt_semi", "tag", "vallist", "vlist",
  "value", "string", "strlist", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const grecs_dhcpdtype_uint16 grecs_dhcpdtoknum[] =
{
       0,   256,   257,   258,   259,    59,   123,   125,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const grecs_dhcpdtype_uint8 grecs_dhcpdr1[] =
{
       0,     9,    10,    11,    11,    12,    12,    13,    13,    14,
      14,    15,    16,    16,    17,    17,    18,    19,    19,    20,
      20,    21,    21,    22,    22
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const grecs_dhcpdtype_uint8 grecs_dhcpdr2[] =
{
       0,     2,     1,     0,     1,     1,     2,     1,     1,     3,
       2,     6,     0,     1,     0,     1,     1,     1,     2,     1,
       1,     1,     1,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const grecs_dhcpdtype_uint8 grecs_dhcpddefact[] =
{
       3,    21,    14,     0,     2,     4,     5,     7,     8,     0,
      21,    22,     0,    15,    16,    17,    19,    20,     1,     6,
      10,     0,     3,     9,    18,     0,    23,     0,    24,    12,
      13,    11
};

/* YYDEFGOTO[NTERM-NUM].  */
static const grecs_dhcpdtype_int8 grecs_dhcpddefgoto[] =
{
      -1,     3,     4,     5,     6,     7,     8,    31,    12,    13,
      14,    15,     9,    17
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -4
static const grecs_dhcpdtype_int8 grecs_dhcpdpact[] =
{
       2,    -4,    -1,     1,    -4,     2,    -4,    -4,    -4,     5,
       3,    -4,     7,     9,     4,    -4,    -4,     8,    -4,    -4,
      -4,     6,     2,    -4,    -4,    12,    -4,    10,    -4,    13,
      -4,    -4
};

/* YYPGOTO[NTERM-NUM].  */
static const grecs_dhcpdtype_int8 grecs_dhcpdpgoto[] =
{
      -4,    -4,    -3,    -4,    15,    -4,    -4,    -4,    -4,    -4,
      -4,    11,    -2,    -4
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -23
static const grecs_dhcpdtype_int8 grecs_dhcpdtable[] =
{
      16,    18,    10,    11,   -22,     1,     2,    10,    11,    26,
      20,    21,    16,    22,    23,    28,    25,    29,    30,    27,
      19,     0,     0,     0,     0,    24
};

#define grecs_dhcpdpact_value_is_default(grecs_dhcpdstate) \
  ((grecs_dhcpdstate) == (-4))

#define grecs_dhcpdtable_value_is_error(grecs_dhcpdtable_value) \
  YYID (0)

static const grecs_dhcpdtype_int8 grecs_dhcpdcheck[] =
{
       2,     0,     3,     4,     5,     3,     4,     3,     4,     3,
       5,     8,    14,     6,     5,     3,     8,     7,     5,    22,
       5,    -1,    -1,    -1,    -1,    14
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const grecs_dhcpdtype_uint8 grecs_dhcpdstos[] =
{
       0,     3,     4,    10,    11,    12,    13,    14,    15,    21,
       3,     4,    17,    18,    19,    20,    21,    22,     0,    13,
       5,     8,     6,     5,    20,     8,     3,    11,     3,     7,
       5,    16
};

#define grecs_dhcpderrok		(grecs_dhcpderrstatus = 0)
#define grecs_dhcpdclearin	(grecs_dhcpdchar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto grecs_dhcpdacceptlab
#define YYABORT		goto grecs_dhcpdabortlab
#define YYERROR		goto grecs_dhcpderrorlab


/* Like YYERROR except do call grecs_dhcpderror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto grecs_dhcpderrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!grecs_dhcpderrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (grecs_dhcpdchar == YYEMPTY)                                        \
    {                                                           \
      grecs_dhcpdchar = (Token);                                         \
      grecs_dhcpdlval = (Value);                                         \
      YYPOPSTACK (grecs_dhcpdlen);                                       \
      grecs_dhcpdstate = *grecs_dhcpdssp;                                         \
      goto grecs_dhcpdbackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      grecs_dhcpderror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `grecs_dhcpdlex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX grecs_dhcpdlex (YYLEX_PARAM)
#else
# define YYLEX grecs_dhcpdlex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (grecs_dhcpddebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (grecs_dhcpddebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      grecs_dhcpd_symbol_print (stderr,						  \
		  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
grecs_dhcpd_symbol_value_print (FILE *grecs_dhcpdoutput, int grecs_dhcpdtype, YYSTYPE const * const grecs_dhcpdvaluep, YYLTYPE const * const grecs_dhcpdlocationp)
#else
static void
grecs_dhcpd_symbol_value_print (grecs_dhcpdoutput, grecs_dhcpdtype, grecs_dhcpdvaluep, grecs_dhcpdlocationp)
    FILE *grecs_dhcpdoutput;
    int grecs_dhcpdtype;
    YYSTYPE const * const grecs_dhcpdvaluep;
    YYLTYPE const * const grecs_dhcpdlocationp;
#endif
{
  FILE *grecs_dhcpdo = grecs_dhcpdoutput;
  YYUSE (grecs_dhcpdo);
  if (!grecs_dhcpdvaluep)
    return;
  YYUSE (grecs_dhcpdlocationp);
# ifdef YYPRINT
  if (grecs_dhcpdtype < YYNTOKENS)
    YYPRINT (grecs_dhcpdoutput, grecs_dhcpdtoknum[grecs_dhcpdtype], *grecs_dhcpdvaluep);
# else
  YYUSE (grecs_dhcpdoutput);
# endif
  switch (grecs_dhcpdtype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
grecs_dhcpd_symbol_print (FILE *grecs_dhcpdoutput, int grecs_dhcpdtype, YYSTYPE const * const grecs_dhcpdvaluep, YYLTYPE const * const grecs_dhcpdlocationp)
#else
static void
grecs_dhcpd_symbol_print (grecs_dhcpdoutput, grecs_dhcpdtype, grecs_dhcpdvaluep, grecs_dhcpdlocationp)
    FILE *grecs_dhcpdoutput;
    int grecs_dhcpdtype;
    YYSTYPE const * const grecs_dhcpdvaluep;
    YYLTYPE const * const grecs_dhcpdlocationp;
#endif
{
  if (grecs_dhcpdtype < YYNTOKENS)
    YYFPRINTF (grecs_dhcpdoutput, "token %s (", grecs_dhcpdtname[grecs_dhcpdtype]);
  else
    YYFPRINTF (grecs_dhcpdoutput, "nterm %s (", grecs_dhcpdtname[grecs_dhcpdtype]);

  YY_LOCATION_PRINT (grecs_dhcpdoutput, *grecs_dhcpdlocationp);
  YYFPRINTF (grecs_dhcpdoutput, ": ");
  grecs_dhcpd_symbol_value_print (grecs_dhcpdoutput, grecs_dhcpdtype, grecs_dhcpdvaluep, grecs_dhcpdlocationp);
  YYFPRINTF (grecs_dhcpdoutput, ")");
}

/*------------------------------------------------------------------.
| grecs_dhcpd_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
grecs_dhcpd_stack_print (grecs_dhcpdtype_int16 *grecs_dhcpdbottom, grecs_dhcpdtype_int16 *grecs_dhcpdtop)
#else
static void
grecs_dhcpd_stack_print (grecs_dhcpdbottom, grecs_dhcpdtop)
    grecs_dhcpdtype_int16 *grecs_dhcpdbottom;
    grecs_dhcpdtype_int16 *grecs_dhcpdtop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; grecs_dhcpdbottom <= grecs_dhcpdtop; grecs_dhcpdbottom++)
    {
      int grecs_dhcpdbot = *grecs_dhcpdbottom;
      YYFPRINTF (stderr, " %d", grecs_dhcpdbot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (grecs_dhcpddebug)							\
    grecs_dhcpd_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
grecs_dhcpd_reduce_print (YYSTYPE *grecs_dhcpdvsp, YYLTYPE *grecs_dhcpdlsp, int grecs_dhcpdrule)
#else
static void
grecs_dhcpd_reduce_print (grecs_dhcpdvsp, grecs_dhcpdlsp, grecs_dhcpdrule)
    YYSTYPE *grecs_dhcpdvsp;
    YYLTYPE *grecs_dhcpdlsp;
    int grecs_dhcpdrule;
#endif
{
  int grecs_dhcpdnrhs = grecs_dhcpdr2[grecs_dhcpdrule];
  int grecs_dhcpdi;
  unsigned long int grecs_dhcpdlno = grecs_dhcpdrline[grecs_dhcpdrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     grecs_dhcpdrule - 1, grecs_dhcpdlno);
  /* The symbols being reduced.  */
  for (grecs_dhcpdi = 0; grecs_dhcpdi < grecs_dhcpdnrhs; grecs_dhcpdi++)
    {
      YYFPRINTF (stderr, "   $%d = ", grecs_dhcpdi + 1);
      grecs_dhcpd_symbol_print (stderr, grecs_dhcpdrhs[grecs_dhcpdprhs[grecs_dhcpdrule] + grecs_dhcpdi],
		       &(grecs_dhcpdvsp[(grecs_dhcpdi + 1) - (grecs_dhcpdnrhs)])
		       , &(grecs_dhcpdlsp[(grecs_dhcpdi + 1) - (grecs_dhcpdnrhs)])		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (grecs_dhcpddebug)				\
    grecs_dhcpd_reduce_print (grecs_dhcpdvsp, grecs_dhcpdlsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int grecs_dhcpddebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef grecs_dhcpdstrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define grecs_dhcpdstrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
grecs_dhcpdstrlen (const char *grecs_dhcpdstr)
#else
static YYSIZE_T
grecs_dhcpdstrlen (grecs_dhcpdstr)
    const char *grecs_dhcpdstr;
#endif
{
  YYSIZE_T grecs_dhcpdlen;
  for (grecs_dhcpdlen = 0; grecs_dhcpdstr[grecs_dhcpdlen]; grecs_dhcpdlen++)
    continue;
  return grecs_dhcpdlen;
}
#  endif
# endif

# ifndef grecs_dhcpdstpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define grecs_dhcpdstpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
grecs_dhcpdstpcpy (char *grecs_dhcpddest, const char *grecs_dhcpdsrc)
#else
static char *
grecs_dhcpdstpcpy (grecs_dhcpddest, grecs_dhcpdsrc)
    char *grecs_dhcpddest;
    const char *grecs_dhcpdsrc;
#endif
{
  char *grecs_dhcpdd = grecs_dhcpddest;
  const char *grecs_dhcpds = grecs_dhcpdsrc;

  while ((*grecs_dhcpdd++ = *grecs_dhcpds++) != '\0')
    continue;

  return grecs_dhcpdd - 1;
}
#  endif
# endif

# ifndef grecs_dhcpdtnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for grecs_dhcpderror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from grecs_dhcpdtname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
grecs_dhcpdtnamerr (char *grecs_dhcpdres, const char *grecs_dhcpdstr)
{
  if (*grecs_dhcpdstr == '"')
    {
      YYSIZE_T grecs_dhcpdn = 0;
      char const *grecs_dhcpdp = grecs_dhcpdstr;

      for (;;)
	switch (*++grecs_dhcpdp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++grecs_dhcpdp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (grecs_dhcpdres)
	      grecs_dhcpdres[grecs_dhcpdn] = *grecs_dhcpdp;
	    grecs_dhcpdn++;
	    break;

	  case '"':
	    if (grecs_dhcpdres)
	      grecs_dhcpdres[grecs_dhcpdn] = '\0';
	    return grecs_dhcpdn;
	  }
    do_not_strip_quotes: ;
    }

  if (! grecs_dhcpdres)
    return grecs_dhcpdstrlen (grecs_dhcpdstr);

  return grecs_dhcpdstpcpy (grecs_dhcpdres, grecs_dhcpdstr) - grecs_dhcpdres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
grecs_dhcpdsyntax_error (YYSIZE_T *grecs_dhcpdmsg_alloc, char **grecs_dhcpdmsg,
                grecs_dhcpdtype_int16 *grecs_dhcpdssp, int grecs_dhcpdtoken)
{
  YYSIZE_T grecs_dhcpdsize0 = grecs_dhcpdtnamerr (YY_NULL, grecs_dhcpdtname[grecs_dhcpdtoken]);
  YYSIZE_T grecs_dhcpdsize = grecs_dhcpdsize0;
  YYSIZE_T grecs_dhcpdsize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *grecs_dhcpdformat = YY_NULL;
  /* Arguments of grecs_dhcpdformat. */
  char const *grecs_dhcpdarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int grecs_dhcpdcount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in grecs_dhcpdchar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated grecs_dhcpdchar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (grecs_dhcpdtoken != YYEMPTY)
    {
      int grecs_dhcpdn = grecs_dhcpdpact[*grecs_dhcpdssp];
      grecs_dhcpdarg[grecs_dhcpdcount++] = grecs_dhcpdtname[grecs_dhcpdtoken];
      if (!grecs_dhcpdpact_value_is_default (grecs_dhcpdn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int grecs_dhcpdxbegin = grecs_dhcpdn < 0 ? -grecs_dhcpdn : 0;
          /* Stay within bounds of both grecs_dhcpdcheck and grecs_dhcpdtname.  */
          int grecs_dhcpdchecklim = YYLAST - grecs_dhcpdn + 1;
          int grecs_dhcpdxend = grecs_dhcpdchecklim < YYNTOKENS ? grecs_dhcpdchecklim : YYNTOKENS;
          int grecs_dhcpdx;

          for (grecs_dhcpdx = grecs_dhcpdxbegin; grecs_dhcpdx < grecs_dhcpdxend; ++grecs_dhcpdx)
            if (grecs_dhcpdcheck[grecs_dhcpdx + grecs_dhcpdn] == grecs_dhcpdx && grecs_dhcpdx != YYTERROR
                && !grecs_dhcpdtable_value_is_error (grecs_dhcpdtable[grecs_dhcpdx + grecs_dhcpdn]))
              {
                if (grecs_dhcpdcount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    grecs_dhcpdcount = 1;
                    grecs_dhcpdsize = grecs_dhcpdsize0;
                    break;
                  }
                grecs_dhcpdarg[grecs_dhcpdcount++] = grecs_dhcpdtname[grecs_dhcpdx];
                grecs_dhcpdsize1 = grecs_dhcpdsize + grecs_dhcpdtnamerr (YY_NULL, grecs_dhcpdtname[grecs_dhcpdx]);
                if (! (grecs_dhcpdsize <= grecs_dhcpdsize1
                       && grecs_dhcpdsize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                grecs_dhcpdsize = grecs_dhcpdsize1;
              }
        }
    }

  switch (grecs_dhcpdcount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        grecs_dhcpdformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  grecs_dhcpdsize1 = grecs_dhcpdsize + grecs_dhcpdstrlen (grecs_dhcpdformat);
  if (! (grecs_dhcpdsize <= grecs_dhcpdsize1 && grecs_dhcpdsize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  grecs_dhcpdsize = grecs_dhcpdsize1;

  if (*grecs_dhcpdmsg_alloc < grecs_dhcpdsize)
    {
      *grecs_dhcpdmsg_alloc = 2 * grecs_dhcpdsize;
      if (! (grecs_dhcpdsize <= *grecs_dhcpdmsg_alloc
             && *grecs_dhcpdmsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *grecs_dhcpdmsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *grecs_dhcpdp = *grecs_dhcpdmsg;
    int grecs_dhcpdi = 0;
    while ((*grecs_dhcpdp = *grecs_dhcpdformat) != '\0')
      if (*grecs_dhcpdp == '%' && grecs_dhcpdformat[1] == 's' && grecs_dhcpdi < grecs_dhcpdcount)
        {
          grecs_dhcpdp += grecs_dhcpdtnamerr (grecs_dhcpdp, grecs_dhcpdarg[grecs_dhcpdi++]);
          grecs_dhcpdformat += 2;
        }
      else
        {
          grecs_dhcpdp++;
          grecs_dhcpdformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
grecs_dhcpddestruct (const char *grecs_dhcpdmsg, int grecs_dhcpdtype, YYSTYPE *grecs_dhcpdvaluep, YYLTYPE *grecs_dhcpdlocationp)
#else
static void
grecs_dhcpddestruct (grecs_dhcpdmsg, grecs_dhcpdtype, grecs_dhcpdvaluep, grecs_dhcpdlocationp)
    const char *grecs_dhcpdmsg;
    int grecs_dhcpdtype;
    YYSTYPE *grecs_dhcpdvaluep;
    YYLTYPE *grecs_dhcpdlocationp;
#endif
{
  YYUSE (grecs_dhcpdvaluep);
  YYUSE (grecs_dhcpdlocationp);

  if (!grecs_dhcpdmsg)
    grecs_dhcpdmsg = "Deleting";
  YY_SYMBOL_PRINT (grecs_dhcpdmsg, grecs_dhcpdtype, grecs_dhcpdvaluep, grecs_dhcpdlocationp);

  switch (grecs_dhcpdtype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int grecs_dhcpdparse (void *YYPARSE_PARAM);
#else
int grecs_dhcpdparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int grecs_dhcpdparse (void);
#else
int grecs_dhcpdparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int grecs_dhcpdchar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE grecs_dhcpdlval;

/* Location data for the lookahead symbol.  */
YYLTYPE grecs_dhcpdlloc;

/* Number of syntax errors so far.  */
int grecs_dhcpdnerrs;


/*----------.
| grecs_dhcpdparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
grecs_dhcpdparse (void *YYPARSE_PARAM)
#else
int
grecs_dhcpdparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
grecs_dhcpdparse (void)
#else
int
grecs_dhcpdparse ()

#endif
#endif
{
    int grecs_dhcpdstate;
    /* Number of tokens to shift before error messages enabled.  */
    int grecs_dhcpderrstatus;

    /* The stacks and their tools:
       `grecs_dhcpdss': related to states.
       `grecs_dhcpdvs': related to semantic values.
       `grecs_dhcpdls': related to locations.

       Refer to the stacks through separate pointers, to allow grecs_dhcpdoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    grecs_dhcpdtype_int16 grecs_dhcpdssa[YYINITDEPTH];
    grecs_dhcpdtype_int16 *grecs_dhcpdss;
    grecs_dhcpdtype_int16 *grecs_dhcpdssp;

    /* The semantic value stack.  */
    YYSTYPE grecs_dhcpdvsa[YYINITDEPTH];
    YYSTYPE *grecs_dhcpdvs;
    YYSTYPE *grecs_dhcpdvsp;

    /* The location stack.  */
    YYLTYPE grecs_dhcpdlsa[YYINITDEPTH];
    YYLTYPE *grecs_dhcpdls;
    YYLTYPE *grecs_dhcpdlsp;

    /* The locations where the error started and ended.  */
    YYLTYPE grecs_dhcpderror_range[3];

    YYSIZE_T grecs_dhcpdstacksize;

  int grecs_dhcpdn;
  int grecs_dhcpdresult;
  /* Lookahead token as an internal (translated) token number.  */
  int grecs_dhcpdtoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE grecs_dhcpdval;
  YYLTYPE grecs_dhcpdloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char grecs_dhcpdmsgbuf[128];
  char *grecs_dhcpdmsg = grecs_dhcpdmsgbuf;
  YYSIZE_T grecs_dhcpdmsg_alloc = sizeof grecs_dhcpdmsgbuf;
#endif

#define YYPOPSTACK(N)   (grecs_dhcpdvsp -= (N), grecs_dhcpdssp -= (N), grecs_dhcpdlsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int grecs_dhcpdlen = 0;

  grecs_dhcpdtoken = 0;
  grecs_dhcpdss = grecs_dhcpdssa;
  grecs_dhcpdvs = grecs_dhcpdvsa;
  grecs_dhcpdls = grecs_dhcpdlsa;
  grecs_dhcpdstacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  grecs_dhcpdstate = 0;
  grecs_dhcpderrstatus = 0;
  grecs_dhcpdnerrs = 0;
  grecs_dhcpdchar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  grecs_dhcpdssp = grecs_dhcpdss;
  grecs_dhcpdvsp = grecs_dhcpdvs;
  grecs_dhcpdlsp = grecs_dhcpdls;

#if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  grecs_dhcpdlloc.first_line   = grecs_dhcpdlloc.last_line   = 1;
  grecs_dhcpdlloc.first_column = grecs_dhcpdlloc.last_column = 1;
#endif

  goto grecs_dhcpdsetstate;

/*------------------------------------------------------------.
| grecs_dhcpdnewstate -- Push a new state, which is found in grecs_dhcpdstate.  |
`------------------------------------------------------------*/
 grecs_dhcpdnewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  grecs_dhcpdssp++;

 grecs_dhcpdsetstate:
  *grecs_dhcpdssp = grecs_dhcpdstate;

  if (grecs_dhcpdss + grecs_dhcpdstacksize - 1 <= grecs_dhcpdssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T grecs_dhcpdsize = grecs_dhcpdssp - grecs_dhcpdss + 1;

#ifdef grecs_dhcpdoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *grecs_dhcpdvs1 = grecs_dhcpdvs;
	grecs_dhcpdtype_int16 *grecs_dhcpdss1 = grecs_dhcpdss;
	YYLTYPE *grecs_dhcpdls1 = grecs_dhcpdls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if grecs_dhcpdoverflow is a macro.  */
	grecs_dhcpdoverflow (YY_("memory exhausted"),
		    &grecs_dhcpdss1, grecs_dhcpdsize * sizeof (*grecs_dhcpdssp),
		    &grecs_dhcpdvs1, grecs_dhcpdsize * sizeof (*grecs_dhcpdvsp),
		    &grecs_dhcpdls1, grecs_dhcpdsize * sizeof (*grecs_dhcpdlsp),
		    &grecs_dhcpdstacksize);

	grecs_dhcpdls = grecs_dhcpdls1;
	grecs_dhcpdss = grecs_dhcpdss1;
	grecs_dhcpdvs = grecs_dhcpdvs1;
      }
#else /* no grecs_dhcpdoverflow */
# ifndef YYSTACK_RELOCATE
      goto grecs_dhcpdexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= grecs_dhcpdstacksize)
	goto grecs_dhcpdexhaustedlab;
      grecs_dhcpdstacksize *= 2;
      if (YYMAXDEPTH < grecs_dhcpdstacksize)
	grecs_dhcpdstacksize = YYMAXDEPTH;

      {
	grecs_dhcpdtype_int16 *grecs_dhcpdss1 = grecs_dhcpdss;
	union grecs_dhcpdalloc *grecs_dhcpdptr =
	  (union grecs_dhcpdalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (grecs_dhcpdstacksize));
	if (! grecs_dhcpdptr)
	  goto grecs_dhcpdexhaustedlab;
	YYSTACK_RELOCATE (grecs_dhcpdss_alloc, grecs_dhcpdss);
	YYSTACK_RELOCATE (grecs_dhcpdvs_alloc, grecs_dhcpdvs);
	YYSTACK_RELOCATE (grecs_dhcpdls_alloc, grecs_dhcpdls);
#  undef YYSTACK_RELOCATE
	if (grecs_dhcpdss1 != grecs_dhcpdssa)
	  YYSTACK_FREE (grecs_dhcpdss1);
      }
# endif
#endif /* no grecs_dhcpdoverflow */

      grecs_dhcpdssp = grecs_dhcpdss + grecs_dhcpdsize - 1;
      grecs_dhcpdvsp = grecs_dhcpdvs + grecs_dhcpdsize - 1;
      grecs_dhcpdlsp = grecs_dhcpdls + grecs_dhcpdsize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) grecs_dhcpdstacksize));

      if (grecs_dhcpdss + grecs_dhcpdstacksize - 1 <= grecs_dhcpdssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", grecs_dhcpdstate));

  if (grecs_dhcpdstate == YYFINAL)
    YYACCEPT;

  goto grecs_dhcpdbackup;

/*-----------.
| grecs_dhcpdbackup.  |
`-----------*/
grecs_dhcpdbackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  grecs_dhcpdn = grecs_dhcpdpact[grecs_dhcpdstate];
  if (grecs_dhcpdpact_value_is_default (grecs_dhcpdn))
    goto grecs_dhcpddefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (grecs_dhcpdchar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      grecs_dhcpdchar = YYLEX;
    }

  if (grecs_dhcpdchar <= YYEOF)
    {
      grecs_dhcpdchar = grecs_dhcpdtoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      grecs_dhcpdtoken = YYTRANSLATE (grecs_dhcpdchar);
      YY_SYMBOL_PRINT ("Next token is", grecs_dhcpdtoken, &grecs_dhcpdlval, &grecs_dhcpdlloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  grecs_dhcpdn += grecs_dhcpdtoken;
  if (grecs_dhcpdn < 0 || YYLAST < grecs_dhcpdn || grecs_dhcpdcheck[grecs_dhcpdn] != grecs_dhcpdtoken)
    goto grecs_dhcpddefault;
  grecs_dhcpdn = grecs_dhcpdtable[grecs_dhcpdn];
  if (grecs_dhcpdn <= 0)
    {
      if (grecs_dhcpdtable_value_is_error (grecs_dhcpdn))
        goto grecs_dhcpderrlab;
      grecs_dhcpdn = -grecs_dhcpdn;
      goto grecs_dhcpdreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (grecs_dhcpderrstatus)
    grecs_dhcpderrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", grecs_dhcpdtoken, &grecs_dhcpdlval, &grecs_dhcpdlloc);

  /* Discard the shifted token.  */
  grecs_dhcpdchar = YYEMPTY;

  grecs_dhcpdstate = grecs_dhcpdn;
  *++grecs_dhcpdvsp = grecs_dhcpdlval;
  *++grecs_dhcpdlsp = grecs_dhcpdlloc;
  goto grecs_dhcpdnewstate;


/*-----------------------------------------------------------.
| grecs_dhcpddefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
grecs_dhcpddefault:
  grecs_dhcpdn = grecs_dhcpddefact[grecs_dhcpdstate];
  if (grecs_dhcpdn == 0)
    goto grecs_dhcpderrlab;
  goto grecs_dhcpdreduce;


/*-----------------------------.
| grecs_dhcpdreduce -- Do a reduction.  |
`-----------------------------*/
grecs_dhcpdreduce:
  /* grecs_dhcpdn is the number of a rule to reduce with.  */
  grecs_dhcpdlen = grecs_dhcpdr2[grecs_dhcpdn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  grecs_dhcpdval = grecs_dhcpdvsp[1-grecs_dhcpdlen];

  /* Default location.  */
  YYLLOC_DEFAULT (grecs_dhcpdloc, (grecs_dhcpdlsp - grecs_dhcpdlen), grecs_dhcpdlen);
  YY_REDUCE_PRINT (grecs_dhcpdn);
  switch (grecs_dhcpdn)
    {
        case 2:

/* Line 1810 of yacc.c  */
#line 62 "dhcpd-gram.y"
    {
		  parse_tree = grecs_node_create(grecs_node_root, &(grecs_dhcpdlsp[(1) - (1)]));
		  parse_tree->v.texttab = grecs_text_table();
		  grecs_node_bind(parse_tree, (grecs_dhcpdvsp[(1) - (1)].node), 1);
	  }
    break;

  case 3:

/* Line 1810 of yacc.c  */
#line 71 "dhcpd-gram.y"
    {
		  (grecs_dhcpdval.node) = NULL;
	  }
    break;

  case 4:

/* Line 1810 of yacc.c  */
#line 75 "dhcpd-gram.y"
    {
		  (grecs_dhcpdval.node) = (grecs_dhcpdvsp[(1) - (1)].node_list).head;
	  }
    break;

  case 5:

/* Line 1810 of yacc.c  */
#line 81 "dhcpd-gram.y"
    {
		  (grecs_dhcpdval.node_list).head = (grecs_dhcpdval.node_list).tail = (grecs_dhcpdvsp[(1) - (1)].node);
	  }
    break;

  case 6:

/* Line 1810 of yacc.c  */
#line 85 "dhcpd-gram.y"
    {
		  if ((grecs_dhcpdvsp[(2) - (2)].node)) {
			  if (!(grecs_dhcpdvsp[(1) - (2)].node_list).head)
				  (grecs_dhcpdvsp[(1) - (2)].node_list).head = (grecs_dhcpdvsp[(1) - (2)].node_list).tail = (grecs_dhcpdvsp[(2) - (2)].node);
			  else
				  grecs_node_bind((grecs_dhcpdvsp[(1) - (2)].node_list).tail, (grecs_dhcpdvsp[(2) - (2)].node), 0);
		  }
		  (grecs_dhcpdval.node_list) = (grecs_dhcpdvsp[(1) - (2)].node_list);
	  }
    break;

  case 9:

/* Line 1810 of yacc.c  */
#line 101 "dhcpd-gram.y"
    {
		  if (strcmp((grecs_dhcpdvsp[(1) - (3)].string), "include") == 0 &&
		      (grecs_dhcpdvsp[(2) - (3)].pvalue)->type == GRECS_TYPE_STRING) {
			  grecs_dhcpd_new_source((grecs_dhcpdvsp[(2) - (3)].pvalue)->v.string, &(grecs_dhcpdlsp[(1) - (3)]));
			  (grecs_dhcpdval.node) = NULL;
		  } else {
			  (grecs_dhcpdval.node) = grecs_node_create_points(grecs_node_stmt,
							(grecs_dhcpdlsp[(1) - (3)]).beg, (grecs_dhcpdlsp[(2) - (3)]).end);
			  (grecs_dhcpdval.node)->ident = (grecs_dhcpdvsp[(1) - (3)].string);
			  (grecs_dhcpdval.node)->idloc = (grecs_dhcpdlsp[(1) - (3)]);
			  (grecs_dhcpdval.node)->v.value = (grecs_dhcpdvsp[(2) - (3)].pvalue);
		  }
	  }
    break;

  case 10:

/* Line 1810 of yacc.c  */
#line 115 "dhcpd-gram.y"
    {
		  (grecs_dhcpdval.node) = grecs_node_create(grecs_node_stmt, &(grecs_dhcpdlsp[(1) - (2)]));
		  (grecs_dhcpdval.node)->ident = (grecs_dhcpdvsp[(1) - (2)].string);
		  (grecs_dhcpdval.node)->idloc = (grecs_dhcpdlsp[(1) - (2)]);
		  (grecs_dhcpdval.node)->v.value = NULL;
	  }
    break;

  case 11:

/* Line 1810 of yacc.c  */
#line 124 "dhcpd-gram.y"
    {
		  (grecs_dhcpdval.node) = grecs_node_create_points(grecs_node_block,
						(grecs_dhcpdlsp[(1) - (6)]).beg, (grecs_dhcpdlsp[(5) - (6)]).end);
		  (grecs_dhcpdval.node)->ident = (grecs_dhcpdvsp[(1) - (6)].string);
		  (grecs_dhcpdval.node)->idloc = (grecs_dhcpdlsp[(1) - (6)]);
		  (grecs_dhcpdval.node)->v.value = (grecs_dhcpdvsp[(2) - (6)].pvalue);
		  grecs_node_bind((grecs_dhcpdval.node), (grecs_dhcpdvsp[(4) - (6)].node), 1);
	  }
    break;

  case 14:

/* Line 1810 of yacc.c  */
#line 139 "dhcpd-gram.y"
    {
		  (grecs_dhcpdval.pvalue) = NULL;
	  }
    break;

  case 16:

/* Line 1810 of yacc.c  */
#line 146 "dhcpd-gram.y"
    {
		  size_t n;
		  
		  if ((n = grecs_list_size((grecs_dhcpdvsp[(1) - (1)].list))) == 1) {
			  (grecs_dhcpdval.pvalue) = grecs_list_index((grecs_dhcpdvsp[(1) - (1)].list), 0);
		  } else {
			  size_t i;
			  struct grecs_list_entry *ep;
		
			  (grecs_dhcpdval.pvalue) = grecs_malloc(sizeof((grecs_dhcpdval.pvalue)[0]));
			  (grecs_dhcpdval.pvalue)->type = GRECS_TYPE_ARRAY;
			  (grecs_dhcpdval.pvalue)->locus = (grecs_dhcpdlsp[(1) - (1)]);
			  (grecs_dhcpdval.pvalue)->v.arg.c = n;
			  (grecs_dhcpdval.pvalue)->v.arg.v = grecs_calloc(n,
						     sizeof((grecs_dhcpdval.pvalue)->v.arg.v[0]));
			  for (i = 0, ep = (grecs_dhcpdvsp[(1) - (1)].list)->head; ep; i++, ep = ep->next)
				  (grecs_dhcpdval.pvalue)->v.arg.v[i] = ep->data;
		  }
		  (grecs_dhcpdvsp[(1) - (1)].list)->free_entry = NULL;
		  grecs_list_free((grecs_dhcpdvsp[(1) - (1)].list));	      
	  }
    break;

  case 17:

/* Line 1810 of yacc.c  */
#line 170 "dhcpd-gram.y"
    {
		  (grecs_dhcpdval.list) = grecs_value_list_create();
		  grecs_list_append((grecs_dhcpdval.list), grecs_value_ptr_from_static(&(grecs_dhcpdvsp[(1) - (1)].svalue)));
	  }
    break;

  case 18:

/* Line 1810 of yacc.c  */
#line 175 "dhcpd-gram.y"
    {
		  grecs_list_append((grecs_dhcpdvsp[(1) - (2)].list), grecs_value_ptr_from_static(&(grecs_dhcpdvsp[(2) - (2)].svalue)));
	  }
    break;

  case 19:

/* Line 1810 of yacc.c  */
#line 181 "dhcpd-gram.y"
    {
		  (grecs_dhcpdval.svalue).type = GRECS_TYPE_STRING;
		  (grecs_dhcpdval.svalue).locus = (grecs_dhcpdlsp[(1) - (1)]);
		  (grecs_dhcpdval.svalue).v.string = (grecs_dhcpdvsp[(1) - (1)].string);
	  }
    break;

  case 20:

/* Line 1810 of yacc.c  */
#line 187 "dhcpd-gram.y"
    {
		  (grecs_dhcpdval.svalue).type = GRECS_TYPE_LIST;
		  (grecs_dhcpdval.svalue).locus = (grecs_dhcpdlsp[(1) - (1)]);
		  (grecs_dhcpdval.svalue).v.list = (grecs_dhcpdvsp[(1) - (1)].list);
	  }
    break;

  case 23:

/* Line 1810 of yacc.c  */
#line 199 "dhcpd-gram.y"
    {
		  grecs_value_t val;

		  (grecs_dhcpdval.list) = grecs_value_list_create();

		  val.type = GRECS_TYPE_STRING;
		  val.locus = (grecs_dhcpdlsp[(1) - (3)]);
		  val.v.string = (grecs_dhcpdvsp[(1) - (3)].string);
		  grecs_list_append((grecs_dhcpdval.list), grecs_value_ptr_from_static(&val));
		  
		  val.type = GRECS_TYPE_STRING;
		  val.locus = (grecs_dhcpdlsp[(3) - (3)]);
		  val.v.string = (grecs_dhcpdvsp[(3) - (3)].string);
		  grecs_list_append((grecs_dhcpdval.list), grecs_value_ptr_from_static(&val));
	  }
    break;

  case 24:

/* Line 1810 of yacc.c  */
#line 215 "dhcpd-gram.y"
    {
		  grecs_value_t val;

		  val.type = GRECS_TYPE_STRING;
		  val.locus = (grecs_dhcpdlsp[(3) - (3)]);
		  val.v.string = (grecs_dhcpdvsp[(3) - (3)].string);
		  grecs_list_append((grecs_dhcpdvsp[(1) - (3)].list), grecs_value_ptr_from_static(&val));
	  }
    break;



/* Line 1810 of yacc.c  */
#line 1697 "dhcpd-gram.c"
      default: break;
    }
  /* User semantic actions sometimes alter grecs_dhcpdchar, and that requires
     that grecs_dhcpdtoken be updated with the new translation.  We take the
     approach of translating immediately before every use of grecs_dhcpdtoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering grecs_dhcpdchar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", grecs_dhcpdr1[grecs_dhcpdn], &grecs_dhcpdval, &grecs_dhcpdloc);

  YYPOPSTACK (grecs_dhcpdlen);
  grecs_dhcpdlen = 0;
  YY_STACK_PRINT (grecs_dhcpdss, grecs_dhcpdssp);

  *++grecs_dhcpdvsp = grecs_dhcpdval;
  *++grecs_dhcpdlsp = grecs_dhcpdloc;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  grecs_dhcpdn = grecs_dhcpdr1[grecs_dhcpdn];

  grecs_dhcpdstate = grecs_dhcpdpgoto[grecs_dhcpdn - YYNTOKENS] + *grecs_dhcpdssp;
  if (0 <= grecs_dhcpdstate && grecs_dhcpdstate <= YYLAST && grecs_dhcpdcheck[grecs_dhcpdstate] == *grecs_dhcpdssp)
    grecs_dhcpdstate = grecs_dhcpdtable[grecs_dhcpdstate];
  else
    grecs_dhcpdstate = grecs_dhcpddefgoto[grecs_dhcpdn - YYNTOKENS];

  goto grecs_dhcpdnewstate;


/*------------------------------------.
| grecs_dhcpderrlab -- here on detecting error |
`------------------------------------*/
grecs_dhcpderrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  grecs_dhcpdtoken = grecs_dhcpdchar == YYEMPTY ? YYEMPTY : YYTRANSLATE (grecs_dhcpdchar);

  /* If not already recovering from an error, report this error.  */
  if (!grecs_dhcpderrstatus)
    {
      ++grecs_dhcpdnerrs;
#if ! YYERROR_VERBOSE
      grecs_dhcpderror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR grecs_dhcpdsyntax_error (&grecs_dhcpdmsg_alloc, &grecs_dhcpdmsg, \
                                        grecs_dhcpdssp, grecs_dhcpdtoken)
      {
        char const *grecs_dhcpdmsgp = YY_("syntax error");
        int grecs_dhcpdsyntax_error_status;
        grecs_dhcpdsyntax_error_status = YYSYNTAX_ERROR;
        if (grecs_dhcpdsyntax_error_status == 0)
          grecs_dhcpdmsgp = grecs_dhcpdmsg;
        else if (grecs_dhcpdsyntax_error_status == 1)
          {
            if (grecs_dhcpdmsg != grecs_dhcpdmsgbuf)
              YYSTACK_FREE (grecs_dhcpdmsg);
            grecs_dhcpdmsg = (char *) YYSTACK_ALLOC (grecs_dhcpdmsg_alloc);
            if (!grecs_dhcpdmsg)
              {
                grecs_dhcpdmsg = grecs_dhcpdmsgbuf;
                grecs_dhcpdmsg_alloc = sizeof grecs_dhcpdmsgbuf;
                grecs_dhcpdsyntax_error_status = 2;
              }
            else
              {
                grecs_dhcpdsyntax_error_status = YYSYNTAX_ERROR;
                grecs_dhcpdmsgp = grecs_dhcpdmsg;
              }
          }
        grecs_dhcpderror (grecs_dhcpdmsgp);
        if (grecs_dhcpdsyntax_error_status == 2)
          goto grecs_dhcpdexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  grecs_dhcpderror_range[1] = grecs_dhcpdlloc;

  if (grecs_dhcpderrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (grecs_dhcpdchar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (grecs_dhcpdchar == YYEOF)
	    YYABORT;
	}
      else
	{
	  grecs_dhcpddestruct ("Error: discarding",
		      grecs_dhcpdtoken, &grecs_dhcpdlval, &grecs_dhcpdlloc);
	  grecs_dhcpdchar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto grecs_dhcpderrlab1;


/*---------------------------------------------------.
| grecs_dhcpderrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
grecs_dhcpderrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label grecs_dhcpderrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto grecs_dhcpderrorlab;

  grecs_dhcpderror_range[1] = grecs_dhcpdlsp[1-grecs_dhcpdlen];
  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (grecs_dhcpdlen);
  grecs_dhcpdlen = 0;
  YY_STACK_PRINT (grecs_dhcpdss, grecs_dhcpdssp);
  grecs_dhcpdstate = *grecs_dhcpdssp;
  goto grecs_dhcpderrlab1;


/*-------------------------------------------------------------.
| grecs_dhcpderrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
grecs_dhcpderrlab1:
  grecs_dhcpderrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      grecs_dhcpdn = grecs_dhcpdpact[grecs_dhcpdstate];
      if (!grecs_dhcpdpact_value_is_default (grecs_dhcpdn))
	{
	  grecs_dhcpdn += YYTERROR;
	  if (0 <= grecs_dhcpdn && grecs_dhcpdn <= YYLAST && grecs_dhcpdcheck[grecs_dhcpdn] == YYTERROR)
	    {
	      grecs_dhcpdn = grecs_dhcpdtable[grecs_dhcpdn];
	      if (0 < grecs_dhcpdn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (grecs_dhcpdssp == grecs_dhcpdss)
	YYABORT;

      grecs_dhcpderror_range[1] = *grecs_dhcpdlsp;
      grecs_dhcpddestruct ("Error: popping",
		  grecs_dhcpdstos[grecs_dhcpdstate], grecs_dhcpdvsp, grecs_dhcpdlsp);
      YYPOPSTACK (1);
      grecs_dhcpdstate = *grecs_dhcpdssp;
      YY_STACK_PRINT (grecs_dhcpdss, grecs_dhcpdssp);
    }

  *++grecs_dhcpdvsp = grecs_dhcpdlval;

  grecs_dhcpderror_range[2] = grecs_dhcpdlloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (grecs_dhcpdloc, grecs_dhcpderror_range, 2);
  *++grecs_dhcpdlsp = grecs_dhcpdloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", grecs_dhcpdstos[grecs_dhcpdn], grecs_dhcpdvsp, grecs_dhcpdlsp);

  grecs_dhcpdstate = grecs_dhcpdn;
  goto grecs_dhcpdnewstate;


/*-------------------------------------.
| grecs_dhcpdacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
grecs_dhcpdacceptlab:
  grecs_dhcpdresult = 0;
  goto grecs_dhcpdreturn;

/*-----------------------------------.
| grecs_dhcpdabortlab -- YYABORT comes here.  |
`-----------------------------------*/
grecs_dhcpdabortlab:
  grecs_dhcpdresult = 1;
  goto grecs_dhcpdreturn;

#if !defined grecs_dhcpdoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| grecs_dhcpdexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
grecs_dhcpdexhaustedlab:
  grecs_dhcpderror (YY_("memory exhausted"));
  grecs_dhcpdresult = 2;
  /* Fall through.  */
#endif

grecs_dhcpdreturn:
  if (grecs_dhcpdchar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      grecs_dhcpdtoken = YYTRANSLATE (grecs_dhcpdchar);
      grecs_dhcpddestruct ("Cleanup: discarding lookahead",
                  grecs_dhcpdtoken, &grecs_dhcpdlval, &grecs_dhcpdlloc);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (grecs_dhcpdlen);
  YY_STACK_PRINT (grecs_dhcpdss, grecs_dhcpdssp);
  while (grecs_dhcpdssp != grecs_dhcpdss)
    {
      grecs_dhcpddestruct ("Cleanup: popping",
		  grecs_dhcpdstos[*grecs_dhcpdssp], grecs_dhcpdvsp, grecs_dhcpdlsp);
      YYPOPSTACK (1);
    }
#ifndef grecs_dhcpdoverflow
  if (grecs_dhcpdss != grecs_dhcpdssa)
    YYSTACK_FREE (grecs_dhcpdss);
#endif
#if YYERROR_VERBOSE
  if (grecs_dhcpdmsg != grecs_dhcpdmsgbuf)
    YYSTACK_FREE (grecs_dhcpdmsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (grecs_dhcpdresult);
}



/* Line 2071 of yacc.c  */
#line 225 "dhcpd-gram.y"


int
grecs_dhcpderror(char const *s)
{
	grecs_error(&grecs_dhcpdlloc, 0, "%s", s);
	return 0;
}

struct grecs_node *
grecs_dhcpd_parser(const char *name, int traceflags)
{
	int rc;

	if (grecs_dhcpd_new_source(name, NULL))
		return NULL;
	grecs_dhcpd_flex_debug = traceflags & GRECS_TRACE_LEX;
	grecs_dhcpddebug = traceflags & GRECS_TRACE_GRAM;
	parse_tree = NULL;
	grecs_line_acc_create();
	rc = grecs_dhcpdparse();
	grecs_dhcpd_close_sources();
	if (grecs_error_count)
		rc = 1;
	grecs_line_acc_free();
	if (rc) {
		grecs_tree_free(parse_tree);
		parse_tree = NULL;
	}
	return parse_tree;
}


