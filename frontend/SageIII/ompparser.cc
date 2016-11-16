/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse omp_parse
#define yylex   omp_lex
#define yyerror omp_error
#define yylval  omp_lval
#define yychar  omp_char
#define yydebug omp_debug
#define yynerrs omp_nerrs


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     OMP = 258,
     PARALLEL = 259,
     IF = 260,
     NUM_THREADS = 261,
     ORDERED = 262,
     SCHEDULE = 263,
     STATIC = 264,
     DYNAMIC = 265,
     GUIDED = 266,
     RUNTIME = 267,
     SECTIONS = 268,
     SINGLE = 269,
     NOWAIT = 270,
     SECTION = 271,
     FOR = 272,
     MASTER = 273,
     CRITICAL = 274,
     BARRIER = 275,
     ATOMIC = 276,
     FLUSH = 277,
     THREADPRIVATE = 278,
     PRIVATE = 279,
     COPYPRIVATE = 280,
     FIRSTPRIVATE = 281,
     LASTPRIVATE = 282,
     SHARED = 283,
     DEFAULT = 284,
     NONE = 285,
     REDUCTION = 286,
     COPYIN = 287,
     TASK = 288,
     TASKWAIT = 289,
     UNTIED = 290,
     COLLAPSE = 291,
     AUTO = 292,
     LOGAND = 293,
     LOGOR = 294,
     SHLEFT = 295,
     SHRIGHT = 296,
     PLUSPLUS = 297,
     MINUSMINUS = 298,
     PTR_TO = 299,
     LE_OP2 = 300,
     GE_OP2 = 301,
     EQ_OP2 = 302,
     NE_OP2 = 303,
     RIGHT_ASSIGN2 = 304,
     LEFT_ASSIGN2 = 305,
     ADD_ASSIGN2 = 306,
     SUB_ASSIGN2 = 307,
     MUL_ASSIGN2 = 308,
     DIV_ASSIGN2 = 309,
     MOD_ASSIGN2 = 310,
     AND_ASSIGN2 = 311,
     XOR_ASSIGN2 = 312,
     OR_ASSIGN2 = 313,
     LEXICALERROR = 314,
     IDENTIFIER = 315,
     ICONSTANT = 316,
     EXPRESSION = 317,
     ID_EXPRESSION = 318
   };
#endif
/* Tokens.  */
#define OMP 258
#define PARALLEL 259
#define IF 260
#define NUM_THREADS 261
#define ORDERED 262
#define SCHEDULE 263
#define STATIC 264
#define DYNAMIC 265
#define GUIDED 266
#define RUNTIME 267
#define SECTIONS 268
#define SINGLE 269
#define NOWAIT 270
#define SECTION 271
#define FOR 272
#define MASTER 273
#define CRITICAL 274
#define BARRIER 275
#define ATOMIC 276
#define FLUSH 277
#define THREADPRIVATE 278
#define PRIVATE 279
#define COPYPRIVATE 280
#define FIRSTPRIVATE 281
#define LASTPRIVATE 282
#define SHARED 283
#define DEFAULT 284
#define NONE 285
#define REDUCTION 286
#define COPYIN 287
#define TASK 288
#define TASKWAIT 289
#define UNTIED 290
#define COLLAPSE 291
#define AUTO 292
#define LOGAND 293
#define LOGOR 294
#define SHLEFT 295
#define SHRIGHT 296
#define PLUSPLUS 297
#define MINUSMINUS 298
#define PTR_TO 299
#define LE_OP2 300
#define GE_OP2 301
#define EQ_OP2 302
#define NE_OP2 303
#define RIGHT_ASSIGN2 304
#define LEFT_ASSIGN2 305
#define ADD_ASSIGN2 306
#define SUB_ASSIGN2 307
#define MUL_ASSIGN2 308
#define DIV_ASSIGN2 309
#define MOD_ASSIGN2 310
#define AND_ASSIGN2 311
#define XOR_ASSIGN2 312
#define OR_ASSIGN2 313
#define LEXICALERROR 314
#define IDENTIFIER 315
#define ICONSTANT 316
#define EXPRESSION 317
#define ID_EXPRESSION 318




/* Copy the first part of user declarations.  */
#line 10 "../../../../src/frontend/SageIII/ompparser.yy"

#include <stdio.h>
#include <assert.h>
#include <iostream>
#include "sage3basic.h" // Sage Interface and Builders
#include "sageBuilder.h"
#include "OmpAttribute.h"
using namespace OmpSupport;

/* Parser - BISON */

/*the scanner function*/
extern int omp_lex(); 

/*A customized initialization function for the scanner, str is the string to be scanned.*/
extern void omp_lexer_init(const char* str);

//! Initialize the parser with the originating SgPragmaDeclaration and its pragma text
extern void omp_parser_init(SgNode* aNode, const char* str);

/*Treat the entire expression as a string for now
  Implemented in the scanner*/
extern void omp_parse_expr();

//The result AST representing the annotation
extern OmpAttribute* getParsedDirective();

static int omp_error(const char*);

//Insert variable into var_list of some clause
static bool addVar(const char* var);

//Insert expression into some clause
static bool addExpression(const char* expr);

// The current AST annotation being built
static OmpAttribute* ompattribute = NULL;

// The current OpenMP construct or clause type which is being parsed
// It is automatically associated with the current ompattribute
// Used to indicate the OpenMP directive or clause to which a variable list or an expression should get added for the current OpenMP pragma being parsed.
static omp_construct_enum omptype = e_unknown;

// The node to which vars/expressions should get added
//static OmpAttribute* omptype = 0;

// The context node with the pragma annotation being parsed
//
// We attach the attribute to the pragma declaration directly for now, 
// A few OpenMP directive does not affect the next structure block
// This variable is set by the prefix_parser_init() before prefix_parse() is called.
//Liao
static SgNode* gNode;

// The current expression node being generated 
static SgExpression* current_exp = NULL;
bool b_within_variable_list  = false; 


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
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

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 73 "../../../../src/frontend/SageIII/ompparser.yy"
{  int itype;
          double ftype;
          const char* stype;
          void* ptype; /* For expressions */
        }
