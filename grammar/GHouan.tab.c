/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "GHouan.y" /* yacc.c:339  */

/*------------------------------------------------------------------
 * Copyright (C)
 *   1996, 1997, 1998 Dmitri Bronnikov, All rights reserved.
 *
 * THIS GRAMMAR IS PROVIDED "AS IS" WITHOUT  ANY  EXPRESS  OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES  OF  MERCHANTABILITY  AND  FITNESS  FOR  A  PARTICULAR
 * PURPOSE, OR NON-INFRINGMENT.
 *
 * Bronikov@inreach.com
 *
 *------------------------------------------------------------------
 *
 * VERSION 1.06 DATE 20 AUG 1998
 *
 *------------------------------------------------------------------
 *
 * UPDATES
 *
 * 1.06 Correction of Java 1.1 syntax
 * 1.05 Yet more Java 1.1
 *      <qualified name>.<allocation expression>
 * 1.04 More Java 1.1 features:
 *      <class name>.this
 *      <type name>.class
 * 1.03 Added Java 1.1 features:
 *      inner classes,
 *      anonymous classes,
 *      non-static initializer blocks,
 *      array initialization by new operator
 * 1.02 Corrected cast expression syntax
 * 1.01 All shift/reduce conflicts, except dangling else, resolved
 *
 *------------------------------------------------------------------
 *
 * PARSING CONFLICTS RESOLVED
 *
 * Some Shift/Reduce conflicts have been resolved at the expense of
 * the grammar defines a superset of the language. The following
 * actions have to be performed to complete program syntax checking:
 *
 * 1) Check that modifiers applied to a class, interface, field,
 *    or constructor are allowed in respectively a class, inteface,
 *    field or constructor declaration. For example, a class
 *    declaration should not allow other modifiers than abstract,
 *    final and public.
 *
 * 2) For an expression statement, check it is either increment, or
 *    decrement, or assignment expression.
 *
 * 3) Check that type expression in a cast operator indicates a type.
 *    Some of the compilers that I have tested will allow simultaneous
 *    use of identically named type and variable in the same scope
 *    depending on context.
 *
 * 4) Change lexical definition to change '[' optionally followed by
 *    any number of white-space characters immediately followed by ']'
 *    to OP_DIM token. I defined this token as [\[]{white_space}*[\]]
 *    in the lexer.
 *
 *------------------------------------------------------------------
 *
 * UNRESOLVED SHIFT/REDUCE CONFLICTS
 *
 * Dangling else in if-then-else
 *
 *------------------------------------------------------------------
 */

