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

/* All symbols defined below should begin with grecs_bind_ or YY, to avoid
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
#line 1 "bind-gram.y"

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
#include <bind-gram.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <errno.h>

int grecs_bind_lex(void);
int grecs_bind_error(char const *s);

static struct grecs_node *parse_tree;
extern int grecs_bind__flex_debug;
extern int grecs_bind_new_source(const char *name, grecs_locus_t *loc);
extern void grecs_bind_close_sources(void);

static struct grecs_value *stmtlist_to_value(struct grecs_node *node);


/* Line 268 of yacc.c  */
#line 110 "bind-gram.c"

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
   enum grecs_bind_tokentype {
     BIND_STRING = 258,
     BIND_IDENT = 259,
     BIND_CONTROLS = 260
   };
#endif
/* Tokens.  */
#define BIND_STRING 258
#define BIND_IDENT 259
#define BIND_CONTROLS 260




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 295 of yacc.c  */
#line 42 "bind-gram.y"

	char *string;
	grecs_value_t svalue, *pvalue;
	struct grecs_list *list;
	struct grecs_node *node;
	grecs_locus_t locus;
	struct { struct grecs_node *head, *tail; } node_list;



/* Line 295 of yacc.c  */
#line 175 "bind-gram.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define grecs_bind_stype YYSTYPE /* obsolescent; will be withdrawn */
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
# define grecs_bind_ltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */


/* Line 345 of yacc.c  */
#line 200 "bind-gram.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 grecs_bind_type_uint8;
#else
typedef unsigned char grecs_bind_type_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 grecs_bind_type_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char grecs_bind_type_int8;
#else
typedef short int grecs_bind_type_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 grecs_bind_type_uint16;
#else
typedef unsigned short int grecs_bind_type_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 grecs_bind_type_int16;
#else
typedef short int grecs_bind_type_int16;
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
YYID (int grecs_bind_i)
#else
static int
YYID (grecs_bind_i)
    int grecs_bind_i;
#endif
{
  return grecs_bind_i;
}
#endif

#if ! defined grecs_bind_overflow || YYERROR_VERBOSE

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
#endif /* ! defined grecs_bind_overflow || YYERROR_VERBOSE */


