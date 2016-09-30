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

/* All symbols defined below should begin with grecs_grecs_ or YY, to avoid
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
#line 1 "grecs-gram.y"

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
#include <grecs-gram.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <errno.h>
  
int grecs_grecs_lex(void);
int grecs_grecs_error(char const *s);

static struct grecs_node *parse_tree;


/* Line 268 of yacc.c  */
#line 105 "grecs-gram.c"

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
   enum grecs_grecs_tokentype {
     STRING = 258,
     QSTRING = 259,
     MSTRING = 260,
     IDENT = 261
   };
#endif
/* Tokens.  */
#define STRING 258
#define QSTRING 259
#define MSTRING 260
#define IDENT 261




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 295 of yacc.c  */
#line 37 "grecs-gram.y"

	char *string;
	grecs_value_t svalue, *pvalue;
	struct grecs_list *list;
	struct grecs_node *node;
	grecs_locus_t locus;
	struct { struct grecs_node *head, *tail; } node_list;



/* Line 295 of yacc.c  */
#line 172 "grecs-gram.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define grecs_grecs_stype YYSTYPE /* obsolescent; will be withdrawn */
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
# define grecs_grecs_ltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */


/* Line 345 of yacc.c  */
#line 197 "grecs-gram.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 grecs_grecs_type_uint8;
#else
typedef unsigned char grecs_grecs_type_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 grecs_grecs_type_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char grecs_grecs_type_int8;
#else
typedef short int grecs_grecs_type_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 grecs_grecs_type_uint16;
#else
typedef unsigned short int grecs_grecs_type_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 grecs_grecs_type_int16;
#else
typedef short int grecs_grecs_type_int16;
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
YYID (int grecs_grecs_i)
#else
static int
YYID (grecs_grecs_i)
    int grecs_grecs_i;
#endif
{
  return grecs_grecs_i;
}
#endif

#if ! defined grecs_grecs_overflow || YYERROR_VERBOSE

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
#endif /* ! defined grecs_grecs_overflow || YYERROR_VERBOSE */