#line 137 "GHouan.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ABSTRACT = 258,
    BOOLEAN = 259,
    BREAK = 260,
    BYTE = 261,
    BYVALUE = 262,
    CASE = 263,
    CAST = 264,
    CATCH = 265,
    CHAR = 266,
    CONST = 267,
    CONTINUE = 268,
    DEFAULT = 269,
    DO = 270,
    DOUBLE = 271,
    ELSE = 272,
    EXTENDS = 273,
    FINAL = 274,
    FINALLY = 275,
    FLOAT = 276,
    FOR = 277,
    FUTURE = 278,
    GENERIC = 279,
    GOTO = 280,
    IF = 281,
    IMPLEMENTS = 282,
    USING = 283,
    INNER = 284,
    INSTANCEOF = 285,
    INT = 286,
    INTERFACE = 287,
    LONG = 288,
    NATIVE = 289,
    NEW = 290,
    JNULL = 291,
    OPERATOR = 292,
    OUTER = 293,
    PACKAGE = 294,
    PRIVATE = 295,
    PROTECTED = 296,
    PUBLIC = 297,
    REST = 298,
    RETURN = 299,
    SHORT = 300,
    STATIC = 301,
    SUPER = 302,
    SWITCH = 303,
    SYNCHRONIZED = 304,
    THIS = 305,
    THROW = 306,
    THROWS = 307,
    TRANSIENT = 308,
    TRY = 309,
    VOID = 310,
    VOLATILE = 311,
    WHILE = 312,
    OP_INC = 313,
    OP_DEC = 314,
    OP_SHL = 315,
    OP_SHR = 316,
    OP_SHRR = 317,
    OP_GE = 318,
    OP_LE = 319,
    OP_EQ = 320,
    OP_NE = 321,
    OP_LAND = 322,
    OP_LOR = 323,
    OP_DIM = 324,
    ASS_MUL = 325,
    ASS_DIV = 326,
    ASS_MOD = 327,
    ASS_ADD = 328,
    ASS_SUB = 329,
    ASS_SHL = 330,
    ASS_SHR = 331,
    ASS_SHRR = 332,
    ASS_AND = 333,
    ASS_XOR = 334,
    ASS_OR = 335,
    IDENTIFIER = 336,
    LITERAL = 337,
    BOOLLIT = 338,
    FN = 339,
    REFLEX = 340,
    EMIT = 341,
    AGENT = 342,
    OBJECT = 343,
    TRAIT = 344,
    DIE = 345,
    VAL = 346,
    VAR = 347
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 278 "GHouan.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
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
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

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
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  28
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1647

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  117
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  110
/* YYNRULES -- Number of rules.  */
#define YYNRULES  296
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  489

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   347

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   106,     2,     2,     2,   110,   113,     2,
     100,   101,    96,   107,    93,   108,    95,   109,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   102,    94,
     111,    99,   112,   116,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   103,     2,   104,   114,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    97,   115,    98,   105,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   106,   106,   107,   111,   112,   116,   117,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   133,   134,   138,
     142,   143,   144,   145,   149,   153,   154,   158,   159,   163,
     164,   168,   169,   173,   174,   179,   180,   181,   182,   186,
     187,   188,   189,   190,   191,   192,   193,   197,   198,   202,
     203,   204,   205,   206,   207,   211,   212,   216,   217,   221,
     226,   227,   231,   232,   236,   237,   238,   239,   240,   241,
     245,   246,   250,   251,   255,   256,   260,   261,   262,   266,
     267,   268,   272,   273,   274,   275,   279,   280,   281,   285,
     286,   290,   291,   295,   296,   300,   304,   305,   309,   310,
     311,   312,   316,   317,   321,   325,   329,   330,   334,   335,
     339,   340,   344,   345,   349,   350,   351,   352,   353,   354,
     355,   356,   360,   364,   365,   366,   370,   374,   375,   376,
     380,   381,   382,   383,   387,   388,   389,   393,   394,   398,
     402,   403,   407,   408,   409,   410,   411,   412,   413,   417,
     418,   419,   420,   424,   425,   429,   433,   434,   438,   442,
     443,   447,   448,   449,   453,   454,   458,   459,   460,   461,
     462,   466,   467,   471,   472,   473,   474,   475,   479,   480,
     484,   485,   486,   490,   491,   492,   496,   497,   501,   502,
     506,   507,   508,   509,   510,   511,   515,   516,   520,   521,
     522,   526,   527,   531,   535,   536,   540,   541,   545,   546,
     550,   551,   552,   553,   557,   558,   562,   563,   567,   568,
     572,   573,   574,   575,   579,   580,   584,   588,   589,   590,
     591,   595,   596,   597,   601,   602,   603,   604,   608,   609,
     610,   611,   612,   613,   617,   618,   619,   623,   624,   628,
     629,   633,   634,   638,   639,   643,   644,   648,   649,   653,
     654,   658,   659,   660,   661,   662,   663,   664,   665,   666,
     667,   668,   669,   673,   677,   682,   683,   687,   688,   692,
     693,   694,   698,   702,   703,   706,   707,   711,   712,   713,
     714,   718,   721,   725,   726,   727,   731
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ABSTRACT", "BOOLEAN", "BREAK", "BYTE",
  "BYVALUE", "CASE", "CAST", "CATCH", "CHAR", "CONST", "CONTINUE",
  "DEFAULT", "DO", "DOUBLE", "ELSE", "EXTENDS", "FINAL", "FINALLY",
  "FLOAT", "FOR", "FUTURE", "GENERIC", "GOTO", "IF", "IMPLEMENTS", "USING",
  "INNER", "INSTANCEOF", "INT", "INTERFACE", "LONG", "NATIVE", "NEW",
  "JNULL", "OPERATOR", "OUTER", "PACKAGE", "PRIVATE", "PROTECTED",
  "PUBLIC", "REST", "RETURN", "SHORT", "STATIC", "SUPER", "SWITCH",
  "SYNCHRONIZED", "THIS", "THROW", "THROWS", "TRANSIENT", "TRY", "VOID",
  "VOLATILE", "WHILE", "OP_INC", "OP_DEC", "OP_SHL", "OP_SHR", "OP_SHRR",
  "OP_GE", "OP_LE", "OP_EQ", "OP_NE", "OP_LAND", "OP_LOR", "OP_DIM",
  "ASS_MUL", "ASS_DIV", "ASS_MOD", "ASS_ADD", "ASS_SUB", "ASS_SHL",
  "ASS_SHR", "ASS_SHRR", "ASS_AND", "ASS_XOR", "ASS_OR", "IDENTIFIER",
  "LITERAL", "BOOLLIT", "FN", "REFLEX", "EMIT", "AGENT", "OBJECT", "TRAIT",
  "DIE", "VAL", "VAR", "','", "';'", "'.'", "'*'", "'{'", "'}'", "'='",
  "'('", "')'", "':'", "'['", "']'", "'~'", "'!'", "'+'", "'-'", "'/'",
  "'%'", "'<'", "'>'", "'&'", "'^'", "'|'", "'?'", "$accept",
  "TypeSpecifier", "TypeName", "ObjectNameList", "PrimitiveType",
  "SemiColons", "CompilationUnit", "ProgramFile", "PackageStatement",
  "TypeDeclarations", "TypeDeclarationOptSemi", "UsingStatements",
  "UsingStatement", "QualifiedName", "TypeDeclaration", "ObjectHeader",
  "Modifiers", "Modifier", "ClassWord", "Extends", "Interfaces",
  "FieldDeclarations", "FieldDeclarationOptSemi", "FieldDeclaration",
  "FieldVariableDeclaration", "VariableDeclarators", "VariableDeclarator",
  "VariableInitializer", "ArrayInitializers", "MethodDeclaration",
  "MethodDeclarator", "ParameterList", "Parameter", "DeclaratorName",
  "Throws", "MethodBody", "ConstructorDeclaration",
  "ConstructorDeclarator", "StaticInitializer", "NonStaticInitializer",
  "Block", "LocalVariableDeclarationsAndStatements",
  "LocalVariableDeclarationOrStatement",
  "LocalVariableDeclarationStatement", "Statement", "EmptyStatement",
  "LabelStatement", "ExpressionStatement", "SelectionStatement",
  "IterationStatement", "ForInit", "ForExpr", "ForIncr",
  "ExpressionStatements", "JumpStatement", "GuardingStatement", "Catches",
  "Catch", "CatchHeader", "Finally", "PrimaryExpression", "NotJustName",
  "ComplexPrimary", "ComplexPrimaryNoParenthesis", "ArrayAccess",
  "FieldAccess", "MethodCall", "MethodAccess", "SpecialName",
  "ArgumentList", "NewAllocationExpression",
  "PlainNewAllocationExpression", "ClassAllocationExpression",
  "ArrayAllocationExpression", "DimExprs", "DimExpr", "Dims",
  "PostfixExpression", "RealPostfixExpression", "UnaryExpression",
  "LogicalUnaryExpression", "LogicalUnaryOperator",
  "ArithmeticUnaryOperator", "CastExpression", "PrimitiveTypeExpression",
  "ClassTypeExpression", "MultiplicativeExpression", "AdditiveExpression",
  "ShiftExpression", "RelationalExpression", "EqualityExpression",
  "AndExpression", "ExclusiveOrExpression", "InclusiveOrExpression",
  "ConditionalAndExpression", "ConditionalOrExpression",
  "ConditionalExpression", "AssignmentExpression", "AssignmentOperator",
  "Expression", "ConstantExpression", "AgentFieldDeclarations",
  "AgentFieldDeclarationOptSemi", "AgentFieldDeclaration",
  "AgentPropertyDeclaration", "ValueModifier", "AgentReflexDeclaration",
  "AgentFunctionDeclaration", "AgentParameterList", "AgentParameter", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,    44,    59,    46,    42,   123,   125,    61,
      40,    41,    58,    91,    93,   126,    33,    43,    45,    47,
      37,    60,    62,    38,    94,   124,    63
};
# endif

#define YYPACT_NINF -306

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-306)))

