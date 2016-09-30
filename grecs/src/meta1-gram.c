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

/* All symbols defined below should begin with grecs_meta1_ or YY, to avoid
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
#line 1 "meta1-gram.y"

/* MeTA1 configuration parser for Grecs.
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
#include <errno.h>
#include <string.h>
#include "grecs.h"

int grecs_meta1_lex(void);
int grecs_meta1_error(char const *s);
	
static struct grecs_node *parse_tree;
extern int grecs_meta1__flex_debug;
extern void grecs_meta1_set_in(FILE *);


/* Line 268 of yacc.c  */
#line 104 "meta1-gram.c"

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
   enum grecs_meta1_tokentype {
     META1_STRING = 258,
     META1_IDENT = 259
   };
#endif
/* Tokens.  */
#define META1_STRING 258
#define META1_IDENT 259




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 295 of yacc.c  */
#line 36 "meta1-gram.y"

	char *string;
	grecs_value_t svalue, *pvalue;
	struct grecs_list *list;
	struct { struct grecs_node *head, *tail; } node_list;
	struct grecs_node *node;



/* Line 295 of yacc.c  */
#line 166 "meta1-gram.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define grecs_meta1_stype YYSTYPE /* obsolescent; will be withdrawn */
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
# define grecs_meta1_ltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */


/* Line 345 of yacc.c  */
#line 191 "meta1-gram.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 grecs_meta1_type_uint8;
#else
typedef unsigned char grecs_meta1_type_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 grecs_meta1_type_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char grecs_meta1_type_int8;
#else
typedef short int grecs_meta1_type_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 grecs_meta1_type_uint16;
#else
typedef unsigned short int grecs_meta1_type_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 grecs_meta1_type_int16;
#else
typedef short int grecs_meta1_type_int16;
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
YYID (int grecs_meta1_i)
#else
static int
YYID (grecs_meta1_i)
    int grecs_meta1_i;
#endif
{
  return grecs_meta1_i;
}
#endif

#if ! defined grecs_meta1_overflow || YYERROR_VERBOSE

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
#endif /* ! defined grecs_meta1_overflow || YYERROR_VERBOSE */