/* Line 193 of yacc.c.  */
#line 295 "ompparser.cc"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 308 "ompparser.cc"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
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
# if YYENABLE_NLS
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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  33
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   440

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  81
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  102
/* YYNRULES -- Number of rules.  */
#define YYNRULES  229
/* YYNRULES -- Number of states.  */
#define YYNSTATES  329

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   318

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    80,    45,     2,
      37,    39,    43,    42,    40,    44,    54,    79,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    41,     2,
      77,    75,    78,    76,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    46,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    47,     2,     2,     2,     2,     2,
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
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    38,    48,    49,    50,    51,    52,    53,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    13,    15,    17,
      19,    21,    23,    25,    27,    29,    31,    33,    35,    36,
      41,    42,    44,    46,    49,    53,    55,    57,    59,    61,
      63,    65,    66,    72,    73,    79,    80,    81,    88,    89,
      94,    95,    97,    99,   102,   106,   108,   110,   112,   114,
     116,   118,   120,   125,   126,   134,   135,   141,   143,   145,
     147,   149,   151,   152,   157,   158,   160,   162,   165,   169,
     171,   173,   175,   177,   179,   182,   183,   188,   189,   191,
     193,   196,   200,   202,   204,   206,   208,   209,   210,   217,
     218,   223,   224,   226,   229,   233,   235,   237,   239,   241,
     243,   244,   250,   252,   253,   259,   260,   262,   264,   267,
     271,   273,   275,   277,   279,   281,   283,   285,   287,   288,
     294,   295,   297,   299,   302,   306,   308,   310,   312,   314,
     316,   318,   320,   323,   324,   329,   330,   332,   336,   339,
     342,   345,   346,   351,   352,   354,   355,   360,   363,   364,
     365,   373,   378,   383,   384,   385,   392,   393,   394,   401,
     402,   403,   410,   411,   412,   419,   420,   421,   430,   432,
     434,   436,   438,   440,   442,   444,   446,   448,   450,   452,
     456,   460,   464,   468,   472,   476,   480,   484,   488,   492,
     496,   502,   504,   508,   510,   514,   516,   520,   522,   526,
     528,   532,   534,   538,   542,   544,   548,   552,   556,   560,
     562,   566,   570,   572,   576,   580,   582,   586,   590,   594,
     596,   600,   602,   605,   608,   611,   614,   616,   618,   620
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      82,     0,    -1,    83,    -1,    93,    -1,   102,    -1,   108,
      -1,   122,    -1,   127,    -1,   116,    -1,   132,    -1,   133,
      -1,   139,    -1,   145,    -1,   137,    -1,   138,    -1,   140,
      -1,   146,    -1,   107,    -1,    -1,     3,     4,    84,    85,
      -1,    -1,    86,    -1,    87,    -1,    86,    87,    -1,    86,
      40,    87,    -1,    88,    -1,   149,    -1,   150,    -1,   153,
      -1,   159,    -1,   162,    -1,    -1,     5,    89,    37,   166,
      39,    -1,    -1,     6,    90,    37,   166,    39,    -1,    -1,
      -1,    32,    91,    37,    92,   182,    39,    -1,    -1,     3,
      17,    94,    95,    -1,    -1,    96,    -1,    97,    -1,    96,
      97,    -1,    96,    40,    97,    -1,    98,    -1,   150,    -1,
     153,    -1,   156,    -1,   162,    -1,    15,    -1,     7,    -1,
       8,    37,   101,    39,    -1,    -1,     8,    37,   101,    40,
      99,   166,    39,    -1,    -1,    36,   100,    37,   166,    39,
      -1,     9,    -1,    10,    -1,    11,    -1,    38,    -1,    12,
      -1,    -1,     3,    13,   103,   104,    -1,    -1,   105,    -1,
     106,    -1,   105,   106,    -1,   105,    40,   106,    -1,   150,
      -1,   153,    -1,   156,    -1,   162,    -1,    15,    -1,     3,
      16,    -1,    -1,     3,    14,   109,   110,    -1,    -1,   111,
      -1,   112,    -1,   111,   112,    -1,   111,    40,   112,    -1,
     113,    -1,   150,    -1,   153,    -1,    15,    -1,    -1,    -1,
      25,   114,    37,   115,   182,    39,    -1,    -1,     3,    33,
     117,   118,    -1,    -1,   119,    -1,   118,   119,    -1,   118,
      40,   119,    -1,   120,    -1,   149,    -1,   150,    -1,   153,
      -1,   159,    -1,    -1,     5,   121,    37,   166,    39,    -1,
      35,    -1,    -1,     3,     4,    17,   123,   124,    -1,    -1,
     125,    -1,   126,    -1,   125,   126,    -1,   125,    40,   126,
      -1,    88,    -1,    98,    -1,   149,    -1,   150,    -1,   153,
      -1,   156,    -1,   159,    -1,   162,    -1,    -1,     3,     4,
      13,   128,   129,    -1,    -1,   130,    -1,   131,    -1,   130,
     131,    -1,   130,    40,   131,    -1,    88,    -1,   149,    -1,
     150,    -1,   153,    -1,   156,    -1,   159,    -1,   162,    -1,
       3,    18,    -1,    -1,     3,    19,   134,   135,    -1,    -1,
     136,    -1,    37,    74,    39,    -1,     3,    20,    -1,     3,
      34,    -1,     3,    21,    -1,    -1,     3,    22,   141,   142,
      -1,    -1,   143,    -1,    -1,    37,   144,   182,    39,    -1,
       3,     7,    -1,    -1,    -1,     3,    23,   147,    37,   148,
     182,    39,    -1,    29,    37,    28,    39,    -1,    29,    37,
      30,    39,    -1,    -1,    -1,    24,   151,    37,   152,   182,
      39,    -1,    -1,    -1,    26,   154,    37,   155,   182,    39,
      -1,    -1,    -1,    27,   157,    37,   158,   182,    39,    -1,
      -1,    -1,    28,   160,    37,   161,   182,    39,    -1,    -1,
      -1,    31,   163,    37,   165,    41,   164,   182,    39,    -1,
      42,    -1,    43,    -1,    44,    -1,    45,    -1,    46,    -1,
      47,    -1,    48,    -1,    49,    -1,   167,    -1,   168,    -1,
     169,    -1,   181,    75,   167,    -1,   181,    60,   167,    -1,
     181,    61,   167,    -1,   181,    62,   167,    -1,   181,    63,
     167,    -1,   181,    64,   167,    -1,   181,    65,   167,    -1,
     181,    66,   167,    -1,   181,    67,   167,    -1,   181,    68,
     167,    -1,   181,    69,   167,    -1,   169,    76,   167,    41,
     167,    -1,   170,    -1,   169,    49,   170,    -1,   171,    -1,
     170,    48,   171,    -1,   172,    -1,   171,    47,   172,    -1,
     173,    -1,   172,    46,   173,    -1,   174,    -1,   173,    45,
     174,    -1,   175,    -1,   174,    58,   175,    -1,   174,    59,
     175,    -1,   176,    -1,   175,    77,   176,    -1,   175,    78,
     176,    -1,   175,    56,   176,    -1,   175,    57,   176,    -1,
     177,    -1,   176,    51,   177,    -1,   176,    50,   177,    -1,
     178,    -1,   177,    42,   178,    -1,   177,    44,   178,    -1,
     179,    -1,   177,    43,   178,    -1,   177,    79,   178,    -1,
     177,    80,   178,    -1,   181,    -1,    37,   166,    39,    -1,
     180,    -1,    52,   181,    -1,   181,    52,    -1,    53,   181,
      -1,   181,    53,    -1,    72,    -1,    74,    -1,    74,    -1,
     182,    40,    74,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   114,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   132,   132,
     139,   140,   143,   144,   145,   148,   149,   150,   151,   152,
     153,   156,   156,   162,   162,   168,   171,   168,   174,   174,
     180,   181,   184,   185,   186,   189,   190,   191,   192,   193,
     194,   201,   204,   209,   209,   216,   216,   224,   225,   226,
     227,   228,   231,   231,   236,   237,   240,   241,   242,   245,
     246,   247,   248,   249,   254,   259,   259,   265,   266,   269,
     270,   271,   274,   275,   276,   277,   281,   285,   281,   287,
     287,   293,   294,   295,   296,   299,   300,   301,   302,   303,
     306,   306,   312,   317,   317,   322,   323,   326,   327,   328,
     331,   332,   333,   334,   335,   336,   337,   338,   341,   341,
     347,   348,   351,   352,   353,   356,   357,   358,   359,   360,
     361,   362,   365,   369,   369,   374,   375,   382,   387,   391,
     395,   399,   399,   405,   406,   409,   409,   412,   417,   420,
     417,   423,   427,   433,   435,   433,   438,   441,   438,   444,
     447,   444,   450,   452,   450,   455,   457,   455,   460,   464,
     468,   472,   476,   480,   484,   488,   501,   503,   504,   505,
     512,   519,   526,   533,   540,   547,   554,   561,   568,   575,
     584,   594,   595,   604,   605,   614,   615,   624,   625,   634,
     635,   644,   645,   652,   661,   662,   670,   677,   684,   693,
     694,   701,   710,   711,   718,   727,   728,   735,   742,   751,
     752,   755,   758,   765,   772,   779,   788,   792,   808,   809
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "OMP", "PARALLEL", "IF", "NUM_THREADS",
  "ORDERED", "SCHEDULE", "STATIC", "DYNAMIC", "GUIDED", "RUNTIME",
  "SECTIONS", "SINGLE", "NOWAIT", "SECTION", "FOR", "MASTER", "CRITICAL",
  "BARRIER", "ATOMIC", "FLUSH", "THREADPRIVATE", "PRIVATE", "COPYPRIVATE",
  "FIRSTPRIVATE", "LASTPRIVATE", "SHARED", "DEFAULT", "NONE", "REDUCTION",
  "COPYIN", "TASK", "TASKWAIT", "UNTIED", "COLLAPSE", "'('", "AUTO", "')'",
  "','", "':'", "'+'", "'*'", "'-'", "'&'", "'^'", "'|'", "LOGAND",
  "LOGOR", "SHLEFT", "SHRIGHT", "PLUSPLUS", "MINUSMINUS", "'.'", "PTR_TO",
  "LE_OP2", "GE_OP2", "EQ_OP2", "NE_OP2", "RIGHT_ASSIGN2", "LEFT_ASSIGN2",
  "ADD_ASSIGN2", "SUB_ASSIGN2", "MUL_ASSIGN2", "DIV_ASSIGN2",
  "MOD_ASSIGN2", "AND_ASSIGN2", "XOR_ASSIGN2", "OR_ASSIGN2",
  "LEXICALERROR", "IDENTIFIER", "ICONSTANT", "EXPRESSION", "ID_EXPRESSION",
  "'='", "'?'", "'<'", "'>'", "'/'", "'%'", "$accept", "openmp_directive",
  "parallel_directive", "@1", "parallel_clause_optseq",
  "parallel_clause_seq", "parallel_clause", "unique_parallel_clause", "@2",
  "@3", "@4", "@5", "for_directive", "@6", "for_clause_optseq",
  "for_clause_seq", "for_clause", "unique_for_clause", "@7", "@8",
  "schedule_kind", "sections_directive", "@9", "sections_clause_optseq",
  "sections_clause_seq", "sections_clause", "section_directive",
  "single_directive", "@10", "single_clause_optseq", "single_clause_seq",
  "single_clause", "unique_single_clause", "@11", "@12", "task_directive",
  "@13", "task_clause_optseq", "task_clause", "unique_task_clause", "@14",
  "parallel_for_directive", "@15", "parallel_for_clauseoptseq",
  "parallel_for_clause_seq", "parallel_for_clause",
  "parallel_sections_directive", "@16", "parallel_sections_clause_optseq",
  "parallel_sections_clause_seq", "parallel_sections_clause",
  "master_directive", "critical_directive", "@17", "region_phraseopt",
  "region_phrase", "barrier_directive", "taskwait_directive",
  "atomic_directive", "flush_directive", "@18", "flush_varsopt",
  "flush_vars", "@19", "ordered_directive", "threadprivate_directive",
  "@20", "@21", "data_default_clause", "data_privatization_clause", "@22",
  "@23", "data_privatization_in_clause", "@24", "@25",
  "data_privatization_out_clause", "@26", "@27", "data_sharing_clause",
  "@28", "@29", "data_reduction_clause", "@30", "@31",
  "reduction_operator", "expression", "assignment_expr",
  "conditional_expr", "logical_or_expr", "logical_and_expr",
  "inclusive_or_expr", "exclusive_or_expr", "and_expr", "equality_expr",
  "relational_expr", "shift_expr", "additive_expr", "multiplicative_expr",
  "primary_expr", "incr_expr", "unary_expr", "variable_list", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,    40,   292,    41,
      44,    58,    43,    42,    45,    38,    94,   124,   293,   294,
     295,   296,   297,   298,    46,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,    61,    63,    60,    62,    47,
      37
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    81,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    84,    83,
      85,    85,    86,    86,    86,    87,    87,    87,    87,    87,
      87,    89,    88,    90,    88,    91,    92,    88,    94,    93,
      95,    95,    96,    96,    96,    97,    97,    97,    97,    97,
      97,    98,    98,    99,    98,   100,    98,   101,   101,   101,
     101,   101,   103,   102,   104,   104,   105,   105,   105,   106,
     106,   106,   106,   106,   107,   109,   108,   110,   110,   111,
     111,   111,   112,   112,   112,   112,   114,   115,   113,   117,
     116,   118,   118,   118,   118,   119,   119,   119,   119,   119,
     121,   120,   120,   123,   122,   124,   124,   125,   125,   125,
     126,   126,   126,   126,   126,   126,   126,   126,   128,   127,
     129,   129,   130,   130,   130,   131,   131,   131,   131,   131,
     131,   131,   132,   134,   133,   135,   135,   136,   137,   138,
     139,   141,   140,   142,   142,   144,   143,   145,   147,   148,
     146,   149,   149,   151,   152,   150,   154,   155,   153,   157,
     158,   156,   160,   161,   159,   163,   164,   162,   165,   165,
     165,   165,   165,   165,   165,   165,   166,   167,   167,   167,
     167,   167,   167,   167,   167,   167,   167,   167,   167,   167,
     168,   169,   169,   170,   170,   171,   171,   172,   172,   173,
     173,   174,   174,   174,   175,   175,   175,   175,   175,   176,
     176,   176,   177,   177,   177,   178,   178,   178,   178,   179,
     179,   179,   180,   180,   180,   180,   181,   181,   182,   182
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     4,
       0,     1,     1,     2,     3,     1,     1,     1,     1,     1,
       1,     0,     5,     0,     5,     0,     0,     6,     0,     4,
       0,     1,     1,     2,     3,     1,     1,     1,     1,     1,
       1,     1,     4,     0,     7,     0,     5,     1,     1,     1,
       1,     1,     0,     4,     0,     1,     1,     2,     3,     1,
       1,     1,     1,     1,     2,     0,     4,     0,     1,     1,
       2,     3,     1,     1,     1,     1,     0,     0,     6,     0,
       4,     0,     1,     2,     3,     1,     1,     1,     1,     1,
       0,     5,     1,     0,     5,     0,     1,     1,     2,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     5,
       0,     1,     1,     2,     3,     1,     1,     1,     1,     1,
       1,     1,     2,     0,     4,     0,     1,     3,     2,     2,
       2,     0,     4,     0,     1,     0,     4,     2,     0,     0,
       7,     4,     4,     0,     0,     6,     0,     0,     6,     0,
       0,     6,     0,     0,     6,     0,     0,     8,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       5,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     1,
       3,     1,     2,     2,     2,     2,     1,     1,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     3,     4,    17,     5,     8,     6,
       7,     9,    10,    13,    14,    11,    15,    12,    16,    18,
     147,    62,    75,    74,    38,   132,   133,   138,   140,   141,
     148,    89,   139,     1,   118,   103,    20,    64,    77,    40,
     135,   143,     0,    91,   120,   105,    31,    33,   153,   156,
     162,     0,   165,    35,    19,    21,    22,    25,    26,    27,
      28,    29,    30,    73,   159,    63,    65,    66,    69,    70,
      71,    72,    85,    86,    76,    78,    79,    82,    83,    84,
      51,     0,    50,    55,    39,    41,    42,    45,    46,    47,
      48,    49,     0,   134,   136,   145,   142,   144,   149,   100,
     102,    90,    92,    95,    96,    97,    98,    99,   125,   119,
     121,   122,   126,   127,   128,   129,   130,   131,   110,   111,
     104,   106,   107,   112,   113,   114,   115,   116,   117,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    23,     0,
       0,    67,     0,     0,    80,     0,     0,     0,    43,     0,
       0,     0,     0,     0,    93,     0,   123,     0,   108,     0,
       0,   154,   157,   163,     0,     0,     0,    36,    24,   160,
      68,    87,    81,    57,    58,    59,    61,    60,     0,     0,
      44,   137,   228,     0,     0,     0,    94,   124,   109,     0,
       0,     0,   226,   227,     0,   176,   177,   178,   191,   193,
     195,   197,   199,   201,   204,   209,   212,   215,   221,   219,
       0,     0,     0,     0,   151,   152,   168,   169,   170,   171,
     172,   173,   174,   175,     0,     0,     0,     0,    52,    53,
       0,   146,     0,   150,     0,     0,   222,   224,    32,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   223,   225,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    34,     0,     0,     0,   166,     0,     0,     0,     0,
      56,   229,   101,   220,   192,   219,     0,   194,   196,   198,
     200,   202,   203,   207,   208,   205,   206,   211,   210,     0,
     213,   216,   214,   217,   218,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   179,   155,   158,   164,     0,
      37,   161,    88,     0,     0,     0,    54,   190,   167
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    36,    54,    55,    56,    57,   129,   130,
     136,   225,     4,    39,    84,    85,    86,    87,   279,   146,
     178,     5,    37,    65,    66,    67,     6,     7,    38,    74,
      75,    76,    77,   142,   227,     8,    43,   101,   102,   103,
     152,     9,    45,   120,   121,   122,    10,    44,   109,   110,
     111,    11,    12,    40,    93,    94,    13,    14,    15,    16,
      41,    96,    97,   150,    17,    18,    42,   151,    58,    59,
     131,   211,    60,   132,   212,    70,   139,   226,    61,   133,
     213,    62,   135,   319,   224,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   183
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -152
static const yytype_int16 yypact[] =
{
      12,   322,    43,  -152,  -152,  -152,  -152,  -152,  -152,  -152,
    -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,     8,
    -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,
    -152,  -152,  -152,  -152,  -152,  -152,   365,   380,    77,   350,
       3,    13,    34,   325,   356,   175,  -152,  -152,  -152,  -152,
    -152,    41,  -152,  -152,  -152,   270,  -152,  -152,  -152,  -152,
    -152,  -152,  -152,  -152,  -152,  -152,   291,  -152,  -152,  -152,
    -152,  -152,  -152,  -152,  -152,   375,  -152,  -152,  -152,  -152,
    -152,    56,  -152,  -152,  -152,   297,  -152,  -152,  -152,  -152,
    -152,  -152,    32,  -152,  -152,  -152,  -152,  -152,  -152,  -152,
    -152,   285,  -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,
     257,  -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,
    -152,   242,  -152,  -152,  -152,  -152,  -152,  -152,  -152,    76,
      86,    96,   111,   115,     6,   118,   120,   365,  -152,   122,
     380,  -152,   125,    77,  -152,   160,   127,   350,  -152,    70,
      52,    52,   129,   325,  -152,   356,  -152,   175,  -152,   -23,
     -23,  -152,  -152,  -152,   104,   135,   391,  -152,  -152,  -152,
    -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,   -17,   -23,
    -152,  -152,  -152,     7,    27,   -23,  -152,  -152,  -152,   -23,
      22,    22,  -152,  -152,   147,  -152,  -152,   -32,   143,   153,
     150,   164,   -31,   202,    39,   -24,  -152,  -152,  -152,   357,
     166,    52,    52,    52,  -152,  -152,  -152,  -152,  -152,  -152,
    -152,  -152,  -152,  -152,   185,    52,    52,    52,  -152,  -152,
     189,  -152,   172,  -152,   221,   222,  -152,  -152,  -152,   -23,
     -23,   -23,   -23,   -23,   -23,   -23,   -23,   -23,   -23,   -23,
     -23,   -23,   -23,   -23,   -23,   -23,   -23,   -23,  -152,  -152,
     -23,   -23,   -23,   -23,   -23,   -23,   -23,   -23,   -23,   -23,
     -23,  -152,    72,    89,    92,  -152,    97,   100,   106,   -23,
    -152,  -152,  -152,  -152,   143,   132,   223,   153,   150,   164,
     -31,   202,   202,    39,    39,    39,    39,   -24,   -24,   -24,
      74,    74,    74,    74,    74,  -152,  -152,  -152,  -152,  -152,
    -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,    52,
    -152,  -152,  -152,   226,   -23,   149,  -152,  -152,  -152
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -152,  -152,  -152,  -152,  -152,  -152,   -46,    -6,  -152,  -152,
    -152,  -152,  -152,  -152,  -152,  -152,   -77,   -38,  -152,  -152,
    -152,  -152,  -152,  -152,  -152,   -53,  -152,  -152,  -152,  -152,
    -152,   -74,  -152,  -152,  -152,  -152,  -152,  -152,   -99,  -152,
    -152,  -152,  -152,  -152,  -152,   -84,  -152,  -152,  -152,  -152,
    -107,  -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,
    -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,    37,   -33,
    -152,  -152,    20,  -152,  -152,    40,  -152,  -152,    55,  -152,
    -152,   -13,  -152,  -152,  -152,  -144,   -47,  -152,  -152,    28,
      31,    45,    48,    49,   -21,   119,     0,   174,  -152,  -152,
     -12,  -151
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -213
static const yytype_int16 yytable[] =
{
     184,   144,   154,   156,    68,    78,    88,   119,   148,   138,
     105,   113,   124,   141,   189,     1,   210,   239,   253,   254,
     255,    34,   228,   229,    71,    35,    91,   245,   246,   190,
     191,   117,   128,    68,   164,   230,   165,   158,   108,   118,
      92,   234,    78,    33,   240,   235,   231,   232,   187,   192,
      95,   193,    88,    71,   186,   256,   257,    69,    79,    89,
     272,   273,   274,   106,   114,   125,   233,   232,   105,   172,
     180,    98,    91,   188,   276,   277,   278,   113,   134,    90,
     104,   112,   123,   119,   115,   126,    69,   170,   124,   251,
     252,   168,    72,   145,   192,    79,   193,   117,   107,   116,
     127,    48,    73,    49,   108,    89,   149,    68,   128,   181,
      78,   316,   232,   159,    88,   118,  -212,  -212,  -212,   119,
     105,   106,   113,   160,   124,    90,   182,    71,   317,   232,
     114,   318,   232,   161,    91,   323,   320,   232,   104,   321,
     232,   125,   117,   214,   128,   322,   232,   112,   162,   108,
     115,   118,   163,  -212,  -212,   166,   107,   167,   123,   169,
      69,   126,   171,    79,   179,   116,   185,    89,   325,   173,
     174,   175,   176,   106,   215,   114,   127,   125,   236,   237,
      46,    47,    80,    81,   258,   259,   238,    90,   328,   232,
     104,   241,   112,   286,   123,   115,   243,   126,   177,    48,
     242,    49,    64,    50,    51,   271,    52,    53,   107,   244,
     116,    83,   127,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   291,   292,   275,   285,   280,   285,
     285,   285,   285,   285,   285,   285,   285,   285,   285,   285,
     285,   285,   285,   285,   285,   285,   281,    46,    47,    80,
      81,   297,   298,   299,   299,   299,   299,   299,   247,   248,
     282,   283,    46,    47,   324,   326,    48,   284,    49,    64,
      50,    51,   287,    52,    53,    46,    47,   327,    83,   249,
     250,    48,   157,    49,    64,    50,    51,   288,    52,    53,
      99,   289,     0,   290,    48,     0,    49,   155,    50,    51,
       0,    52,    53,     0,    80,    81,    63,     0,     0,    48,
     137,    49,    82,    50,    51,    48,     0,    49,    64,     0,
     100,    48,    52,    49,    64,   153,    19,     0,    52,    20,
      99,   140,     0,    83,     0,    21,    22,   147,    23,    24,
      25,    26,    27,    28,    29,    30,     0,     0,     0,    48,
       0,    49,     0,    50,    51,    31,    32,    80,    81,     0,
     100,    46,    47,     0,     0,    82,   293,   294,   295,   296,
      46,    47,     0,     0,    48,     0,    49,    64,     0,     0,
      48,    52,    49,    64,    50,    51,    83,    52,    53,    48,
      72,    49,     0,    50,    51,    63,    52,    53,     0,    48,
      73,    49,     0,     0,    48,     0,    49,    64,     0,   258,
     259,    52,     0,     0,     0,   143,     0,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   300,   301,   302,
     303,   304,   270,   216,   217,   218,   219,   220,   221,   222,
     223
};

static const yytype_int16 yycheck[] =
{
     151,    75,   101,   110,    37,    38,    39,    45,    85,    55,
      43,    44,    45,    66,    37,     3,   160,    49,    42,    43,
      44,    13,    39,    40,    37,    17,    39,    58,    59,    52,
      53,    44,    45,    66,    28,   179,    30,   121,    44,    45,
      37,   185,    75,     0,    76,   189,    39,    40,   155,    72,
      37,    74,    85,    66,   153,    79,    80,    37,    38,    39,
     211,   212,   213,    43,    44,    45,    39,    40,   101,   143,
     147,    37,    85,   157,   225,   226,   227,   110,    37,    39,
      43,    44,    45,   121,    44,    45,    66,   140,   121,    50,
      51,   137,    15,    37,    72,    75,    74,   110,    43,    44,
      45,    24,    25,    26,   110,    85,    74,   140,   121,    39,
     143,    39,    40,    37,   147,   121,    42,    43,    44,   157,
     153,   101,   155,    37,   157,    85,    74,   140,    39,    40,
     110,    39,    40,    37,   147,   279,    39,    40,   101,    39,
      40,   121,   155,    39,   157,    39,    40,   110,    37,   155,
     110,   157,    37,    79,    80,    37,   101,    37,   121,    37,
     140,   121,    37,   143,    37,   110,    37,   147,   319,     9,
      10,    11,    12,   153,    39,   155,   121,   157,   190,   191,
       5,     6,     7,     8,    52,    53,    39,   147,    39,    40,
     153,    48,   155,   240,   157,   155,    46,   157,    38,    24,
      47,    26,    27,    28,    29,    39,    31,    32,   153,    45,
     155,    36,   157,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   245,   246,    41,   239,    39,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,    74,     5,     6,     7,
       8,   251,   252,   253,   254,   255,   256,   257,    56,    57,
      39,    39,     5,     6,    41,    39,    24,   239,    26,    27,
      28,    29,   241,    31,    32,     5,     6,   324,    36,    77,
      78,    24,    40,    26,    27,    28,    29,   242,    31,    32,
       5,   243,    -1,   244,    24,    -1,    26,    40,    28,    29,
      -1,    31,    32,    -1,     7,     8,    15,    -1,    -1,    24,
      40,    26,    15,    28,    29,    24,    -1,    26,    27,    -1,
      35,    24,    31,    26,    27,    40,     4,    -1,    31,     7,
       5,    40,    -1,    36,    -1,    13,    14,    40,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    -1,    -1,    24,
      -1,    26,    -1,    28,    29,    33,    34,     7,     8,    -1,
      35,     5,     6,    -1,    -1,    15,   247,   248,   249,   250,
       5,     6,    -1,    -1,    24,    -1,    26,    27,    -1,    -1,
      24,    31,    26,    27,    28,    29,    36,    31,    32,    24,
      15,    26,    -1,    28,    29,    15,    31,    32,    -1,    24,
      25,    26,    -1,    -1,    24,    -1,    26,    27,    -1,    52,
      53,    31,    -1,    -1,    -1,    40,    -1,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,   253,   254,   255,
     256,   257,    75,    42,    43,    44,    45,    46,    47,    48,
      49
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    82,    83,    93,   102,   107,   108,   116,   122,
     127,   132,   133,   137,   138,   139,   140,   145,   146,     4,
       7,    13,    14,    16,    17,    18,    19,    20,    21,    22,
      23,    33,    34,     0,    13,    17,    84,   103,   109,    94,
     134,   141,   147,   117,   128,   123,     5,     6,    24,    26,
      28,    29,    31,    32,    85,    86,    87,    88,   149,   150,
     153,   159,   162,    15,    27,   104,   105,   106,   150,   153,
     156,   162,    15,    25,   110,   111,   112,   113,   150,   153,
       7,     8,    15,    36,    95,    96,    97,    98,   150,   153,
     156,   162,    37,   135,   136,    37,   142,   143,    37,     5,
      35,   118,   119,   120,   149,   150,   153,   159,    88,   129,
     130,   131,   149,   150,   153,   156,   159,   162,    88,    98,
     124,   125,   126,   149,   150,   153,   156,   159,   162,    89,
      90,   151,   154,   160,    37,   163,    91,    40,    87,   157,
      40,   106,   114,    40,   112,    37,   100,    40,    97,    74,
     144,   148,   121,    40,   119,    40,   131,    40,   126,    37,
      37,    37,    37,    37,    28,    30,    37,    37,    87,    37,
     106,    37,   112,     9,    10,    11,    12,    38,   101,    37,
      97,    39,    74,   182,   182,    37,   119,   131,   126,    37,
      52,    53,    72,    74,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     166,   152,   155,   161,    39,    39,    42,    43,    44,    45,
      46,    47,    48,    49,   165,    92,   158,   115,    39,    40,
     166,    39,    40,    39,   166,   166,   181,   181,    39,    49,
      76,    48,    47,    46,    45,    58,    59,    56,    57,    77,
      78,    50,    51,    42,    43,    44,    79,    80,    52,    53,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      75,    39,   182,   182,   182,    41,   182,   182,   182,    99,
      39,    74,    39,    39,   170,   181,   167,   171,   172,   173,
     174,   175,   175,   176,   176,   176,   176,   177,   177,   177,
     178,   178,   178,   178,   178,   167,   167,   167,   167,   167,
     167,   167,   167,   167,   167,   167,    39,    39,    39,   164,
      39,    39,    39,   166,    41,   182,    39,   167,    39
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
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
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
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

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 18:
#line 132 "../../../../src/frontend/SageIII/ompparser.yy"
    {
                       ompattribute = buildOmpAttribute(e_parallel,gNode,true);
                       omptype = e_parallel; 
                     }
    break;

  case 31:
#line 156 "../../../../src/frontend/SageIII/ompparser.yy"
    { 
                           ompattribute->addClause(e_if);
                           omptype = e_if;
                         }
    break;

  case 32:
#line 159 "../../../../src/frontend/SageIII/ompparser.yy"
    { 
                           addExpression("");
                         }
    break;

  case 33:
#line 162 "../../../../src/frontend/SageIII/ompparser.yy"
    { 
                           ompattribute->addClause(e_num_threads);       
                           omptype = e_num_threads;
                         }
    break;

  case 34:
#line 165 "../../../../src/frontend/SageIII/ompparser.yy"
    { 
                           addExpression("");
                         }
    break;

  case 35:
#line 168 "../../../../src/frontend/SageIII/ompparser.yy"
    { 
                           ompattribute->addClause(e_copyin);
                           omptype = e_copyin;
                         }
    break;

  case 36:
#line 171 "../../../../src/frontend/SageIII/ompparser.yy"
    {b_within_variable_list = true;}
    break;

  case 37:
#line 171 "../../../../src/frontend/SageIII/ompparser.yy"
    {b_within_variable_list = false;}
    break;

  case 38:
#line 174 "../../../../src/frontend/SageIII/ompparser.yy"
    { 
                  ompattribute = buildOmpAttribute(e_for,gNode,true); 
                }
    break;

  case 50:
#line 194 "../../../../src/frontend/SageIII/ompparser.yy"
    { 
               ompattribute->addClause(e_nowait);
               //Not correct since nowait cannot have expression or var_list
               //omptype =e_nowait;
             }
    break;

  case 51:
#line 201 "../../../../src/frontend/SageIII/ompparser.yy"
    { 
                      ompattribute->addClause(e_ordered_clause);
                    }
    break;

  case 52:
#line 204 "../../../../src/frontend/SageIII/ompparser.yy"
    { 
                      ompattribute->addClause(e_schedule);
                      ompattribute->setScheduleKind(static_cast<omp_construct_enum>((yyvsp[(3) - (4)].itype)));
                      omptype = e_schedule;
                    }
    break;

  case 53:
#line 209 "../../../../src/frontend/SageIII/ompparser.yy"
    { 
                      ompattribute->addClause(e_schedule);
                      ompattribute->setScheduleKind(static_cast<omp_construct_enum>((yyvsp[(3) - (4)].itype)));
                      omptype = e_schedule;
                    }
    break;

  case 54:
#line 213 "../../../../src/frontend/SageIII/ompparser.yy"
    { 
                      addExpression("");
                    }
    break;

  case 55:
#line 216 "../../../../src/frontend/SageIII/ompparser.yy"
    {
                      ompattribute->addClause(e_collapse);
                      omptype = e_collapse;
                    }
    break;

  case 56:
#line 219 "../../../../src/frontend/SageIII/ompparser.yy"
    { 
                      addExpression("");
                    }
    break;

  case 57:
#line 224 "../../../../src/frontend/SageIII/ompparser.yy"
    { (yyval.itype) = e_schedule_static; }
    break;

  case 58:
#line 225 "../../../../src/frontend/SageIII/ompparser.yy"
    { (yyval.itype) = e_schedule_dynamic; }
    break;

  case 59:
#line 226 "../../../../src/frontend/SageIII/ompparser.yy"
    { (yyval.itype) = e_schedule_guided; }
    break;

  case 60:
#line 227 "../../../../src/frontend/SageIII/ompparser.yy"
    { (yyval.itype) = e_schedule_auto; }
    break;

  case 61:
#line 228 "../../../../src/frontend/SageIII/ompparser.yy"
    { (yyval.itype) = e_schedule_runtime; }
    break;

  case 62:
#line 231 "../../../../src/frontend/SageIII/ompparser.yy"
    { 
                       ompattribute = buildOmpAttribute(e_sections,gNode, true); 
                     }
    break;

  case 73:
#line 249 "../../../../src/frontend/SageIII/ompparser.yy"
    { 
                    ompattribute->addClause(e_nowait);
                  }
    break;

  case 74:
#line 254 "../../../../src/frontend/SageIII/ompparser.yy"
    { 
                      ompattribute = buildOmpAttribute(e_section,gNode,true); 
                    }
    break;

  case 75:
#line 259 "../../../../src/frontend/SageIII/ompparser.yy"
    { 
                     ompattribute = buildOmpAttribute(e_single,gNode,true); 
                     omptype = e_single; 
                   }
    break;

  case 85:
#line 277 "../../../../src/frontend/SageIII/ompparser.yy"
    { 
                  ompattribute->addClause(e_nowait);
                }
    break;

  case 86:
#line 281 "../../../../src/frontend/SageIII/ompparser.yy"
    { 
                         ompattribute->addClause(e_copyprivate);
                         omptype = e_copyprivate; 
                       }
    break;

  case 87:
#line 285 "../../../../src/frontend/SageIII/ompparser.yy"
    {b_within_variable_list = true;}
    break;

  case 88:
#line 285 "../../../../src/frontend/SageIII/ompparser.yy"
    {b_within_variable_list =false;}
    break;

  case 89:
#line 287 "../../../../src/frontend/SageIII/ompparser.yy"
    {
                   ompattribute = buildOmpAttribute(e_task,gNode,true);
                   omptype = e_task; 
                 }
    break;

  case 100:
#line 306 "../../../../src/frontend/SageIII/ompparser.yy"
    { 
                       ompattribute->addClause(e_if);
                       omptype = e_if; 
                     }
    break;

  case 101:
#line 309 "../../../../src/frontend/SageIII/ompparser.yy"
    { 
                       addExpression("");
                     }
    break;

  case 102:
#line 312 "../../../../src/frontend/SageIII/ompparser.yy"
    {
                       ompattribute->addClause(e_untied);
                     }
    break;

  case 103:
#line 317 "../../../../src/frontend/SageIII/ompparser.yy"
    { 
                           ompattribute = buildOmpAttribute(e_parallel_for,gNode, true); 
                         }
    break;

  case 118:
#line 341 "../../../../src/frontend/SageIII/ompparser.yy"
    { 
                                ompattribute =buildOmpAttribute(e_parallel_sections,gNode, true); 
                                omptype = e_parallel_sections; 
                              }
    break;

  case 132:
#line 365 "../../../../src/frontend/SageIII/ompparser.yy"
    { 
                     ompattribute = buildOmpAttribute(e_master, gNode, true);}
    break;

  case 133:
#line 369 "../../../../src/frontend/SageIII/ompparser.yy"
    {
                       ompattribute = buildOmpAttribute(e_critical, gNode, true); 
                     }
    break;

  case 137:
#line 382 "../../../../src/frontend/SageIII/ompparser.yy"
    { 
                  ompattribute->setCriticalName((const char*)(yyvsp[(2) - (3)].stype));
                }
    break;

  case 138:
#line 387 "../../../../src/frontend/SageIII/ompparser.yy"
    { 
                      ompattribute = buildOmpAttribute(e_barrier,gNode, true); }
    break;

  case 139:
#line 391 "../../../../src/frontend/SageIII/ompparser.yy"
    { 
                       ompattribute = buildOmpAttribute(e_taskwait, gNode, true); }
    break;

  case 140:
#line 395 "../../../../src/frontend/SageIII/ompparser.yy"
    { 
                     ompattribute = buildOmpAttribute(e_atomic,gNode, true); }
    break;

  case 141:
#line 399 "../../../../src/frontend/SageIII/ompparser.yy"
    {
                    ompattribute = buildOmpAttribute(e_flush,gNode, true);
                    omptype = e_flush; 
                  }
    break;

  case 145:
#line 409 "../../../../src/frontend/SageIII/ompparser.yy"
    {b_within_variable_list = true;}
    break;

  case 146:
#line 409 "../../../../src/frontend/SageIII/ompparser.yy"
    {b_within_variable_list = false;}
    break;

  case 147:
#line 412 "../../../../src/frontend/SageIII/ompparser.yy"
    { 
                      ompattribute = buildOmpAttribute(e_ordered_directive,gNode, true); 
                    }
    break;

  case 148:
#line 417 "../../../../src/frontend/SageIII/ompparser.yy"
    {
                            ompattribute = buildOmpAttribute(e_threadprivate,gNode, true); 
                            omptype = e_threadprivate; 
                          }
    break;

  case 149:
#line 420 "../../../../src/frontend/SageIII/ompparser.yy"
    {b_within_variable_list = true;}
    break;

  case 150:
#line 420 "../../../../src/frontend/SageIII/ompparser.yy"
    {b_within_variable_list = false;}
    break;

  case 151:
#line 423 "../../../../src/frontend/SageIII/ompparser.yy"
    { 
                        ompattribute->addClause(e_default);
                        ompattribute->setDefaultValue(e_default_shared); 
                      }
    break;

  case 152:
#line 427 "../../../../src/frontend/SageIII/ompparser.yy"
    {
                        ompattribute->addClause(e_default);
                        ompattribute->setDefaultValue(e_default_none);
                      }
    break;

  case 153:
#line 433 "../../../../src/frontend/SageIII/ompparser.yy"
    {
                              ompattribute->addClause(e_private); omptype = e_private;
                            }
    break;

  case 154:
#line 435 "../../../../src/frontend/SageIII/ompparser.yy"
    {b_within_variable_list = true;}
    break;

  case 155:
#line 435 "../../../../src/frontend/SageIII/ompparser.yy"
    {b_within_variable_list = false;}
    break;

  case 156:
#line 438 "../../../../src/frontend/SageIII/ompparser.yy"
    { 
                                 ompattribute->addClause(e_firstprivate); 
                                 omptype = e_firstprivate;
                               }
    break;

  case 157:
#line 441 "../../../../src/frontend/SageIII/ompparser.yy"
    {b_within_variable_list = true;}
    break;

  case 158:
#line 441 "../../../../src/frontend/SageIII/ompparser.yy"
    {b_within_variable_list = false;}
    break;

  case 159:
#line 444 "../../../../src/frontend/SageIII/ompparser.yy"
    { 
                                  ompattribute->addClause(e_lastprivate); 
                                  omptype = e_lastprivate;
                                }
    break;

  case 160:
#line 447 "../../../../src/frontend/SageIII/ompparser.yy"
    {b_within_variable_list = true;}
    break;

  case 161:
#line 447 "../../../../src/frontend/SageIII/ompparser.yy"
    {b_within_variable_list = false;}
    break;

  case 162:
#line 450 "../../../../src/frontend/SageIII/ompparser.yy"
    {
                        ompattribute->addClause(e_shared); omptype = e_shared; 
                      }
    break;

  case 163:
#line 452 "../../../../src/frontend/SageIII/ompparser.yy"
    {b_within_variable_list = true;}
    break;

  case 164:
#line 452 "../../../../src/frontend/SageIII/ompparser.yy"
    {b_within_variable_list = false;}
    break;

  case 165:
#line 455 "../../../../src/frontend/SageIII/ompparser.yy"
    { 
                          ompattribute->addClause(e_reduction);
                        }
    break;

  case 166:
#line 457 "../../../../src/frontend/SageIII/ompparser.yy"
    {b_within_variable_list = true;}
    break;

  case 167:
#line 457 "../../../../src/frontend/SageIII/ompparser.yy"
    {b_within_variable_list = false;}
    break;

  case 168:
#line 460 "../../../../src/frontend/SageIII/ompparser.yy"
    {
                       ompattribute->setReductionOperator(e_reduction_plus); 
                       omptype = e_reduction_plus; /*variables are stored for each operator*/
                     }
    break;

  case 169:
#line 464 "../../../../src/frontend/SageIII/ompparser.yy"
    {
                       ompattribute->setReductionOperator(e_reduction_mul);  
                       omptype = e_reduction_mul;
                     }
    break;

  case 170:
#line 468 "../../../../src/frontend/SageIII/ompparser.yy"
    {
                       ompattribute->setReductionOperator(e_reduction_minus); 
                       omptype = e_reduction_minus;
                      }
    break;

  case 171:
#line 472 "../../../../src/frontend/SageIII/ompparser.yy"
    {
                       ompattribute->setReductionOperator(e_reduction_bitand);  
                       omptype = e_reduction_bitand;
                      }
    break;

  case 172:
#line 476 "../../../../src/frontend/SageIII/ompparser.yy"
    {
                       ompattribute->setReductionOperator(e_reduction_bitxor);  
                       omptype = e_reduction_bitxor;
                      }
    break;

  case 173:
#line 480 "../../../../src/frontend/SageIII/ompparser.yy"
    {
                       ompattribute->setReductionOperator(e_reduction_bitor);  
                       omptype = e_reduction_bitor;
                      }
    break;

  case 174:
#line 484 "../../../../src/frontend/SageIII/ompparser.yy"
    {
                       ompattribute->setReductionOperator(e_reduction_logand);  
                       omptype = e_reduction_logand;
                     }
    break;

  case 175:
#line 488 "../../../../src/frontend/SageIII/ompparser.yy"
    {
                       ompattribute->setReductionOperator(e_reduction_logor); 
                       omptype = e_reduction_logor;
                     }
    break;

  case 179:
#line 505 "../../../../src/frontend/SageIII/ompparser.yy"
    {
                    current_exp = SageBuilder::buildAssignOp(
                      (SgExpression*)((yyvsp[(1) - (3)].ptype)),
                      (SgExpression*)((yyvsp[(3) - (3)].ptype))
                    ); 
                    (yyval.ptype) = current_exp;
                  }
    break;

  case 180:
#line 512 "../../../../src/frontend/SageIII/ompparser.yy"
    {
                    current_exp = SageBuilder::buildRshiftAssignOp(
                      (SgExpression*)((yyvsp[(1) - (3)].ptype)),
                      (SgExpression*)((yyvsp[(3) - (3)].ptype))
                    ); 
                    (yyval.ptype) = current_exp;
                  }
    break;

  case 181:
#line 519 "../../../../src/frontend/SageIII/ompparser.yy"
    {
                    current_exp = SageBuilder::buildLshiftAssignOp(
                      (SgExpression*)((yyvsp[(1) - (3)].ptype)),
                      (SgExpression*)((yyvsp[(3) - (3)].ptype))
                    ); 
                    (yyval.ptype) = current_exp;
                  }
    break;

  case 182:
#line 526 "../../../../src/frontend/SageIII/ompparser.yy"
    {
                    current_exp = SageBuilder::buildPlusAssignOp(
                      (SgExpression*)((yyvsp[(1) - (3)].ptype)),
                      (SgExpression*)((yyvsp[(3) - (3)].ptype))
                    ); 
                    (yyval.ptype) = current_exp;
                  }
    break;

  case 183:
#line 533 "../../../../src/frontend/SageIII/ompparser.yy"
    {
                    current_exp = SageBuilder::buildMinusAssignOp(
                      (SgExpression*)((yyvsp[(1) - (3)].ptype)),
                      (SgExpression*)((yyvsp[(3) - (3)].ptype))
                    ); 
                    (yyval.ptype) = current_exp;
                  }
    break;

  case 184:
#line 540 "../../../../src/frontend/SageIII/ompparser.yy"
    {
                    current_exp = SageBuilder::buildMultAssignOp(
                      (SgExpression*)((yyvsp[(1) - (3)].ptype)),
                      (SgExpression*)((yyvsp[(3) - (3)].ptype))
                    ); 
                    (yyval.ptype) = current_exp;
                  }
    break;

  case 185:
#line 547 "../../../../src/frontend/SageIII/ompparser.yy"
    {
                    current_exp = SageBuilder::buildDivAssignOp(
                      (SgExpression*)((yyvsp[(1) - (3)].ptype)),
                      (SgExpression*)((yyvsp[(3) - (3)].ptype))
                    ); 
                    (yyval.ptype) = current_exp;
                  }
    break;

  case 186:
#line 554 "../../../../src/frontend/SageIII/ompparser.yy"
    {
                    current_exp = SageBuilder::buildModAssignOp(
                      (SgExpression*)((yyvsp[(1) - (3)].ptype)),
                      (SgExpression*)((yyvsp[(3) - (3)].ptype))
                    ); 
                    (yyval.ptype) = current_exp;
                  }
    break;

  case 187:
#line 561 "../../../../src/frontend/SageIII/ompparser.yy"
    {
                    current_exp = SageBuilder::buildAndAssignOp(
                      (SgExpression*)((yyvsp[(1) - (3)].ptype)),
                      (SgExpression*)((yyvsp[(3) - (3)].ptype))
                    ); 
                    (yyval.ptype) = current_exp;
                  }
    break;

  case 188:
#line 568 "../../../../src/frontend/SageIII/ompparser.yy"
    {
                    current_exp = SageBuilder::buildXorAssignOp(
                      (SgExpression*)((yyvsp[(1) - (3)].ptype)),
                      (SgExpression*)((yyvsp[(3) - (3)].ptype))
                    ); 
                    (yyval.ptype) = current_exp;
                  }
    break;

  case 189:
#line 575 "../../../../src/frontend/SageIII/ompparser.yy"
    {
                    current_exp = SageBuilder::buildIorAssignOp(
                      (SgExpression*)((yyvsp[(1) - (3)].ptype)),
                      (SgExpression*)((yyvsp[(3) - (3)].ptype))
                    ); 
                    (yyval.ptype) = current_exp;
                  }
    break;

  case 190:
#line 584 "../../../../src/frontend/SageIII/ompparser.yy"
    {
                     current_exp = SageBuilder::buildConditionalExp(
                       (SgExpression*)((yyvsp[(1) - (5)].ptype)),
                       (SgExpression*)((yyvsp[(3) - (5)].ptype)),
                       (SgExpression*)((yyvsp[(5) - (5)].ptype))
                     );
                     (yyval.ptype) = current_exp;
                   }
    break;

  case 192:
#line 595 "../../../../src/frontend/SageIII/ompparser.yy"
    {
                    current_exp = SageBuilder::buildOrOp(
                      (SgExpression*)((yyvsp[(1) - (3)].ptype)),
                      (SgExpression*)((yyvsp[(3) - (3)].ptype))
                    );
                    (yyval.ptype) = current_exp;
                  }
    break;

  case 194:
#line 605 "../../../../src/frontend/SageIII/ompparser.yy"
    {
                     current_exp = SageBuilder::buildAndOp(
                       (SgExpression*)((yyvsp[(1) - (3)].ptype)),
                       (SgExpression*)((yyvsp[(3) - (3)].ptype))
                     );
                   (yyval.ptype) = current_exp;
                 }
    break;

  case 196:
#line 615 "../../../../src/frontend/SageIII/ompparser.yy"
    {
                      current_exp = SageBuilder::buildBitOrOp(
                        (SgExpression*)((yyvsp[(1) - (3)].ptype)),
                        (SgExpression*)((yyvsp[(3) - (3)].ptype))
                      );
                      (yyval.ptype) = current_exp;
                    }
    break;

  case 198:
#line 625 "../../../../src/frontend/SageIII/ompparser.yy"
    {
                      current_exp = SageBuilder::buildBitXorOp(
                        (SgExpression*)((yyvsp[(1) - (3)].ptype)),
                        (SgExpression*)((yyvsp[(3) - (3)].ptype))
                      );
                      (yyval.ptype) = current_exp;
                    }
    break;

  case 200:
#line 635 "../../../../src/frontend/SageIII/ompparser.yy"
    {
             current_exp = SageBuilder::buildBitAndOp(
               (SgExpression*)((yyvsp[(1) - (3)].ptype)),
               (SgExpression*)((yyvsp[(3) - (3)].ptype))
             );
             (yyval.ptype) = current_exp;
           }
    break;

  case 202:
#line 645 "../../../../src/frontend/SageIII/ompparser.yy"
    {
                  current_exp = SageBuilder::buildEqualityOp(
                    (SgExpression*)((yyvsp[(1) - (3)].ptype)),
                    (SgExpression*)((yyvsp[(3) - (3)].ptype))
                  ); 
                  (yyval.ptype) = current_exp;
                }
    break;

  case 203:
#line 652 "../../../../src/frontend/SageIII/ompparser.yy"
    {
                  current_exp = SageBuilder::buildNotEqualOp(
                    (SgExpression*)((yyvsp[(1) - (3)].ptype)),
                    (SgExpression*)((yyvsp[(3) - (3)].ptype))
                  ); 
                  (yyval.ptype) = current_exp;
                }
    break;

  case 205:
#line 662 "../../../../src/frontend/SageIII/ompparser.yy"
    { 
                    current_exp = SageBuilder::buildLessThanOp(
                      (SgExpression*)((yyvsp[(1) - (3)].ptype)),
                      (SgExpression*)((yyvsp[(3) - (3)].ptype))
                    ); 
                    (yyval.ptype) = current_exp; 
                  // std::cout<<"debug: buildLessThanOp():\n"<<current_exp->unparseToString()<<std::endl;
                  }
    break;

  case 206:
#line 670 "../../../../src/frontend/SageIII/ompparser.yy"
    {
                    current_exp = SageBuilder::buildGreaterThanOp(
                      (SgExpression*)((yyvsp[(1) - (3)].ptype)),
                      (SgExpression*)((yyvsp[(3) - (3)].ptype))
                    ); 
                    (yyval.ptype) = current_exp; 
                  }
    break;

  case 207:
#line 677 "../../../../src/frontend/SageIII/ompparser.yy"
    {
                    current_exp = SageBuilder::buildLessOrEqualOp(
                      (SgExpression*)((yyvsp[(1) - (3)].ptype)),
                      (SgExpression*)((yyvsp[(3) - (3)].ptype))
                    ); 
                    (yyval.ptype) = current_exp; 
                  }
    break;

  case 208:
#line 684 "../../../../src/frontend/SageIII/ompparser.yy"
    {
                    current_exp = SageBuilder::buildGreaterOrEqualOp(
                      (SgExpression*)((yyvsp[(1) - (3)].ptype)),
                      (SgExpression*)((yyvsp[(3) - (3)].ptype))
                    );
                    (yyval.ptype) = current_exp; 
                  }
    break;

  case 210:
#line 694 "../../../../src/frontend/SageIII/ompparser.yy"
    {
               current_exp = SageBuilder::buildRshiftOp(
                 (SgExpression*)((yyvsp[(1) - (3)].ptype)),
                 (SgExpression*)((yyvsp[(3) - (3)].ptype))
               ); 
               (yyval.ptype) = current_exp; 
             }
    break;

  case 211:
#line 701 "../../../../src/frontend/SageIII/ompparser.yy"
    {
               current_exp = SageBuilder::buildLshiftOp(
                 (SgExpression*)((yyvsp[(1) - (3)].ptype)),
                 (SgExpression*)((yyvsp[(3) - (3)].ptype))
               ); 
               (yyval.ptype) = current_exp; 
             }
    break;

  case 213:
#line 711 "../../../../src/frontend/SageIII/ompparser.yy"
    {
                  current_exp = SageBuilder::buildAddOp(
                    (SgExpression*)((yyvsp[(1) - (3)].ptype)),
                    (SgExpression*)((yyvsp[(3) - (3)].ptype))
                  ); 
                  (yyval.ptype) = current_exp; 
                }
    break;

  case 214:
#line 718 "../../../../src/frontend/SageIII/ompparser.yy"
    {
                  current_exp = SageBuilder::buildSubtractOp(
                    (SgExpression*)((yyvsp[(1) - (3)].ptype)),
                    (SgExpression*)((yyvsp[(3) - (3)].ptype))
                  ); 
                  (yyval.ptype) = current_exp; 
                }
    break;

  case 216:
#line 728 "../../../../src/frontend/SageIII/ompparser.yy"
    {
                        current_exp = SageBuilder::buildMultiplyOp(
                          (SgExpression*)((yyvsp[(1) - (3)].ptype)),
                          (SgExpression*)((yyvsp[(3) - (3)].ptype))
                        ); 
                        (yyval.ptype) = current_exp; 
                      }
    break;

  case 217:
#line 735 "../../../../src/frontend/SageIII/ompparser.yy"
    {
                        current_exp = SageBuilder::buildDivideOp(
                          (SgExpression*)((yyvsp[(1) - (3)].ptype)),
                          (SgExpression*)((yyvsp[(3) - (3)].ptype))
                        ); 
                        (yyval.ptype) = current_exp; 
                      }
    break;

  case 218:
#line 742 "../../../../src/frontend/SageIII/ompparser.yy"
    {
                        current_exp = SageBuilder::buildModOp(
                          (SgExpression*)((yyvsp[(1) - (3)].ptype)),
                          (SgExpression*)((yyvsp[(3) - (3)].ptype))
                        ); 
                        (yyval.ptype) = current_exp; 
                      }
    break;

  case 220:
#line 752 "../../../../src/frontend/SageIII/ompparser.yy"
    {
                 (yyval.ptype) = current_exp;
               }
    break;

  case 222:
#line 758 "../../../../src/frontend/SageIII/ompparser.yy"
    {
              current_exp = SageBuilder::buildPlusPlusOp(
                (SgExpression*)((yyvsp[(2) - (2)].ptype)),
                SgUnaryOp::prefix
              ); 
              (yyval.ptype) = current_exp; 
            }
    break;

  case 223:
#line 765 "../../../../src/frontend/SageIII/ompparser.yy"
    {
              current_exp = SageBuilder::buildPlusPlusOp(
                (SgExpression*)((yyvsp[(1) - (2)].ptype)),
                SgUnaryOp::postfix
              ); 
              (yyval.ptype) = current_exp; 
            }
    break;

  case 224:
#line 772 "../../../../src/frontend/SageIII/ompparser.yy"
    {
              current_exp = SageBuilder::buildMinusMinusOp(
                (SgExpression*)((yyvsp[(2) - (2)].ptype)),
                SgUnaryOp::prefix
              ); 
              (yyval.ptype) = current_exp; 
            }
    break;

  case 225:
#line 779 "../../../../src/frontend/SageIII/ompparser.yy"
    {
              current_exp = SageBuilder::buildMinusMinusOp(
                (SgExpression*)((yyvsp[(1) - (2)].ptype)),
                SgUnaryOp::postfix
              ); 
              (yyval.ptype) = current_exp; 
            }
    break;

  case 226:
#line 788 "../../../../src/frontend/SageIII/ompparser.yy"
    {
               current_exp = SageBuilder::buildIntVal((yyvsp[(1) - (1)].itype)); 
               (yyval.ptype) = current_exp; 
             }
    break;

  case 227:
#line 792 "../../../../src/frontend/SageIII/ompparser.yy"
    { 
               current_exp = SageBuilder::buildVarRefExp(
                 (const char*)((yyvsp[(1) - (1)].stype)),SageInterface::getScope(gNode)
               ); 
               (yyval.ptype) = current_exp; 
             }
    break;

  case 228:
#line 808 "../../../../src/frontend/SageIII/ompparser.yy"
    { if (!addVar((const char*)(yyvsp[(1) - (1)].stype))) YYABORT; }
    break;

  case 229:
#line 809 "../../../../src/frontend/SageIII/ompparser.yy"
    { if (!addVar((const char*)(yyvsp[(3) - (3)].stype))) YYABORT; }
    break;


/* Line 1267 of yacc.c.  */
#line 2794 "ompparser.cc"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 812 "../../../../src/frontend/SageIII/ompparser.yy"

int yyerror(const char *s) {
    printf("%s!\n", s);
    return 0;
}


OmpAttribute* getParsedDirective() {
    return ompattribute;
}

void omp_parser_init(SgNode* aNode, const char* str) {
    omp_lexer_init(str);
    gNode = aNode;
}

static bool addVar(const char* var)  {
    ompattribute->addVariable(omptype,var);
    return true;
}

// The ROSE's string-based AST construction is not stable,
// pass real expressions as SgExpression, Liao
static bool addExpression(const char* expr) {
    // ompattribute->addExpression(omptype,std::string(expr),NULL);
    // std::cout<<"debug: current expression is:"<<current_exp->unparseToString()<<std::endl;
    ompattribute->addExpression(omptype,std::string(expr),current_exp);
    return true;
}