#define YYTABLE_NINF -183

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1376,  -306,  -306,   -33,   -33,  -306,  -306,  -306,  -306,   -38,
    -306,  -306,    83,  -306,    50,   170,  -306,    50,  -306,     6,
      58,   329,  -306,    54,  -306,   109,   176,    94,  -306,   170,
      50,  -306,   170,  -306,  -306,    90,  1322,  -306,    84,    76,
      12,    90,   110,    90,  -306,  -306,  -306,  -306,    -5,   213,
    -306,     6,  -306,   136,  -306,  -306,   170,  -306,  -306,  -306,
    -306,  -306,  -306,  -306,  -306,  -306,   132,  -306,   119,   426,
    -306,   136,   166,  -306,   154,  -306,  1558,  1381,  -306,     6,
    -306,  -306,  -306,   -17,  -306,  -306,  -306,    76,   331,   -33,
     224,  -306,  -306,     6,  -306,   217,  -306,  -306,    90,   163,
    -306,   -31,  -306,   258,    60,  1189,    62,   158,   636,   784,
     165,   181,   784,  -306,   880,  -306,   185,   190,  -306,  1189,
     132,   199,  1229,  1229,   204,  -306,  -306,  -306,  -306,  1189,
    -306,  -306,  -306,  -306,   136,   225,   197,  -306,   531,  -306,
    -306,  -306,  -306,  -306,   242,  -306,  -306,  -306,  -306,  -306,
     243,   240,   253,  -306,  -306,  -306,   260,   263,  -306,  -306,
     273,   277,   264,   285,   416,  -306,  1229,  1189,  -306,    13,
     222,   266,     2,   268,   271,   267,   274,   321,   -39,  -306,
    -306,  -306,   163,    77,   -42,  -306,   341,   136,   -17,  -306,
    -306,    90,   -33,   132,  -306,   224,  -306,   784,  -306,   318,
     154,  -306,    90,   313,   314,   136,   920,   784,   784,  -306,
     136,    71,  -306,   322,  -306,   225,    99,  -306,  -306,   317,
     326,  -306,  -306,   358,   136,   704,  1189,    30,  -306,   327,
    1189,  1189,   328,   143,  1189,  1189,  -306,  -306,  -306,    10,
      93,   324,   325,   332,   256,   339,    38,  1189,  -306,  -306,
    -306,   347,  1189,   960,  1440,   744,  -306,  -306,   348,  -306,
    -306,  -306,  -306,  -306,  -306,  -306,  -306,  -306,  -306,  -306,
    -306,  1189,  -306,  -306,  1189,  1189,  1189,  1189,  1189,  1189,
    1189,  1189,   784,  1189,  1189,  1189,  1189,  1189,  1189,  1189,
    1189,  1189,  1189,  1189,  1189,  -306,  -306,   178,  -306,  -306,
    1126,  -306,   163,    77,   132,  -306,   318,  -306,  -306,  -306,
     -33,   136,   136,  -306,   812,  -306,  -306,   336,   136,   367,
    1503,  -306,  -306,  -306,  -306,   338,   262,  -306,  -306,  -306,
    1000,   279,   342,  1068,  1189,   -47,  -306,   341,  -306,   343,
     345,  -306,   351,   132,   143,  -306,   132,  -306,   352,   353,
     341,   341,  1189,  1189,  1269,  -306,  -306,  -306,  -306,  -306,
     354,  -306,   356,  -306,   129,  -306,  -306,  1499,  -306,  -306,
      89,  -306,  -306,  -306,  -306,  -306,    13,    13,   222,   222,
     222,  -306,   266,   266,   266,   266,     2,     2,   268,   271,
     267,   274,   321,   361,  -306,  -306,   140,   178,  -306,  -306,
     154,  -306,   141,  -306,   152,  -306,   122,   920,   367,  -306,
    1189,  -306,  -306,  1108,   362,  1189,  -306,   636,  -306,   153,
     360,  -306,   341,   132,   636,   784,  -306,  -306,  -306,  -306,
     636,  -306,  -306,  -306,  -306,  -306,  -306,  1189,  -306,  -306,
     920,  -306,  1189,  -306,  -306,   136,   357,   359,  -306,  -306,
     365,   636,   371,   385,  -306,  -306,   438,  -306,  -306,  -306,
    -306,    14,  -306,  -306,  -306,  -306,  -306,   370,   386,   403,
    -306,   636,   636,   378,  -306,   399,   400,  -306,  -306,  -306,
    -306,   136,   136,   183,   195,   178,   178,  -306,  -306
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,    49,    50,     0,     0,    52,    51,    53,    54,     0,
      55,    56,     0,    19,     0,    23,    25,     0,    29,    27,
       0,     0,    47,     0,    33,     0,     0,     0,     1,    21,
       0,    26,    22,    30,    17,    28,     0,    48,     0,    46,
       0,    31,     0,    24,    93,   283,   284,    38,     0,     0,
     275,   277,   279,     0,   280,   281,    20,    18,     8,    10,
       9,    15,    14,    12,    13,    11,    53,    16,    33,     0,
      36,     0,     2,     4,     5,    69,     0,     0,    60,    62,
      64,    65,    66,     0,    67,    68,   105,    43,     0,     0,
      44,    45,    34,     0,    94,     0,    37,   276,   278,   282,
      72,    74,   104,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   185,     0,   184,     0,     0,   183,     0,
       0,     0,     0,     0,    33,   166,   167,   122,   107,     0,
     216,   217,   218,   219,     0,     4,   159,   121,     0,   108,
     110,   111,   114,   115,     0,   117,   118,   119,   120,   206,
     160,   163,   165,   168,   169,   170,     0,   161,   162,   188,
     191,   190,   214,   207,   220,   213,     0,     0,   227,   231,
     234,   238,   244,   247,   249,   251,   253,   255,   257,   259,
     273,   126,    71,     0,    74,   204,     3,     0,     0,    35,
      61,    63,     0,     0,   101,    40,    41,     0,    57,    59,
       6,    42,    32,     0,     0,     0,     0,     0,     0,   103,
       0,     0,    89,     0,   143,     0,   159,   220,   274,     0,
       0,   145,   125,     0,     0,     0,     0,     0,   147,     0,
       0,     0,     0,     0,     0,     0,   210,   211,   123,   224,
     159,     0,     0,     0,     0,     0,     0,     0,   106,   109,
     116,     0,     0,     0,     0,     0,   208,   209,     0,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     261,     0,   215,   212,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    88,    97,     0,    85,    96,
       0,   205,    70,     0,     0,    99,    95,   100,    39,    58,
       0,   295,   295,    73,     0,    75,    76,   289,     0,    91,
       0,   102,   142,   124,   144,     0,     0,   136,   135,   140,
       0,     0,     0,     0,     0,   199,   201,   200,   146,     0,
       0,   148,     0,     0,   151,   153,     0,   150,     0,     0,
     225,   226,     0,     0,   164,   112,   177,   175,   176,   189,
       0,   173,     0,   179,     0,   186,   193,     0,   192,    79,
       0,   174,   260,   228,   229,   230,   232,   233,   235,   236,
     237,   243,   242,   241,   239,   240,   245,   246,   248,   250,
     252,   254,   256,     0,    84,    87,     0,     0,    83,    98,
       7,   296,     0,   293,     0,    77,     0,     0,    92,    90,
       0,   113,   138,     0,     0,     0,   134,     0,   197,     0,
       0,   202,   198,     0,     0,     0,   158,   154,   152,   155,
       0,   164,   221,   222,   223,   171,   172,     0,   178,   195,
      81,   194,     0,    86,    82,     0,     0,     0,    78,   290,
       0,     0,     0,   139,   137,   141,   127,   196,   203,   129,
     149,     0,   130,   187,    80,   258,   294,     0,     0,     0,
     133,     0,     0,     0,   157,     0,     0,   131,   132,   128,
     156,   295,   295,     0,     0,     0,     0,   292,   291
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -306,   -57,   -73,   309,   -27,    19,  -306,  -306,  -306,   104,
     168,   488,    74,    -2,   -23,  -306,   -22,   -13,    -4,   417,
     -67,   249,   -72,  -306,  -306,   -45,  -195,  -200,   191,  -306,
     319,   210,   192,    -9,  -172,  -272,  -306,   435,  -306,  -306,
     -36,  -306,   375,   289,  -105,  -306,  -306,  -204,  -306,  -306,
    -306,  -306,  -306,   103,  -306,  -306,  -306,   173,  -306,   174,
    -306,  -306,  -306,  -306,  -306,  -306,  -306,  -306,  -306,   186,
    -306,   275,  -306,  -306,  -306,   187,  -203,  -306,  -306,   116,
     171,  -306,  -306,  -116,  -306,  -306,    80,    98,    31,    95,
     238,   239,   237,   246,   247,  -306,  -101,   259,  -306,   -86,
    -306,  -306,   492,  -306,  -306,  -306,  -306,  -306,  -305,   106
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    71,    72,   199,   215,    35,    12,    13,    14,    15,
      16,    17,    18,   216,    19,    20,    21,    22,    23,    90,
      91,    77,    78,    79,    80,    99,   100,   369,   370,    81,
     183,   211,   212,   101,   193,   298,    82,    83,    84,    85,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     330,   413,   452,   331,   147,   148,   344,   345,   346,   347,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   364,
     158,   159,   160,   161,   335,   336,   186,   162,   163,   164,
     165,   166,   167,   168,   241,   242,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   271,   181,
     219,    49,    50,    51,    52,    53,    54,    55,   402,   403
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      86,    25,    26,   223,   218,   190,   315,   404,    37,    73,
     313,   297,   134,    75,    76,   198,   304,    38,    48,   187,
     196,   329,   185,   201,   337,   394,   182,    94,   229,   293,
     102,   398,   282,   232,    74,   192,   350,   351,    94,   227,
      48,    86,   135,   243,    41,    43,   210,   194,    24,    73,
      73,   273,   224,     1,    75,    76,   334,   206,   300,    27,
     207,    73,   184,    37,    94,   283,   284,   136,   206,     2,
      98,   207,    38,   112,    74,    74,    73,   294,     3,   185,
      69,   134,    73,    28,   233,    73,    74,   200,   357,   244,
       5,    33,     6,    92,    88,   473,     7,    95,   191,   185,
      34,    74,   239,    89,    33,   245,     8,    74,    93,   274,
      74,   135,   202,   285,   286,   474,   401,   401,    29,    92,
     316,    32,   275,   276,   309,   444,   358,   240,   308,   192,
     333,   397,   422,   334,    56,    39,   136,     9,    10,    11,
     332,   213,   302,   220,   339,   340,   295,   299,   348,   349,
     317,   318,   305,   342,   214,    36,   221,   307,   373,   374,
     375,   360,   185,   343,   320,    87,   362,   365,   134,   316,
      73,   296,   321,     1,    69,    44,   483,   484,   184,   326,
      73,    73,   440,    31,    57,    45,    46,   441,   246,     2,
     200,    92,    47,  -182,   246,    74,   247,    31,   135,  -182,
      31,   319,   247,    34,    40,    74,    74,   449,   393,   329,
       5,   455,     6,   487,   488,   440,     7,    44,    86,   103,
     448,   217,   437,   136,    31,   381,     8,    73,   316,    69,
     438,    75,    76,   320,   445,   185,   432,   433,   236,   237,
     464,   443,   446,   210,   414,   445,   437,   365,   420,    42,
     401,    89,    74,   447,   457,    73,   205,     9,    10,    11,
     222,   299,    58,   210,    59,   225,    -5,   299,   399,    60,
      34,    42,   296,    73,    61,    69,   445,   208,    -5,    62,
      74,   226,   272,   217,   485,   230,   401,   401,   445,    63,
     231,    64,   246,    73,    44,   190,   486,  -182,    74,   234,
     247,   203,   204,    65,    45,    46,   238,   426,   400,   408,
     429,    96,   456,    67,   382,   383,   384,   385,    74,   460,
     245,   316,   256,   257,   450,   462,   279,   280,   281,   277,
     278,    86,     1,   287,   288,    58,   250,    59,   251,    24,
      73,   465,    60,   252,    75,    76,   470,    61,     2,   205,
     355,   463,    62,  -180,   316,   205,   411,   376,   377,   209,
     253,   299,    63,  -181,    64,    74,   478,   479,   461,     5,
     254,     6,   415,   416,   255,     7,    65,   378,   379,   380,
     258,   290,   386,   387,   289,     8,    67,   459,   292,   291,
     217,   217,   217,   217,   217,   217,   217,   217,    73,   217,
     217,   217,   217,   217,   217,   217,   217,   217,   217,   217,
     301,   310,    24,   311,   312,   325,   322,    10,    11,   323,
     324,   338,   341,    74,   197,   352,   353,   356,   361,   371,
      58,   104,    59,   354,   105,   407,    94,    60,   410,   106,
     107,   108,    61,   417,   423,   109,   424,    62,   110,   299,
     299,   425,   111,   430,   431,   472,   454,    63,   435,    64,
     436,   112,   113,   442,   458,   467,   469,   468,   217,   217,
     114,    65,   471,   115,   116,   117,   118,   119,   415,   480,
     120,    67,   475,   121,   122,   123,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   477,   476,   481,
     482,   306,    30,   367,   195,   406,   303,   124,   125,   126,
     396,   188,   409,   249,   328,   270,   453,   427,   428,   419,
     127,   359,   421,    69,   128,   434,   129,   388,   390,   389,
     372,   130,   131,   132,   133,    58,   104,    59,   391,   105,
     392,    97,    60,     0,   106,   107,   108,    61,     0,     0,
     109,   466,    62,   110,     0,     0,     0,   111,   217,     0,
       0,     0,    63,     0,    64,     0,   112,   113,     0,     0,
       0,     0,     0,     0,     0,   114,    65,     0,   115,   116,
     117,   118,   119,     0,     0,   120,    67,     0,   121,   122,
     123,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   124,   125,   126,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   127,     0,     0,    69,   248,
       0,   129,     0,     0,     0,     0,   130,   131,   132,   133,
      58,   104,    59,     0,   105,     0,     0,    60,     0,   106,
     107,   108,    61,     0,     0,     0,     0,    62,   110,     0,
       0,     0,   111,     0,     0,     0,     0,    63,     0,    64,
       0,   112,   113,     0,     0,     0,     0,     0,     0,     0,
     114,    65,     0,   115,   116,   117,   118,   119,     0,     0,
     120,    67,     0,   121,   122,   123,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    58,     0,
      59,     0,     0,     0,     0,    60,     0,   124,   125,   126,
      61,     0,     0,   109,     0,    62,     0,     0,     0,     0,
     127,     0,     0,    69,     0,    63,   129,    64,     0,   112,
     113,   130,   131,   132,   133,     0,     0,     0,    58,    65,
      59,   115,     0,     0,   118,    60,     0,     0,     0,    67,
      61,     0,   122,   123,     0,    62,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    63,     0,    64,     0,   112,
     113,     0,     0,     0,     0,    24,   125,   126,    58,    65,
      59,   115,     0,     0,   118,    60,     0,     0,   327,    67,
      61,     0,   122,   123,   129,    62,     0,     0,     0,   130,
     131,   132,   133,     0,     0,    63,    58,    64,    59,     0,
       0,     0,     0,    60,     0,    24,   125,   126,    61,    65,
       0,     0,     0,    62,     0,     0,     0,     0,     0,    67,
       0,   314,   368,    63,   129,    64,     0,   112,   113,   130,
     131,   132,   133,     0,     0,     0,     0,    65,     0,   115,
       0,     0,   118,     0,     0,    24,     0,    67,     0,     0,
     122,   123,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    58,     0,    59,     0,     0,     0,
       0,    60,     0,    24,   125,   126,    61,     0,     0,     0,
       0,    62,     0,     0,     0,     0,     0,     0,     0,   314,
     405,    63,   129,    64,     0,   112,   113,   130,   131,   132,
     133,     0,     0,     0,    58,    65,    59,   115,     0,     0,
     118,    60,     0,     0,     0,    67,    61,     0,   122,   123,
       0,    62,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    63,     0,    64,     0,   112,   113,     0,     0,     0,
       0,    24,   125,   126,    58,    65,    59,   115,     0,     0,
     118,    60,     0,     0,   228,    67,    61,     0,   122,   123,
     129,    62,     0,     0,     0,   130,   131,   132,   133,     0,
       0,    63,     0,    64,     0,   112,   113,     0,     0,     0,
       0,    24,   125,   126,    58,    65,    59,   115,     0,     0,
     118,    60,     0,     0,     0,    67,    61,   314,   122,   123,
     129,    62,     0,     0,     0,   130,   131,   132,   133,     0,
       0,    63,     0,    64,     0,   112,   113,     0,     0,     0,
       0,    24,   125,   126,     0,    65,     0,   115,     0,     0,
     118,     0,     0,     0,     0,    67,     0,     0,   122,   123,
     129,   363,     0,     0,     0,   130,   131,   132,   133,     0,
       0,     0,    58,     0,    59,     0,     0,     0,     0,    60,
       0,    24,   125,   126,    61,     0,     0,     0,     0,    62,
       0,     0,     0,     0,   412,     0,     0,     0,     0,    63,
     129,    64,     0,   112,   113,   130,   131,   132,   133,     0,
       0,     0,    58,    65,    59,   115,     0,     0,   118,    60,
       0,     0,     0,    67,    61,     0,   122,   123,     0,    62,
      58,     0,    59,     0,     0,     0,     0,    60,     0,    63,
       0,    64,    61,   112,   113,   208,     0,    62,     0,    24,
     125,   126,     0,    65,     0,   115,     0,    63,   118,    64,
       0,     0,     0,    67,     0,     0,   122,   123,   129,   418,
       0,    65,     0,   130,   131,   132,   133,     0,     0,     0,
       0,    67,     0,     0,     0,     0,     0,     0,     0,    24,
     125,   126,     0,    58,     0,    59,     0,     0,     0,     0,
      60,     0,     0,     0,     0,    61,     0,    24,   129,   451,
      62,     0,     0,   130,   131,   132,   133,     0,     0,     0,
      63,     0,    64,     0,   112,   113,     0,   395,     0,     0,
       0,     0,     0,    58,    65,    59,   115,     0,     0,   118,
      60,     0,     0,     0,    67,    61,     0,   122,   123,     0,
      62,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      63,     0,    64,     0,   112,   113,     0,     0,     0,     0,
      24,   125,   126,    58,    65,    59,   115,     0,     0,   118,
      60,     0,     0,     0,    67,    61,     0,   122,   123,   129,
      62,     0,     0,     0,   130,   131,   132,   133,     0,     0,
      63,     0,    64,     0,   112,   113,     0,     0,     0,     0,
      24,   125,   126,     0,    65,     0,   115,     0,     0,   118,
       0,     0,     0,     0,    67,     1,    58,     0,    59,   235,
       0,     0,     0,    60,   130,   131,   132,   133,    61,     0,
       0,     2,     0,    62,     0,     0,     0,     0,     0,     0,
      24,   125,   126,    63,     0,    64,     0,     0,     0,     0,
       0,     0,     5,     0,     6,     0,     0,    65,    66,   235,
       0,     0,     0,     0,   130,   131,     0,    67,     8,     1,
       0,     0,     0,     0,     1,    58,     0,    59,     0,     0,
       0,     0,    60,     0,     0,     2,     0,    61,     0,     0,
       2,     0,    62,    68,     3,     0,     0,     0,     0,     9,
      10,    11,    63,     0,    64,     4,     5,     0,     6,    69,
      70,     5,     7,     6,     0,     0,    65,    66,     0,     0,
       0,     0,     8,     0,     0,     0,    67,     8,     0,     0,
       0,     0,     0,     1,    58,     0,    59,     0,     0,     0,
       0,    60,     0,     0,     0,     0,    61,     0,     0,     2,
       0,    62,    68,     9,    10,    11,     0,     0,     9,    10,
      11,    63,     0,    64,     0,     0,     0,     0,    69,   189,
       5,     0,     6,     0,     0,    65,    66,     0,     0,     0,
       0,     0,     0,     0,     0,    67,     8,     0,     0,     0,
       0,     0,     1,    58,     0,    59,     0,    58,     0,    59,
      60,     0,     0,     0,    60,    61,     0,     0,     2,    61,
      62,    68,   208,     0,    62,     0,     0,     9,    10,    11,
      63,     0,    64,     0,    63,     0,    64,    69,   366,     5,
       0,     6,     0,     0,    65,    66,     0,     0,    65,     0,
       0,     0,     0,     0,    67,     8,     0,     0,    67,     0,
       0,     1,    58,     0,    59,     0,     0,     0,     0,    60,
       0,     0,     0,     0,    61,     0,     0,     2,     0,    62,
      68,     0,     0,     0,    24,     0,     9,    10,    11,    63,
       0,    64,     0,     0,     0,     0,    69,   439,     5,     0,
       6,     0,     0,    65,     7,     0,     0,     0,     0,     0,
       0,     0,     0,    67,     8,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    68,
       0,     0,     0,     0,     0,     0,    10,    11
};

