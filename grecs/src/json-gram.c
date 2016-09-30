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

/* All symbols defined below should begin with grecs_json_ or YY, to avoid
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
#line 1 "json-gram.y"

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

#ifdef HAVE_CONFIG_H
# include <config.h>
#endif
#include "grecs.h"
#include <string.h>
#include <errno.h>
#include <stdlib.h>  
#include "json-gram.h"
#include "grecs/json.h"

struct json_value *json_return_obj;

extern int grecs_json_lex(void);
static int grecs_json_error(char const *s);

static void
pairfree(void *ptr)
{
	struct json_pair *p = ptr;
	grecs_free(p->k);
	json_value_free(p->v);
	free(p);
}

static void
objfree(void *ptr)
{
	struct json_value *o = ptr;
	json_value_free(o);
}



/* Line 268 of yacc.c  */
#line 122 "json-gram.c"

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
   enum grecs_json_tokentype {
     T_NUMBER = 258,
     T_STRING = 259,
     T_BOOL = 260,
     T_NULL = 261,
     T_ERR = 262
   };
#endif
/* Tokens.  */
#define T_NUMBER 258
#define T_STRING 259
#define T_BOOL 260
#define T_NULL 261
#define T_ERR 262




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 295 of yacc.c  */
#line 64 "json-gram.y"

	int b;
	double n;
	char *s;
	struct grecs_symtab *o;
	struct json_value *obj;
	struct grecs_list *list;
	struct json_pair *p;



/* Line 295 of yacc.c  */
#line 192 "json-gram.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define grecs_json_stype YYSTYPE /* obsolescent; will be withdrawn */
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
# define grecs_json_ltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */


/* Line 345 of yacc.c  */
#line 217 "json-gram.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 grecs_json_type_uint8;
#else
typedef unsigned char grecs_json_type_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 grecs_json_type_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char grecs_json_type_int8;
#else
typedef short int grecs_json_type_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 grecs_json_type_uint16;
#else
typedef unsigned short int grecs_json_type_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 grecs_json_type_int16;
#else
typedef short int grecs_json_type_int16;
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
YYID (int grecs_json_i)
#else
static int
YYID (grecs_json_i)
    int grecs_json_i;
#endif
{
  return grecs_json_i;
}
#endif

#if ! defined grecs_json_overflow || YYERROR_VERBOSE

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
#endif /* ! defined grecs_json_overflow || YYERROR_VERBOSE */