#if (! defined grecs_grecs_overflow \
     && (! defined __cplusplus \
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union grecs_grecs_alloc
{
  grecs_grecs_type_int16 grecs_grecs_ss_alloc;
  YYSTYPE grecs_grecs_vs_alloc;
  YYLTYPE grecs_grecs_ls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union grecs_grecs_alloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (grecs_grecs_type_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
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
	YYSIZE_T grecs_grecs_newbytes;						\
	YYCOPY (&grecs_grecs_ptr->Stack_alloc, Stack, grecs_grecs_size);			\
	Stack = &grecs_grecs_ptr->Stack_alloc;					\
	grecs_grecs_newbytes = grecs_grecs_stacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	grecs_grecs_ptr += grecs_grecs_newbytes / sizeof (*grecs_grecs_ptr);				\
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
          YYSIZE_T grecs_grecs_i;                         \
          for (grecs_grecs_i = 0; grecs_grecs_i < (Count); grecs_grecs_i++)   \
            (Dst)[grecs_grecs_i] = (Src)[grecs_grecs_i];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  22
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   39

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  13
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  17
/* YYNRULES -- Number of rules.  */
#define YYNRULES  32
/* YYNRULES -- Number of states.  */
#define YYNSTATES  39

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   261

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? grecs_grecs_translate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const grecs_grecs_type_uint8 grecs_grecs_translate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      10,    11,     2,     2,    12,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     7,
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
       5,     6
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const grecs_grecs_type_uint8 grecs_grecs_prhs[] =
{
       0,     0,     3,     5,     6,     8,    10,    13,    15,    17,
      21,    24,    31,    32,    34,    36,    38,    41,    43,    45,
      47,    49,    51,    53,    55,    57,    60,    63,    67,    72,
      74,    78,    79
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const grecs_grecs_type_int8 grecs_grecs_rhs[] =
{
      14,     0,    -1,    15,    -1,    -1,    16,    -1,    17,    -1,
      16,    17,    -1,    18,    -1,    19,    -1,     6,    21,     7,
      -1,     6,     7,    -1,     6,    20,     8,    16,     9,    29,
      -1,    -1,    21,    -1,    22,    -1,    23,    -1,    22,    23,
      -1,    24,    -1,    27,    -1,     5,    -1,     3,    -1,     6,
      -1,    25,    -1,    26,    -1,     4,    -1,    26,     4,    -1,
      10,    11,    -1,    10,    28,    11,    -1,    10,    28,    12,
      11,    -1,    23,    -1,    28,    12,    23,    -1,    -1,     7,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const grecs_grecs_type_uint8 grecs_grecs_rline[] =
{
       0,    57,    57,    67,    70,    76,    80,    86,    87,    90,
      98,   107,   119,   122,   125,   149,   154,   160,   166,   172,
     180,   181,   182,   185,   200,   205,   212,   216,   220,   226,
     231,   238,   239
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const grecs_grecs_tname[] =
{
  "$end", "error", "$undefined", "STRING", "QSTRING", "MSTRING", "IDENT",
  "';'", "'{'", "'}'", "'('", "')'", "','", "$accept", "input",
  "maybe_stmtlist", "stmtlist", "stmt", "simple", "block", "tag",
  "vallist", "vlist", "value", "string", "slist", "slist0", "list",
  "values", "opt_sc", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const grecs_grecs_type_uint16 grecs_grecs_toknum[] =
{
       0,   256,   257,   258,   259,   260,   261,    59,   123,   125,
      40,    41,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const grecs_grecs_type_uint8 grecs_grecs_r1[] =
{
       0,    13,    14,    15,    15,    16,    16,    17,    17,    18,
      18,    19,    20,    20,    21,    22,    22,    23,    23,    23,
      24,    24,    24,    25,    26,    26,    27,    27,    27,    28,
      28,    29,    29
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const grecs_grecs_type_uint8 grecs_grecs_r2[] =
{
       0,     2,     1,     0,     1,     1,     2,     1,     1,     3,
       2,     6,     0,     1,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     3,     4,     1,
       3,     0,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const grecs_grecs_type_uint8 grecs_grecs_defact[] =
{
       3,    12,     0,     2,     4,     5,     7,     8,    20,    24,
      19,    21,    10,     0,     0,    13,    14,    15,    17,    22,
      23,    18,     1,     6,    26,    29,     0,     0,     9,    16,
      25,    27,     0,     0,    28,    30,    31,    32,    11
};

/* YYDEFGOTO[NTERM-NUM].  */
static const grecs_grecs_type_int8 grecs_grecs_defgoto[] =
{
      -1,     2,     3,     4,     5,     6,     7,    14,    15,    16,
      17,    18,    19,    20,    21,    26,    38
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -13
static const grecs_grecs_type_int8 grecs_grecs_pact[] =
{
       3,    20,    10,   -13,     3,   -13,   -13,   -13,   -13,   -13,
     -13,   -13,   -13,     2,    27,     4,    28,   -13,   -13,   -13,
      14,   -13,   -13,   -13,   -13,   -13,    -9,     3,   -13,   -13,
     -13,   -13,    11,    30,   -13,   -13,    12,   -13,   -13
};

/* YYPGOTO[NTERM-NUM].  */
static const grecs_grecs_type_int8 grecs_grecs_pgoto[] =
{
     -13,   -13,   -13,     1,    -4,   -13,   -13,   -13,   -13,   -13,
     -12,   -13,   -13,   -13,   -13,   -13,   -13
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const grecs_grecs_type_uint8 grecs_grecs_table[] =
{
      23,    25,    31,    32,    29,     8,     9,    10,    11,     1,
      22,    28,    13,    24,     8,     9,    10,    11,    30,    37,
      35,    13,    34,     8,     9,    10,    11,    12,    33,    23,
      13,     8,     9,    10,    11,    27,     1,     0,    13,    36
};

#define grecs_grecs_pact_value_is_default(grecs_grecs_state) \
  ((grecs_grecs_state) == (-13))

#define grecs_grecs_table_value_is_error(grecs_grecs_table_value) \
  YYID (0)

static const grecs_grecs_type_int8 grecs_grecs_check[] =
{
       4,    13,    11,    12,    16,     3,     4,     5,     6,     6,
       0,     7,    10,    11,     3,     4,     5,     6,     4,     7,
      32,    10,    11,     3,     4,     5,     6,     7,    27,    33,
      10,     3,     4,     5,     6,     8,     6,    -1,    10,     9
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const grecs_grecs_type_uint8 grecs_grecs_stos[] =
{
       0,     6,    14,    15,    16,    17,    18,    19,     3,     4,
       5,     6,     7,    10,    20,    21,    22,    23,    24,    25,
      26,    27,     0,    17,    11,    23,    28,     8,     7,    23,
       4,    11,    12,    16,    11,    23,     9,     7,    29
};

#define grecs_grecs_errok		(grecs_grecs_errstatus = 0)
#define grecs_grecs_clearin	(grecs_grecs_char = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto grecs_grecs_acceptlab
#define YYABORT		goto grecs_grecs_abortlab
#define YYERROR		goto grecs_grecs_errorlab


/* Like YYERROR except do call grecs_grecs_error.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto grecs_grecs_errlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!grecs_grecs_errstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (grecs_grecs_char == YYEMPTY)                                        \
    {                                                           \
      grecs_grecs_char = (Token);                                         \
      grecs_grecs_lval = (Value);                                         \
      YYPOPSTACK (grecs_grecs_len);                                       \
      grecs_grecs_state = *grecs_grecs_ssp;                                         \
      goto grecs_grecs_backup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      grecs_grecs_error (YY_("syntax error: cannot back up")); \
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


/* YYLEX -- calling `grecs_grecs_lex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX grecs_grecs_lex (YYLEX_PARAM)
#else
# define YYLEX grecs_grecs_lex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (grecs_grecs_debug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (grecs_grecs_debug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      grecs_grecs__symbol_print (stderr,						  \
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
grecs_grecs__symbol_value_print (FILE *grecs_grecs_output, int grecs_grecs_type, YYSTYPE const * const grecs_grecs_valuep, YYLTYPE const * const grecs_grecs_locationp)
#else
static void
grecs_grecs__symbol_value_print (grecs_grecs_output, grecs_grecs_type, grecs_grecs_valuep, grecs_grecs_locationp)
    FILE *grecs_grecs_output;
    int grecs_grecs_type;
    YYSTYPE const * const grecs_grecs_valuep;
    YYLTYPE const * const grecs_grecs_locationp;
#endif
{
  FILE *grecs_grecs_o = grecs_grecs_output;
  YYUSE (grecs_grecs_o);
  if (!grecs_grecs_valuep)
    return;
  YYUSE (grecs_grecs_locationp);
# ifdef YYPRINT
  if (grecs_grecs_type < YYNTOKENS)
    YYPRINT (grecs_grecs_output, grecs_grecs_toknum[grecs_grecs_type], *grecs_grecs_valuep);
# else
  YYUSE (grecs_grecs_output);
# endif
  switch (grecs_grecs_type)
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
grecs_grecs__symbol_print (FILE *grecs_grecs_output, int grecs_grecs_type, YYSTYPE const * const grecs_grecs_valuep, YYLTYPE const * const grecs_grecs_locationp)
#else
static void
grecs_grecs__symbol_print (grecs_grecs_output, grecs_grecs_type, grecs_grecs_valuep, grecs_grecs_locationp)
    FILE *grecs_grecs_output;
    int grecs_grecs_type;
    YYSTYPE const * const grecs_grecs_valuep;
    YYLTYPE const * const grecs_grecs_locationp;
#endif
{
  if (grecs_grecs_type < YYNTOKENS)
    YYFPRINTF (grecs_grecs_output, "token %s (", grecs_grecs_tname[grecs_grecs_type]);
  else
    YYFPRINTF (grecs_grecs_output, "nterm %s (", grecs_grecs_tname[grecs_grecs_type]);

  YY_LOCATION_PRINT (grecs_grecs_output, *grecs_grecs_locationp);
  YYFPRINTF (grecs_grecs_output, ": ");
  grecs_grecs__symbol_value_print (grecs_grecs_output, grecs_grecs_type, grecs_grecs_valuep, grecs_grecs_locationp);
  YYFPRINTF (grecs_grecs_output, ")");
}

/*------------------------------------------------------------------.
| grecs_grecs__stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
grecs_grecs__stack_print (grecs_grecs_type_int16 *grecs_grecs_bottom, grecs_grecs_type_int16 *grecs_grecs_top)
#else
static void
grecs_grecs__stack_print (grecs_grecs_bottom, grecs_grecs_top)
    grecs_grecs_type_int16 *grecs_grecs_bottom;
    grecs_grecs_type_int16 *grecs_grecs_top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; grecs_grecs_bottom <= grecs_grecs_top; grecs_grecs_bottom++)
    {
      int grecs_grecs_bot = *grecs_grecs_bottom;
      YYFPRINTF (stderr, " %d", grecs_grecs_bot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (grecs_grecs_debug)							\
    grecs_grecs__stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
grecs_grecs__reduce_print (YYSTYPE *grecs_grecs_vsp, YYLTYPE *grecs_grecs_lsp, int grecs_grecs_rule)
#else
static void
grecs_grecs__reduce_print (grecs_grecs_vsp, grecs_grecs_lsp, grecs_grecs_rule)
    YYSTYPE *grecs_grecs_vsp;
    YYLTYPE *grecs_grecs_lsp;
    int grecs_grecs_rule;
#endif
{
  int grecs_grecs_nrhs = grecs_grecs_r2[grecs_grecs_rule];
  int grecs_grecs_i;
  unsigned long int grecs_grecs_lno = grecs_grecs_rline[grecs_grecs_rule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     grecs_grecs_rule - 1, grecs_grecs_lno);
  /* The symbols being reduced.  */
  for (grecs_grecs_i = 0; grecs_grecs_i < grecs_grecs_nrhs; grecs_grecs_i++)
    {
      YYFPRINTF (stderr, "   $%d = ", grecs_grecs_i + 1);
      grecs_grecs__symbol_print (stderr, grecs_grecs_rhs[grecs_grecs_prhs[grecs_grecs_rule] + grecs_grecs_i],
		       &(grecs_grecs_vsp[(grecs_grecs_i + 1) - (grecs_grecs_nrhs)])
		       , &(grecs_grecs_lsp[(grecs_grecs_i + 1) - (grecs_grecs_nrhs)])		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (grecs_grecs_debug)				\
    grecs_grecs__reduce_print (grecs_grecs_vsp, grecs_grecs_lsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int grecs_grecs_debug;
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

# ifndef grecs_grecs_strlen
#  if defined __GLIBC__ && defined _STRING_H
#   define grecs_grecs_strlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
grecs_grecs_strlen (const char *grecs_grecs_str)
#else
static YYSIZE_T
grecs_grecs_strlen (grecs_grecs_str)
    const char *grecs_grecs_str;
#endif
{
  YYSIZE_T grecs_grecs_len;
  for (grecs_grecs_len = 0; grecs_grecs_str[grecs_grecs_len]; grecs_grecs_len++)
    continue;
  return grecs_grecs_len;
}
#  endif
# endif

# ifndef grecs_grecs_stpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define grecs_grecs_stpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
grecs_grecs_stpcpy (char *grecs_grecs_dest, const char *grecs_grecs_src)
#else
static char *
grecs_grecs_stpcpy (grecs_grecs_dest, grecs_grecs_src)
    char *grecs_grecs_dest;
    const char *grecs_grecs_src;
#endif
{
  char *grecs_grecs_d = grecs_grecs_dest;
  const char *grecs_grecs_s = grecs_grecs_src;

  while ((*grecs_grecs_d++ = *grecs_grecs_s++) != '\0')
    continue;

  return grecs_grecs_d - 1;
}
#  endif
# endif

# ifndef grecs_grecs_tnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for grecs_grecs_error.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from grecs_grecs_tname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
grecs_grecs_tnamerr (char *grecs_grecs_res, const char *grecs_grecs_str)
{
  if (*grecs_grecs_str == '"')
    {
      YYSIZE_T grecs_grecs_n = 0;
      char const *grecs_grecs_p = grecs_grecs_str;

      for (;;)
	switch (*++grecs_grecs_p)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++grecs_grecs_p != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (grecs_grecs_res)
	      grecs_grecs_res[grecs_grecs_n] = *grecs_grecs_p;
	    grecs_grecs_n++;
	    break;

	  case '"':
	    if (grecs_grecs_res)
	      grecs_grecs_res[grecs_grecs_n] = '\0';
	    return grecs_grecs_n;
	  }
    do_not_strip_quotes: ;
    }

  if (! grecs_grecs_res)
    return grecs_grecs_strlen (grecs_grecs_str);

  return grecs_grecs_stpcpy (grecs_grecs_res, grecs_grecs_str) - grecs_grecs_res;
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
grecs_grecs_syntax_error (YYSIZE_T *grecs_grecs_msg_alloc, char **grecs_grecs_msg,
                grecs_grecs_type_int16 *grecs_grecs_ssp, int grecs_grecs_token)
{
  YYSIZE_T grecs_grecs_size0 = grecs_grecs_tnamerr (YY_NULL, grecs_grecs_tname[grecs_grecs_token]);
  YYSIZE_T grecs_grecs_size = grecs_grecs_size0;
  YYSIZE_T grecs_grecs_size1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *grecs_grecs_format = YY_NULL;
  /* Arguments of grecs_grecs_format. */
  char const *grecs_grecs_arg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int grecs_grecs_count = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in grecs_grecs_char) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated grecs_grecs_char.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (grecs_grecs_token != YYEMPTY)
    {
      int grecs_grecs_n = grecs_grecs_pact[*grecs_grecs_ssp];
      grecs_grecs_arg[grecs_grecs_count++] = grecs_grecs_tname[grecs_grecs_token];
      if (!grecs_grecs_pact_value_is_default (grecs_grecs_n))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int grecs_grecs_xbegin = grecs_grecs_n < 0 ? -grecs_grecs_n : 0;
          /* Stay within bounds of both grecs_grecs_check and grecs_grecs_tname.  */
          int grecs_grecs_checklim = YYLAST - grecs_grecs_n + 1;
          int grecs_grecs_xend = grecs_grecs_checklim < YYNTOKENS ? grecs_grecs_checklim : YYNTOKENS;
          int grecs_grecs_x;

          for (grecs_grecs_x = grecs_grecs_xbegin; grecs_grecs_x < grecs_grecs_xend; ++grecs_grecs_x)
            if (grecs_grecs_check[grecs_grecs_x + grecs_grecs_n] == grecs_grecs_x && grecs_grecs_x != YYTERROR
                && !grecs_grecs_table_value_is_error (grecs_grecs_table[grecs_grecs_x + grecs_grecs_n]))
              {
                if (grecs_grecs_count == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    grecs_grecs_count = 1;
                    grecs_grecs_size = grecs_grecs_size0;
                    break;
                  }
                grecs_grecs_arg[grecs_grecs_count++] = grecs_grecs_tname[grecs_grecs_x];
                grecs_grecs_size1 = grecs_grecs_size + grecs_grecs_tnamerr (YY_NULL, grecs_grecs_tname[grecs_grecs_x]);
                if (! (grecs_grecs_size <= grecs_grecs_size1
                       && grecs_grecs_size1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                grecs_grecs_size = grecs_grecs_size1;
              }
        }
    }

  switch (grecs_grecs_count)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        grecs_grecs_format = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  grecs_grecs_size1 = grecs_grecs_size + grecs_grecs_strlen (grecs_grecs_format);
  if (! (grecs_grecs_size <= grecs_grecs_size1 && grecs_grecs_size1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  grecs_grecs_size = grecs_grecs_size1;

  if (*grecs_grecs_msg_alloc < grecs_grecs_size)
    {
      *grecs_grecs_msg_alloc = 2 * grecs_grecs_size;
      if (! (grecs_grecs_size <= *grecs_grecs_msg_alloc
             && *grecs_grecs_msg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *grecs_grecs_msg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *grecs_grecs_p = *grecs_grecs_msg;
    int grecs_grecs_i = 0;
    while ((*grecs_grecs_p = *grecs_grecs_format) != '\0')
      if (*grecs_grecs_p == '%' && grecs_grecs_format[1] == 's' && grecs_grecs_i < grecs_grecs_count)
        {
          grecs_grecs_p += grecs_grecs_tnamerr (grecs_grecs_p, grecs_grecs_arg[grecs_grecs_i++]);
          grecs_grecs_format += 2;
        }
      else
        {
          grecs_grecs_p++;
          grecs_grecs_format++;
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
grecs_grecs_destruct (const char *grecs_grecs_msg, int grecs_grecs_type, YYSTYPE *grecs_grecs_valuep, YYLTYPE *grecs_grecs_locationp)
#else
static void
grecs_grecs_destruct (grecs_grecs_msg, grecs_grecs_type, grecs_grecs_valuep, grecs_grecs_locationp)
    const char *grecs_grecs_msg;
    int grecs_grecs_type;
    YYSTYPE *grecs_grecs_valuep;
    YYLTYPE *grecs_grecs_locationp;
#endif
{
  YYUSE (grecs_grecs_valuep);
  YYUSE (grecs_grecs_locationp);

  if (!grecs_grecs_msg)
    grecs_grecs_msg = "Deleting";
  YY_SYMBOL_PRINT (grecs_grecs_msg, grecs_grecs_type, grecs_grecs_valuep, grecs_grecs_locationp);

  switch (grecs_grecs_type)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int grecs_grecs_parse (void *YYPARSE_PARAM);
#else
int grecs_grecs_parse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int grecs_grecs_parse (void);
#else
int grecs_grecs_parse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int grecs_grecs_char;

/* The semantic value of the lookahead symbol.  */
YYSTYPE grecs_grecs_lval;

/* Location data for the lookahead symbol.  */
YYLTYPE grecs_grecs_lloc;

/* Number of syntax errors so far.  */
int grecs_grecs_nerrs;


/*----------.
| grecs_grecs_parse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
grecs_grecs_parse (void *YYPARSE_PARAM)
#else
int
grecs_grecs_parse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
grecs_grecs_parse (void)
#else
int
grecs_grecs_parse ()

#endif
#endif
{
    int grecs_grecs_state;
    /* Number of tokens to shift before error messages enabled.  */
    int grecs_grecs_errstatus;

    /* The stacks and their tools:
       `grecs_grecs_ss': related to states.
       `grecs_grecs_vs': related to semantic values.
       `grecs_grecs_ls': related to locations.

       Refer to the stacks through separate pointers, to allow grecs_grecs_overflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    grecs_grecs_type_int16 grecs_grecs_ssa[YYINITDEPTH];
    grecs_grecs_type_int16 *grecs_grecs_ss;
    grecs_grecs_type_int16 *grecs_grecs_ssp;

    /* The semantic value stack.  */
    YYSTYPE grecs_grecs_vsa[YYINITDEPTH];
    YYSTYPE *grecs_grecs_vs;
    YYSTYPE *grecs_grecs_vsp;

    /* The location stack.  */
    YYLTYPE grecs_grecs_lsa[YYINITDEPTH];
    YYLTYPE *grecs_grecs_ls;
    YYLTYPE *grecs_grecs_lsp;

    /* The locations where the error started and ended.  */
    YYLTYPE grecs_grecs_error_range[3];

    YYSIZE_T grecs_grecs_stacksize;

  int grecs_grecs_n;
  int grecs_grecs_result;
  /* Lookahead token as an internal (translated) token number.  */
  int grecs_grecs_token;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE grecs_grecs_val;
  YYLTYPE grecs_grecs_loc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char grecs_grecs_msgbuf[128];
  char *grecs_grecs_msg = grecs_grecs_msgbuf;
  YYSIZE_T grecs_grecs_msg_alloc = sizeof grecs_grecs_msgbuf;
#endif

#define YYPOPSTACK(N)   (grecs_grecs_vsp -= (N), grecs_grecs_ssp -= (N), grecs_grecs_lsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int grecs_grecs_len = 0;

  grecs_grecs_token = 0;
  grecs_grecs_ss = grecs_grecs_ssa;
  grecs_grecs_vs = grecs_grecs_vsa;
  grecs_grecs_ls = grecs_grecs_lsa;
  grecs_grecs_stacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  grecs_grecs_state = 0;
  grecs_grecs_errstatus = 0;
  grecs_grecs_nerrs = 0;
  grecs_grecs_char = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  grecs_grecs_ssp = grecs_grecs_ss;
  grecs_grecs_vsp = grecs_grecs_vs;
  grecs_grecs_lsp = grecs_grecs_ls;

#if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  grecs_grecs_lloc.first_line   = grecs_grecs_lloc.last_line   = 1;
  grecs_grecs_lloc.first_column = grecs_grecs_lloc.last_column = 1;
#endif

  goto grecs_grecs_setstate;

/*------------------------------------------------------------.
| grecs_grecs_newstate -- Push a new state, which is found in grecs_grecs_state.  |
`------------------------------------------------------------*/
 grecs_grecs_newstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  grecs_grecs_ssp++;

 grecs_grecs_setstate:
  *grecs_grecs_ssp = grecs_grecs_state;

  if (grecs_grecs_ss + grecs_grecs_stacksize - 1 <= grecs_grecs_ssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T grecs_grecs_size = grecs_grecs_ssp - grecs_grecs_ss + 1;

#ifdef grecs_grecs_overflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *grecs_grecs_vs1 = grecs_grecs_vs;
	grecs_grecs_type_int16 *grecs_grecs_ss1 = grecs_grecs_ss;
	YYLTYPE *grecs_grecs_ls1 = grecs_grecs_ls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if grecs_grecs_overflow is a macro.  */
	grecs_grecs_overflow (YY_("memory exhausted"),
		    &grecs_grecs_ss1, grecs_grecs_size * sizeof (*grecs_grecs_ssp),
		    &grecs_grecs_vs1, grecs_grecs_size * sizeof (*grecs_grecs_vsp),
		    &grecs_grecs_ls1, grecs_grecs_size * sizeof (*grecs_grecs_lsp),
		    &grecs_grecs_stacksize);

	grecs_grecs_ls = grecs_grecs_ls1;
	grecs_grecs_ss = grecs_grecs_ss1;
	grecs_grecs_vs = grecs_grecs_vs1;
      }
#else /* no grecs_grecs_overflow */
# ifndef YYSTACK_RELOCATE
      goto grecs_grecs_exhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= grecs_grecs_stacksize)
	goto grecs_grecs_exhaustedlab;
      grecs_grecs_stacksize *= 2;
      if (YYMAXDEPTH < grecs_grecs_stacksize)
	grecs_grecs_stacksize = YYMAXDEPTH;

      {
	grecs_grecs_type_int16 *grecs_grecs_ss1 = grecs_grecs_ss;
	union grecs_grecs_alloc *grecs_grecs_ptr =
	  (union grecs_grecs_alloc *) YYSTACK_ALLOC (YYSTACK_BYTES (grecs_grecs_stacksize));
	if (! grecs_grecs_ptr)
	  goto grecs_grecs_exhaustedlab;
	YYSTACK_RELOCATE (grecs_grecs_ss_alloc, grecs_grecs_ss);
	YYSTACK_RELOCATE (grecs_grecs_vs_alloc, grecs_grecs_vs);
	YYSTACK_RELOCATE (grecs_grecs_ls_alloc, grecs_grecs_ls);
#  undef YYSTACK_RELOCATE
	if (grecs_grecs_ss1 != grecs_grecs_ssa)
	  YYSTACK_FREE (grecs_grecs_ss1);
      }
# endif
#endif /* no grecs_grecs_overflow */

      grecs_grecs_ssp = grecs_grecs_ss + grecs_grecs_size - 1;
      grecs_grecs_vsp = grecs_grecs_vs + grecs_grecs_size - 1;
      grecs_grecs_lsp = grecs_grecs_ls + grecs_grecs_size - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) grecs_grecs_stacksize));

      if (grecs_grecs_ss + grecs_grecs_stacksize - 1 <= grecs_grecs_ssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", grecs_grecs_state));

  if (grecs_grecs_state == YYFINAL)
    YYACCEPT;

  goto grecs_grecs_backup;

/*-----------.
| grecs_grecs_backup.  |
`-----------*/
grecs_grecs_backup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  grecs_grecs_n = grecs_grecs_pact[grecs_grecs_state];
  if (grecs_grecs_pact_value_is_default (grecs_grecs_n))
    goto grecs_grecs_default;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (grecs_grecs_char == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      grecs_grecs_char = YYLEX;
    }

  if (grecs_grecs_char <= YYEOF)
    {
      grecs_grecs_char = grecs_grecs_token = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      grecs_grecs_token = YYTRANSLATE (grecs_grecs_char);
      YY_SYMBOL_PRINT ("Next token is", grecs_grecs_token, &grecs_grecs_lval, &grecs_grecs_lloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  grecs_grecs_n += grecs_grecs_token;
  if (grecs_grecs_n < 0 || YYLAST < grecs_grecs_n || grecs_grecs_check[grecs_grecs_n] != grecs_grecs_token)
    goto grecs_grecs_default;
  grecs_grecs_n = grecs_grecs_table[grecs_grecs_n];
  if (grecs_grecs_n <= 0)
    {
      if (grecs_grecs_table_value_is_error (grecs_grecs_n))
        goto grecs_grecs_errlab;
      grecs_grecs_n = -grecs_grecs_n;
      goto grecs_grecs_reduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (grecs_grecs_errstatus)
    grecs_grecs_errstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", grecs_grecs_token, &grecs_grecs_lval, &grecs_grecs_lloc);

  /* Discard the shifted token.  */
  grecs_grecs_char = YYEMPTY;

  grecs_grecs_state = grecs_grecs_n;
  *++grecs_grecs_vsp = grecs_grecs_lval;
  *++grecs_grecs_lsp = grecs_grecs_lloc;
  goto grecs_grecs_newstate;


/*-----------------------------------------------------------.
| grecs_grecs_default -- do the default action for the current state.  |
`-----------------------------------------------------------*/
grecs_grecs_default:
  grecs_grecs_n = grecs_grecs_defact[grecs_grecs_state];
  if (grecs_grecs_n == 0)
    goto grecs_grecs_errlab;
  goto grecs_grecs_reduce;


/*-----------------------------.
| grecs_grecs_reduce -- Do a reduction.  |
`-----------------------------*/
grecs_grecs_reduce:
  /* grecs_grecs_n is the number of a rule to reduce with.  */
  grecs_grecs_len = grecs_grecs_r2[grecs_grecs_n];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  grecs_grecs_val = grecs_grecs_vsp[1-grecs_grecs_len];

  /* Default location.  */
  YYLLOC_DEFAULT (grecs_grecs_loc, (grecs_grecs_lsp - grecs_grecs_len), grecs_grecs_len);
  YY_REDUCE_PRINT (grecs_grecs_n);
  switch (grecs_grecs_n)
    {
        case 2:

/* Line 1810 of yacc.c  */
#line 58 "grecs-gram.y"
    {
		  parse_tree = grecs_node_create(grecs_node_root, &(grecs_grecs_lsp[(1) - (1)]));
		  parse_tree->v.texttab = grecs_text_table();
		  grecs_node_bind(parse_tree, (grecs_grecs_vsp[(1) - (1)].node), 1);
	  }
    break;

  case 3:

/* Line 1810 of yacc.c  */
#line 67 "grecs-gram.y"
    {
		  (grecs_grecs_val.node) = NULL;
	  }
    break;

  case 4:

/* Line 1810 of yacc.c  */
#line 71 "grecs-gram.y"
    {
		  (grecs_grecs_val.node) = (grecs_grecs_vsp[(1) - (1)].node_list).head;
	  }
    break;

  case 5:

/* Line 1810 of yacc.c  */
#line 77 "grecs-gram.y"
    {
		  (grecs_grecs_val.node_list).head = (grecs_grecs_val.node_list).tail = (grecs_grecs_vsp[(1) - (1)].node);
	  }
    break;

  case 6:

/* Line 1810 of yacc.c  */
#line 81 "grecs-gram.y"
    {
		  grecs_node_bind((grecs_grecs_vsp[(1) - (2)].node_list).tail, (grecs_grecs_vsp[(2) - (2)].node), 0);
	  }
    break;

  case 9:

/* Line 1810 of yacc.c  */
#line 91 "grecs-gram.y"
    {
		  (grecs_grecs_val.node) = grecs_node_create_points(grecs_node_stmt,
						(grecs_grecs_lsp[(1) - (3)]).beg, (grecs_grecs_lsp[(2) - (3)]).end);
		  (grecs_grecs_val.node)->ident = (grecs_grecs_vsp[(1) - (3)].string);
		  (grecs_grecs_val.node)->idloc = (grecs_grecs_lsp[(1) - (3)]);
		  (grecs_grecs_val.node)->v.value = (grecs_grecs_vsp[(2) - (3)].pvalue);
	  }
    break;

  case 10:

/* Line 1810 of yacc.c  */
#line 99 "grecs-gram.y"
    {
		  (grecs_grecs_val.node) = grecs_node_create(grecs_node_stmt, &(grecs_grecs_lsp[(1) - (2)]));
		  (grecs_grecs_val.node)->ident = (grecs_grecs_vsp[(1) - (2)].string);
		  (grecs_grecs_val.node)->idloc = (grecs_grecs_lsp[(1) - (2)]);
		  (grecs_grecs_val.node)->v.value = NULL;
	  }
    break;

  case 11:

/* Line 1810 of yacc.c  */
#line 108 "grecs-gram.y"
    {
		  (grecs_grecs_val.node) = grecs_node_create_points(grecs_node_block,
						(grecs_grecs_lsp[(1) - (6)]).beg, (grecs_grecs_lsp[(5) - (6)]).end);
		  (grecs_grecs_val.node)->ident = (grecs_grecs_vsp[(1) - (6)].string);
		  (grecs_grecs_val.node)->idloc = (grecs_grecs_lsp[(1) - (6)]);
		  (grecs_grecs_val.node)->v.value = (grecs_grecs_vsp[(2) - (6)].pvalue);
		  grecs_node_bind((grecs_grecs_val.node), (grecs_grecs_vsp[(4) - (6)].node_list).head, 1);
	  }
    break;

  case 12:

/* Line 1810 of yacc.c  */
#line 119 "grecs-gram.y"
    {
		  (grecs_grecs_val.pvalue) = NULL;
	  }
    break;

  case 14:

/* Line 1810 of yacc.c  */
#line 126 "grecs-gram.y"
    {
		  size_t n;
		  
		  if ((n = grecs_list_size((grecs_grecs_vsp[(1) - (1)].list))) == 1) {
			  (grecs_grecs_val.pvalue) = grecs_list_index((grecs_grecs_vsp[(1) - (1)].list), 0);
		  } else {
			  size_t i;
			  struct grecs_list_entry *ep;
		
			  (grecs_grecs_val.pvalue) = grecs_malloc(sizeof((grecs_grecs_val.pvalue)[0]));
			  (grecs_grecs_val.pvalue)->type = GRECS_TYPE_ARRAY;
			  (grecs_grecs_val.pvalue)->locus = (grecs_grecs_lsp[(1) - (1)]);
			  (grecs_grecs_val.pvalue)->v.arg.c = n;
			  (grecs_grecs_val.pvalue)->v.arg.v = grecs_calloc(n,
						     sizeof((grecs_grecs_val.pvalue)->v.arg.v[0]));
			  for (i = 0, ep = (grecs_grecs_vsp[(1) - (1)].list)->head; ep; i++, ep = ep->next)
				  (grecs_grecs_val.pvalue)->v.arg.v[i] = ep->data;
		  }
		  (grecs_grecs_vsp[(1) - (1)].list)->free_entry = NULL;
		  grecs_list_free((grecs_grecs_vsp[(1) - (1)].list));	      
	  }
    break;

  case 15:

/* Line 1810 of yacc.c  */
#line 150 "grecs-gram.y"
    {
		  (grecs_grecs_val.list) = grecs_value_list_create();
		  grecs_list_append((grecs_grecs_val.list), grecs_value_ptr_from_static(&(grecs_grecs_vsp[(1) - (1)].svalue)));
	  }
    break;

  case 16:

/* Line 1810 of yacc.c  */
#line 155 "grecs-gram.y"
    {
		  grecs_list_append((grecs_grecs_vsp[(1) - (2)].list), grecs_value_ptr_from_static(&(grecs_grecs_vsp[(2) - (2)].svalue)));
	  }
    break;

  case 17:

/* Line 1810 of yacc.c  */
#line 161 "grecs-gram.y"
    {
		  (grecs_grecs_val.svalue).type = GRECS_TYPE_STRING;
		  (grecs_grecs_val.svalue).locus = (grecs_grecs_lsp[(1) - (1)]);
		  (grecs_grecs_val.svalue).v.string = (grecs_grecs_vsp[(1) - (1)].string);
	  }
    break;

  case 18:

/* Line 1810 of yacc.c  */
#line 167 "grecs-gram.y"
    {
		  (grecs_grecs_val.svalue).type = GRECS_TYPE_LIST;
		  (grecs_grecs_val.svalue).locus = (grecs_grecs_lsp[(1) - (1)]);
		  (grecs_grecs_val.svalue).v.list = (grecs_grecs_vsp[(1) - (1)].list);
	  }
    break;

  case 19:

/* Line 1810 of yacc.c  */
#line 173 "grecs-gram.y"
    {
		  (grecs_grecs_val.svalue).type = GRECS_TYPE_STRING;
		  (grecs_grecs_val.svalue).locus = (grecs_grecs_lsp[(1) - (1)]);
		  (grecs_grecs_val.svalue).v.string = (grecs_grecs_vsp[(1) - (1)].string);
	  }
    break;

  case 23:

/* Line 1810 of yacc.c  */
#line 186 "grecs-gram.y"
    {
		  struct grecs_list_entry *ep;
		  
		  grecs_line_begin();
		  for (ep = (grecs_grecs_vsp[(1) - (1)].list)->head; ep; ep = ep->next) {
			  grecs_line_add(ep->data, strlen(ep->data));
			  free(ep->data);
			  ep->data = NULL;
		  }
		  (grecs_grecs_val.string) = grecs_line_finish();
		  grecs_list_free((grecs_grecs_vsp[(1) - (1)].list));
	  }
    break;

  case 24:

/* Line 1810 of yacc.c  */
#line 201 "grecs-gram.y"
    {
		  (grecs_grecs_val.list) = grecs_list_create();
		  grecs_list_append((grecs_grecs_val.list), (grecs_grecs_vsp[(1) - (1)].string));
	  }
    break;

  case 25:

/* Line 1810 of yacc.c  */
#line 206 "grecs-gram.y"
    {
		  grecs_list_append((grecs_grecs_vsp[(1) - (2)].list), (grecs_grecs_vsp[(2) - (2)].string));
		  (grecs_grecs_val.list) = (grecs_grecs_vsp[(1) - (2)].list);
	  }
    break;

  case 26:

/* Line 1810 of yacc.c  */
#line 213 "grecs-gram.y"
    {
		  (grecs_grecs_val.list) = NULL;
	  }
    break;

  case 27:

/* Line 1810 of yacc.c  */
#line 217 "grecs-gram.y"
    {
		  (grecs_grecs_val.list) = (grecs_grecs_vsp[(2) - (3)].list);
	  }
    break;

  case 28:

/* Line 1810 of yacc.c  */
#line 221 "grecs-gram.y"
    {
		  (grecs_grecs_val.list) = (grecs_grecs_vsp[(2) - (4)].list);
	  }
    break;

  case 29:

/* Line 1810 of yacc.c  */
#line 227 "grecs-gram.y"
    {
		  (grecs_grecs_val.list) = grecs_value_list_create();
		  grecs_list_append((grecs_grecs_val.list), grecs_value_ptr_from_static(&(grecs_grecs_vsp[(1) - (1)].svalue)));
	  }
    break;

  case 30:

/* Line 1810 of yacc.c  */
#line 232 "grecs-gram.y"
    {
		  grecs_list_append((grecs_grecs_vsp[(1) - (3)].list), grecs_value_ptr_from_static(&(grecs_grecs_vsp[(3) - (3)].svalue)));
		  (grecs_grecs_val.list) = (grecs_grecs_vsp[(1) - (3)].list);
	  }
    break;



/* Line 1810 of yacc.c  */
#line 1757 "grecs-gram.c"
      default: break;
    }
  /* User semantic actions sometimes alter grecs_grecs_char, and that requires
     that grecs_grecs_token be updated with the new translation.  We take the
     approach of translating immediately before every use of grecs_grecs_token.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering grecs_grecs_char or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", grecs_grecs_r1[grecs_grecs_n], &grecs_grecs_val, &grecs_grecs_loc);

  YYPOPSTACK (grecs_grecs_len);
  grecs_grecs_len = 0;
  YY_STACK_PRINT (grecs_grecs_ss, grecs_grecs_ssp);

  *++grecs_grecs_vsp = grecs_grecs_val;
  *++grecs_grecs_lsp = grecs_grecs_loc;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  grecs_grecs_n = grecs_grecs_r1[grecs_grecs_n];

  grecs_grecs_state = grecs_grecs_pgoto[grecs_grecs_n - YYNTOKENS] + *grecs_grecs_ssp;
  if (0 <= grecs_grecs_state && grecs_grecs_state <= YYLAST && grecs_grecs_check[grecs_grecs_state] == *grecs_grecs_ssp)
    grecs_grecs_state = grecs_grecs_table[grecs_grecs_state];
  else
    grecs_grecs_state = grecs_grecs_defgoto[grecs_grecs_n - YYNTOKENS];

  goto grecs_grecs_newstate;


/*------------------------------------.
| grecs_grecs_errlab -- here on detecting error |
`------------------------------------*/
grecs_grecs_errlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  grecs_grecs_token = grecs_grecs_char == YYEMPTY ? YYEMPTY : YYTRANSLATE (grecs_grecs_char);

  /* If not already recovering from an error, report this error.  */
  if (!grecs_grecs_errstatus)
    {
      ++grecs_grecs_nerrs;
#if ! YYERROR_VERBOSE
      grecs_grecs_error (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR grecs_grecs_syntax_error (&grecs_grecs_msg_alloc, &grecs_grecs_msg, \
                                        grecs_grecs_ssp, grecs_grecs_token)
      {
        char const *grecs_grecs_msgp = YY_("syntax error");
        int grecs_grecs_syntax_error_status;
        grecs_grecs_syntax_error_status = YYSYNTAX_ERROR;
        if (grecs_grecs_syntax_error_status == 0)
          grecs_grecs_msgp = grecs_grecs_msg;
        else if (grecs_grecs_syntax_error_status == 1)
          {
            if (grecs_grecs_msg != grecs_grecs_msgbuf)
              YYSTACK_FREE (grecs_grecs_msg);
            grecs_grecs_msg = (char *) YYSTACK_ALLOC (grecs_grecs_msg_alloc);
            if (!grecs_grecs_msg)
              {
                grecs_grecs_msg = grecs_grecs_msgbuf;
                grecs_grecs_msg_alloc = sizeof grecs_grecs_msgbuf;
                grecs_grecs_syntax_error_status = 2;
              }
            else
              {
                grecs_grecs_syntax_error_status = YYSYNTAX_ERROR;
                grecs_grecs_msgp = grecs_grecs_msg;
              }
          }
        grecs_grecs_error (grecs_grecs_msgp);
        if (grecs_grecs_syntax_error_status == 2)
          goto grecs_grecs_exhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  grecs_grecs_error_range[1] = grecs_grecs_lloc;

  if (grecs_grecs_errstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (grecs_grecs_char <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (grecs_grecs_char == YYEOF)
	    YYABORT;
	}
      else
	{
	  grecs_grecs_destruct ("Error: discarding",
		      grecs_grecs_token, &grecs_grecs_lval, &grecs_grecs_lloc);
	  grecs_grecs_char = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto grecs_grecs_errlab1;


/*---------------------------------------------------.
| grecs_grecs_errorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
grecs_grecs_errorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label grecs_grecs_errorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto grecs_grecs_errorlab;

  grecs_grecs_error_range[1] = grecs_grecs_lsp[1-grecs_grecs_len];
  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (grecs_grecs_len);
  grecs_grecs_len = 0;
  YY_STACK_PRINT (grecs_grecs_ss, grecs_grecs_ssp);
  grecs_grecs_state = *grecs_grecs_ssp;
  goto grecs_grecs_errlab1;


/*-------------------------------------------------------------.
| grecs_grecs_errlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
grecs_grecs_errlab1:
  grecs_grecs_errstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      grecs_grecs_n = grecs_grecs_pact[grecs_grecs_state];
      if (!grecs_grecs_pact_value_is_default (grecs_grecs_n))
	{
	  grecs_grecs_n += YYTERROR;
	  if (0 <= grecs_grecs_n && grecs_grecs_n <= YYLAST && grecs_grecs_check[grecs_grecs_n] == YYTERROR)
	    {
	      grecs_grecs_n = grecs_grecs_table[grecs_grecs_n];
	      if (0 < grecs_grecs_n)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (grecs_grecs_ssp == grecs_grecs_ss)
	YYABORT;

      grecs_grecs_error_range[1] = *grecs_grecs_lsp;
      grecs_grecs_destruct ("Error: popping",
		  grecs_grecs_stos[grecs_grecs_state], grecs_grecs_vsp, grecs_grecs_lsp);
      YYPOPSTACK (1);
      grecs_grecs_state = *grecs_grecs_ssp;
      YY_STACK_PRINT (grecs_grecs_ss, grecs_grecs_ssp);
    }

  *++grecs_grecs_vsp = grecs_grecs_lval;

  grecs_grecs_error_range[2] = grecs_grecs_lloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (grecs_grecs_loc, grecs_grecs_error_range, 2);
  *++grecs_grecs_lsp = grecs_grecs_loc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", grecs_grecs_stos[grecs_grecs_n], grecs_grecs_vsp, grecs_grecs_lsp);

  grecs_grecs_state = grecs_grecs_n;
  goto grecs_grecs_newstate;


/*-------------------------------------.
| grecs_grecs_acceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
grecs_grecs_acceptlab:
  grecs_grecs_result = 0;
  goto grecs_grecs_return;

/*-----------------------------------.
| grecs_grecs_abortlab -- YYABORT comes here.  |
`-----------------------------------*/
grecs_grecs_abortlab:
  grecs_grecs_result = 1;
  goto grecs_grecs_return;

#if !defined grecs_grecs_overflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| grecs_grecs_exhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
grecs_grecs_exhaustedlab:
  grecs_grecs_error (YY_("memory exhausted"));
  grecs_grecs_result = 2;
  /* Fall through.  */
#endif

grecs_grecs_return:
  if (grecs_grecs_char != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      grecs_grecs_token = YYTRANSLATE (grecs_grecs_char);
      grecs_grecs_destruct ("Cleanup: discarding lookahead",
                  grecs_grecs_token, &grecs_grecs_lval, &grecs_grecs_lloc);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (grecs_grecs_len);
  YY_STACK_PRINT (grecs_grecs_ss, grecs_grecs_ssp);
  while (grecs_grecs_ssp != grecs_grecs_ss)
    {
      grecs_grecs_destruct ("Cleanup: popping",
		  grecs_grecs_stos[*grecs_grecs_ssp], grecs_grecs_vsp, grecs_grecs_lsp);
      YYPOPSTACK (1);
    }
#ifndef grecs_grecs_overflow
  if (grecs_grecs_ss != grecs_grecs_ssa)
    YYSTACK_FREE (grecs_grecs_ss);
#endif
#if YYERROR_VERBOSE
  if (grecs_grecs_msg != grecs_grecs_msgbuf)
    YYSTACK_FREE (grecs_grecs_msg);
#endif
  /* Make sure YYID is used.  */
  return YYID (grecs_grecs_result);
}



/* Line 2071 of yacc.c  */
#line 242 "grecs-gram.y"


int
grecs_grecs_error(char const *s)
{
	grecs_error(&grecs_grecs_lloc, 0, "%s", s);
	return 0;
}

struct grecs_node *
grecs_grecs_parser(const char *name, int traceflags)
{
	int rc;
	if (grecs_lex_begin(name, traceflags & GRECS_TRACE_LEX))
		return NULL;
	grecs_grecs_debug = traceflags & GRECS_TRACE_GRAM;
	parse_tree = NULL;
	rc = grecs_grecs_parse();
	if (grecs_error_count)
		rc = 1;
	grecs_lex_end(rc);
	if (rc) {
		grecs_tree_free(parse_tree);
		parse_tree = NULL;
	}
	return parse_tree;
}




    