static const yytype_int16 yycheck[] =
{
      36,     3,     4,   108,   105,    77,   206,   312,    21,    36,
     205,   183,    69,    36,    36,    88,   188,    21,    27,    76,
      87,   225,    69,    90,   227,   297,    71,    69,   114,    68,
      66,   303,    30,   119,    36,    52,   239,   240,    69,   112,
      49,    77,    69,   129,    25,    26,   103,    83,    81,    76,
      77,   167,   109,     3,    77,    77,   103,    99,   100,    97,
     102,    88,    71,    76,    69,    63,    64,    69,    99,    19,
      51,   102,    76,    35,    76,    77,   103,   116,    28,    69,
      97,   138,   109,     0,   120,   112,    88,    89,    50,   134,
      40,    17,    42,    81,    18,    81,    46,   102,    79,    69,
      94,   103,   129,    27,    30,    95,    56,   109,    96,    96,
     112,   138,    93,   111,   112,   101,   311,   312,    14,    81,
     206,    17,   109,   110,   197,   397,    88,   129,   195,    52,
     100,   303,   335,   103,    30,    81,   138,    87,    88,    89,
     226,    81,   187,    81,   230,   231,    69,   183,   234,   235,
     207,   208,   188,    10,    94,    97,    94,   193,   274,   275,
     276,   247,    69,    20,    93,    81,   252,   253,   225,   255,
     197,    94,   101,     3,    97,    81,   481,   482,   187,   224,
     207,   208,    93,    15,    94,    91,    92,    98,    95,    19,
     192,    81,    98,   100,    95,   197,   103,    29,   225,   100,
      32,   210,   103,    94,    95,   207,   208,   407,   294,   413,
      40,   415,    42,   485,   486,    93,    46,    81,   254,   100,
      98,   105,    93,   225,    56,   282,    56,   254,   314,    97,
     101,   254,   254,    93,    93,    69,   352,   353,   122,   123,
     440,   101,   101,   300,   330,    93,    93,   333,   334,    95,
     445,    27,   254,   101,   101,   282,    93,    87,    88,    89,
     102,   297,     4,   320,     6,   100,    69,   303,   304,    11,
      94,    95,    94,   300,    16,    97,    93,    19,    81,    21,
     282,   100,   166,   167,   101,   100,   481,   482,    93,    31,
     100,    33,    95,   320,    81,   367,   101,   100,   300,   100,
     103,    84,    85,    45,    91,    92,   102,   343,   310,   318,
     346,    98,   417,    55,   283,   284,   285,   286,   320,   424,
      95,   407,    58,    59,   410,   430,    60,    61,    62,   107,
     108,   367,     3,    65,    66,     4,    94,     6,    95,    81,
     367,   442,    11,   103,   367,   367,   451,    16,    19,    93,
      94,   437,    21,   100,   440,    93,    94,   277,   278,   101,
     100,   397,    31,   100,    33,   367,   471,   472,   425,    40,
      97,    42,    93,    94,    97,    46,    45,   279,   280,   281,
      95,   114,   287,   288,   113,    56,    55,   423,    67,   115,
     274,   275,   276,   277,   278,   279,   280,   281,   425,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
      69,    93,    81,   100,   100,    57,    94,    88,    89,   102,
      94,    94,    94,   425,    93,   101,   101,    88,    81,    81,
       4,     5,     6,   101,     8,    99,    69,    11,   100,    13,
      14,    15,    16,   101,   101,    19,   101,    21,    22,   485,
     486,   100,    26,   101,   101,    17,    94,    31,   104,    33,
     104,    35,    36,   102,   104,   108,   101,   108,   352,   353,
      44,    45,   101,    47,    48,    49,    50,    51,    93,   101,
      54,    55,   112,    57,    58,    59,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    94,   112,   100,
     100,   192,    14,   254,    87,   314,   187,    81,    82,    83,
     300,    76,   320,   138,   225,    99,   413,   344,   344,   333,
      94,   246,   335,    97,    98,   354,   100,   289,   291,   290,
     271,   105,   106,   107,   108,     4,     5,     6,   292,     8,
     293,    49,    11,    -1,    13,    14,    15,    16,    -1,    -1,
      19,   445,    21,    22,    -1,    -1,    -1,    26,   442,    -1,
      -1,    -1,    31,    -1,    33,    -1,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    45,    -1,    47,    48,
      49,    50,    51,    -1,    -1,    54,    55,    -1,    57,    58,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    82,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    94,    -1,    -1,    97,    98,
      -1,   100,    -1,    -1,    -1,    -1,   105,   106,   107,   108,
       4,     5,     6,    -1,     8,    -1,    -1,    11,    -1,    13,
      14,    15,    16,    -1,    -1,    -1,    -1,    21,    22,    -1,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    31,    -1,    33,
      -1,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    45,    -1,    47,    48,    49,    50,    51,    -1,    -1,
      54,    55,    -1,    57,    58,    59,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,    -1,
       6,    -1,    -1,    -1,    -1,    11,    -1,    81,    82,    83,
      16,    -1,    -1,    19,    -1,    21,    -1,    -1,    -1,    -1,
      94,    -1,    -1,    97,    -1,    31,   100,    33,    -1,    35,
      36,   105,   106,   107,   108,    -1,    -1,    -1,     4,    45,
       6,    47,    -1,    -1,    50,    11,    -1,    -1,    -1,    55,
      16,    -1,    58,    59,    -1,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    33,    -1,    35,
      36,    -1,    -1,    -1,    -1,    81,    82,    83,     4,    45,
       6,    47,    -1,    -1,    50,    11,    -1,    -1,    94,    55,
      16,    -1,    58,    59,   100,    21,    -1,    -1,    -1,   105,
     106,   107,   108,    -1,    -1,    31,     4,    33,     6,    -1,
      -1,    -1,    -1,    11,    -1,    81,    82,    83,    16,    45,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    97,    98,    31,   100,    33,    -1,    35,    36,   105,
     106,   107,   108,    -1,    -1,    -1,    -1,    45,    -1,    47,
      -1,    -1,    50,    -1,    -1,    81,    -1,    55,    -1,    -1,
      58,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     4,    -1,     6,    -1,    -1,    -1,
      -1,    11,    -1,    81,    82,    83,    16,    -1,    -1,    -1,
      -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    97,
      98,    31,   100,    33,    -1,    35,    36,   105,   106,   107,
     108,    -1,    -1,    -1,     4,    45,     6,    47,    -1,    -1,
      50,    11,    -1,    -1,    -1,    55,    16,    -1,    58,    59,
      -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    33,    -1,    35,    36,    -1,    -1,    -1,
      -1,    81,    82,    83,     4,    45,     6,    47,    -1,    -1,
      50,    11,    -1,    -1,    94,    55,    16,    -1,    58,    59,
     100,    21,    -1,    -1,    -1,   105,   106,   107,   108,    -1,
      -1,    31,    -1,    33,    -1,    35,    36,    -1,    -1,    -1,
      -1,    81,    82,    83,     4,    45,     6,    47,    -1,    -1,
      50,    11,    -1,    -1,    -1,    55,    16,    97,    58,    59,
     100,    21,    -1,    -1,    -1,   105,   106,   107,   108,    -1,
      -1,    31,    -1,    33,    -1,    35,    36,    -1,    -1,    -1,
      -1,    81,    82,    83,    -1,    45,    -1,    47,    -1,    -1,
      50,    -1,    -1,    -1,    -1,    55,    -1,    -1,    58,    59,
     100,   101,    -1,    -1,    -1,   105,   106,   107,   108,    -1,
      -1,    -1,     4,    -1,     6,    -1,    -1,    -1,    -1,    11,
      -1,    81,    82,    83,    16,    -1,    -1,    -1,    -1,    21,
      -1,    -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,    31,
     100,    33,    -1,    35,    36,   105,   106,   107,   108,    -1,
      -1,    -1,     4,    45,     6,    47,    -1,    -1,    50,    11,
      -1,    -1,    -1,    55,    16,    -1,    58,    59,    -1,    21,
       4,    -1,     6,    -1,    -1,    -1,    -1,    11,    -1,    31,
      -1,    33,    16,    35,    36,    19,    -1,    21,    -1,    81,
      82,    83,    -1,    45,    -1,    47,    -1,    31,    50,    33,
      -1,    -1,    -1,    55,    -1,    -1,    58,    59,   100,   101,
      -1,    45,    -1,   105,   106,   107,   108,    -1,    -1,    -1,
      -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      82,    83,    -1,     4,    -1,     6,    -1,    -1,    -1,    -1,
      11,    -1,    -1,    -1,    -1,    16,    -1,    81,   100,   101,
      21,    -1,    -1,   105,   106,   107,   108,    -1,    -1,    -1,
      31,    -1,    33,    -1,    35,    36,    -1,   101,    -1,    -1,
      -1,    -1,    -1,     4,    45,     6,    47,    -1,    -1,    50,
      11,    -1,    -1,    -1,    55,    16,    -1,    58,    59,    -1,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    33,    -1,    35,    36,    -1,    -1,    -1,    -1,
      81,    82,    83,     4,    45,     6,    47,    -1,    -1,    50,
      11,    -1,    -1,    -1,    55,    16,    -1,    58,    59,   100,
      21,    -1,    -1,    -1,   105,   106,   107,   108,    -1,    -1,
      31,    -1,    33,    -1,    35,    36,    -1,    -1,    -1,    -1,
      81,    82,    83,    -1,    45,    -1,    47,    -1,    -1,    50,
      -1,    -1,    -1,    -1,    55,     3,     4,    -1,     6,   100,
      -1,    -1,    -1,    11,   105,   106,   107,   108,    16,    -1,
      -1,    19,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    82,    83,    31,    -1,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    42,    -1,    -1,    45,    46,   100,
      -1,    -1,    -1,    -1,   105,   106,    -1,    55,    56,     3,
      -1,    -1,    -1,    -1,     3,     4,    -1,     6,    -1,    -1,
      -1,    -1,    11,    -1,    -1,    19,    -1,    16,    -1,    -1,
      19,    -1,    21,    81,    28,    -1,    -1,    -1,    -1,    87,
      88,    89,    31,    -1,    33,    39,    40,    -1,    42,    97,
      98,    40,    46,    42,    -1,    -1,    45,    46,    -1,    -1,
      -1,    -1,    56,    -1,    -1,    -1,    55,    56,    -1,    -1,
      -1,    -1,    -1,     3,     4,    -1,     6,    -1,    -1,    -1,
      -1,    11,    -1,    -1,    -1,    -1,    16,    -1,    -1,    19,
      -1,    21,    81,    87,    88,    89,    -1,    -1,    87,    88,
      89,    31,    -1,    33,    -1,    -1,    -1,    -1,    97,    98,
      40,    -1,    42,    -1,    -1,    45,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    -1,    -1,    -1,
      -1,    -1,     3,     4,    -1,     6,    -1,     4,    -1,     6,
      11,    -1,    -1,    -1,    11,    16,    -1,    -1,    19,    16,
      21,    81,    19,    -1,    21,    -1,    -1,    87,    88,    89,
      31,    -1,    33,    -1,    31,    -1,    33,    97,    98,    40,
      -1,    42,    -1,    -1,    45,    46,    -1,    -1,    45,    -1,
      -1,    -1,    -1,    -1,    55,    56,    -1,    -1,    55,    -1,
      -1,     3,     4,    -1,     6,    -1,    -1,    -1,    -1,    11,
      -1,    -1,    -1,    -1,    16,    -1,    -1,    19,    -1,    21,
      81,    -1,    -1,    -1,    81,    -1,    87,    88,    89,    31,
      -1,    33,    -1,    -1,    -1,    -1,    97,    98,    40,    -1,
      42,    -1,    -1,    45,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      -1,    -1,    -1,    -1,    -1,    -1,    88,    89
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    19,    28,    39,    40,    42,    46,    56,    87,
      88,    89,   123,   124,   125,   126,   127,   128,   129,   131,
     132,   133,   134,   135,    81,   130,   130,    97,     0,   126,
     128,   127,   126,   129,    94,   122,    97,   134,   135,    81,
      95,   122,    95,   122,    81,    91,    92,    98,   150,   218,
     219,   220,   221,   222,   223,   224,   126,    94,     4,     6,
      11,    16,    21,    31,    33,    45,    46,    55,    81,    97,
      98,   118,   119,   121,   130,   131,   133,   138,   139,   140,
     141,   146,   153,   154,   155,   156,   157,    81,    18,    27,
     136,   137,    81,    96,    69,   102,    98,   219,   122,   142,
     143,   150,   157,   100,     5,     8,    13,    14,    15,    19,
      22,    26,    35,    36,    44,    47,    48,    49,    50,    51,
      54,    57,    58,    59,    81,    82,    83,    94,    98,   100,
     105,   106,   107,   108,   118,   121,   130,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   171,   172,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   187,   188,
     189,   190,   194,   195,   196,   197,   198,   199,   200,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   216,   142,   147,   150,    69,   193,   118,   154,    98,
     139,   122,    52,   151,   157,   136,   137,    93,   119,   120,
     130,   137,   122,    84,    85,    93,    99,   102,    19,   101,
     118,   148,   149,    81,    94,   121,   130,   196,   213,   217,
      81,    94,   102,   161,   118,   100,   100,   119,    94,   216,
     100,   100,   216,   157,   100,   100,   196,   196,   102,   121,
     130,   201,   202,   216,   142,    95,    95,   103,    98,   159,
      94,    95,   103,   100,    97,    97,    58,    59,    95,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      99,   215,   196,   200,    96,   109,   110,   107,   108,    60,
      61,    62,    30,    63,    64,   111,   112,    65,    66,   113,
     114,   115,    67,    68,   116,    69,    94,   151,   152,   157,
     100,    69,   142,   147,   151,   157,   120,   157,   137,   119,
      93,   100,   100,   143,    97,   144,   216,   118,   118,   150,
      93,   101,    94,   102,    94,    57,   142,    94,   160,   164,
     167,   170,   216,   100,   103,   191,   192,   193,    94,   216,
     216,    94,    10,    20,   173,   174,   175,   176,   216,   216,
     193,   193,   101,   101,   101,    94,    88,    50,    88,   188,
     216,    81,   216,   101,   186,   216,    98,   138,    98,   144,
     145,    81,   214,   200,   200,   200,   203,   203,   204,   204,
     204,   118,   205,   205,   205,   205,   206,   206,   207,   208,
     209,   210,   211,   216,   152,   101,   148,   151,   152,   157,
     130,   143,   225,   226,   225,    98,   145,    99,   150,   149,
     100,    94,    94,   168,   216,    93,    94,   101,   101,   186,
     216,   192,   193,   101,   101,   100,   157,   174,   176,   157,
     101,   101,   200,   200,   197,   104,   104,    93,   101,    98,
      93,    98,   102,   101,   152,    93,   101,   101,    98,   144,
     216,   101,   169,   170,    94,   164,   161,   101,   104,   157,
     161,   118,   161,   216,   144,   213,   226,   108,   108,   101,
     161,   101,    17,    81,   101,   112,   112,    94,   161,   161,
     101,   100,   100,   225,   225,   101,   101,   152,   152
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   117,   118,   118,   119,   119,   120,   120,   121,   121,
     121,   121,   121,   121,   121,   121,   121,   122,   122,   123,
     124,   124,   124,   124,   125,   126,   126,   127,   127,   128,
     128,   129,   129,   130,   130,   131,   131,   131,   131,   132,
     132,   132,   132,   132,   132,   132,   132,   133,   133,   134,
     134,   134,   134,   134,   134,   135,   135,   136,   136,   137,
     138,   138,   139,   139,   140,   140,   140,   140,   140,   140,
     141,   141,   142,   142,   143,   143,   144,   144,   144,   145,
     145,   145,   146,   146,   146,   146,   147,   147,   147,   148,
     148,   149,   149,   150,   150,   151,   152,   152,   153,   153,
     153,   153,   154,   154,   155,   156,   157,   157,   158,   158,
     159,   159,   160,   160,   161,   161,   161,   161,   161,   161,
     161,   161,   162,   163,   163,   163,   164,   165,   165,   165,
     166,   166,   166,   166,   167,   167,   167,   168,   168,   169,
     170,   170,   171,   171,   171,   171,   171,   171,   171,   172,
     172,   172,   172,   173,   173,   174,   175,   175,   176,   177,
     177,   178,   178,   178,   179,   179,   180,   180,   180,   180,
     180,   181,   181,   182,   182,   182,   182,   182,   183,   183,
     184,   184,   184,   185,   185,   185,   186,   186,   187,   187,
     188,   188,   188,   188,   188,   188,   189,   189,   190,   190,
     190,   191,   191,   192,   193,   193,   194,   194,   195,   195,
     196,   196,   196,   196,   197,   197,   198,   198,   199,   199,
     200,   200,   200,   200,   201,   201,   202,   203,   203,   203,
     203,   204,   204,   204,   205,   205,   205,   205,   206,   206,
     206,   206,   206,   206,   207,   207,   207,   208,   208,   209,
     209,   210,   210,   211,   211,   212,   212,   213,   213,   214,
     214,   215,   215,   215,   215,   215,   215,   215,   215,   215,
     215,   215,   215,   216,   217,   218,   218,   219,   219,   220,
     220,   220,   221,   222,   222,   142,   142,   143,   143,   143,
     143,   223,   224,   225,   225,   225,   226
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       3,     2,     2,     1,     3,     1,     2,     1,     2,     1,
       2,     3,     5,     1,     3,     4,     3,     4,     3,     5,
       4,     4,     4,     3,     3,     3,     2,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     3,     2,
       1,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       3,     2,     1,     3,     1,     3,     1,     2,     3,     1,
       3,     2,     5,     4,     4,     3,     4,     3,     2,     1,
       3,     2,     3,     1,     2,     2,     1,     1,     4,     3,
       3,     2,     4,     3,     2,     1,     3,     2,     1,     2,
       1,     1,     3,     4,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     2,     3,     2,     1,     5,     7,     5,
       5,     7,     7,     6,     2,     1,     1,     2,     1,     1,
       1,     3,     3,     2,     3,     2,     3,     2,     3,     5,
       3,     3,     4,     1,     2,     2,     5,     4,     2,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     4,     4,     3,     3,     3,     3,     3,     4,     3,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     3,
       1,     1,     3,     3,     4,     4,     5,     4,     4,     3,
       3,     1,     2,     3,     1,     2,     1,     1,     2,     2,
       2,     2,     2,     1,     1,     2,     1,     1,     1,     1,
       1,     4,     4,     4,     1,     2,     2,     1,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     1,     3,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     5,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     2,     1,
       1,     1,     2,     1,     1,     1,     3,     1,     3,     3,
       5,    12,    12,     1,     3,     0,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
      
#line 1989 "GHouan.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