#if (! defined grecs_bind_overflow \
     && (! defined __cplusplus \
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union grecs_bind_alloc
{
  grecs_bind_type_int16 grecs_bind_ss_alloc;
  YYSTYPE grecs_bind_vs_alloc;
  YYLTYPE grecs_bind_ls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union grecs_bind_alloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (grecs_bind_type_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
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
	YYSIZE_T grecs_bind_newbytes;						\
	YYCOPY (&grecs_bind_ptr->Stack_alloc, Stack, grecs_bind_size);			\
	Stack = &grecs_bind_ptr->Stack_alloc;					\
	grecs_bind_newbytes = grecs_bind_stacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	grecs_bind_ptr += grecs_bind_newbytes / sizeof (*grecs_bind_ptr);				\
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
          YYSIZE_T grecs_bind_i;                         \
          for (grecs_bind_i = 0; grecs_bind_i < (Count); grecs_bind_i++)   \
            (Dst)[grecs_bind_i] = (Src)[grecs_bind_i];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  20
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   43

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  10
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  14
/* YYNRULES -- Number of rules.  */
#define YYNRULES  25
/* YYNRULES -- Number of states.  */
#define YYNSTATES  40

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   260

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? grecs_bind_translate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const grecs_bind_type_uint8 grecs_bind_translate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     7,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     6,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     8,     2,     9,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const grecs_bind_type_uint8 grecs_bind_prhs[] =
{
       0,     0,     3,     5,     6,     8,    10,    13,    15,    17,
      21,    24,    28,    35,    41,    42,    44,    46,    48,    51,
      53,    55,    57,    60,    62,    65
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const grecs_bind_type_int8 grecs_bind_rhs[] =
{
      11,     0,    -1,    12,    -1,    -1,    13,    -1,    14,    -1,
      13,    14,    -1,    15,    -1,    16,    -1,     4,    18,     6,
      -1,    21,     6,    -1,     7,    21,     6,    -1,     4,    17,
       8,    12,     9,     6,    -1,     5,     8,    22,     9,     6,
      -1,    -1,    18,    -1,    19,    -1,    20,    -1,    19,    20,
      -1,    21,    -1,     3,    -1,     4,    -1,    23,     6,    -1,
      20,    -1,    23,    20,    -1,    23,     8,    13,     9,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const grecs_bind_type_uint8 grecs_bind_rline[] =
{
       0,    61,    61,    71,    74,    80,    84,    96,    97,   100,
     114,   121,   134,   143,   166,   169,   172,   196,   201,   207,
     215,   216,   219,   227,   232,   236
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const grecs_bind_tname[] =
{
  "$end", "error", "$undefined", "BIND_STRING", "BIND_IDENT",
  "BIND_CONTROLS", "';'", "'!'", "'{'", "'}'", "$accept", "input",
  "maybe_stmtlist", "stmtlist", "stmt", "simple", "block", "tag",
  "vallist", "vlist", "value", "string", "ctlsub", "ctllist", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const grecs_bind_type_uint16 grecs_bind_toknum[] =
{
       0,   256,   257,   258,   259,   260,    59,    33,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const grecs_bind_type_uint8 grecs_bind_r1[] =
{
       0,    10,    11,    12,    12,    13,    13,    14,    14,    15,
      15,    15,    16,    16,    17,    17,    18,    19,    19,    20,
      21,    21,    22,    23,    23,    23
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const grecs_bind_type_uint8 grecs_bind_r2[] =
{
       0,     2,     1,     0,     1,     1,     2,     1,     1,     3,
       2,     3,     6,     5,     0,     1,     1,     1,     2,     1,
       1,     1,     2,     1,     2,     4
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const grecs_bind_type_uint8 grecs_bind_defact[] =
{
       3,    20,    14,     0,     0,     0,     2,     4,     5,     7,
       8,     0,    21,     0,    15,    16,    17,    19,     0,     0,
       1,     6,    10,     3,     9,    18,    23,     0,     0,    11,
       0,     0,    22,     0,    24,     0,    13,     0,    12,    25
};

/* YYDEFGOTO[NTERM-NUM].  */
static const grecs_bind_type_int8 grecs_bind_defgoto[] =
{
      -1,     5,     6,     7,     8,     9,    10,    13,    14,    15,
      16,    11,    27,    28
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -14
static const grecs_bind_type_int8 grecs_bind_pact[] =
{
      21,   -14,    28,    -4,    32,     9,   -14,    21,   -14,   -14,
     -14,     5,   -14,     8,     7,    32,   -14,   -14,    32,    14,
     -14,   -14,   -14,    21,   -14,   -14,   -14,    13,    15,   -14,
      20,    27,   -14,    21,   -14,    31,   -14,     3,   -14,   -14
};

/* YYPGOTO[NTERM-NUM].  */
static const grecs_bind_type_int8 grecs_bind_pgoto[] =
{
     -14,   -14,    16,    10,    -7,   -14,   -14,   -14,   -14,   -14,
     -13,    -1,   -14,   -14
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -22
static const grecs_bind_type_int8 grecs_bind_table[] =
{
      21,    17,    25,    19,    18,    26,     1,     2,     3,    20,
       4,    22,    39,    24,    17,    34,    23,    17,     1,    12,
      29,    32,    31,    33,     1,     2,     3,    17,     4,    35,
      21,     1,    12,    36,   -21,     1,    12,    38,     0,    30,
       0,     0,     0,    37
};

#define grecs_bind_pact_value_is_default(grecs_bind_state) \
  ((grecs_bind_state) == (-14))

#define grecs_bind_table_value_is_error(grecs_bind_table_value) \
  YYID (0)

static const grecs_bind_type_int8 grecs_bind_check[] =
{
       7,     2,    15,     4,     8,    18,     3,     4,     5,     0,
       7,     6,     9,     6,    15,    28,     8,    18,     3,     4,
       6,     6,     9,     8,     3,     4,     5,    28,     7,     9,
      37,     3,     4,     6,     6,     3,     4,     6,    -1,    23,
      -1,    -1,    -1,    33
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const grecs_bind_type_uint8 grecs_bind_stos[] =
{
       0,     3,     4,     5,     7,    11,    12,    13,    14,    15,
      16,    21,     4,    17,    18,    19,    20,    21,     8,    21,
       0,    14,     6,     8,     6,    20,    20,    22,    23,     6,
      12,     9,     6,     8,    20,     9,     6,    13,     6,     9
};

#define grecs_bind_errok		(grecs_bind_errstatus = 0)
#define grecs_bind_clearin	(grecs_bind_char = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto grecs_bind_acceptlab
#define YYABORT		goto grecs_bind_abortlab
#define YYERROR		goto grecs_bind_errorlab


/* Like YYERROR except do call grecs_bind_error.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto grecs_bind_errlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!grecs_bind_errstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (grecs_bind_char == YYEMPTY)                                        \
    {                                                           \
      grecs_bind_char = (Token);                                         \
      grecs_bind_lval = (Value);                                         \
      YYPOPSTACK (grecs_bind_len);                                       \
      grecs_bind_state = *grecs_bind_ssp;                                         \
      goto grecs_bind_backup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      grecs_bind_error (YY_("syntax error: cannot back up")); \
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


/* YYLEX -- calling `grecs_bind_lex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX grecs_bind_lex (YYLEX_PARAM)
#else
# define YYLEX grecs_bind_lex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (grecs_bind_debug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (grecs_bind_debug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      grecs_bind__symbol_print (stderr,						  \
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
grecs_bind__symbol_value_print (FILE *grecs_bind_output, int grecs_bind_type, YYSTYPE const * const grecs_bind_valuep, YYLTYPE const * const grecs_bind_locationp)
#else
static void
grecs_bind__symbol_value_print (grecs_bind_output, grecs_bind_type, grecs_bind_valuep, grecs_bind_locationp)
    FILE *grecs_bind_output;
    int grecs_bind_type;
    YYSTYPE const * const grecs_bind_valuep;
    YYLTYPE const * const grecs_bind_locationp;
#endif
{
  FILE *grecs_bind_o = grecs_bind_output;
  YYUSE (grecs_bind_o);
  if (!grecs_bind_valuep)
    return;
  YYUSE (grecs_bind_locationp);
# ifdef YYPRINT
  if (grecs_bind_type < YYNTOKENS)
    YYPRINT (grecs_bind_output, grecs_bind_toknum[grecs_bind_type], *grecs_bind_valuep);
# else
  YYUSE (grecs_bind_output);
# endif
  switch (grecs_bind_type)
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
grecs_bind__symbol_print (FILE *grecs_bind_output, int grecs_bind_type, YYSTYPE const * const grecs_bind_valuep, YYLTYPE const * const grecs_bind_locationp)
#else
static void
grecs_bind__symbol_print (grecs_bind_output, grecs_bind_type, grecs_bind_valuep, grecs_bind_locationp)
    FILE *grecs_bind_output;
    int grecs_bind_type;
    YYSTYPE const * const grecs_bind_valuep;
    YYLTYPE const * const grecs_bind_locationp;
#endif
{
  if (grecs_bind_type < YYNTOKENS)
    YYFPRINTF (grecs_bind_output, "token %s (", grecs_bind_tname[grecs_bind_type]);
  else
    YYFPRINTF (grecs_bind_output, "nterm %s (", grecs_bind_tname[grecs_bind_type]);

  YY_LOCATION_PRINT (grecs_bind_output, *grecs_bind_locationp);
  YYFPRINTF (grecs_bind_output, ": ");
  grecs_bind__symbol_value_print (grecs_bind_output, grecs_bind_type, grecs_bind_valuep, grecs_bind_locationp);
  YYFPRINTF (grecs_bind_output, ")");
}

/*------------------------------------------------------------------.
| grecs_bind__stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
grecs_bind__stack_print (grecs_bind_type_int16 *grecs_bind_bottom, grecs_bind_type_int16 *grecs_bind_top)
#else
static void
grecs_bind__stack_print (grecs_bind_bottom, grecs_bind_top)
    grecs_bind_type_int16 *grecs_bind_bottom;
    grecs_bind_type_int16 *grecs_bind_top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; grecs_bind_bottom <= grecs_bind_top; grecs_bind_bottom++)
    {
      int grecs_bind_bot = *grecs_bind_bottom;
      YYFPRINTF (stderr, " %d", grecs_bind_bot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (grecs_bind_debug)							\
    grecs_bind__stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
grecs_bind__reduce_print (YYSTYPE *grecs_bind_vsp, YYLTYPE *grecs_bind_lsp, int grecs_bind_rule)
#else
static void
grecs_bind__reduce_print (grecs_bind_vsp, grecs_bind_lsp, grecs_bind_rule)
    YYSTYPE *grecs_bind_vsp;
    YYLTYPE *grecs_bind_lsp;
    int grecs_bind_rule;
#endif
{
  int grecs_bind_nrhs = grecs_bind_r2[grecs_bind_rule];
  int grecs_bind_i;
  unsigned long int grecs_bind_lno = grecs_bind_rline[grecs_bind_rule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     grecs_bind_rule - 1, grecs_bind_lno);
  /* The symbols being reduced.  */
  for (grecs_bind_i = 0; grecs_bind_i < grecs_bind_nrhs; grecs_bind_i++)
    {
      YYFPRINTF (stderr, "   $%d = ", grecs_bind_i + 1);
      grecs_bind__symbol_print (stderr, grecs_bind_rhs[grecs_bind_prhs[grecs_bind_rule] + grecs_bind_i],
		       &(grecs_bind_vsp[(grecs_bind_i + 1) - (grecs_bind_nrhs)])
		       , &(grecs_bind_lsp[(grecs_bind_i + 1) - (grecs_bind_nrhs)])		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (grecs_bind_debug)				\
    grecs_bind__reduce_print (grecs_bind_vsp, grecs_bind_lsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int grecs_bind_debug;
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

# ifndef grecs_bind_strlen
#  if defined __GLIBC__ && defined _STRING_H
#   define grecs_bind_strlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
grecs_bind_strlen (const char *grecs_bind_str)
#else
static YYSIZE_T
grecs_bind_strlen (grecs_bind_str)
    const char *grecs_bind_str;
#endif
{
  YYSIZE_T grecs_bind_len;
  for (grecs_bind_len = 0; grecs_bind_str[grecs_bind_len]; grecs_bind_len++)
    continue;
  return grecs_bind_len;
}
#  endif
# endif

# ifndef grecs_bind_stpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define grecs_bind_stpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
grecs_bind_stpcpy (char *grecs_bind_dest, const char *grecs_bind_src)
#else
static char *
grecs_bind_stpcpy (grecs_bind_dest, grecs_bind_src)
    char *grecs_bind_dest;
    const char *grecs_bind_src;
#endif
{
  char *grecs_bind_d = grecs_bind_dest;
  const char *grecs_bind_s = grecs_bind_src;

  while ((*grecs_bind_d++ = *grecs_bind_s++) != '\0')
    continue;

  return grecs_bind_d - 1;
}
#  endif
# endif

# ifndef grecs_bind_tnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for grecs_bind_error.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from grecs_bind_tname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
grecs_bind_tnamerr (char *grecs_bind_res, const char *grecs_bind_str)
{
  if (*grecs_bind_str == '"')
    {
      YYSIZE_T grecs_bind_n = 0;
      char const *grecs_bind_p = grecs_bind_str;

      for (;;)
	switch (*++grecs_bind_p)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++grecs_bind_p != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (grecs_bind_res)
	      grecs_bind_res[grecs_bind_n] = *grecs_bind_p;
	    grecs_bind_n++;
	    break;

	  case '"':
	    if (grecs_bind_res)
	      grecs_bind_res[grecs_bind_n] = '\0';
	    return grecs_bind_n;
	  }
    do_not_strip_quotes: ;
    }

  if (! grecs_bind_res)
    return grecs_bind_strlen (grecs_bind_str);

  return grecs_bind_stpcpy (grecs_bind_res, grecs_bind_str) - grecs_bind_res;
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
grecs_bind_syntax_error (YYSIZE_T *grecs_bind_msg_alloc, char **grecs_bind_msg,
                grecs_bind_type_int16 *grecs_bind_ssp, int grecs_bind_token)
{
  YYSIZE_T grecs_bind_size0 = grecs_bind_tnamerr (YY_NULL, grecs_bind_tname[grecs_bind_token]);
  YYSIZE_T grecs_bind_size = grecs_bind_size0;
  YYSIZE_T grecs_bind_size1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *grecs_bind_format = YY_NULL;
  /* Arguments of grecs_bind_format. */
  char const *grecs_bind_arg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int grecs_bind_count = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in grecs_bind_char) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated grecs_bind_char.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (grecs_bind_token != YYEMPTY)
    {
      int grecs_bind_n = grecs_bind_pact[*grecs_bind_ssp];
      grecs_bind_arg[grecs_bind_count++] = grecs_bind_tname[grecs_bind_token];
      if (!grecs_bind_pact_value_is_default (grecs_bind_n))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int grecs_bind_xbegin = grecs_bind_n < 0 ? -grecs_bind_n : 0;
          /* Stay within bounds of both grecs_bind_check and grecs_bind_tname.  */
          int grecs_bind_checklim = YYLAST - grecs_bind_n + 1;
          int grecs_bind_xend = grecs_bind_checklim < YYNTOKENS ? grecs_bind_checklim : YYNTOKENS;
          int grecs_bind_x;

          for (grecs_bind_x = grecs_bind_xbegin; grecs_bind_x < grecs_bind_xend; ++grecs_bind_x)
            if (grecs_bind_check[grecs_bind_x + grecs_bind_n] == grecs_bind_x && grecs_bind_x != YYTERROR
                && !grecs_bind_table_value_is_error (grecs_bind_table[grecs_bind_x + grecs_bind_n]))
              {
                if (grecs_bind_count == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    grecs_bind_count = 1;
                    grecs_bind_size = grecs_bind_size0;
                    break;
                  }
                grecs_bind_arg[grecs_bind_count++] = grecs_bind_tname[grecs_bind_x];
                grecs_bind_size1 = grecs_bind_size + grecs_bind_tnamerr (YY_NULL, grecs_bind_tname[grecs_bind_x]);
                if (! (grecs_bind_size <= grecs_bind_size1
                       && grecs_bind_size1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                grecs_bind_size = grecs_bind_size1;
              }
        }
    }

  switch (grecs_bind_count)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        grecs_bind_format = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  grecs_bind_size1 = grecs_bind_size + grecs_bind_strlen (grecs_bind_format);
  if (! (grecs_bind_size <= grecs_bind_size1 && grecs_bind_size1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  grecs_bind_size = grecs_bind_size1;

  if (*grecs_bind_msg_alloc < grecs_bind_size)
    {
      *grecs_bind_msg_alloc = 2 * grecs_bind_size;
      if (! (grecs_bind_size <= *grecs_bind_msg_alloc
             && *grecs_bind_msg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *grecs_bind_msg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *grecs_bind_p = *grecs_bind_msg;
    int grecs_bind_i = 0;
    while ((*grecs_bind_p = *grecs_bind_format) != '\0')
      if (*grecs_bind_p == '%' && grecs_bind_format[1] == 's' && grecs_bind_i < grecs_bind_count)
        {
          grecs_bind_p += grecs_bind_tnamerr (grecs_bind_p, grecs_bind_arg[grecs_bind_i++]);
          grecs_bind_format += 2;
        }
      else
        {
          grecs_bind_p++;
          grecs_bind_format++;
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
grecs_bind_destruct (const char *grecs_bind_msg, int grecs_bind_type, YYSTYPE *grecs_bind_valuep, YYLTYPE *grecs_bind_locationp)
#else
static void
grecs_bind_destruct (grecs_bind_msg, grecs_bind_type, grecs_bind_valuep, grecs_bind_locationp)
    const char *grecs_bind_msg;
    int grecs_bind_type;
    YYSTYPE *grecs_bind_valuep;
    YYLTYPE *grecs_bind_locationp;
#endif
{
  YYUSE (grecs_bind_valuep);
  YYUSE (grecs_bind_locationp);

  if (!grecs_bind_msg)
    grecs_bind_msg = "Deleting";
  YY_SYMBOL_PRINT (grecs_bind_msg, grecs_bind_type, grecs_bind_valuep, grecs_bind_locationp);

  switch (grecs_bind_type)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int grecs_bind_parse (void *YYPARSE_PARAM);
#else
int grecs_bind_parse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int grecs_bind_parse (void);
#else
int grecs_bind_parse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int grecs_bind_char;

/* The semantic value of the lookahead symbol.  */
YYSTYPE grecs_bind_lval;

/* Location data for the lookahead symbol.  */
YYLTYPE grecs_bind_lloc;

/* Number of syntax errors so far.  */
int grecs_bind_nerrs;


/*----------.
| grecs_bind_parse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
grecs_bind_parse (void *YYPARSE_PARAM)
#else
int
grecs_bind_parse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
grecs_bind_parse (void)
#else
int
grecs_bind_parse ()

#endif
#endif
{
    int grecs_bind_state;
    /* Number of tokens to shift before error messages enabled.  */
    int grecs_bind_errstatus;

    /* The stacks and their tools:
       `grecs_bind_ss': related to states.
       `grecs_bind_vs': related to semantic values.
       `grecs_bind_ls': related to locations.

       Refer to the stacks through separate pointers, to allow grecs_bind_overflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    grecs_bind_type_int16 grecs_bind_ssa[YYINITDEPTH];
    grecs_bind_type_int16 *grecs_bind_ss;
    grecs_bind_type_int16 *grecs_bind_ssp;

    /* The semantic value stack.  */
    YYSTYPE grecs_bind_vsa[YYINITDEPTH];
    YYSTYPE *grecs_bind_vs;
    YYSTYPE *grecs_bind_vsp;

    /* The location stack.  */
    YYLTYPE grecs_bind_lsa[YYINITDEPTH];
    YYLTYPE *grecs_bind_ls;
    YYLTYPE *grecs_bind_lsp;

    /* The locations where the error started and ended.  */
    YYLTYPE grecs_bind_error_range[3];

    YYSIZE_T grecs_bind_stacksize;

  int grecs_bind_n;
  int grecs_bind_result;
  /* Lookahead token as an internal (translated) token number.  */
  int grecs_bind_token;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE grecs_bind_val;
  YYLTYPE grecs_bind_loc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char grecs_bind_msgbuf[128];
  char *grecs_bind_msg = grecs_bind_msgbuf;
  YYSIZE_T grecs_bind_msg_alloc = sizeof grecs_bind_msgbuf;
#endif

#define YYPOPSTACK(N)   (grecs_bind_vsp -= (N), grecs_bind_ssp -= (N), grecs_bind_lsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int grecs_bind_len = 0;

  grecs_bind_token = 0;
  grecs_bind_ss = grecs_bind_ssa;
  grecs_bind_vs = grecs_bind_vsa;
  grecs_bind_ls = grecs_bind_lsa;
  grecs_bind_stacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  grecs_bind_state = 0;
  grecs_bind_errstatus = 0;
  grecs_bind_nerrs = 0;
  grecs_bind_char = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  grecs_bind_ssp = grecs_bind_ss;
  grecs_bind_vsp = grecs_bind_vs;
  grecs_bind_lsp = grecs_bind_ls;

#if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  grecs_bind_lloc.first_line   = grecs_bind_lloc.last_line   = 1;
  grecs_bind_lloc.first_column = grecs_bind_lloc.last_column = 1;
#endif

  goto grecs_bind_setstate;

/*------------------------------------------------------------.
| grecs_bind_newstate -- Push a new state, which is found in grecs_bind_state.  |
`------------------------------------------------------------*/
 grecs_bind_newstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  grecs_bind_ssp++;

 grecs_bind_setstate:
  *grecs_bind_ssp = grecs_bind_state;

  if (grecs_bind_ss + grecs_bind_stacksize - 1 <= grecs_bind_ssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T grecs_bind_size = grecs_bind_ssp - grecs_bind_ss + 1;

#ifdef grecs_bind_overflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *grecs_bind_vs1 = grecs_bind_vs;
	grecs_bind_type_int16 *grecs_bind_ss1 = grecs_bind_ss;
	YYLTYPE *grecs_bind_ls1 = grecs_bind_ls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if grecs_bind_overflow is a macro.  */
	grecs_bind_overflow (YY_("memory exhausted"),
		    &grecs_bind_ss1, grecs_bind_size * sizeof (*grecs_bind_ssp),
		    &grecs_bind_vs1, grecs_bind_size * sizeof (*grecs_bind_vsp),
		    &grecs_bind_ls1, grecs_bind_size * sizeof (*grecs_bind_lsp),
		    &grecs_bind_stacksize);

	grecs_bind_ls = grecs_bind_ls1;
	grecs_bind_ss = grecs_bind_ss1;
	grecs_bind_vs = grecs_bind_vs1;
      }
#else /* no grecs_bind_overflow */
# ifndef YYSTACK_RELOCATE
      goto grecs_bind_exhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= grecs_bind_stacksize)
	goto grecs_bind_exhaustedlab;
      grecs_bind_stacksize *= 2;
      if (YYMAXDEPTH < grecs_bind_stacksize)
	grecs_bind_stacksize = YYMAXDEPTH;

      {
	grecs_bind_type_int16 *grecs_bind_ss1 = grecs_bind_ss;
	union grecs_bind_alloc *grecs_bind_ptr =
	  (union grecs_bind_alloc *) YYSTACK_ALLOC (YYSTACK_BYTES (grecs_bind_stacksize));
	if (! grecs_bind_ptr)
	  goto grecs_bind_exhaustedlab;
	YYSTACK_RELOCATE (grecs_bind_ss_alloc, grecs_bind_ss);
	YYSTACK_RELOCATE (grecs_bind_vs_alloc, grecs_bind_vs);
	YYSTACK_RELOCATE (grecs_bind_ls_alloc, grecs_bind_ls);
#  undef YYSTACK_RELOCATE
	if (grecs_bind_ss1 != grecs_bind_ssa)
	  YYSTACK_FREE (grecs_bind_ss1);
      }
# endif
#endif /* no grecs_bind_overflow */

      grecs_bind_ssp = grecs_bind_ss + grecs_bind_size - 1;
      grecs_bind_vsp = grecs_bind_vs + grecs_bind_size - 1;
      grecs_bind_lsp = grecs_bind_ls + grecs_bind_size - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) grecs_bind_stacksize));

      if (grecs_bind_ss + grecs_bind_stacksize - 1 <= grecs_bind_ssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", grecs_bind_state));

  if (grecs_bind_state == YYFINAL)
    YYACCEPT;

  goto grecs_bind_backup;

/*-----------.
| grecs_bind_backup.  |
`-----------*/
grecs_bind_backup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  grecs_bind_n = grecs_bind_pact[grecs_bind_state];
  if (grecs_bind_pact_value_is_default (grecs_bind_n))
    goto grecs_bind_default;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (grecs_bind_char == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      grecs_bind_char = YYLEX;
    }

  if (grecs_bind_char <= YYEOF)
    {
      grecs_bind_char = grecs_bind_token = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      grecs_bind_token = YYTRANSLATE (grecs_bind_char);
      YY_SYMBOL_PRINT ("Next token is", grecs_bind_token, &grecs_bind_lval, &grecs_bind_lloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  grecs_bind_n += grecs_bind_token;
  if (grecs_bind_n < 0 || YYLAST < grecs_bind_n || grecs_bind_check[grecs_bind_n] != grecs_bind_token)
    goto grecs_bind_default;
  grecs_bind_n = grecs_bind_table[grecs_bind_n];
  if (grecs_bind_n <= 0)
    {
      if (grecs_bind_table_value_is_error (grecs_bind_n))
        goto grecs_bind_errlab;
      grecs_bind_n = -grecs_bind_n;
      goto grecs_bind_reduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (grecs_bind_errstatus)
    grecs_bind_errstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", grecs_bind_token, &grecs_bind_lval, &grecs_bind_lloc);

  /* Discard the shifted token.  */
  grecs_bind_char = YYEMPTY;

  grecs_bind_state = grecs_bind_n;
  *++grecs_bind_vsp = grecs_bind_lval;
  *++grecs_bind_lsp = grecs_bind_lloc;
  goto grecs_bind_newstate;


/*-----------------------------------------------------------.
| grecs_bind_default -- do the default action for the current state.  |
`-----------------------------------------------------------*/
grecs_bind_default:
  grecs_bind_n = grecs_bind_defact[grecs_bind_state];
  if (grecs_bind_n == 0)
    goto grecs_bind_errlab;
  goto grecs_bind_reduce;


/*-----------------------------.
| grecs_bind_reduce -- Do a reduction.  |
`-----------------------------*/
grecs_bind_reduce:
  /* grecs_bind_n is the number of a rule to reduce with.  */
  grecs_bind_len = grecs_bind_r2[grecs_bind_n];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  grecs_bind_val = grecs_bind_vsp[1-grecs_bind_len];

  /* Default location.  */
  YYLLOC_DEFAULT (grecs_bind_loc, (grecs_bind_lsp - grecs_bind_len), grecs_bind_len);
  YY_REDUCE_PRINT (grecs_bind_n);
  switch (grecs_bind_n)
    {
        case 2:

/* Line 1810 of yacc.c  */
#line 62 "bind-gram.y"
    {
		  parse_tree = grecs_node_create(grecs_node_root, &(grecs_bind_lsp[(1) - (1)]));
		  parse_tree->v.texttab = grecs_text_table();
		  grecs_node_bind(parse_tree, (grecs_bind_vsp[(1) - (1)].node), 1);
	  }
    break;

  case 3:

/* Line 1810 of yacc.c  */
#line 71 "bind-gram.y"
    {
		  (grecs_bind_val.node) = NULL;
	  }
    break;

  case 4:

/* Line 1810 of yacc.c  */
#line 75 "bind-gram.y"
    {
		  (grecs_bind_val.node) = (grecs_bind_vsp[(1) - (1)].node_list).head;
	  }
    break;

  case 5:

/* Line 1810 of yacc.c  */
#line 81 "bind-gram.y"
    {
		  (grecs_bind_val.node_list).head = (grecs_bind_val.node_list).tail = (grecs_bind_vsp[(1) - (1)].node);
	  }
    break;

  case 6:

/* Line 1810 of yacc.c  */
#line 85 "bind-gram.y"
    {
		  if ((grecs_bind_vsp[(2) - (2)].node)) {
			  if (!(grecs_bind_vsp[(1) - (2)].node_list).head)
				  (grecs_bind_vsp[(1) - (2)].node_list).head = (grecs_bind_vsp[(1) - (2)].node_list).tail = (grecs_bind_vsp[(2) - (2)].node);
			  else
				  grecs_node_bind((grecs_bind_vsp[(1) - (2)].node_list).tail, (grecs_bind_vsp[(2) - (2)].node), 0);
		  }
		  (grecs_bind_val.node_list) = (grecs_bind_vsp[(1) - (2)].node_list);
	  }
    break;

  case 9:

/* Line 1810 of yacc.c  */
#line 101 "bind-gram.y"
    {
		  if (strcmp((grecs_bind_vsp[(1) - (3)].string), "include") == 0 &&
		      (grecs_bind_vsp[(2) - (3)].pvalue)->type == GRECS_TYPE_STRING) {
			  grecs_bind_new_source((grecs_bind_vsp[(2) - (3)].pvalue)->v.string, &(grecs_bind_lsp[(1) - (3)]));
			  (grecs_bind_val.node) = NULL;
		  } else {
			  (grecs_bind_val.node) = grecs_node_create_points(grecs_node_stmt,
							(grecs_bind_lsp[(1) - (3)]).beg, (grecs_bind_lsp[(2) - (3)]).end);
			  (grecs_bind_val.node)->ident = (grecs_bind_vsp[(1) - (3)].string);
			  (grecs_bind_val.node)->idloc = (grecs_bind_lsp[(1) - (3)]);
			  (grecs_bind_val.node)->v.value = (grecs_bind_vsp[(2) - (3)].pvalue);
		  }
	  }
    break;

  case 10:

/* Line 1810 of yacc.c  */
#line 115 "bind-gram.y"
    {
		  (grecs_bind_val.node) = grecs_node_create(grecs_node_stmt, &(grecs_bind_lsp[(1) - (2)]));
		  (grecs_bind_val.node)->ident = (grecs_bind_vsp[(1) - (2)].string);
		  (grecs_bind_val.node)->idloc = (grecs_bind_lsp[(1) - (2)]);
		  (grecs_bind_val.node)->v.value = NULL;
	  }
    break;

  case 11:

/* Line 1810 of yacc.c  */
#line 122 "bind-gram.y"
    {
		  (grecs_bind_val.node) = grecs_node_create_points(grecs_node_stmt,
						(grecs_bind_lsp[(1) - (3)]).beg, (grecs_bind_lsp[(2) - (3)]).end);
		  (grecs_bind_val.node)->ident = grecs_strdup("!");
		  (grecs_bind_val.node)->idloc = (grecs_bind_lsp[(1) - (3)]);
		  (grecs_bind_val.node)->v.value = grecs_malloc(sizeof((grecs_bind_val.node)->v.value[0]));
		  (grecs_bind_val.node)->v.value->type = GRECS_TYPE_STRING;
		  (grecs_bind_val.node)->v.value->locus = (grecs_bind_lsp[(2) - (3)]);
		  (grecs_bind_val.node)->v.value->v.string = (grecs_bind_vsp[(2) - (3)].string);
	  }
    break;

  case 12:

/* Line 1810 of yacc.c  */
#line 135 "bind-gram.y"
    {
		  (grecs_bind_val.node) = grecs_node_create_points(grecs_node_block,
						(grecs_bind_lsp[(1) - (6)]).beg, (grecs_bind_lsp[(5) - (6)]).end);
		  (grecs_bind_val.node)->ident = (grecs_bind_vsp[(1) - (6)].string);
		  (grecs_bind_val.node)->idloc = (grecs_bind_lsp[(1) - (6)]);
		  (grecs_bind_val.node)->v.value = (grecs_bind_vsp[(2) - (6)].pvalue);
		  grecs_node_bind((grecs_bind_val.node), (grecs_bind_vsp[(4) - (6)].node), 1);
	  }
    break;

  case 13:

/* Line 1810 of yacc.c  */
#line 156 "bind-gram.y"
    {
		  (grecs_bind_val.node) = grecs_node_create_points(grecs_node_stmt,
						(grecs_bind_lsp[(1) - (5)]).beg, (grecs_bind_lsp[(4) - (5)]).end);
		  (grecs_bind_val.node)->ident = (grecs_bind_vsp[(1) - (5)].string);
		  (grecs_bind_val.node)->idloc = (grecs_bind_lsp[(1) - (5)]);
		  (grecs_bind_val.node)->v.value = grecs_value_ptr_from_static(&(grecs_bind_vsp[(3) - (5)].svalue));
	  }
    break;

  case 14:

/* Line 1810 of yacc.c  */
#line 166 "bind-gram.y"
    {
		  (grecs_bind_val.pvalue) = NULL;
	  }
    break;

  case 16:

/* Line 1810 of yacc.c  */
#line 173 "bind-gram.y"
    {
		  size_t n;
		  
		  if ((n = grecs_list_size((grecs_bind_vsp[(1) - (1)].list))) == 1) {
			  (grecs_bind_val.pvalue) = grecs_list_index((grecs_bind_vsp[(1) - (1)].list), 0);
		  } else {
			  size_t i;
			  struct grecs_list_entry *ep;
		
			  (grecs_bind_val.pvalue) = grecs_malloc(sizeof((grecs_bind_val.pvalue)[0]));
			  (grecs_bind_val.pvalue)->type = GRECS_TYPE_ARRAY;
			  (grecs_bind_val.pvalue)->locus = (grecs_bind_lsp[(1) - (1)]);
			  (grecs_bind_val.pvalue)->v.arg.c = n;
			  (grecs_bind_val.pvalue)->v.arg.v = grecs_calloc(n,
						     sizeof((grecs_bind_val.pvalue)->v.arg.v[0]));
			  for (i = 0, ep = (grecs_bind_vsp[(1) - (1)].list)->head; ep; i++, ep = ep->next)
				  (grecs_bind_val.pvalue)->v.arg.v[i] = ep->data;
		  }
		  (grecs_bind_vsp[(1) - (1)].list)->free_entry = NULL;
		  grecs_list_free((grecs_bind_vsp[(1) - (1)].list));	      
	  }
    break;

  case 17:

/* Line 1810 of yacc.c  */
#line 197 "bind-gram.y"
    {
		  (grecs_bind_val.list) = grecs_value_list_create();
		  grecs_list_append((grecs_bind_val.list), grecs_value_ptr_from_static(&(grecs_bind_vsp[(1) - (1)].svalue)));
	  }
    break;

  case 18:

/* Line 1810 of yacc.c  */
#line 202 "bind-gram.y"
    {
		  grecs_list_append((grecs_bind_vsp[(1) - (2)].list), grecs_value_ptr_from_static(&(grecs_bind_vsp[(2) - (2)].svalue)));
	  }
    break;

  case 19:

/* Line 1810 of yacc.c  */
#line 208 "bind-gram.y"
    {
		  (grecs_bind_val.svalue).type = GRECS_TYPE_STRING;
		  (grecs_bind_val.svalue).locus = (grecs_bind_lsp[(1) - (1)]);
		  (grecs_bind_val.svalue).v.string = (grecs_bind_vsp[(1) - (1)].string);
	  }
    break;

  case 22:

/* Line 1810 of yacc.c  */
#line 220 "bind-gram.y"
    {
		  (grecs_bind_val.svalue).type = GRECS_TYPE_LIST;
		  (grecs_bind_val.svalue).locus = (grecs_bind_lsp[(1) - (2)]);
		  (grecs_bind_val.svalue).v.list = (grecs_bind_vsp[(1) - (2)].list);
	  }
    break;

  case 23:

/* Line 1810 of yacc.c  */
#line 228 "bind-gram.y"
    {
		  (grecs_bind_val.list) = grecs_value_list_create();
		  grecs_list_append((grecs_bind_val.list), grecs_value_ptr_from_static(&(grecs_bind_vsp[(1) - (1)].svalue)));
	  }
    break;

  case 24:

/* Line 1810 of yacc.c  */
#line 233 "bind-gram.y"
    {
		  grecs_list_append((grecs_bind_vsp[(1) - (2)].list), grecs_value_ptr_from_static(&(grecs_bind_vsp[(2) - (2)].svalue)));
	  }
    break;

  case 25:

/* Line 1810 of yacc.c  */
#line 237 "bind-gram.y"
    {
		  grecs_list_append((grecs_bind_vsp[(1) - (4)].list), stmtlist_to_value((grecs_bind_vsp[(3) - (4)].node_list).head));
		  /* FIXME: Free $3 */
	  }
    break;



/* Line 1810 of yacc.c  */
#line 1728 "bind-gram.c"
      default: break;
    }
  /* User semantic actions sometimes alter grecs_bind_char, and that requires
     that grecs_bind_token be updated with the new translation.  We take the
     approach of translating immediately before every use of grecs_bind_token.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering grecs_bind_char or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", grecs_bind_r1[grecs_bind_n], &grecs_bind_val, &grecs_bind_loc);

  YYPOPSTACK (grecs_bind_len);
  grecs_bind_len = 0;
  YY_STACK_PRINT (grecs_bind_ss, grecs_bind_ssp);

  *++grecs_bind_vsp = grecs_bind_val;
  *++grecs_bind_lsp = grecs_bind_loc;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  grecs_bind_n = grecs_bind_r1[grecs_bind_n];

  grecs_bind_state = grecs_bind_pgoto[grecs_bind_n - YYNTOKENS] + *grecs_bind_ssp;
  if (0 <= grecs_bind_state && grecs_bind_state <= YYLAST && grecs_bind_check[grecs_bind_state] == *grecs_bind_ssp)
    grecs_bind_state = grecs_bind_table[grecs_bind_state];
  else
    grecs_bind_state = grecs_bind_defgoto[grecs_bind_n - YYNTOKENS];

  goto grecs_bind_newstate;


/*------------------------------------.
| grecs_bind_errlab -- here on detecting error |
`------------------------------------*/
grecs_bind_errlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  grecs_bind_token = grecs_bind_char == YYEMPTY ? YYEMPTY : YYTRANSLATE (grecs_bind_char);

  /* If not already recovering from an error, report this error.  */
  if (!grecs_bind_errstatus)
    {
      ++grecs_bind_nerrs;
#if ! YYERROR_VERBOSE
      grecs_bind_error (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR grecs_bind_syntax_error (&grecs_bind_msg_alloc, &grecs_bind_msg, \
                                        grecs_bind_ssp, grecs_bind_token)
      {
        char const *grecs_bind_msgp = YY_("syntax error");
        int grecs_bind_syntax_error_status;
        grecs_bind_syntax_error_status = YYSYNTAX_ERROR;
        if (grecs_bind_syntax_error_status == 0)
          grecs_bind_msgp = grecs_bind_msg;
        else if (grecs_bind_syntax_error_status == 1)
          {
            if (grecs_bind_msg != grecs_bind_msgbuf)
              YYSTACK_FREE (grecs_bind_msg);
            grecs_bind_msg = (char *) YYSTACK_ALLOC (grecs_bind_msg_alloc);
            if (!grecs_bind_msg)
              {
                grecs_bind_msg = grecs_bind_msgbuf;
                grecs_bind_msg_alloc = sizeof grecs_bind_msgbuf;
                grecs_bind_syntax_error_status = 2;
              }
            else
              {
                grecs_bind_syntax_error_status = YYSYNTAX_ERROR;
                grecs_bind_msgp = grecs_bind_msg;
              }
          }
        grecs_bind_error (grecs_bind_msgp);
        if (grecs_bind_syntax_error_status == 2)
          goto grecs_bind_exhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  grecs_bind_error_range[1] = grecs_bind_lloc;

  if (grecs_bind_errstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (grecs_bind_char <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (grecs_bind_char == YYEOF)
	    YYABORT;
	}
      else
	{
	  grecs_bind_destruct ("Error: discarding",
		      grecs_bind_token, &grecs_bind_lval, &grecs_bind_lloc);
	  grecs_bind_char = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto grecs_bind_errlab1;


/*---------------------------------------------------.
| grecs_bind_errorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
grecs_bind_errorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label grecs_bind_errorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto grecs_bind_errorlab;

  grecs_bind_error_range[1] = grecs_bind_lsp[1-grecs_bind_len];
  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (grecs_bind_len);
  grecs_bind_len = 0;
  YY_STACK_PRINT (grecs_bind_ss, grecs_bind_ssp);
  grecs_bind_state = *grecs_bind_ssp;
  goto grecs_bind_errlab1;


/*-------------------------------------------------------------.
| grecs_bind_errlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
grecs_bind_errlab1:
  grecs_bind_errstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      grecs_bind_n = grecs_bind_pact[grecs_bind_state];
      if (!grecs_bind_pact_value_is_default (grecs_bind_n))
	{
	  grecs_bind_n += YYTERROR;
	  if (0 <= grecs_bind_n && grecs_bind_n <= YYLAST && grecs_bind_check[grecs_bind_n] == YYTERROR)
	    {
	      grecs_bind_n = grecs_bind_table[grecs_bind_n];
	      if (0 < grecs_bind_n)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (grecs_bind_ssp == grecs_bind_ss)
	YYABORT;

      grecs_bind_error_range[1] = *grecs_bind_lsp;
      grecs_bind_destruct ("Error: popping",
		  grecs_bind_stos[grecs_bind_state], grecs_bind_vsp, grecs_bind_lsp);
      YYPOPSTACK (1);
      grecs_bind_state = *grecs_bind_ssp;
      YY_STACK_PRINT (grecs_bind_ss, grecs_bind_ssp);
    }

  *++grecs_bind_vsp = grecs_bind_lval;

  grecs_bind_error_range[2] = grecs_bind_lloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (grecs_bind_loc, grecs_bind_error_range, 2);
  *++grecs_bind_lsp = grecs_bind_loc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", grecs_bind_stos[grecs_bind_n], grecs_bind_vsp, grecs_bind_lsp);

  grecs_bind_state = grecs_bind_n;
  goto grecs_bind_newstate;


/*-------------------------------------.
| grecs_bind_acceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
grecs_bind_acceptlab:
  grecs_bind_result = 0;
  goto grecs_bind_return;

/*-----------------------------------.
| grecs_bind_abortlab -- YYABORT comes here.  |
`-----------------------------------*/
grecs_bind_abortlab:
  grecs_bind_result = 1;
  goto grecs_bind_return;

#if !defined grecs_bind_overflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| grecs_bind_exhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
grecs_bind_exhaustedlab:
  grecs_bind_error (YY_("memory exhausted"));
  grecs_bind_result = 2;
  /* Fall through.  */
#endif

grecs_bind_return:
  if (grecs_bind_char != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      grecs_bind_token = YYTRANSLATE (grecs_bind_char);
      grecs_bind_destruct ("Cleanup: discarding lookahead",
                  grecs_bind_token, &grecs_bind_lval, &grecs_bind_lloc);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (grecs_bind_len);
  YY_STACK_PRINT (grecs_bind_ss, grecs_bind_ssp);
  while (grecs_bind_ssp != grecs_bind_ss)
    {
      grecs_bind_destruct ("Cleanup: popping",
		  grecs_bind_stos[*grecs_bind_ssp], grecs_bind_vsp, grecs_bind_lsp);
      YYPOPSTACK (1);
    }
#ifndef grecs_bind_overflow
  if (grecs_bind_ss != grecs_bind_ssa)
    YYSTACK_FREE (grecs_bind_ss);
#endif
#if YYERROR_VERBOSE
  if (grecs_bind_msg != grecs_bind_msgbuf)
    YYSTACK_FREE (grecs_bind_msg);
#endif
  /* Make sure YYID is used.  */
  return YYID (grecs_bind_result);
}



/* Line 2071 of yacc.c  */
#line 243 "bind-gram.y"


int
grecs_bind_error(char const *s)
{
	grecs_error(&grecs_bind_lloc, 0, "%s", s);
	return 0;
}

struct grecs_node *
grecs_bind_parser(const char *name, int traceflags)
{
	int rc;

	if (grecs_bind_new_source(name, NULL))
		return NULL;
	grecs_bind__flex_debug = traceflags & GRECS_TRACE_LEX;
	grecs_bind_debug = traceflags & GRECS_TRACE_GRAM;
	parse_tree = NULL;
	grecs_line_acc_create();
	rc = grecs_bind_parse();
	grecs_bind_close_sources();
	if (grecs_error_count)
		rc = 1;
	grecs_line_acc_free();
	if (rc) {
		grecs_tree_free(parse_tree);
		parse_tree = NULL;
	}
	return parse_tree;
}

static struct grecs_value *
node_to_value(struct grecs_node *node, struct grecs_txtacc *acc)
{
	struct grecs_value *val = grecs_malloc(sizeof(*val));
	int delim = 0;
	
	if (node->ident) {
		grecs_txtacc_grow(acc, node->ident, strlen(node->ident));
		delim = 1;
	}
	
	if (node->v.value) {
		if (delim)
			grecs_txtacc_grow_char(acc, ' ');
		grecs_txtacc_format_value(node->v.value, 0, acc);
		delim = 1;
	}
	if (node->type == grecs_node_stmt) {
		val->type = GRECS_TYPE_STRING;
		grecs_txtacc_grow_char(acc, 0);
		val->v.string = grecs_txtacc_finish(acc, 1);
	} else if (node->down) {
		struct grecs_list *list = grecs_value_list_create();
		struct grecs_node *np;

		if (delim)
			grecs_txtacc_grow_char(acc, ' ');
		for (np = node->down; np; np = np->next)
			grecs_list_append(list, node_to_value(np, acc));
		val->type = GRECS_TYPE_LIST;
		val->v.list = list;
	}
	return val;
}

static struct grecs_value *
stmtlist_to_value(struct grecs_node *node)
{
	struct grecs_txtacc *acc = grecs_txtacc_create();
	struct grecs_value *val;
	struct grecs_node parent;

	memset(&parent, 0, sizeof(parent));
	parent.type = grecs_node_block;
	parent.down = node;
	val = node_to_value(&parent, acc);
	grecs_txtacc_free(acc);
	return val;
}