#if (! defined grecs_json_overflow \
     && (! defined __cplusplus \
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union grecs_json_alloc
{
  grecs_json_type_int16 grecs_json_ss_alloc;
  YYSTYPE grecs_json_vs_alloc;
  YYLTYPE grecs_json_ls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union grecs_json_alloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (grecs_json_type_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
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
	YYSIZE_T grecs_json_newbytes;						\
	YYCOPY (&grecs_json_ptr->Stack_alloc, Stack, grecs_json_size);			\
	Stack = &grecs_json_ptr->Stack_alloc;					\
	grecs_json_newbytes = grecs_json_stacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	grecs_json_ptr += grecs_json_newbytes / sizeof (*grecs_json_ptr);				\
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
          YYSIZE_T grecs_json_i;                         \
          for (grecs_json_i = 0; grecs_json_i < (Count); grecs_json_i++)   \
            (Dst)[grecs_json_i] = (Src)[grecs_json_i];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  18
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   17

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  14
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  10
/* YYNRULES -- Number of rules.  */
#define YYNRULES  19
/* YYNRULES -- Number of states.  */
#define YYNSTATES  27

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   262

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? grecs_json_translate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const grecs_json_type_uint8 grecs_json_translate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    10,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    13,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     8,     2,     9,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    11,     2,    12,     2,     2,     2,     2,
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
       5,     6,     7
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const grecs_json_type_uint8 grecs_json_prhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    13,    15,    17,
      21,    22,    24,    26,    30,    34,    35,    37,    39,    43
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const grecs_json_type_int8 grecs_json_rhs[] =
{
      15,     0,    -1,    16,    -1,     3,    -1,     4,    -1,     5,
      -1,     6,    -1,    17,    -1,    20,    -1,     8,    18,     9,
      -1,    -1,    19,    -1,    16,    -1,    19,    10,    16,    -1,
      11,    21,    12,    -1,    -1,    22,    -1,    23,    -1,    22,
      10,    23,    -1,     4,    13,    16,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const grecs_json_type_uint8 grecs_json_rline[] =
{
       0,    75,    75,    81,    86,    91,    96,   100,   101,   108,
     116,   119,   122,   127,   133,   156,   159,   162,   168,   174
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const grecs_json_tname[] =
{
  "$end", "error", "$undefined", "T_NUMBER", "T_STRING", "T_BOOL",
  "T_NULL", "T_ERR", "'['", "']'", "','", "'{'", "'}'", "':'", "$accept",
  "input", "object", "array", "objects", "objlist", "assoc", "pairs",
  "pairlist", "pair", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const grecs_json_type_uint16 grecs_json_toknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,    91,    93,
      44,   123,   125,    58
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const grecs_json_type_uint8 grecs_json_r1[] =
{
       0,    14,    15,    16,    16,    16,    16,    16,    16,    17,
      18,    18,    19,    19,    20,    21,    21,    22,    22,    23
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const grecs_json_type_uint8 grecs_json_r2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     3,
       0,     1,     1,     3,     3,     0,     1,     1,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const grecs_json_type_uint8 grecs_json_defact[] =
{
       0,     3,     4,     5,     6,    10,    15,     0,     2,     7,
       8,    12,     0,    11,     0,     0,    16,    17,     1,     9,
       0,     0,    14,     0,    13,    19,    18
};

/* YYDEFGOTO[NTERM-NUM].  */
static const grecs_json_type_int8 grecs_json_defgoto[] =
{
      -1,     7,     8,     9,    12,    13,    10,    15,    16,    17
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -13
static const grecs_json_type_int8 grecs_json_pact[] =
{
      -2,   -13,   -13,   -13,   -13,    -2,     1,     7,   -13,   -13,
     -13,   -13,    -1,     0,     4,     2,     3,   -13,   -13,   -13,
      -2,    -2,   -13,     1,   -13,   -13,   -13
};

/* YYPGOTO[NTERM-NUM].  */
static const grecs_json_type_int8 grecs_json_pgoto[] =
{
     -13,   -13,    -5,   -13,   -13,   -13,   -13,   -13,   -13,   -12
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const grecs_json_type_uint8 grecs_json_table[] =
{
      11,     1,     2,     3,     4,    14,     5,    18,    19,     6,
      20,    26,     0,    23,    22,    24,    25,    21
};

#define grecs_json_pact_value_is_default(grecs_json_state) \
  ((grecs_json_state) == (-13))

#define grecs_json_table_value_is_error(grecs_json_table_value) \
  YYID (0)

static const grecs_json_type_int8 grecs_json_check[] =
{
       5,     3,     4,     5,     6,     4,     8,     0,     9,    11,
      10,    23,    -1,    10,    12,    20,    21,    13
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const grecs_json_type_uint8 grecs_json_stos[] =
{
       0,     3,     4,     5,     6,     8,    11,    15,    16,    17,
      20,    16,    18,    19,     4,    21,    22,    23,     0,     9,
      10,    13,    12,    10,    16,    16,    23
};

#define grecs_json_errok		(grecs_json_errstatus = 0)
#define grecs_json_clearin	(grecs_json_char = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto grecs_json_acceptlab
#define YYABORT		goto grecs_json_abortlab
#define YYERROR		goto grecs_json_errorlab


/* Like YYERROR except do call grecs_json_error.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto grecs_json_errlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!grecs_json_errstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (grecs_json_char == YYEMPTY)                                        \
    {                                                           \
      grecs_json_char = (Token);                                         \
      grecs_json_lval = (Value);                                         \
      YYPOPSTACK (grecs_json_len);                                       \
      grecs_json_state = *grecs_json_ssp;                                         \
      goto grecs_json_backup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      grecs_json_error (YY_("syntax error: cannot back up")); \
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


/* YYLEX -- calling `grecs_json_lex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX grecs_json_lex (YYLEX_PARAM)
#else
# define YYLEX grecs_json_lex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (grecs_json_debug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (grecs_json_debug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      grecs_json__symbol_print (stderr,						  \
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
grecs_json__symbol_value_print (FILE *grecs_json_output, int grecs_json_type, YYSTYPE const * const grecs_json_valuep, YYLTYPE const * const grecs_json_locationp)
#else
static void
grecs_json__symbol_value_print (grecs_json_output, grecs_json_type, grecs_json_valuep, grecs_json_locationp)
    FILE *grecs_json_output;
    int grecs_json_type;
    YYSTYPE const * const grecs_json_valuep;
    YYLTYPE const * const grecs_json_locationp;
#endif
{
  FILE *grecs_json_o = grecs_json_output;
  YYUSE (grecs_json_o);
  if (!grecs_json_valuep)
    return;
  YYUSE (grecs_json_locationp);
# ifdef YYPRINT
  if (grecs_json_type < YYNTOKENS)
    YYPRINT (grecs_json_output, grecs_json_toknum[grecs_json_type], *grecs_json_valuep);
# else
  YYUSE (grecs_json_output);
# endif
  switch (grecs_json_type)
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
grecs_json__symbol_print (FILE *grecs_json_output, int grecs_json_type, YYSTYPE const * const grecs_json_valuep, YYLTYPE const * const grecs_json_locationp)
#else
static void
grecs_json__symbol_print (grecs_json_output, grecs_json_type, grecs_json_valuep, grecs_json_locationp)
    FILE *grecs_json_output;
    int grecs_json_type;
    YYSTYPE const * const grecs_json_valuep;
    YYLTYPE const * const grecs_json_locationp;
#endif
{
  if (grecs_json_type < YYNTOKENS)
    YYFPRINTF (grecs_json_output, "token %s (", grecs_json_tname[grecs_json_type]);
  else
    YYFPRINTF (grecs_json_output, "nterm %s (", grecs_json_tname[grecs_json_type]);

  YY_LOCATION_PRINT (grecs_json_output, *grecs_json_locationp);
  YYFPRINTF (grecs_json_output, ": ");
  grecs_json__symbol_value_print (grecs_json_output, grecs_json_type, grecs_json_valuep, grecs_json_locationp);
  YYFPRINTF (grecs_json_output, ")");
}

/*------------------------------------------------------------------.
| grecs_json__stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
grecs_json__stack_print (grecs_json_type_int16 *grecs_json_bottom, grecs_json_type_int16 *grecs_json_top)
#else
static void
grecs_json__stack_print (grecs_json_bottom, grecs_json_top)
    grecs_json_type_int16 *grecs_json_bottom;
    grecs_json_type_int16 *grecs_json_top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; grecs_json_bottom <= grecs_json_top; grecs_json_bottom++)
    {
      int grecs_json_bot = *grecs_json_bottom;
      YYFPRINTF (stderr, " %d", grecs_json_bot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (grecs_json_debug)							\
    grecs_json__stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
grecs_json__reduce_print (YYSTYPE *grecs_json_vsp, YYLTYPE *grecs_json_lsp, int grecs_json_rule)
#else
static void
grecs_json__reduce_print (grecs_json_vsp, grecs_json_lsp, grecs_json_rule)
    YYSTYPE *grecs_json_vsp;
    YYLTYPE *grecs_json_lsp;
    int grecs_json_rule;
#endif
{
  int grecs_json_nrhs = grecs_json_r2[grecs_json_rule];
  int grecs_json_i;
  unsigned long int grecs_json_lno = grecs_json_rline[grecs_json_rule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     grecs_json_rule - 1, grecs_json_lno);
  /* The symbols being reduced.  */
  for (grecs_json_i = 0; grecs_json_i < grecs_json_nrhs; grecs_json_i++)
    {
      YYFPRINTF (stderr, "   $%d = ", grecs_json_i + 1);
      grecs_json__symbol_print (stderr, grecs_json_rhs[grecs_json_prhs[grecs_json_rule] + grecs_json_i],
		       &(grecs_json_vsp[(grecs_json_i + 1) - (grecs_json_nrhs)])
		       , &(grecs_json_lsp[(grecs_json_i + 1) - (grecs_json_nrhs)])		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (grecs_json_debug)				\
    grecs_json__reduce_print (grecs_json_vsp, grecs_json_lsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int grecs_json_debug;
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

# ifndef grecs_json_strlen
#  if defined __GLIBC__ && defined _STRING_H
#   define grecs_json_strlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
grecs_json_strlen (const char *grecs_json_str)
#else
static YYSIZE_T
grecs_json_strlen (grecs_json_str)
    const char *grecs_json_str;
#endif
{
  YYSIZE_T grecs_json_len;
  for (grecs_json_len = 0; grecs_json_str[grecs_json_len]; grecs_json_len++)
    continue;
  return grecs_json_len;
}
#  endif
# endif

# ifndef grecs_json_stpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define grecs_json_stpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
grecs_json_stpcpy (char *grecs_json_dest, const char *grecs_json_src)
#else
static char *
grecs_json_stpcpy (grecs_json_dest, grecs_json_src)
    char *grecs_json_dest;
    const char *grecs_json_src;
#endif
{
  char *grecs_json_d = grecs_json_dest;
  const char *grecs_json_s = grecs_json_src;

  while ((*grecs_json_d++ = *grecs_json_s++) != '\0')
    continue;

  return grecs_json_d - 1;
}
#  endif
# endif

# ifndef grecs_json_tnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for grecs_json_error.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from grecs_json_tname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
grecs_json_tnamerr (char *grecs_json_res, const char *grecs_json_str)
{
  if (*grecs_json_str == '"')
    {
      YYSIZE_T grecs_json_n = 0;
      char const *grecs_json_p = grecs_json_str;

      for (;;)
	switch (*++grecs_json_p)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++grecs_json_p != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (grecs_json_res)
	      grecs_json_res[grecs_json_n] = *grecs_json_p;
	    grecs_json_n++;
	    break;

	  case '"':
	    if (grecs_json_res)
	      grecs_json_res[grecs_json_n] = '\0';
	    return grecs_json_n;
	  }
    do_not_strip_quotes: ;
    }

  if (! grecs_json_res)
    return grecs_json_strlen (grecs_json_str);

  return grecs_json_stpcpy (grecs_json_res, grecs_json_str) - grecs_json_res;
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
grecs_json_syntax_error (YYSIZE_T *grecs_json_msg_alloc, char **grecs_json_msg,
                grecs_json_type_int16 *grecs_json_ssp, int grecs_json_token)
{
  YYSIZE_T grecs_json_size0 = grecs_json_tnamerr (YY_NULL, grecs_json_tname[grecs_json_token]);
  YYSIZE_T grecs_json_size = grecs_json_size0;
  YYSIZE_T grecs_json_size1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *grecs_json_format = YY_NULL;
  /* Arguments of grecs_json_format. */
  char const *grecs_json_arg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int grecs_json_count = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in grecs_json_char) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated grecs_json_char.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (grecs_json_token != YYEMPTY)
    {
      int grecs_json_n = grecs_json_pact[*grecs_json_ssp];
      grecs_json_arg[grecs_json_count++] = grecs_json_tname[grecs_json_token];
      if (!grecs_json_pact_value_is_default (grecs_json_n))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int grecs_json_xbegin = grecs_json_n < 0 ? -grecs_json_n : 0;
          /* Stay within bounds of both grecs_json_check and grecs_json_tname.  */
          int grecs_json_checklim = YYLAST - grecs_json_n + 1;
          int grecs_json_xend = grecs_json_checklim < YYNTOKENS ? grecs_json_checklim : YYNTOKENS;
          int grecs_json_x;

          for (grecs_json_x = grecs_json_xbegin; grecs_json_x < grecs_json_xend; ++grecs_json_x)
            if (grecs_json_check[grecs_json_x + grecs_json_n] == grecs_json_x && grecs_json_x != YYTERROR
                && !grecs_json_table_value_is_error (grecs_json_table[grecs_json_x + grecs_json_n]))
              {
                if (grecs_json_count == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    grecs_json_count = 1;
                    grecs_json_size = grecs_json_size0;
                    break;
                  }
                grecs_json_arg[grecs_json_count++] = grecs_json_tname[grecs_json_x];
                grecs_json_size1 = grecs_json_size + grecs_json_tnamerr (YY_NULL, grecs_json_tname[grecs_json_x]);
                if (! (grecs_json_size <= grecs_json_size1
                       && grecs_json_size1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                grecs_json_size = grecs_json_size1;
              }
        }
    }

  switch (grecs_json_count)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        grecs_json_format = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  grecs_json_size1 = grecs_json_size + grecs_json_strlen (grecs_json_format);
  if (! (grecs_json_size <= grecs_json_size1 && grecs_json_size1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  grecs_json_size = grecs_json_size1;

  if (*grecs_json_msg_alloc < grecs_json_size)
    {
      *grecs_json_msg_alloc = 2 * grecs_json_size;
      if (! (grecs_json_size <= *grecs_json_msg_alloc
             && *grecs_json_msg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *grecs_json_msg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *grecs_json_p = *grecs_json_msg;
    int grecs_json_i = 0;
    while ((*grecs_json_p = *grecs_json_format) != '\0')
      if (*grecs_json_p == '%' && grecs_json_format[1] == 's' && grecs_json_i < grecs_json_count)
        {
          grecs_json_p += grecs_json_tnamerr (grecs_json_p, grecs_json_arg[grecs_json_i++]);
          grecs_json_format += 2;
        }
      else
        {
          grecs_json_p++;
          grecs_json_format++;
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
grecs_json_destruct (const char *grecs_json_msg, int grecs_json_type, YYSTYPE *grecs_json_valuep, YYLTYPE *grecs_json_locationp)
#else
static void
grecs_json_destruct (grecs_json_msg, grecs_json_type, grecs_json_valuep, grecs_json_locationp)
    const char *grecs_json_msg;
    int grecs_json_type;
    YYSTYPE *grecs_json_valuep;
    YYLTYPE *grecs_json_locationp;
#endif
{
  YYUSE (grecs_json_valuep);
  YYUSE (grecs_json_locationp);

  if (!grecs_json_msg)
    grecs_json_msg = "Deleting";
  YY_SYMBOL_PRINT (grecs_json_msg, grecs_json_type, grecs_json_valuep, grecs_json_locationp);

  switch (grecs_json_type)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int grecs_json_parse (void *YYPARSE_PARAM);
#else
int grecs_json_parse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int grecs_json_parse (void);
#else
int grecs_json_parse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int grecs_json_char;

/* The semantic value of the lookahead symbol.  */
YYSTYPE grecs_json_lval;

/* Location data for the lookahead symbol.  */
YYLTYPE grecs_json_lloc;

/* Number of syntax errors so far.  */
int grecs_json_nerrs;


/*----------.
| grecs_json_parse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
grecs_json_parse (void *YYPARSE_PARAM)
#else
int
grecs_json_parse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
grecs_json_parse (void)
#else
int
grecs_json_parse ()

#endif
#endif
{
    int grecs_json_state;
    /* Number of tokens to shift before error messages enabled.  */
    int grecs_json_errstatus;

    /* The stacks and their tools:
       `grecs_json_ss': related to states.
       `grecs_json_vs': related to semantic values.
       `grecs_json_ls': related to locations.

       Refer to the stacks through separate pointers, to allow grecs_json_overflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    grecs_json_type_int16 grecs_json_ssa[YYINITDEPTH];
    grecs_json_type_int16 *grecs_json_ss;
    grecs_json_type_int16 *grecs_json_ssp;

    /* The semantic value stack.  */
    YYSTYPE grecs_json_vsa[YYINITDEPTH];
    YYSTYPE *grecs_json_vs;
    YYSTYPE *grecs_json_vsp;

    /* The location stack.  */
    YYLTYPE grecs_json_lsa[YYINITDEPTH];
    YYLTYPE *grecs_json_ls;
    YYLTYPE *grecs_json_lsp;

    /* The locations where the error started and ended.  */
    YYLTYPE grecs_json_error_range[3];

    YYSIZE_T grecs_json_stacksize;

  int grecs_json_n;
  int grecs_json_result;
  /* Lookahead token as an internal (translated) token number.  */
  int grecs_json_token;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE grecs_json_val;
  YYLTYPE grecs_json_loc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char grecs_json_msgbuf[128];
  char *grecs_json_msg = grecs_json_msgbuf;
  YYSIZE_T grecs_json_msg_alloc = sizeof grecs_json_msgbuf;
#endif

#define YYPOPSTACK(N)   (grecs_json_vsp -= (N), grecs_json_ssp -= (N), grecs_json_lsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int grecs_json_len = 0;

  grecs_json_token = 0;
  grecs_json_ss = grecs_json_ssa;
  grecs_json_vs = grecs_json_vsa;
  grecs_json_ls = grecs_json_lsa;
  grecs_json_stacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  grecs_json_state = 0;
  grecs_json_errstatus = 0;
  grecs_json_nerrs = 0;
  grecs_json_char = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  grecs_json_ssp = grecs_json_ss;
  grecs_json_vsp = grecs_json_vs;
  grecs_json_lsp = grecs_json_ls;

#if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  grecs_json_lloc.first_line   = grecs_json_lloc.last_line   = 1;
  grecs_json_lloc.first_column = grecs_json_lloc.last_column = 1;
#endif

  goto grecs_json_setstate;

/*------------------------------------------------------------.
| grecs_json_newstate -- Push a new state, which is found in grecs_json_state.  |
`------------------------------------------------------------*/
 grecs_json_newstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  grecs_json_ssp++;

 grecs_json_setstate:
  *grecs_json_ssp = grecs_json_state;

  if (grecs_json_ss + grecs_json_stacksize - 1 <= grecs_json_ssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T grecs_json_size = grecs_json_ssp - grecs_json_ss + 1;

#ifdef grecs_json_overflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *grecs_json_vs1 = grecs_json_vs;
	grecs_json_type_int16 *grecs_json_ss1 = grecs_json_ss;
	YYLTYPE *grecs_json_ls1 = grecs_json_ls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if grecs_json_overflow is a macro.  */
	grecs_json_overflow (YY_("memory exhausted"),
		    &grecs_json_ss1, grecs_json_size * sizeof (*grecs_json_ssp),
		    &grecs_json_vs1, grecs_json_size * sizeof (*grecs_json_vsp),
		    &grecs_json_ls1, grecs_json_size * sizeof (*grecs_json_lsp),
		    &grecs_json_stacksize);

	grecs_json_ls = grecs_json_ls1;
	grecs_json_ss = grecs_json_ss1;
	grecs_json_vs = grecs_json_vs1;
      }
#else /* no grecs_json_overflow */
# ifndef YYSTACK_RELOCATE
      goto grecs_json_exhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= grecs_json_stacksize)
	goto grecs_json_exhaustedlab;
      grecs_json_stacksize *= 2;
      if (YYMAXDEPTH < grecs_json_stacksize)
	grecs_json_stacksize = YYMAXDEPTH;

      {
	grecs_json_type_int16 *grecs_json_ss1 = grecs_json_ss;
	union grecs_json_alloc *grecs_json_ptr =
	  (union grecs_json_alloc *) YYSTACK_ALLOC (YYSTACK_BYTES (grecs_json_stacksize));
	if (! grecs_json_ptr)
	  goto grecs_json_exhaustedlab;
	YYSTACK_RELOCATE (grecs_json_ss_alloc, grecs_json_ss);
	YYSTACK_RELOCATE (grecs_json_vs_alloc, grecs_json_vs);
	YYSTACK_RELOCATE (grecs_json_ls_alloc, grecs_json_ls);
#  undef YYSTACK_RELOCATE
	if (grecs_json_ss1 != grecs_json_ssa)
	  YYSTACK_FREE (grecs_json_ss1);
      }
# endif
#endif /* no grecs_json_overflow */

      grecs_json_ssp = grecs_json_ss + grecs_json_size - 1;
      grecs_json_vsp = grecs_json_vs + grecs_json_size - 1;
      grecs_json_lsp = grecs_json_ls + grecs_json_size - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) grecs_json_stacksize));

      if (grecs_json_ss + grecs_json_stacksize - 1 <= grecs_json_ssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", grecs_json_state));

  if (grecs_json_state == YYFINAL)
    YYACCEPT;

  goto grecs_json_backup;

/*-----------.
| grecs_json_backup.  |
`-----------*/
grecs_json_backup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  grecs_json_n = grecs_json_pact[grecs_json_state];
  if (grecs_json_pact_value_is_default (grecs_json_n))
    goto grecs_json_default;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (grecs_json_char == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      grecs_json_char = YYLEX;
    }

  if (grecs_json_char <= YYEOF)
    {
      grecs_json_char = grecs_json_token = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      grecs_json_token = YYTRANSLATE (grecs_json_char);
      YY_SYMBOL_PRINT ("Next token is", grecs_json_token, &grecs_json_lval, &grecs_json_lloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  grecs_json_n += grecs_json_token;
  if (grecs_json_n < 0 || YYLAST < grecs_json_n || grecs_json_check[grecs_json_n] != grecs_json_token)
    goto grecs_json_default;
  grecs_json_n = grecs_json_table[grecs_json_n];
  if (grecs_json_n <= 0)
    {
      if (grecs_json_table_value_is_error (grecs_json_n))
        goto grecs_json_errlab;
      grecs_json_n = -grecs_json_n;
      goto grecs_json_reduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (grecs_json_errstatus)
    grecs_json_errstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", grecs_json_token, &grecs_json_lval, &grecs_json_lloc);

  /* Discard the shifted token.  */
  grecs_json_char = YYEMPTY;

  grecs_json_state = grecs_json_n;
  *++grecs_json_vsp = grecs_json_lval;
  *++grecs_json_lsp = grecs_json_lloc;
  goto grecs_json_newstate;


/*-----------------------------------------------------------.
| grecs_json_default -- do the default action for the current state.  |
`-----------------------------------------------------------*/
grecs_json_default:
  grecs_json_n = grecs_json_defact[grecs_json_state];
  if (grecs_json_n == 0)
    goto grecs_json_errlab;
  goto grecs_json_reduce;


/*-----------------------------.
| grecs_json_reduce -- Do a reduction.  |
`-----------------------------*/
grecs_json_reduce:
  /* grecs_json_n is the number of a rule to reduce with.  */
  grecs_json_len = grecs_json_r2[grecs_json_n];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  grecs_json_val = grecs_json_vsp[1-grecs_json_len];

  /* Default location.  */
  YYLLOC_DEFAULT (grecs_json_loc, (grecs_json_lsp - grecs_json_len), grecs_json_len);
  YY_REDUCE_PRINT (grecs_json_n);
  switch (grecs_json_n)
    {
        case 2:

/* Line 1810 of yacc.c  */
#line 76 "json-gram.y"
    {
  	      json_return_obj = (grecs_json_vsp[(1) - (1)].obj);
	  }
    break;

  case 3:

/* Line 1810 of yacc.c  */
#line 82 "json-gram.y"
    {
	      (grecs_json_val.obj) = json_value_create(json_number);
	      (grecs_json_val.obj)->v.n = (grecs_json_vsp[(1) - (1)].n);
          }
    break;

  case 4:

/* Line 1810 of yacc.c  */
#line 87 "json-gram.y"
    {
	      (grecs_json_val.obj) = json_value_create(json_string);
	      (grecs_json_val.obj)->v.s = (grecs_json_vsp[(1) - (1)].s);
          }
    break;

  case 5:

/* Line 1810 of yacc.c  */
#line 92 "json-gram.y"
    {
	      (grecs_json_val.obj) = json_value_create(json_bool);
	      (grecs_json_val.obj)->v.b = (grecs_json_vsp[(1) - (1)].b);
          }
    break;

  case 6:

/* Line 1810 of yacc.c  */
#line 97 "json-gram.y"
    {
	      (grecs_json_val.obj) = json_value_create(json_null);
          }
    break;

  case 8:

/* Line 1810 of yacc.c  */
#line 102 "json-gram.y"
    {
	      (grecs_json_val.obj) = json_value_create(json_object);
	      (grecs_json_val.obj)->v.o = (grecs_json_vsp[(1) - (1)].o);
          }
    break;

  case 9:

/* Line 1810 of yacc.c  */
#line 109 "json-gram.y"
    {
	       (grecs_json_val.obj) = json_new_array();
	       (grecs_json_val.obj)->v.a->ol = (grecs_json_vsp[(2) - (3)].list);
          }
    break;

  case 10:

/* Line 1810 of yacc.c  */
#line 116 "json-gram.y"
    {
	       (grecs_json_val.list) = NULL;
          }
    break;

  case 12:

/* Line 1810 of yacc.c  */
#line 123 "json-gram.y"
    {
	       (grecs_json_val.list) = grecs_list_create();
 	       grecs_list_append((grecs_json_val.list), (grecs_json_vsp[(1) - (1)].obj));
          }
    break;

  case 13:

/* Line 1810 of yacc.c  */
#line 128 "json-gram.y"
    {
 	       grecs_list_append((grecs_json_vsp[(1) - (3)].list), (grecs_json_vsp[(3) - (3)].obj));
          }
    break;

  case 14:

/* Line 1810 of yacc.c  */
#line 134 "json-gram.y"
    {
	      struct grecs_symtab *s;

	      s = json_assoc_create();
	      if ((grecs_json_vsp[(2) - (3)].list)) {
	          struct grecs_list_entry *ep;
                  for (ep = (grecs_json_vsp[(2) - (3)].list)->head; ep; ep = ep->next) {
	              struct json_pair *p = ep->data;
		      int install = 1;
		      grecs_symtab_lookup_or_install(s, p, &install);
		      if (install) {
	                  p->k = NULL;
			  p->v = NULL;
                      }
                  }
		  grecs_list_free((grecs_json_vsp[(2) - (3)].list));
              }
	      (grecs_json_val.o) = s;
          }
    break;

  case 15:

/* Line 1810 of yacc.c  */
#line 156 "json-gram.y"
    {
	       (grecs_json_val.list) = NULL;
          }
    break;

  case 17:

/* Line 1810 of yacc.c  */
#line 163 "json-gram.y"
    {
	       (grecs_json_val.list) = grecs_list_create();
	       (grecs_json_val.list)->free_entry = pairfree;
 	       grecs_list_append((grecs_json_val.list), (grecs_json_vsp[(1) - (1)].p));
          }
    break;

  case 18:

/* Line 1810 of yacc.c  */
#line 169 "json-gram.y"
    {
 	       grecs_list_append((grecs_json_vsp[(1) - (3)].list), (grecs_json_vsp[(3) - (3)].p));
          }
    break;

  case 19:

/* Line 1810 of yacc.c  */
#line 175 "json-gram.y"
    {
	       struct json_pair *p = grecs_malloc(sizeof(*p));
	       p->k = (grecs_json_vsp[(1) - (3)].s);
	       p->v = (grecs_json_vsp[(3) - (3)].obj);
	       (grecs_json_val.p) = p;
          }
    break;



/* Line 1810 of yacc.c  */
#line 1658 "json-gram.c"
      default: break;
    }
  /* User semantic actions sometimes alter grecs_json_char, and that requires
     that grecs_json_token be updated with the new translation.  We take the
     approach of translating immediately before every use of grecs_json_token.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering grecs_json_char or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", grecs_json_r1[grecs_json_n], &grecs_json_val, &grecs_json_loc);

  YYPOPSTACK (grecs_json_len);
  grecs_json_len = 0;
  YY_STACK_PRINT (grecs_json_ss, grecs_json_ssp);

  *++grecs_json_vsp = grecs_json_val;
  *++grecs_json_lsp = grecs_json_loc;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  grecs_json_n = grecs_json_r1[grecs_json_n];

  grecs_json_state = grecs_json_pgoto[grecs_json_n - YYNTOKENS] + *grecs_json_ssp;
  if (0 <= grecs_json_state && grecs_json_state <= YYLAST && grecs_json_check[grecs_json_state] == *grecs_json_ssp)
    grecs_json_state = grecs_json_table[grecs_json_state];
  else
    grecs_json_state = grecs_json_defgoto[grecs_json_n - YYNTOKENS];

  goto grecs_json_newstate;


/*------------------------------------.
| grecs_json_errlab -- here on detecting error |
`------------------------------------*/
grecs_json_errlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  grecs_json_token = grecs_json_char == YYEMPTY ? YYEMPTY : YYTRANSLATE (grecs_json_char);

  /* If not already recovering from an error, report this error.  */
  if (!grecs_json_errstatus)
    {
      ++grecs_json_nerrs;
#if ! YYERROR_VERBOSE
      grecs_json_error (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR grecs_json_syntax_error (&grecs_json_msg_alloc, &grecs_json_msg, \
                                        grecs_json_ssp, grecs_json_token)
      {
        char const *grecs_json_msgp = YY_("syntax error");
        int grecs_json_syntax_error_status;
        grecs_json_syntax_error_status = YYSYNTAX_ERROR;
        if (grecs_json_syntax_error_status == 0)
          grecs_json_msgp = grecs_json_msg;
        else if (grecs_json_syntax_error_status == 1)
          {
            if (grecs_json_msg != grecs_json_msgbuf)
              YYSTACK_FREE (grecs_json_msg);
            grecs_json_msg = (char *) YYSTACK_ALLOC (grecs_json_msg_alloc);
            if (!grecs_json_msg)
              {
                grecs_json_msg = grecs_json_msgbuf;
                grecs_json_msg_alloc = sizeof grecs_json_msgbuf;
                grecs_json_syntax_error_status = 2;
              }
            else
              {
                grecs_json_syntax_error_status = YYSYNTAX_ERROR;
                grecs_json_msgp = grecs_json_msg;
              }
          }
        grecs_json_error (grecs_json_msgp);
        if (grecs_json_syntax_error_status == 2)
          goto grecs_json_exhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  grecs_json_error_range[1] = grecs_json_lloc;

  if (grecs_json_errstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (grecs_json_char <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (grecs_json_char == YYEOF)
	    YYABORT;
	}
      else
	{
	  grecs_json_destruct ("Error: discarding",
		      grecs_json_token, &grecs_json_lval, &grecs_json_lloc);
	  grecs_json_char = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto grecs_json_errlab1;


/*---------------------------------------------------.
| grecs_json_errorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
grecs_json_errorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label grecs_json_errorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto grecs_json_errorlab;

  grecs_json_error_range[1] = grecs_json_lsp[1-grecs_json_len];
  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (grecs_json_len);
  grecs_json_len = 0;
  YY_STACK_PRINT (grecs_json_ss, grecs_json_ssp);
  grecs_json_state = *grecs_json_ssp;
  goto grecs_json_errlab1;


/*-------------------------------------------------------------.
| grecs_json_errlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
grecs_json_errlab1:
  grecs_json_errstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      grecs_json_n = grecs_json_pact[grecs_json_state];
      if (!grecs_json_pact_value_is_default (grecs_json_n))
	{
	  grecs_json_n += YYTERROR;
	  if (0 <= grecs_json_n && grecs_json_n <= YYLAST && grecs_json_check[grecs_json_n] == YYTERROR)
	    {
	      grecs_json_n = grecs_json_table[grecs_json_n];
	      if (0 < grecs_json_n)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (grecs_json_ssp == grecs_json_ss)
	YYABORT;

      grecs_json_error_range[1] = *grecs_json_lsp;
      grecs_json_destruct ("Error: popping",
		  grecs_json_stos[grecs_json_state], grecs_json_vsp, grecs_json_lsp);
      YYPOPSTACK (1);
      grecs_json_state = *grecs_json_ssp;
      YY_STACK_PRINT (grecs_json_ss, grecs_json_ssp);
    }

  *++grecs_json_vsp = grecs_json_lval;

  grecs_json_error_range[2] = grecs_json_lloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (grecs_json_loc, grecs_json_error_range, 2);
  *++grecs_json_lsp = grecs_json_loc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", grecs_json_stos[grecs_json_n], grecs_json_vsp, grecs_json_lsp);

  grecs_json_state = grecs_json_n;
  goto grecs_json_newstate;


/*-------------------------------------.
| grecs_json_acceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
grecs_json_acceptlab:
  grecs_json_result = 0;
  goto grecs_json_return;

/*-----------------------------------.
| grecs_json_abortlab -- YYABORT comes here.  |
`-----------------------------------*/
grecs_json_abortlab:
  grecs_json_result = 1;
  goto grecs_json_return;

#if !defined grecs_json_overflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| grecs_json_exhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
grecs_json_exhaustedlab:
  grecs_json_error (YY_("memory exhausted"));
  grecs_json_result = 2;
  /* Fall through.  */
#endif

grecs_json_return:
  if (grecs_json_char != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      grecs_json_token = YYTRANSLATE (grecs_json_char);
      grecs_json_destruct ("Cleanup: discarding lookahead",
                  grecs_json_token, &grecs_json_lval, &grecs_json_lloc);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (grecs_json_len);
  YY_STACK_PRINT (grecs_json_ss, grecs_json_ssp);
  while (grecs_json_ssp != grecs_json_ss)
    {
      grecs_json_destruct ("Cleanup: popping",
		  grecs_json_stos[*grecs_json_ssp], grecs_json_vsp, grecs_json_lsp);
      YYPOPSTACK (1);
    }
#ifndef grecs_json_overflow
  if (grecs_json_ss != grecs_json_ssa)
    YYSTACK_FREE (grecs_json_ss);
#endif
#if YYERROR_VERBOSE
  if (grecs_json_msg != grecs_json_msgbuf)
    YYSTACK_FREE (grecs_json_msg);
#endif
  /* Make sure YYID is used.  */
  return YYID (grecs_json_result);
}



/* Line 2071 of yacc.c  */
#line 182 "json-gram.y"


static int
grecs_json_error(char const *s)
{
	jsonlex_diag(s);
	return 0;
}

struct json_value *
json_value_create(int type)
{
	struct json_value *obj = grecs_zalloc(sizeof(*obj));
	obj->type = type;
	return obj;
}

void
json_value_free(struct json_value *obj)
{
	size_t i;
	
	if (!obj)
		return;

	switch (obj->type) {
	case json_null:
        case json_bool:
        case json_number:
		break;
	case json_string:
		grecs_free(obj->v.s);
		break;
	case json_arr:
		for (i = 0; i < obj->v.a->oc; i++)
			json_value_free(obj->v.a->ov[i]);
		grecs_free (obj->v.a->ov);
		if (obj->v.a->ol) {
			obj->v.a->ol->free_entry = objfree;
			grecs_list_free(obj->v.a->ol);
		}
		grecs_free(obj->v.a);
		break;
	case json_object:
		grecs_symtab_free(obj->v.o);
	}
	free(obj);
}

static unsigned
json_st_hash(void *data, unsigned long n_buckets)
{
	struct json_pair *p = data;
	return grecs_hash_string(p->k, n_buckets);
}	

static int
json_st_cmp(const void *a, const void *b)
{
	struct json_pair const *pa = a;
	struct json_pair const *pb = b;
	return strcmp(pa->k, pb->k);
}

static int
json_st_copy(void *a, void *b)
{
	struct json_pair *pa = a;
	struct json_pair *pb = b;
	memcpy(pa, pb, sizeof(*pa));
	return 0;
}

static void
json_st_free(void *ptr)
{
	struct json_pair *p = ptr;
	free(p->k);
	json_value_free(p->v);
	free(p);
}

struct grecs_symtab *
json_assoc_create()
{
	return grecs_symtab_create(sizeof(struct json_pair),
				   json_st_hash,
				   json_st_cmp,
				   json_st_copy,
				   NULL,
				   json_st_free);
}

struct json_value *
json_parse_string(char const *input, size_t len)
{
	jsonlex_setup(input, len);
	if (grecs_json_parse()) {
		/* FIXME: error recovery */
		return NULL;
	}
	return json_return_obj;
}

struct json_value *
json_value_lookup(struct json_value *obj, const char *ident)
{
	char *qbuf = NULL;
	size_t qlen = 0;
	
	while (obj && *ident) {
		char const *p;
		char *q;
		size_t l;
		
		for (p = ident; *p; p++) {
			if (*p == '\\')
				++p;
			else if (*p == '.')
				break;
		}
		l = p - ident + 1;
		if (l > qlen) {
			qlen = l;
			qbuf = grecs_realloc(qbuf, qlen);
		}
		q = qbuf;
		while (*ident) {
			if (*ident == '\\') {
				char c;
				++ident;
				if (json_unescape(*ident, &c))
					*q++ = *ident++;
				else
					*q++ = c;
			} else if (*ident == '.') {
				++ident;
				break;
			} else
				*q++ = *ident++;
		}
		*q = 0;
		
		switch (obj->type) {
		case json_null:
		case json_bool:
		case json_number:
		case json_string:
			obj = NULL;
			break;
		case json_arr:
			l = strtoul(qbuf, &q, 10);
			if (*q != 0 || json_array_get(obj, l, &obj))
				obj = NULL;
			break;
		case json_object:
			if (json_object_get(obj, qbuf, &obj))
				obj = NULL;
		}	
	}
	if (*ident)
		obj = NULL;
	free(qbuf);
	return obj;
}

struct json_value *
json_new_string(char const *str)
{
	struct json_value *j = json_value_create(json_string);
	j->v.s = grecs_strdup(str);
	return j;
}

struct json_value *
json_new_number(double n)
{
	struct json_value *j = json_value_create(json_number);
	j->v.n = n;
	return j;
}

struct json_value *
json_new_bool(int b)
{
	struct json_value *j = json_value_create(json_bool);
	j->v.b = b;
	return j;
}

struct json_value *
json_new_null(void)
{
	return json_value_create(json_null);
}

struct json_value *
json_new_object(void)
{
	struct json_value *j = json_value_create(json_object);
	j->v.o = json_assoc_create();
	return j;
}

int
json_object_set(struct json_value *obj, char const *name,
		struct json_value *val)
{
	struct json_pair pair, *ret;
	int install;
	if (obj->type != json_object) {
		errno = EINVAL;
		return -1;
	}
	pair.k = (char*) name;
	pair.v = NULL;
	ret = grecs_symtab_lookup_or_install(obj->v.o, &pair, &install);
	if (install)
		ret->k = grecs_strdup(ret->k);
	ret->v = val;
	return 0;
}

int
json_object_get(struct json_value *obj, char const *name,
		struct json_value **retval)
{
	struct json_pair pair, *ret;
	if (obj->type != json_object) {
		errno = EINVAL;
		return -1;
	}
	pair.k = (char*) name;
	pair.v = NULL;
	ret = grecs_symtab_lookup_or_install(obj->v.o, &pair, NULL);
	if (ret) {
		*retval = ret->v;
		return 0;
	}
	return 1;
}
	
struct json_value *
json_new_array(void)
{
	struct json_value *j = json_value_create(json_arr);
	j->v.a = grecs_malloc(sizeof(*j->v.a));
	j->v.a->oc = 0;
	j->v.a->ov = NULL;
	j->v.a->ol = NULL;
	return j;
}

size_t
json_array_size(struct json_value *j)
{
	if (j->type != json_arr) {
		errno = EINVAL;
		return 0;
	}
	return j->v.a->oc + grecs_list_size(j->v.a->ol);
}

void
json_array_flatten(struct json_value *j)
{
	size_t size, i;
	struct grecs_list_entry *ep;

	size = grecs_list_size(j->v.a->ol);

	if (size == 0)
		return;

	j->v.a->ov = grecs_realloc(j->v.a->ov,
				 (j->v.a->oc + size) * sizeof(j->v.a->ov[0]));

	for (ep = j->v.a->ol->head, i = j->v.a->oc; ep; ep = ep->next, i++)
		j->v.a->ov[i] = ep->data;
	j->v.a->oc = i;
	grecs_list_clear(j->v.a->ol);
}

int
json_array_insert(struct json_value *j, size_t idx, struct json_value *v)
{
	size_t size;
	if (j->type != json_arr) {
		errno = EINVAL;
		return -1;
	}
	size = json_array_size(j);
	if (idx < size) {
		json_array_flatten(j);
		j->v.a->ov[idx] = v;
	} else {
		size_t i;
		for (i = size; i < idx; i++)
			json_array_append(j, NULL);
		json_array_append(j, v);
	}
	return 0;
}

int
json_array_append(struct json_value *j, struct json_value *v)
{
 	if (j->type != json_arr) {
		errno = EINVAL;
		return -1;
	}

	if (!j->v.a->ol)
		j->v.a->ol = grecs_list_create();
	grecs_list_append(j->v.a->ol, v);
	return 0;
}
		  
int
json_array_set(struct json_value *j, size_t idx, struct json_value *v)
{
 	if (j->type != json_arr) {
		errno = EINVAL;
		return -1;
	}
	if (idx >= json_array_size(j)) {
		errno = ENOENT;
		return -1;
	}
	json_array_flatten(j);
	j->v.a->ov[idx] = v;
	return 0;
}

int
json_array_get(struct json_value *j, size_t idx, struct json_value **retval)
{
	if (j->type != json_arr) {
		errno = EINVAL;
		return -1;
	}
	if (idx >= json_array_size(j)) {
		errno = ENOENT;
		return -1;
	}
		
	json_array_flatten(j);
	*retval = j->v.a->ov[idx];
	return 0;
}