#if (! defined grecs_meta1_overflow \
     && (! defined __cplusplus \
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union grecs_meta1_alloc
{
  grecs_meta1_type_int16 grecs_meta1_ss_alloc;
  YYSTYPE grecs_meta1_vs_alloc;
  YYLTYPE grecs_meta1_ls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union grecs_meta1_alloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (grecs_meta1_type_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
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
	YYSIZE_T grecs_meta1_newbytes;						\
	YYCOPY (&grecs_meta1_ptr->Stack_alloc, Stack, grecs_meta1_size);			\
	Stack = &grecs_meta1_ptr->Stack_alloc;					\
	grecs_meta1_newbytes = grecs_meta1_stacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	grecs_meta1_ptr += grecs_meta1_newbytes / sizeof (*grecs_meta1_ptr);				\
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
          YYSIZE_T grecs_meta1_i;                         \
          for (grecs_meta1_i = 0; grecs_meta1_i < (Count); grecs_meta1_i++)   \
            (Dst)[grecs_meta1_i] = (Src)[grecs_meta1_i];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   23

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  10
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  15
/* YYNRULES -- Number of rules.  */
#define YYNRULES  25
/* YYNRULES -- Number of states.  */
#define YYNSTATES  34

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   259

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? grecs_meta1_translate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const grecs_meta1_type_uint8 grecs_meta1_translate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     8,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     9,
       2,     5,     2,     2,     2,     2,     2,     2,     2,     2,
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
static const grecs_meta1_type_uint8 grecs_meta1_prhs[] =
{
       0,     0,     3,     5,     6,     8,    10,    13,    15,    17,
      22,    29,    30,    32,    34,    36,    38,    40,    42,    44,
      47,    51,    56,    58,    62,    63
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const grecs_meta1_type_int8 grecs_meta1_rhs[] =
{
      11,     0,    -1,    12,    -1,    -1,    13,    -1,    14,    -1,
      13,    14,    -1,    15,    -1,    16,    -1,     4,     5,    18,
      24,    -1,     4,    17,     6,    13,     7,    24,    -1,    -1,
       4,    -1,    19,    -1,    22,    -1,     4,    -1,    20,    -1,
      21,    -1,     3,    -1,    21,     3,    -1,     6,    23,     7,
      -1,     6,    23,     8,     7,    -1,    18,    -1,    23,     8,
      18,    -1,    -1,     9,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const grecs_meta1_type_uint8 grecs_meta1_rline[] =
{
       0,    53,    53,    63,    66,    72,    76,    82,    83,    86,
      96,   108,   111,   119,   126,   135,   136,   139,   153,   158,
     165,   169,   175,   180,   187,   188
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const grecs_meta1_tname[] =
{
  "$end", "error", "$undefined", "META1_STRING", "META1_IDENT", "'='",
  "'{'", "'}'", "','", "';'", "$accept", "input", "maybe_stmtlist",
  "stmtlist", "stmt", "simple", "block", "tag", "value", "string", "slist",
  "slist0", "list", "values", "opt_sc", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const grecs_meta1_type_uint16 grecs_meta1_toknum[] =
{
       0,   256,   257,   258,   259,    61,   123,   125,    44,    59
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const grecs_meta1_type_uint8 grecs_meta1_r1[] =
{
       0,    10,    11,    12,    12,    13,    13,    14,    14,    15,
      16,    17,    17,    18,    18,    19,    19,    20,    21,    21,
      22,    22,    23,    23,    24,    24
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const grecs_meta1_type_uint8 grecs_meta1_r2[] =
{
       0,     2,     1,     0,     1,     1,     2,     1,     1,     4,
       6,     0,     1,     1,     1,     1,     1,     1,     1,     2,
       3,     4,     1,     3,     0,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const grecs_meta1_type_uint8 grecs_meta1_defact[] =
{
       3,    11,     0,     2,     4,     5,     7,     8,    12,     0,
       0,     1,     6,    18,    15,     0,    24,    13,    16,    17,
      14,     0,    22,     0,    25,     9,    19,     0,    20,     0,
      24,    21,    23,    10
};

/* YYDEFGOTO[NTERM-NUM].  */
static const grecs_meta1_type_int8 grecs_meta1_defgoto[] =
{
      -1,     2,     3,     4,     5,     6,     7,    10,    16,    17,
      18,    19,    20,    23,    25
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -15
static const grecs_meta1_type_int8 grecs_meta1_pact[] =
{
       0,     9,    11,   -15,     0,   -15,   -15,   -15,   -15,     4,
      13,   -15,   -15,   -15,   -15,     4,     7,   -15,   -15,    17,
     -15,     0,   -15,    10,   -15,   -15,   -15,     5,   -15,    -1,
       7,   -15,   -15,   -15
};

/* YYPGOTO[NTERM-NUM].  */
static const grecs_meta1_type_int8 grecs_meta1_pgoto[] =
{
     -15,   -15,   -15,     1,    -4,   -15,   -15,   -15,   -14,   -15,
     -15,   -15,   -15,   -15,    -9
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const grecs_meta1_type_uint8 grecs_meta1_table[] =
{
      12,    22,    13,    14,     1,    15,    31,    13,    14,     1,
      15,    11,    30,     8,     9,    32,    24,    28,    29,    21,
      26,    33,    27,    12
};

#define grecs_meta1_pact_value_is_default(grecs_meta1_state) \
  ((grecs_meta1_state) == (-15))

#define grecs_meta1_table_value_is_error(grecs_meta1_table_value) \
  YYID (0)

static const grecs_meta1_type_uint8 grecs_meta1_check[] =
{
       4,    15,     3,     4,     4,     6,     7,     3,     4,     4,
       6,     0,     7,     4,     5,    29,     9,     7,     8,     6,
       3,    30,    21,    27
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const grecs_meta1_type_uint8 grecs_meta1_stos[] =
{
       0,     4,    11,    12,    13,    14,    15,    16,     4,     5,
      17,     0,    14,     3,     4,     6,    18,    19,    20,    21,
      22,     6,    18,    23,     9,    24,     3,    13,     7,     8,
       7,     7,    18,    24
};

#define grecs_meta1_errok		(grecs_meta1_errstatus = 0)
#define grecs_meta1_clearin	(grecs_meta1_char = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto grecs_meta1_acceptlab
#define YYABORT		goto grecs_meta1_abortlab
#define YYERROR		goto grecs_meta1_errorlab


/* Like YYERROR except do call grecs_meta1_error.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto grecs_meta1_errlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!grecs_meta1_errstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (grecs_meta1_char == YYEMPTY)                                        \
    {                                                           \
      grecs_meta1_char = (Token);                                         \
      grecs_meta1_lval = (Value);                                         \
      YYPOPSTACK (grecs_meta1_len);                                       \
      grecs_meta1_state = *grecs_meta1_ssp;                                         \
      goto grecs_meta1_backup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      grecs_meta1_error (YY_("syntax error: cannot back up")); \
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


/* YYLEX -- calling `grecs_meta1_lex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX grecs_meta1_lex (YYLEX_PARAM)
#else
# define YYLEX grecs_meta1_lex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (grecs_meta1_debug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (grecs_meta1_debug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      grecs_meta1__symbol_print (stderr,						  \
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
grecs_meta1__symbol_value_print (FILE *grecs_meta1_output, int grecs_meta1_type, YYSTYPE const * const grecs_meta1_valuep, YYLTYPE const * const grecs_meta1_locationp)
#else
static void
grecs_meta1__symbol_value_print (grecs_meta1_output, grecs_meta1_type, grecs_meta1_valuep, grecs_meta1_locationp)
    FILE *grecs_meta1_output;
    int grecs_meta1_type;
    YYSTYPE const * const grecs_meta1_valuep;
    YYLTYPE const * const grecs_meta1_locationp;
#endif
{
  FILE *grecs_meta1_o = grecs_meta1_output;
  YYUSE (grecs_meta1_o);
  if (!grecs_meta1_valuep)
    return;
  YYUSE (grecs_meta1_locationp);
# ifdef YYPRINT
  if (grecs_meta1_type < YYNTOKENS)
    YYPRINT (grecs_meta1_output, grecs_meta1_toknum[grecs_meta1_type], *grecs_meta1_valuep);
# else
  YYUSE (grecs_meta1_output);
# endif
  switch (grecs_meta1_type)
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
grecs_meta1__symbol_print (FILE *grecs_meta1_output, int grecs_meta1_type, YYSTYPE const * const grecs_meta1_valuep, YYLTYPE const * const grecs_meta1_locationp)
#else
static void
grecs_meta1__symbol_print (grecs_meta1_output, grecs_meta1_type, grecs_meta1_valuep, grecs_meta1_locationp)
    FILE *grecs_meta1_output;
    int grecs_meta1_type;
    YYSTYPE const * const grecs_meta1_valuep;
    YYLTYPE const * const grecs_meta1_locationp;
#endif
{
  if (grecs_meta1_type < YYNTOKENS)
    YYFPRINTF (grecs_meta1_output, "token %s (", grecs_meta1_tname[grecs_meta1_type]);
  else
    YYFPRINTF (grecs_meta1_output, "nterm %s (", grecs_meta1_tname[grecs_meta1_type]);

  YY_LOCATION_PRINT (grecs_meta1_output, *grecs_meta1_locationp);
  YYFPRINTF (grecs_meta1_output, ": ");
  grecs_meta1__symbol_value_print (grecs_meta1_output, grecs_meta1_type, grecs_meta1_valuep, grecs_meta1_locationp);
  YYFPRINTF (grecs_meta1_output, ")");
}

/*------------------------------------------------------------------.
| grecs_meta1__stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
grecs_meta1__stack_print (grecs_meta1_type_int16 *grecs_meta1_bottom, grecs_meta1_type_int16 *grecs_meta1_top)
#else
static void
grecs_meta1__stack_print (grecs_meta1_bottom, grecs_meta1_top)
    grecs_meta1_type_int16 *grecs_meta1_bottom;
    grecs_meta1_type_int16 *grecs_meta1_top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; grecs_meta1_bottom <= grecs_meta1_top; grecs_meta1_bottom++)
    {
      int grecs_meta1_bot = *grecs_meta1_bottom;
      YYFPRINTF (stderr, " %d", grecs_meta1_bot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (grecs_meta1_debug)							\
    grecs_meta1__stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
grecs_meta1__reduce_print (YYSTYPE *grecs_meta1_vsp, YYLTYPE *grecs_meta1_lsp, int grecs_meta1_rule)
#else
static void
grecs_meta1__reduce_print (grecs_meta1_vsp, grecs_meta1_lsp, grecs_meta1_rule)
    YYSTYPE *grecs_meta1_vsp;
    YYLTYPE *grecs_meta1_lsp;
    int grecs_meta1_rule;
#endif
{
  int grecs_meta1_nrhs = grecs_meta1_r2[grecs_meta1_rule];
  int grecs_meta1_i;
  unsigned long int grecs_meta1_lno = grecs_meta1_rline[grecs_meta1_rule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     grecs_meta1_rule - 1, grecs_meta1_lno);
  /* The symbols being reduced.  */
  for (grecs_meta1_i = 0; grecs_meta1_i < grecs_meta1_nrhs; grecs_meta1_i++)
    {
      YYFPRINTF (stderr, "   $%d = ", grecs_meta1_i + 1);
      grecs_meta1__symbol_print (stderr, grecs_meta1_rhs[grecs_meta1_prhs[grecs_meta1_rule] + grecs_meta1_i],
		       &(grecs_meta1_vsp[(grecs_meta1_i + 1) - (grecs_meta1_nrhs)])
		       , &(grecs_meta1_lsp[(grecs_meta1_i + 1) - (grecs_meta1_nrhs)])		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (grecs_meta1_debug)				\
    grecs_meta1__reduce_print (grecs_meta1_vsp, grecs_meta1_lsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int grecs_meta1_debug;
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

# ifndef grecs_meta1_strlen
#  if defined __GLIBC__ && defined _STRING_H
#   define grecs_meta1_strlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
grecs_meta1_strlen (const char *grecs_meta1_str)
#else
static YYSIZE_T
grecs_meta1_strlen (grecs_meta1_str)
    const char *grecs_meta1_str;
#endif
{
  YYSIZE_T grecs_meta1_len;
  for (grecs_meta1_len = 0; grecs_meta1_str[grecs_meta1_len]; grecs_meta1_len++)
    continue;
  return grecs_meta1_len;
}
#  endif
# endif

# ifndef grecs_meta1_stpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define grecs_meta1_stpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
grecs_meta1_stpcpy (char *grecs_meta1_dest, const char *grecs_meta1_src)
#else
static char *
grecs_meta1_stpcpy (grecs_meta1_dest, grecs_meta1_src)
    char *grecs_meta1_dest;
    const char *grecs_meta1_src;
#endif
{
  char *grecs_meta1_d = grecs_meta1_dest;
  const char *grecs_meta1_s = grecs_meta1_src;

  while ((*grecs_meta1_d++ = *grecs_meta1_s++) != '\0')
    continue;

  return grecs_meta1_d - 1;
}
#  endif
# endif

# ifndef grecs_meta1_tnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for grecs_meta1_error.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from grecs_meta1_tname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
grecs_meta1_tnamerr (char *grecs_meta1_res, const char *grecs_meta1_str)
{
  if (*grecs_meta1_str == '"')
    {
      YYSIZE_T grecs_meta1_n = 0;
      char const *grecs_meta1_p = grecs_meta1_str;

      for (;;)
	switch (*++grecs_meta1_p)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++grecs_meta1_p != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (grecs_meta1_res)
	      grecs_meta1_res[grecs_meta1_n] = *grecs_meta1_p;
	    grecs_meta1_n++;
	    break;

	  case '"':
	    if (grecs_meta1_res)
	      grecs_meta1_res[grecs_meta1_n] = '\0';
	    return grecs_meta1_n;
	  }
    do_not_strip_quotes: ;
    }

  if (! grecs_meta1_res)
    return grecs_meta1_strlen (grecs_meta1_str);

  return grecs_meta1_stpcpy (grecs_meta1_res, grecs_meta1_str) - grecs_meta1_res;
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
grecs_meta1_syntax_error (YYSIZE_T *grecs_meta1_msg_alloc, char **grecs_meta1_msg,
                grecs_meta1_type_int16 *grecs_meta1_ssp, int grecs_meta1_token)
{
  YYSIZE_T grecs_meta1_size0 = grecs_meta1_tnamerr (YY_NULL, grecs_meta1_tname[grecs_meta1_token]);
  YYSIZE_T grecs_meta1_size = grecs_meta1_size0;
  YYSIZE_T grecs_meta1_size1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *grecs_meta1_format = YY_NULL;
  /* Arguments of grecs_meta1_format. */
  char const *grecs_meta1_arg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int grecs_meta1_count = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in grecs_meta1_char) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated grecs_meta1_char.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (grecs_meta1_token != YYEMPTY)
    {
      int grecs_meta1_n = grecs_meta1_pact[*grecs_meta1_ssp];
      grecs_meta1_arg[grecs_meta1_count++] = grecs_meta1_tname[grecs_meta1_token];
      if (!grecs_meta1_pact_value_is_default (grecs_meta1_n))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int grecs_meta1_xbegin = grecs_meta1_n < 0 ? -grecs_meta1_n : 0;
          /* Stay within bounds of both grecs_meta1_check and grecs_meta1_tname.  */
          int grecs_meta1_checklim = YYLAST - grecs_meta1_n + 1;
          int grecs_meta1_xend = grecs_meta1_checklim < YYNTOKENS ? grecs_meta1_checklim : YYNTOKENS;
          int grecs_meta1_x;

          for (grecs_meta1_x = grecs_meta1_xbegin; grecs_meta1_x < grecs_meta1_xend; ++grecs_meta1_x)
            if (grecs_meta1_check[grecs_meta1_x + grecs_meta1_n] == grecs_meta1_x && grecs_meta1_x != YYTERROR
                && !grecs_meta1_table_value_is_error (grecs_meta1_table[grecs_meta1_x + grecs_meta1_n]))
              {
                if (grecs_meta1_count == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    grecs_meta1_count = 1;
                    grecs_meta1_size = grecs_meta1_size0;
                    break;
                  }
                grecs_meta1_arg[grecs_meta1_count++] = grecs_meta1_tname[grecs_meta1_x];
                grecs_meta1_size1 = grecs_meta1_size + grecs_meta1_tnamerr (YY_NULL, grecs_meta1_tname[grecs_meta1_x]);
                if (! (grecs_meta1_size <= grecs_meta1_size1
                       && grecs_meta1_size1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                grecs_meta1_size = grecs_meta1_size1;
              }
        }
    }

  switch (grecs_meta1_count)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        grecs_meta1_format = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  grecs_meta1_size1 = grecs_meta1_size + grecs_meta1_strlen (grecs_meta1_format);
  if (! (grecs_meta1_size <= grecs_meta1_size1 && grecs_meta1_size1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  grecs_meta1_size = grecs_meta1_size1;

  if (*grecs_meta1_msg_alloc < grecs_meta1_size)
    {
      *grecs_meta1_msg_alloc = 2 * grecs_meta1_size;
      if (! (grecs_meta1_size <= *grecs_meta1_msg_alloc
             && *grecs_meta1_msg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *grecs_meta1_msg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *grecs_meta1_p = *grecs_meta1_msg;
    int grecs_meta1_i = 0;
    while ((*grecs_meta1_p = *grecs_meta1_format) != '\0')
      if (*grecs_meta1_p == '%' && grecs_meta1_format[1] == 's' && grecs_meta1_i < grecs_meta1_count)
        {
          grecs_meta1_p += grecs_meta1_tnamerr (grecs_meta1_p, grecs_meta1_arg[grecs_meta1_i++]);
          grecs_meta1_format += 2;
        }
      else
        {
          grecs_meta1_p++;
          grecs_meta1_format++;
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
grecs_meta1_destruct (const char *grecs_meta1_msg, int grecs_meta1_type, YYSTYPE *grecs_meta1_valuep, YYLTYPE *grecs_meta1_locationp)
#else
static void
grecs_meta1_destruct (grecs_meta1_msg, grecs_meta1_type, grecs_meta1_valuep, grecs_meta1_locationp)
    const char *grecs_meta1_msg;
    int grecs_meta1_type;
    YYSTYPE *grecs_meta1_valuep;
    YYLTYPE *grecs_meta1_locationp;
#endif
{
  YYUSE (grecs_meta1_valuep);
  YYUSE (grecs_meta1_locationp);

  if (!grecs_meta1_msg)
    grecs_meta1_msg = "Deleting";
  YY_SYMBOL_PRINT (grecs_meta1_msg, grecs_meta1_type, grecs_meta1_valuep, grecs_meta1_locationp);

  switch (grecs_meta1_type)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int grecs_meta1_parse (void *YYPARSE_PARAM);
#else
int grecs_meta1_parse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int grecs_meta1_parse (void);
#else
int grecs_meta1_parse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int grecs_meta1_char;

/* The semantic value of the lookahead symbol.  */
YYSTYPE grecs_meta1_lval;

/* Location data for the lookahead symbol.  */
YYLTYPE grecs_meta1_lloc;

/* Number of syntax errors so far.  */
int grecs_meta1_nerrs;


/*----------.
| grecs_meta1_parse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
grecs_meta1_parse (void *YYPARSE_PARAM)
#else
int
grecs_meta1_parse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
grecs_meta1_parse (void)
#else
int
grecs_meta1_parse ()

#endif
#endif
{
    int grecs_meta1_state;
    /* Number of tokens to shift before error messages enabled.  */
    int grecs_meta1_errstatus;

    /* The stacks and their tools:
       `grecs_meta1_ss': related to states.
       `grecs_meta1_vs': related to semantic values.
       `grecs_meta1_ls': related to locations.

       Refer to the stacks through separate pointers, to allow grecs_meta1_overflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    grecs_meta1_type_int16 grecs_meta1_ssa[YYINITDEPTH];
    grecs_meta1_type_int16 *grecs_meta1_ss;
    grecs_meta1_type_int16 *grecs_meta1_ssp;

    /* The semantic value stack.  */
    YYSTYPE grecs_meta1_vsa[YYINITDEPTH];
    YYSTYPE *grecs_meta1_vs;
    YYSTYPE *grecs_meta1_vsp;

    /* The location stack.  */
    YYLTYPE grecs_meta1_lsa[YYINITDEPTH];
    YYLTYPE *grecs_meta1_ls;
    YYLTYPE *grecs_meta1_lsp;

    /* The locations where the error started and ended.  */
    YYLTYPE grecs_meta1_error_range[3];

    YYSIZE_T grecs_meta1_stacksize;

  int grecs_meta1_n;
  int grecs_meta1_result;
  /* Lookahead token as an internal (translated) token number.  */
  int grecs_meta1_token;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE grecs_meta1_val;
  YYLTYPE grecs_meta1_loc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char grecs_meta1_msgbuf[128];
  char *grecs_meta1_msg = grecs_meta1_msgbuf;
  YYSIZE_T grecs_meta1_msg_alloc = sizeof grecs_meta1_msgbuf;
#endif

#define YYPOPSTACK(N)   (grecs_meta1_vsp -= (N), grecs_meta1_ssp -= (N), grecs_meta1_lsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int grecs_meta1_len = 0;

  grecs_meta1_token = 0;
  grecs_meta1_ss = grecs_meta1_ssa;
  grecs_meta1_vs = grecs_meta1_vsa;
  grecs_meta1_ls = grecs_meta1_lsa;
  grecs_meta1_stacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  grecs_meta1_state = 0;
  grecs_meta1_errstatus = 0;
  grecs_meta1_nerrs = 0;
  grecs_meta1_char = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  grecs_meta1_ssp = grecs_meta1_ss;
  grecs_meta1_vsp = grecs_meta1_vs;
  grecs_meta1_lsp = grecs_meta1_ls;

#if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  grecs_meta1_lloc.first_line   = grecs_meta1_lloc.last_line   = 1;
  grecs_meta1_lloc.first_column = grecs_meta1_lloc.last_column = 1;
#endif

  goto grecs_meta1_setstate;

/*------------------------------------------------------------.
| grecs_meta1_newstate -- Push a new state, which is found in grecs_meta1_state.  |
`------------------------------------------------------------*/
 grecs_meta1_newstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  grecs_meta1_ssp++;

 grecs_meta1_setstate:
  *grecs_meta1_ssp = grecs_meta1_state;

  if (grecs_meta1_ss + grecs_meta1_stacksize - 1 <= grecs_meta1_ssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T grecs_meta1_size = grecs_meta1_ssp - grecs_meta1_ss + 1;

#ifdef grecs_meta1_overflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *grecs_meta1_vs1 = grecs_meta1_vs;
	grecs_meta1_type_int16 *grecs_meta1_ss1 = grecs_meta1_ss;
	YYLTYPE *grecs_meta1_ls1 = grecs_meta1_ls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if grecs_meta1_overflow is a macro.  */
	grecs_meta1_overflow (YY_("memory exhausted"),
		    &grecs_meta1_ss1, grecs_meta1_size * sizeof (*grecs_meta1_ssp),
		    &grecs_meta1_vs1, grecs_meta1_size * sizeof (*grecs_meta1_vsp),
		    &grecs_meta1_ls1, grecs_meta1_size * sizeof (*grecs_meta1_lsp),
		    &grecs_meta1_stacksize);

	grecs_meta1_ls = grecs_meta1_ls1;
	grecs_meta1_ss = grecs_meta1_ss1;
	grecs_meta1_vs = grecs_meta1_vs1;
      }
#else /* no grecs_meta1_overflow */
# ifndef YYSTACK_RELOCATE
      goto grecs_meta1_exhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= grecs_meta1_stacksize)
	goto grecs_meta1_exhaustedlab;
      grecs_meta1_stacksize *= 2;
      if (YYMAXDEPTH < grecs_meta1_stacksize)
	grecs_meta1_stacksize = YYMAXDEPTH;

      {
	grecs_meta1_type_int16 *grecs_meta1_ss1 = grecs_meta1_ss;
	union grecs_meta1_alloc *grecs_meta1_ptr =
	  (union grecs_meta1_alloc *) YYSTACK_ALLOC (YYSTACK_BYTES (grecs_meta1_stacksize));
	if (! grecs_meta1_ptr)
	  goto grecs_meta1_exhaustedlab;
	YYSTACK_RELOCATE (grecs_meta1_ss_alloc, grecs_meta1_ss);
	YYSTACK_RELOCATE (grecs_meta1_vs_alloc, grecs_meta1_vs);
	YYSTACK_RELOCATE (grecs_meta1_ls_alloc, grecs_meta1_ls);
#  undef YYSTACK_RELOCATE
	if (grecs_meta1_ss1 != grecs_meta1_ssa)
	  YYSTACK_FREE (grecs_meta1_ss1);
      }
# endif
#endif /* no grecs_meta1_overflow */

      grecs_meta1_ssp = grecs_meta1_ss + grecs_meta1_size - 1;
      grecs_meta1_vsp = grecs_meta1_vs + grecs_meta1_size - 1;
      grecs_meta1_lsp = grecs_meta1_ls + grecs_meta1_size - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) grecs_meta1_stacksize));

      if (grecs_meta1_ss + grecs_meta1_stacksize - 1 <= grecs_meta1_ssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", grecs_meta1_state));

  if (grecs_meta1_state == YYFINAL)
    YYACCEPT;

  goto grecs_meta1_backup;

/*-----------.
| grecs_meta1_backup.  |
`-----------*/
grecs_meta1_backup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  grecs_meta1_n = grecs_meta1_pact[grecs_meta1_state];
  if (grecs_meta1_pact_value_is_default (grecs_meta1_n))
    goto grecs_meta1_default;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (grecs_meta1_char == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      grecs_meta1_char = YYLEX;
    }

  if (grecs_meta1_char <= YYEOF)
    {
      grecs_meta1_char = grecs_meta1_token = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      grecs_meta1_token = YYTRANSLATE (grecs_meta1_char);
      YY_SYMBOL_PRINT ("Next token is", grecs_meta1_token, &grecs_meta1_lval, &grecs_meta1_lloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  grecs_meta1_n += grecs_meta1_token;
  if (grecs_meta1_n < 0 || YYLAST < grecs_meta1_n || grecs_meta1_check[grecs_meta1_n] != grecs_meta1_token)
    goto grecs_meta1_default;
  grecs_meta1_n = grecs_meta1_table[grecs_meta1_n];
  if (grecs_meta1_n <= 0)
    {
      if (grecs_meta1_table_value_is_error (grecs_meta1_n))
        goto grecs_meta1_errlab;
      grecs_meta1_n = -grecs_meta1_n;
      goto grecs_meta1_reduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (grecs_meta1_errstatus)
    grecs_meta1_errstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", grecs_meta1_token, &grecs_meta1_lval, &grecs_meta1_lloc);

  /* Discard the shifted token.  */
  grecs_meta1_char = YYEMPTY;

  grecs_meta1_state = grecs_meta1_n;
  *++grecs_meta1_vsp = grecs_meta1_lval;
  *++grecs_meta1_lsp = grecs_meta1_lloc;
  goto grecs_meta1_newstate;


/*-----------------------------------------------------------.
| grecs_meta1_default -- do the default action for the current state.  |
`-----------------------------------------------------------*/
grecs_meta1_default:
  grecs_meta1_n = grecs_meta1_defact[grecs_meta1_state];
  if (grecs_meta1_n == 0)
    goto grecs_meta1_errlab;
  goto grecs_meta1_reduce;


/*-----------------------------.
| grecs_meta1_reduce -- Do a reduction.  |
`-----------------------------*/
grecs_meta1_reduce:
  /* grecs_meta1_n is the number of a rule to reduce with.  */
  grecs_meta1_len = grecs_meta1_r2[grecs_meta1_n];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  grecs_meta1_val = grecs_meta1_vsp[1-grecs_meta1_len];

  /* Default location.  */
  YYLLOC_DEFAULT (grecs_meta1_loc, (grecs_meta1_lsp - grecs_meta1_len), grecs_meta1_len);
  YY_REDUCE_PRINT (grecs_meta1_n);
  switch (grecs_meta1_n)
    {
        case 2:

/* Line 1810 of yacc.c  */
#line 54 "meta1-gram.y"
    {
		  parse_tree = grecs_node_create(grecs_node_root, &(grecs_meta1_lsp[(1) - (1)]));
		  parse_tree->v.texttab = grecs_text_table();
		  grecs_node_bind(parse_tree, (grecs_meta1_vsp[(1) - (1)].node), 1);
	  }
    break;

  case 3:

/* Line 1810 of yacc.c  */
#line 63 "meta1-gram.y"
    {
		  (grecs_meta1_val.node) = NULL;
	  }
    break;

  case 4:

/* Line 1810 of yacc.c  */
#line 67 "meta1-gram.y"
    {
		  (grecs_meta1_val.node) = (grecs_meta1_vsp[(1) - (1)].node_list).head;
	  }
    break;

  case 5:

/* Line 1810 of yacc.c  */
#line 73 "meta1-gram.y"
    {
		  (grecs_meta1_val.node_list).head = (grecs_meta1_val.node_list).tail = (grecs_meta1_vsp[(1) - (1)].node);
	  }
    break;

  case 6:

/* Line 1810 of yacc.c  */
#line 77 "meta1-gram.y"
    {
		  grecs_node_bind((grecs_meta1_vsp[(1) - (2)].node_list).tail, (grecs_meta1_vsp[(2) - (2)].node), 0);
	  }
    break;

  case 9:

/* Line 1810 of yacc.c  */
#line 87 "meta1-gram.y"
    {
		  (grecs_meta1_val.node) = grecs_node_create_points(grecs_node_stmt,
						(grecs_meta1_lsp[(1) - (4)]).beg, (grecs_meta1_lsp[(3) - (4)]).end);
		  (grecs_meta1_val.node)->ident = (grecs_meta1_vsp[(1) - (4)].string);
		  (grecs_meta1_val.node)->idloc = (grecs_meta1_lsp[(1) - (4)]);
		  (grecs_meta1_val.node)->v.value = (grecs_meta1_vsp[(3) - (4)].pvalue);
	  }
    break;

  case 10:

/* Line 1810 of yacc.c  */
#line 97 "meta1-gram.y"
    {
		  (grecs_meta1_val.node) = grecs_node_create_points(grecs_node_block,
						(grecs_meta1_lsp[(1) - (6)]).beg, (grecs_meta1_lsp[(5) - (6)]).end);
		  (grecs_meta1_val.node)->ident = (grecs_meta1_vsp[(1) - (6)].string);
		  (grecs_meta1_val.node)->idloc = (grecs_meta1_lsp[(1) - (6)]);
		  (grecs_meta1_val.node)->v.value = (grecs_meta1_vsp[(2) - (6)].pvalue);
		  grecs_node_bind((grecs_meta1_val.node), (grecs_meta1_vsp[(4) - (6)].node_list).head, 1);
	  }
    break;

  case 11:

/* Line 1810 of yacc.c  */
#line 108 "meta1-gram.y"
    {
		  (grecs_meta1_val.pvalue) = NULL;
	  }
    break;

  case 12:

/* Line 1810 of yacc.c  */
#line 112 "meta1-gram.y"
    {
		  (grecs_meta1_val.pvalue) = grecs_malloc(sizeof((grecs_meta1_val.pvalue)[0]));
		  (grecs_meta1_val.pvalue)->type = GRECS_TYPE_STRING;
		  (grecs_meta1_val.pvalue)->v.string = (grecs_meta1_vsp[(1) - (1)].string);
	  }
    break;

  case 13:

/* Line 1810 of yacc.c  */
#line 120 "meta1-gram.y"
    {
		  (grecs_meta1_val.pvalue) = grecs_malloc(sizeof((grecs_meta1_val.pvalue)[0]));
		  (grecs_meta1_val.pvalue)->type = GRECS_TYPE_STRING;
		  (grecs_meta1_val.pvalue)->locus = (grecs_meta1_lsp[(1) - (1)]);
		  (grecs_meta1_val.pvalue)->v.string = (grecs_meta1_vsp[(1) - (1)].string);
	  }
    break;

  case 14:

/* Line 1810 of yacc.c  */
#line 127 "meta1-gram.y"
    {
		  (grecs_meta1_val.pvalue) = grecs_malloc(sizeof((grecs_meta1_val.pvalue)[0]));
		  (grecs_meta1_val.pvalue)->type = GRECS_TYPE_LIST;
		  (grecs_meta1_val.pvalue)->locus = (grecs_meta1_lsp[(1) - (1)]);
		  (grecs_meta1_val.pvalue)->v.list = (grecs_meta1_vsp[(1) - (1)].list);
	  }
    break;

  case 17:

/* Line 1810 of yacc.c  */
#line 140 "meta1-gram.y"
    {
		  struct grecs_list_entry *ep;
		  
		  grecs_line_begin();
		  for (ep = (grecs_meta1_vsp[(1) - (1)].list)->head; ep; ep = ep->next) {
			  grecs_line_add(ep->data, strlen(ep->data));
			  free(ep->data);
			  ep->data = NULL;
		  }
		  (grecs_meta1_val.string) = grecs_line_finish();
		  grecs_list_free((grecs_meta1_vsp[(1) - (1)].list));
	  }
    break;

  case 18:

/* Line 1810 of yacc.c  */
#line 154 "meta1-gram.y"
    {
		  (grecs_meta1_val.list) = grecs_list_create();
		  grecs_list_append((grecs_meta1_val.list), (grecs_meta1_vsp[(1) - (1)].string));
	  }
    break;

  case 19:

/* Line 1810 of yacc.c  */
#line 159 "meta1-gram.y"
    {
		  grecs_list_append((grecs_meta1_vsp[(1) - (2)].list), (grecs_meta1_vsp[(2) - (2)].string));
		  (grecs_meta1_val.list) = (grecs_meta1_vsp[(1) - (2)].list);
	  }
    break;

  case 20:

/* Line 1810 of yacc.c  */
#line 166 "meta1-gram.y"
    {
		  (grecs_meta1_val.list) = (grecs_meta1_vsp[(2) - (3)].list);
	  }
    break;

  case 21:

/* Line 1810 of yacc.c  */
#line 170 "meta1-gram.y"
    {
		  (grecs_meta1_val.list) = (grecs_meta1_vsp[(2) - (4)].list);
	  }
    break;

  case 22:

/* Line 1810 of yacc.c  */
#line 176 "meta1-gram.y"
    {
		  (grecs_meta1_val.list) = grecs_value_list_create();
		  grecs_list_append((grecs_meta1_val.list), (grecs_meta1_vsp[(1) - (1)].pvalue));
	  }
    break;

  case 23:

/* Line 1810 of yacc.c  */
#line 181 "meta1-gram.y"
    {
		  grecs_list_append((grecs_meta1_vsp[(1) - (3)].list), (grecs_meta1_vsp[(3) - (3)].pvalue));
		  (grecs_meta1_val.list) = (grecs_meta1_vsp[(1) - (3)].list);
	  }
    break;



/* Line 1810 of yacc.c  */
#line 1675 "meta1-gram.c"
      default: break;
    }
  /* User semantic actions sometimes alter grecs_meta1_char, and that requires
     that grecs_meta1_token be updated with the new translation.  We take the
     approach of translating immediately before every use of grecs_meta1_token.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering grecs_meta1_char or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", grecs_meta1_r1[grecs_meta1_n], &grecs_meta1_val, &grecs_meta1_loc);

  YYPOPSTACK (grecs_meta1_len);
  grecs_meta1_len = 0;
  YY_STACK_PRINT (grecs_meta1_ss, grecs_meta1_ssp);

  *++grecs_meta1_vsp = grecs_meta1_val;
  *++grecs_meta1_lsp = grecs_meta1_loc;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  grecs_meta1_n = grecs_meta1_r1[grecs_meta1_n];

  grecs_meta1_state = grecs_meta1_pgoto[grecs_meta1_n - YYNTOKENS] + *grecs_meta1_ssp;
  if (0 <= grecs_meta1_state && grecs_meta1_state <= YYLAST && grecs_meta1_check[grecs_meta1_state] == *grecs_meta1_ssp)
    grecs_meta1_state = grecs_meta1_table[grecs_meta1_state];
  else
    grecs_meta1_state = grecs_meta1_defgoto[grecs_meta1_n - YYNTOKENS];

  goto grecs_meta1_newstate;


/*------------------------------------.
| grecs_meta1_errlab -- here on detecting error |
`------------------------------------*/
grecs_meta1_errlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  grecs_meta1_token = grecs_meta1_char == YYEMPTY ? YYEMPTY : YYTRANSLATE (grecs_meta1_char);

  /* If not already recovering from an error, report this error.  */
  if (!grecs_meta1_errstatus)
    {
      ++grecs_meta1_nerrs;
#if ! YYERROR_VERBOSE
      grecs_meta1_error (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR grecs_meta1_syntax_error (&grecs_meta1_msg_alloc, &grecs_meta1_msg, \
                                        grecs_meta1_ssp, grecs_meta1_token)
      {
        char const *grecs_meta1_msgp = YY_("syntax error");
        int grecs_meta1_syntax_error_status;
        grecs_meta1_syntax_error_status = YYSYNTAX_ERROR;
        if (grecs_meta1_syntax_error_status == 0)
          grecs_meta1_msgp = grecs_meta1_msg;
        else if (grecs_meta1_syntax_error_status == 1)
          {
            if (grecs_meta1_msg != grecs_meta1_msgbuf)
              YYSTACK_FREE (grecs_meta1_msg);
            grecs_meta1_msg = (char *) YYSTACK_ALLOC (grecs_meta1_msg_alloc);
            if (!grecs_meta1_msg)
              {
                grecs_meta1_msg = grecs_meta1_msgbuf;
                grecs_meta1_msg_alloc = sizeof grecs_meta1_msgbuf;
                grecs_meta1_syntax_error_status = 2;
              }
            else
              {
                grecs_meta1_syntax_error_status = YYSYNTAX_ERROR;
                grecs_meta1_msgp = grecs_meta1_msg;
              }
          }
        grecs_meta1_error (grecs_meta1_msgp);
        if (grecs_meta1_syntax_error_status == 2)
          goto grecs_meta1_exhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  grecs_meta1_error_range[1] = grecs_meta1_lloc;

  if (grecs_meta1_errstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (grecs_meta1_char <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (grecs_meta1_char == YYEOF)
	    YYABORT;
	}
      else
	{
	  grecs_meta1_destruct ("Error: discarding",
		      grecs_meta1_token, &grecs_meta1_lval, &grecs_meta1_lloc);
	  grecs_meta1_char = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto grecs_meta1_errlab1;


/*---------------------------------------------------.
| grecs_meta1_errorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
grecs_meta1_errorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label grecs_meta1_errorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto grecs_meta1_errorlab;

  grecs_meta1_error_range[1] = grecs_meta1_lsp[1-grecs_meta1_len];
  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (grecs_meta1_len);
  grecs_meta1_len = 0;
  YY_STACK_PRINT (grecs_meta1_ss, grecs_meta1_ssp);
  grecs_meta1_state = *grecs_meta1_ssp;
  goto grecs_meta1_errlab1;


/*-------------------------------------------------------------.
| grecs_meta1_errlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
grecs_meta1_errlab1:
  grecs_meta1_errstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      grecs_meta1_n = grecs_meta1_pact[grecs_meta1_state];
      if (!grecs_meta1_pact_value_is_default (grecs_meta1_n))
	{
	  grecs_meta1_n += YYTERROR;
	  if (0 <= grecs_meta1_n && grecs_meta1_n <= YYLAST && grecs_meta1_check[grecs_meta1_n] == YYTERROR)
	    {
	      grecs_meta1_n = grecs_meta1_table[grecs_meta1_n];
	      if (0 < grecs_meta1_n)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (grecs_meta1_ssp == grecs_meta1_ss)
	YYABORT;

      grecs_meta1_error_range[1] = *grecs_meta1_lsp;
      grecs_meta1_destruct ("Error: popping",
		  grecs_meta1_stos[grecs_meta1_state], grecs_meta1_vsp, grecs_meta1_lsp);
      YYPOPSTACK (1);
      grecs_meta1_state = *grecs_meta1_ssp;
      YY_STACK_PRINT (grecs_meta1_ss, grecs_meta1_ssp);
    }

  *++grecs_meta1_vsp = grecs_meta1_lval;

  grecs_meta1_error_range[2] = grecs_meta1_lloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (grecs_meta1_loc, grecs_meta1_error_range, 2);
  *++grecs_meta1_lsp = grecs_meta1_loc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", grecs_meta1_stos[grecs_meta1_n], grecs_meta1_vsp, grecs_meta1_lsp);

  grecs_meta1_state = grecs_meta1_n;
  goto grecs_meta1_newstate;


/*-------------------------------------.
| grecs_meta1_acceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
grecs_meta1_acceptlab:
  grecs_meta1_result = 0;
  goto grecs_meta1_return;

/*-----------------------------------.
| grecs_meta1_abortlab -- YYABORT comes here.  |
`-----------------------------------*/
grecs_meta1_abortlab:
  grecs_meta1_result = 1;
  goto grecs_meta1_return;

#if !defined grecs_meta1_overflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| grecs_meta1_exhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
grecs_meta1_exhaustedlab:
  grecs_meta1_error (YY_("memory exhausted"));
  grecs_meta1_result = 2;
  /* Fall through.  */
#endif

grecs_meta1_return:
  if (grecs_meta1_char != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      grecs_meta1_token = YYTRANSLATE (grecs_meta1_char);
      grecs_meta1_destruct ("Cleanup: discarding lookahead",
                  grecs_meta1_token, &grecs_meta1_lval, &grecs_meta1_lloc);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (grecs_meta1_len);
  YY_STACK_PRINT (grecs_meta1_ss, grecs_meta1_ssp);
  while (grecs_meta1_ssp != grecs_meta1_ss)
    {
      grecs_meta1_destruct ("Cleanup: popping",
		  grecs_meta1_stos[*grecs_meta1_ssp], grecs_meta1_vsp, grecs_meta1_lsp);
      YYPOPSTACK (1);
    }
#ifndef grecs_meta1_overflow
  if (grecs_meta1_ss != grecs_meta1_ssa)
    YYSTACK_FREE (grecs_meta1_ss);
#endif
#if YYERROR_VERBOSE
  if (grecs_meta1_msg != grecs_meta1_msgbuf)
    YYSTACK_FREE (grecs_meta1_msg);
#endif
  /* Make sure YYID is used.  */
  return YYID (grecs_meta1_result);
}



/* Line 2071 of yacc.c  */
#line 191 "meta1-gram.y"

int
grecs_meta1_error(char const *s)
{
	grecs_error(&grecs_meta1_lloc, 0, "%s", s);
	return 0;
}

struct grecs_node *
grecs_meta1_parser(const char *name, int traceflags)
{
	int rc;
	FILE *fp;

	fp = fopen(name, "r");
	if (!fp) {
		grecs_error(NULL, errno, _("Cannot open `%s'"), name);
		return NULL;
	}
	grecs_meta1_set_in(fp);
	grecs_meta1__flex_debug = traceflags & GRECS_TRACE_LEX;
	grecs_meta1_debug = traceflags & GRECS_TRACE_GRAM;
	parse_tree = NULL;
	grecs_line_acc_create();
	rc = grecs_meta1_parse();
	fclose(fp);
	if (grecs_error_count)
		rc = 1;
	grecs_line_acc_free();
	if (rc) {
		grecs_tree_free(parse_tree);
		parse_tree = NULL;
	}
	return parse_tree;
}
	

