
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

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

/* Substitute the variable and function names.  */
#define yyparse         c_cs_cpp_parserparse
#define yylex           c_cs_cpp_parserlex
#define yyerror         c_cs_cpp_parsererror
#define yylval          c_cs_cpp_parserlval
#define yychar          c_cs_cpp_parserchar
#define yydebug         c_cs_cpp_parserdebug
#define yynerrs         c_cs_cpp_parsernerrs
#define yylloc          c_cs_cpp_parserlloc

/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 19 "c_cs_cpp_parser.y"

#include "parsemisc.h"
#include "c_cs_cpp_parser.h"
#define yyerror c_cs_cpp_parsererror
static Scope *kr_function_def_scope_p=NULL;
static YYLTYPE kr_function_def_pos;
static int level=0;
#define YYMAXDEPTH 100000
#define YYINITDEPTH 1000
#ifndef NO_DEBUG
#define DUMP_SCOPE(sc) DEBUG2("Scoped Name:%s\n",sc?sc->fullName().c_str():"(null)")
#else
#define DUMP_SCOPE(X)
#endif
#if OS_WIN32
#pragma warning(disable : 4065)
#endif


/* Line 189 of yacc.c  */
#line 101 "c_cs_cpp_parser_yacc_release.cxx"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
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
   enum yytokentype {
     _IDENTIFIER_ = 258,
     _STRUCT_ = 259,
     _EXTERN_ = 260,
     _PRIVATE_ = 261,
     _AND_OP_ = 262,
     _OR_OP_ = 263,
     _CASE_ = 264,
     _DEFAULT_ = 265,
     _IF_ = 266,
     _ELSE_ = 267,
     _SWITCH_ = 268,
     _WHILE_ = 269,
     _DO_ = 270,
     _FOR_ = 271,
     _GOTO_ = 272,
     _CONTINUE_ = 273,
     _BREAK_ = 274,
     _RETURN_ = 275,
     _THROW_ = 276,
     _SOMETHING_ = 277,
     _SOME_BINARY_OPERATOR_ = 278,
     _QUALIF_ = 279,
     _STATIC_ = 280,
     _TRY_ = 281,
     _CATCH_ = 282,
     _ASM_ = 283,
     _TOKEN_NOT_FOUND_ = 284,
     _TOKEN_TO_IGNORE_ = 285,
     _ASM_MS_LINE_ = 286,
     _UNSAFE_ = 287,
     _FINALLY_ = 288,
     _FOREACH_ = 289,
     _LOCK_ = 290,
     _USING_ = 291,
     _SET_GET_ = 292,
     _DELEGATE_ = 293,
     _YIELD_ = 294
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 39 "c_cs_cpp_parser.y"

    token_t                         token                     ; 
    compound_t                      compound                  ; 
    exit_function_t                 exit_function             ; 
    qualified_identifier_t          qualified_identifier      ; 
    qualified_identifier_func_t     qualified_identifier_func ; 
    definition_decl_t               definition_decl           ; 
    logical_expr_t                  logical_expr              ; 
    function_statement_expr_t     function_statement_expr ; 



/* Line 214 of yacc.c  */
#line 189 "c_cs_cpp_parser_yacc_release.cxx"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
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
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 214 "c_cs_cpp_parser_yacc_release.cxx"

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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  243
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3408

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  130
/* YYNRULES -- Number of rules.  */
#define YYNRULES  969
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1139

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   294

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    50,     2,     2,     2,     2,     2,     2,
      46,    47,     2,     2,    51,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    45,    42,
      48,    40,    49,    41,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    53,     2,    52,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    43,     2,    44,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     6,     8,    10,    13,    15,    18,
      22,    27,    31,    34,    39,    45,    52,    55,    57,    59,
      63,    68,    74,    80,    85,    89,    92,    97,   101,   105,
     108,   110,   113,   116,   121,   125,   127,   129,   130,   137,
     138,   144,   146,   149,   151,   153,   155,   158,   162,   166,
     170,   171,   173,   175,   178,   180,   184,   186,   188,   190,
     193,   195,   197,   199,   201,   203,   205,   207,   209,   211,
     213,   215,   217,   219,   221,   223,   225,   227,   229,   231,
     233,   235,   237,   239,   241,   243,   245,   247,   249,   251,
     253,   255,   257,   259,   261,   263,   265,   267,   268,   270,
     272,   275,   277,   281,   283,   285,   287,   289,   291,   293,
     295,   297,   299,   301,   303,   305,   307,   309,   311,   313,
     315,   317,   319,   321,   323,   325,   327,   329,   331,   333,
     335,   337,   339,   341,   343,   345,   347,   349,   351,   353,
     355,   357,   359,   361,   363,   364,   366,   368,   371,   373,
     375,   377,   379,   381,   383,   385,   387,   389,   391,   393,
     395,   397,   399,   401,   403,   405,   407,   409,   411,   413,
     415,   417,   419,   421,   423,   425,   427,   429,   431,   433,
     435,   437,   439,   441,   444,   448,   450,   453,   455,   458,
     460,   463,   465,   467,   469,   471,   473,   475,   477,   479,
     481,   483,   485,   487,   489,   491,   493,   495,   497,   499,
     501,   503,   505,   507,   509,   511,   513,   515,   517,   519,
     521,   523,   525,   527,   529,   531,   533,   535,   537,   539,
     541,   543,   545,   547,   549,   551,   553,   555,   557,   559,
     561,   563,   565,   567,   569,   571,   573,   575,   577,   579,
     581,   583,   585,   587,   589,   591,   593,   595,   597,   599,
     601,   603,   605,   607,   609,   611,   613,   615,   617,   619,
     621,   623,   625,   627,   629,   631,   633,   635,   637,   639,
     641,   643,   645,   647,   649,   651,   653,   655,   657,   659,
     661,   663,   664,   666,   668,   671,   673,   677,   681,   683,
     685,   687,   689,   691,   693,   695,   697,   699,   701,   703,
     705,   707,   709,   711,   713,   715,   717,   719,   721,   723,
     725,   727,   729,   731,   733,   735,   737,   739,   741,   743,
     745,   747,   749,   751,   753,   755,   757,   761,   764,   770,
     772,   776,   777,   779,   780,   785,   786,   792,   794,   795,
     797,   800,   802,   804,   806,   807,   812,   813,   815,   818,
     820,   822,   825,   827,   830,   832,   834,   836,   838,   841,
     843,   845,   847,   849,   851,   853,   855,   857,   859,   861,
     863,   865,   867,   870,   873,   879,   881,   885,   891,   892,
     894,   896,   899,   903,   907,   909,   914,   916,   918,   920,
     922,   924,   926,   928,   930,   932,   934,   936,   938,   940,
     942,   944,   946,   948,   950,   952,   954,   956,   958,   960,
     962,   963,   965,   967,   970,   972,   974,   976,   978,   980,
     982,   984,   986,   988,   990,   992,   994,   996,   998,  1000,
    1002,  1004,  1006,  1008,  1010,  1012,  1014,  1016,  1018,  1021,
    1025,  1027,  1030,  1032,  1038,  1042,  1044,  1048,  1052,  1058,
    1061,  1062,  1064,  1066,  1069,  1071,  1073,  1075,  1077,  1079,
    1081,  1083,  1085,  1087,  1089,  1091,  1093,  1095,  1097,  1099,
    1101,  1103,  1105,  1107,  1109,  1111,  1113,  1114,  1116,  1118,
    1121,  1123,  1124,  1127,  1129,  1131,  1133,  1135,  1137,  1139,
    1141,  1143,  1145,  1147,  1149,  1151,  1153,  1155,  1157,  1159,
    1161,  1163,  1165,  1167,  1169,  1171,  1173,  1175,  1177,  1179,
    1181,  1183,  1185,  1189,  1191,  1194,  1198,  1200,  1202,  1204,
    1206,  1208,  1210,  1212,  1214,  1216,  1218,  1220,  1222,  1224,
    1226,  1228,  1230,  1232,  1234,  1236,  1238,  1240,  1242,  1244,
    1246,  1248,  1250,  1252,  1254,  1256,  1258,  1260,  1262,  1264,
    1266,  1268,  1270,  1272,  1274,  1276,  1278,  1282,  1284,  1286,
    1288,  1291,  1293,  1295,  1297,  1299,  1301,  1303,  1305,  1307,
    1309,  1311,  1313,  1315,  1317,  1319,  1321,  1323,  1325,  1327,
    1329,  1331,  1333,  1337,  1339,  1341,  1344,  1349,  1353,  1357,
    1359,  1362,  1364,  1366,  1368,  1370,  1372,  1374,  1376,  1378,
    1380,  1382,  1384,  1386,  1388,  1390,  1392,  1394,  1396,  1398,
    1400,  1402,  1404,  1406,  1408,  1410,  1412,  1414,  1416,  1418,
    1420,  1422,  1424,  1426,  1428,  1430,  1432,  1434,  1436,  1438,
    1440,  1442,  1444,  1446,  1448,  1450,  1452,  1454,  1456,  1458,
    1460,  1462,  1464,  1466,  1470,  1472,  1474,  1478,  1480,  1482,
    1484,  1486,  1488,  1490,  1492,  1494,  1496,  1498,  1500,  1502,
    1504,  1506,  1508,  1510,  1512,  1514,  1516,  1518,  1520,  1522,
    1524,  1526,  1527,  1530,  1532,  1534,  1540,  1548,  1554,  1556,
    1559,  1561,  1564,  1566,  1568,  1570,  1572,  1574,  1576,  1578,
    1580,  1582,  1584,  1586,  1588,  1590,  1592,  1594,  1596,  1598,
    1600,  1602,  1604,  1606,  1608,  1610,  1612,  1614,  1616,  1618,
    1620,  1622,  1624,  1626,  1629,  1633,  1635,  1637,  1641,  1643,
    1645,  1647,  1649,  1651,  1653,  1655,  1657,  1659,  1661,  1663,
    1665,  1667,  1669,  1671,  1673,  1675,  1677,  1679,  1681,  1683,
    1685,  1687,  1689,  1691,  1693,  1695,  1697,  1699,  1701,  1703,
    1705,  1707,  1709,  1711,  1713,  1715,  1718,  1722,  1726,  1728,
    1730,  1732,  1734,  1738,  1744,  1752,  1761,  1771,  1772,  1774,
    1778,  1781,  1784,  1788,  1791,  1795,  1800,  1804,  1808,  1811,
    1814,  1817,  1823,  1829,  1835,  1838,  1844,  1847,  1851,  1854,
    1857,  1859,  1862,  1864,  1866,  1868,  1870,  1872,  1874,  1876,
    1878,  1880,  1882,  1884,  1886,  1888,  1890,  1892,  1894,  1896,
    1898,  1900,  1902,  1904,  1906,  1908,  1910,  1912,  1914,  1916,
    1918,  1920,  1922,  1924,  1926,  1928,  1930,  1934,  1937,  1939,
    1942,  1944,  1948,  1950,  1954,  1956,  1962,  1964,  1965,  1967,
    1971,  1973,  1977,  1979,  1983,  1985,  1988,  1992,  1995,  1997,
    2001,  2004,  2008,  2010,  2012,  2014,  2016,  2018,  2020,  2022,
    2024,  2026,  2028,  2030,  2032,  2034,  2036,  2038,  2041,  2043,
    2047,  2050,  2054,  2058,  2060,  2062,  2064,  2066,  2068,  2070,
    2072,  2074,  2076,  2078,  2080,  2082,  2084,  2086,  2088,  2090,
    2092,  2094,  2096,  2098,  2100,  2102,  2104,  2106,  2108,  2110,
    2112,  2114,  2116,  2118,  2122,  2123,  2125,  2127,  2130,  2132,
    2134,  2136,  2138,  2140,  2142,  2144,  2146,  2148,  2150,  2152,
    2154,  2156,  2158,  2160,  2162,  2164,  2166,  2168,  2170,  2172,
    2174,  2176,  2178,  2180,  2182,  2184,  2186,  2188,  2190,  2192,
    2194,  2196,  2198,  2200,  2202,  2204,  2206,  2208,  2210,  2212,
    2214,  2216,  2218,  2222,  2225,  2230,  2234,  2237,  2241,  2245
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      55,     0,    -1,    56,    -1,    -1,    57,    -1,    58,    -1,
      57,    58,    -1,    59,    -1,    57,    59,    -1,    76,    66,
      73,    -1,    62,    76,    66,    73,    -1,    62,    66,    73,
      -1,    62,    76,    -1,    62,    76,    40,    68,    -1,    62,
      66,    73,    40,    68,    -1,    62,    76,    66,    73,    40,
      68,    -1,    66,    73,    -1,    62,    -1,    76,    -1,    76,
      40,    68,    -1,    66,    73,    40,    68,    -1,    76,    66,
      73,    40,    68,    -1,    62,    76,    66,    73,   144,    -1,
      76,    66,    73,   144,    -1,    62,    76,    65,    -1,    76,
      65,    -1,    62,    76,   181,    42,    -1,    76,   181,    42,
      -1,    62,   181,    42,    -1,   181,    42,    -1,    65,    -1,
      62,    65,    -1,    58,    42,    -1,    62,    66,    73,   144,
      -1,    66,    73,   144,    -1,    42,    -1,   144,    -1,    -1,
      62,    76,    43,    60,    56,    44,    -1,    -1,    76,    43,
      61,    56,    44,    -1,    63,    -1,    62,    63,    -1,    64,
      -1,   177,    -1,     6,    -1,     6,    45,    -1,    37,    73,
     144,    -1,    37,    73,    42,    -1,    46,    70,    47,    -1,
      -1,    68,    -1,    69,    -1,    68,    69,    -1,    66,    -1,
      43,    68,    44,    -1,    48,    -1,    49,    -1,   177,    -1,
      43,    44,    -1,     6,    -1,     7,    -1,     8,    -1,    50,
      -1,     9,    -1,    10,    -1,    11,    -1,    12,    -1,     4,
      -1,     5,    -1,    13,    -1,    14,    -1,    32,    -1,    15,
      -1,    16,    -1,    17,    -1,    18,    -1,    19,    -1,    20,
      -1,    21,    -1,    22,    -1,    25,    -1,    23,    -1,    26,
      -1,    36,    -1,     3,    -1,    37,    -1,    24,    -1,    27,
      -1,    28,    -1,    29,    -1,    30,    -1,   182,    -1,    45,
      -1,    40,    -1,    51,    -1,   183,    -1,    -1,    71,    -1,
      72,    -1,    71,    72,    -1,    66,    -1,    43,    70,    44,
      -1,    48,    -1,    49,    -1,   177,    -1,   182,    -1,    42,
      -1,     6,    -1,     7,    -1,     8,    -1,    50,    -1,     9,
      -1,    10,    -1,    11,    -1,    12,    -1,     4,    -1,     5,
      -1,    13,    -1,    14,    -1,    15,    -1,    16,    -1,    17,
      -1,    18,    -1,    19,    -1,    20,    -1,    21,    -1,    22,
      -1,    25,    -1,    23,    -1,    26,    -1,    36,    -1,     3,
      -1,    37,    -1,    24,    -1,    27,    -1,    28,    -1,    32,
      -1,    29,    -1,    30,    -1,    45,    -1,    40,    -1,    51,
      -1,   183,    -1,    -1,    74,    -1,    75,    -1,    74,    75,
      -1,    88,    -1,     6,    -1,    66,    -1,   177,    -1,     7,
      -1,     8,    -1,     9,    -1,    10,    -1,    11,    -1,    12,
      -1,     4,    -1,     5,    -1,    13,    -1,    14,    -1,    15,
      -1,    16,    -1,    17,    -1,    18,    -1,    19,    -1,    20,
      -1,    21,    -1,    22,    -1,    25,    -1,    23,    -1,    26,
      -1,    36,    -1,    27,    -1,    28,    -1,    29,    -1,    30,
      -1,    45,    -1,    50,    -1,    51,    -1,   183,    -1,    77,
      -1,    77,    45,    -1,    77,    45,    79,    -1,    82,    -1,
      82,    78,    -1,    84,    -1,    78,    84,    -1,    80,    -1,
      79,    80,    -1,    88,    -1,     6,    -1,   177,    -1,     7,
      -1,     8,    -1,     9,    -1,    10,    -1,    11,    -1,    12,
      -1,     4,    -1,     5,    -1,    13,    -1,    14,    -1,    15,
      -1,    16,    -1,    17,    -1,    18,    -1,    19,    -1,    20,
      -1,    21,    -1,    22,    -1,    25,    -1,    23,    -1,    26,
      -1,    36,    -1,    32,    -1,    27,    -1,    28,    -1,    29,
      -1,    30,    -1,    45,    -1,    50,    -1,    51,    -1,   183,
      -1,    32,    -1,     7,    -1,     8,    -1,     9,    -1,    10,
      -1,    11,    -1,    12,    -1,     4,    -1,     5,    -1,    13,
      -1,    14,    -1,    15,    -1,    16,    -1,    17,    -1,    18,
      -1,    19,    -1,    20,    -1,    21,    -1,    22,    -1,    25,
      -1,    23,    -1,    36,    -1,    26,    -1,    27,    -1,    28,
      -1,    29,    -1,    30,    -1,    50,    -1,    51,    -1,   183,
      -1,    88,    -1,    81,    -1,    32,    -1,   177,    -1,     7,
      -1,     6,    -1,     8,    -1,     9,    -1,    10,    -1,    11,
      -1,    12,    -1,     4,    -1,     5,    -1,    13,    -1,    14,
      -1,    15,    -1,    16,    -1,    17,    -1,    18,    -1,    19,
      -1,    20,    -1,    21,    -1,    22,    -1,    25,    -1,    23,
      -1,    36,    -1,    26,    -1,    27,    -1,    28,    -1,    29,
      -1,    30,    -1,    50,    -1,    51,    -1,   183,    -1,    88,
      -1,    83,    -1,    -1,    86,    -1,    87,    -1,    86,    87,
      -1,    66,    -1,    43,    67,    44,    -1,    48,    85,    49,
      -1,   177,    -1,    42,    -1,     6,    -1,     7,    -1,     8,
      -1,    50,    -1,     9,    -1,    10,    -1,    11,    -1,    12,
      -1,     4,    -1,     5,    -1,    13,    -1,    14,    -1,    15,
      -1,    16,    -1,    17,    -1,    18,    -1,    19,    -1,    20,
      -1,    21,    -1,    22,    -1,    25,    -1,    23,    -1,    26,
      -1,    36,    -1,     3,    -1,    37,    -1,    24,    -1,    27,
      -1,    28,    -1,    29,    -1,    30,    -1,    45,    -1,    40,
      -1,    51,    -1,   183,    -1,    89,    -1,    24,    95,    89,
      -1,    98,    91,    -1,    98,    91,    24,    95,    89,    -1,
      98,    -1,    24,    95,    98,    -1,    -1,    92,    -1,    -1,
      48,    93,    85,    49,    -1,    -1,    92,    48,    94,    85,
      49,    -1,    96,    -1,    -1,    97,    -1,    96,    97,    -1,
      22,    -1,    25,    -1,     3,    -1,    -1,    43,   100,   101,
      44,    -1,    -1,   103,    -1,   103,   102,    -1,   102,    -1,
     161,    -1,   161,   102,    -1,   105,    -1,   103,   105,    -1,
     119,    -1,   115,    -1,    99,    -1,   104,    -1,    25,   119,
      -1,   157,    -1,   158,    -1,   145,    -1,   150,    -1,    42,
      -1,   152,    -1,   153,    -1,   154,    -1,   159,    -1,   160,
      -1,   156,    -1,   106,    -1,   155,    -1,   161,   105,    -1,
      25,   115,    -1,    28,   112,    43,   108,    44,    -1,    31,
      -1,    28,   112,    42,    -1,    28,   112,    46,   108,    47,
      -1,    -1,   109,    -1,   110,    -1,   110,   109,    -1,    46,
     108,    47,    -1,    46,    99,    47,    -1,   111,    -1,   111,
      43,   108,    44,    -1,     3,    -1,     4,    -1,    37,    -1,
       5,    -1,     6,    -1,     7,    -1,     8,    -1,    21,    -1,
      22,    -1,    25,    -1,    52,    -1,    53,    -1,    48,    -1,
      49,    -1,    23,    -1,    24,    -1,    28,    -1,    29,    -1,
      30,    -1,    45,    -1,    40,    -1,    51,    -1,   183,    -1,
      50,    -1,    -1,   113,    -1,   114,    -1,   114,   113,    -1,
       3,    -1,     4,    -1,    37,    -1,     5,    -1,     6,    -1,
       7,    -1,     8,    -1,    21,    -1,    22,    -1,    25,    -1,
      52,    -1,    53,    -1,    48,    -1,    49,    -1,    23,    -1,
      24,    -1,    28,    -1,    29,    -1,    30,    -1,    45,    -1,
      40,    -1,    51,    -1,   183,    -1,    50,    -1,   116,    42,
      -1,   128,    40,   118,    -1,   128,    -1,   136,   123,    -1,
     117,    -1,   128,   136,   120,    40,   118,    -1,   128,   136,
     120,    -1,   166,    -1,    43,   123,    44,    -1,   166,    51,
     116,    -1,    43,   123,    44,    51,   116,    -1,   117,   144,
      -1,    -1,   121,    -1,   122,    -1,   121,   122,    -1,     3,
      -1,     4,    -1,    37,    -1,   136,    -1,     5,    -1,     6,
      -1,     7,    -1,     8,    -1,    21,    -1,    22,    -1,    25,
      -1,   177,    -1,    48,    -1,    49,    -1,    23,    -1,    24,
      -1,    29,    -1,    30,    -1,    45,    -1,    51,    -1,   183,
      -1,    50,    -1,    -1,   124,    -1,   140,    -1,   124,   140,
      -1,   126,    -1,    -1,   126,   127,    -1,   127,    -1,     3,
      -1,     4,    -1,    37,    -1,     5,    -1,     6,    -1,     7,
      -1,     8,    -1,    21,    -1,    32,    -1,    22,    -1,    25,
      -1,   177,    -1,   182,    -1,   107,    -1,    48,    -1,    49,
      -1,    23,    -1,    24,    -1,    29,    -1,    30,    -1,    45,
      -1,    42,    -1,    40,    -1,    51,    -1,   183,    -1,    46,
      -1,    47,    -1,    50,    -1,    43,   125,    44,    -1,   130,
      -1,   130,   132,    -1,   130,   132,   133,    -1,     4,    -1,
       5,    -1,     6,    -1,     7,    -1,     8,    -1,    22,    -1,
      37,    -1,   177,    -1,   107,    -1,   182,    -1,    48,    -1,
      49,    -1,    23,    -1,    29,    -1,    30,    -1,    51,    -1,
     183,    -1,    50,    -1,   129,    -1,    90,    -1,     4,    -1,
       5,    -1,     6,    -1,     7,    -1,     8,    -1,    21,    -1,
      37,    -1,    22,    -1,    25,    -1,   177,    -1,   182,    -1,
     107,    -1,    48,    -1,    49,    -1,    23,    -1,    29,    -1,
      30,    -1,    51,    -1,   183,    -1,    50,    -1,    43,    56,
      44,    -1,   131,    -1,    90,    -1,   135,    -1,   133,   135,
      -1,     4,    -1,     5,    -1,     6,    -1,     7,    -1,    37,
      -1,     8,    -1,    21,    -1,    22,    -1,    25,    -1,   177,
      -1,   182,    -1,   107,    -1,    48,    -1,    49,    -1,    23,
      -1,    29,    -1,    30,    -1,    51,    -1,    45,    -1,   183,
      -1,    50,    -1,    43,    56,    44,    -1,   134,    -1,    90,
      -1,    46,    47,    -1,    46,   138,   137,    47,    -1,    46,
     138,    47,    -1,    46,    99,    47,    -1,   139,    -1,   137,
     139,    -1,   136,    -1,     3,    -1,    37,    -1,     4,    -1,
       5,    -1,     6,    -1,    32,    -1,     7,    -1,     8,    -1,
      21,    -1,    22,    -1,    25,    -1,   177,    -1,   182,    -1,
     107,    -1,    48,    -1,    49,    -1,    23,    -1,    24,    -1,
      29,    -1,    30,    -1,    45,    -1,    40,    -1,    51,    -1,
     183,    -1,    50,    -1,   136,    -1,     3,    -1,    37,    -1,
       4,    -1,     5,    -1,     6,    -1,     7,    -1,     8,    -1,
      21,    -1,    22,    -1,    25,    -1,   177,    -1,   182,    -1,
     107,    -1,    48,    -1,    49,    -1,    23,    -1,    24,    -1,
      29,    -1,    30,    -1,    32,    -1,    45,    -1,    40,    -1,
      51,    -1,   183,    -1,    50,    -1,    43,   125,    44,    -1,
       3,    -1,     4,    -1,    43,   125,    44,    -1,     5,    -1,
       6,    -1,    37,    -1,     7,    -1,     8,    -1,    21,    -1,
      32,    -1,    22,    -1,    25,    -1,   177,    -1,   182,    -1,
     107,    -1,    48,    -1,    49,    -1,    23,    -1,    24,    -1,
      29,    -1,    30,    -1,    45,    -1,    40,    -1,    51,    -1,
     183,    -1,   136,    -1,    50,    -1,    -1,   142,   105,    -1,
     141,    -1,    99,    -1,    11,    46,   164,    47,   143,    -1,
      11,    46,   164,    47,   143,    12,   143,    -1,    13,    46,
     164,    47,   141,    -1,   148,    -1,   148,   147,    -1,   149,
      -1,   147,   149,    -1,     3,    -1,     4,    -1,    37,    -1,
       5,    -1,     6,    -1,     7,    -1,     8,    -1,     9,    -1,
      10,    -1,    11,    -1,    12,    -1,    13,    -1,    14,    -1,
      15,    -1,    16,    -1,    17,    -1,    18,    -1,    19,    -1,
      32,    -1,    21,    -1,    22,    -1,    25,    -1,    48,    -1,
      49,    -1,    23,    -1,    24,    -1,    26,    -1,    36,    -1,
      27,    -1,    29,    -1,    30,    -1,    46,    47,    -1,    46,
     146,    47,    -1,   177,    -1,   182,    -1,    46,    99,    47,
      -1,    50,    -1,    40,    -1,    51,    -1,   183,    -1,     3,
      -1,     4,    -1,    37,    -1,     5,    -1,     6,    -1,     7,
      -1,     8,    -1,     9,    -1,    10,    -1,    11,    -1,    12,
      -1,    13,    -1,    14,    -1,    15,    -1,    16,    -1,    17,
      -1,    18,    -1,    32,    -1,    19,    -1,    21,    -1,    22,
      -1,    25,    -1,   177,    -1,   182,    -1,    48,    -1,    49,
      -1,    23,    -1,    24,    -1,    26,    -1,    36,    -1,    27,
      -1,    29,    -1,    30,    -1,    46,    47,    -1,    46,   146,
      47,    -1,    46,    99,    47,    -1,    50,    -1,    40,    -1,
      51,    -1,   183,    -1,    43,   125,    44,    -1,    14,    46,
     164,    47,   143,    -1,    15,   143,    14,    46,   164,    47,
      42,    -1,    16,    46,   151,    42,    42,   151,    47,   143,
      -1,    16,    46,   151,    42,   164,    42,   151,    47,   143,
      -1,    -1,   146,    -1,    17,   146,    42,    -1,    18,    42,
      -1,    19,    42,    -1,    39,    19,    42,    -1,    20,    42,
      -1,    20,   146,    42,    -1,    39,    20,   146,    42,    -1,
      39,    20,    42,    -1,    21,   146,    42,    -1,    21,    42,
      -1,    32,   105,    -1,    26,   143,    -1,    36,    46,   146,
      47,   143,    -1,    35,    46,   146,    47,   143,    -1,    34,
      46,   146,    47,   143,    -1,    33,   143,    -1,    27,    46,
     146,    47,   143,    -1,    27,   144,    -1,     9,   162,    45,
      -1,    10,    45,    -1,     3,    45,    -1,   163,    -1,   162,
     163,    -1,     3,    -1,     4,    -1,    37,    -1,     5,    -1,
       6,    -1,     7,    -1,     8,    -1,     9,    -1,    10,    -1,
      11,    -1,    12,    -1,    13,    -1,    14,    -1,    15,    -1,
      16,    -1,    17,    -1,    18,    -1,    19,    -1,    22,    -1,
      25,    -1,   177,    -1,    48,    -1,    49,    -1,    23,    -1,
      24,    -1,    26,    -1,    36,    -1,    27,    -1,    29,    -1,
      30,    -1,    40,    -1,    51,    -1,   183,    -1,    50,    -1,
      46,   162,    47,    -1,    46,    47,    -1,   165,    -1,   165,
      51,    -1,   166,    -1,   165,    51,   166,    -1,   167,    -1,
     166,    40,   167,    -1,   169,    -1,   169,    41,   168,    45,
     167,    -1,   166,    -1,    -1,   170,    -1,   169,     8,   170,
      -1,   171,    -1,   170,     7,   171,    -1,   172,    -1,   171,
      23,   172,    -1,   173,    -1,    50,   172,    -1,   173,    50,
     172,    -1,   174,   175,    -1,   174,    -1,    46,    99,    47,
      -1,    46,    47,    -1,    46,   164,    47,    -1,    90,    -1,
      37,    -1,    48,    -1,    49,    -1,     4,    -1,     5,    -1,
     182,    -1,    22,    -1,    23,    -1,   177,    -1,    32,    -1,
      36,    -1,    29,    -1,    30,    -1,     7,    -1,   175,   176,
      -1,   176,    -1,    46,   146,    47,    -1,    46,    47,    -1,
      46,    99,    47,    -1,    43,   125,    44,    -1,    48,    -1,
      49,    -1,     3,    -1,    37,    -1,     4,    -1,     5,    -1,
       6,    -1,     9,    -1,    10,    -1,    11,    -1,    12,    -1,
      13,    -1,    14,    -1,    15,    -1,    16,    -1,    17,    -1,
      18,    -1,    19,    -1,    21,    -1,    22,    -1,    25,    -1,
      32,    -1,   177,    -1,   182,    -1,    24,    -1,    26,    -1,
      36,    -1,    27,    -1,    29,    -1,    30,    -1,    53,   178,
      52,    -1,    -1,   179,    -1,   180,    -1,   179,   180,    -1,
     177,    -1,    46,    -1,    47,    -1,    43,    -1,    44,    -1,
      48,    -1,    49,    -1,     6,    -1,    32,    -1,     7,    -1,
       8,    -1,    50,    -1,     9,    -1,    10,    -1,    11,    -1,
      12,    -1,     4,    -1,     5,    -1,    13,    -1,    14,    -1,
      15,    -1,    16,    -1,    17,    -1,    18,    -1,    19,    -1,
      20,    -1,    21,    -1,    22,    -1,    25,    -1,    23,    -1,
      26,    -1,    36,    -1,     3,    -1,    37,    -1,    24,    -1,
      27,    -1,    29,    -1,    30,    -1,    28,    -1,    45,    -1,
      40,    -1,    42,    -1,    51,    -1,   183,    -1,    38,    76,
      66,    -1,    38,    66,    -1,    38,    76,    66,   144,    -1,
      38,    76,   144,    -1,    38,   144,    -1,    38,    66,   144,
      -1,    41,   146,    45,    -1,    41,    45,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   114,   114,   117,   118,   119,   120,   123,   124,   128,
     142,   156,   158,   160,   162,   164,   166,   168,   170,   172,
     174,   176,   180,   201,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   241,   244,   247,   248,   258,   257,   268,
     267,   281,   282,   285,   286,   289,   290,   293,   299,   302,
     305,   306,   309,   310,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   358,   359,   362,
     363,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   411,   412,   415,   416,   419,   420,
     421,   422,   423,   424,   425,   426,   427,   428,   429,   430,
     431,   432,   433,   434,   435,   436,   437,   438,   439,   440,
     441,   442,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   455,   462,   468,   477,   484,   501,   508,   525,
     526,   529,   530,   531,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   541,   542,   543,   544,   545,   546,   547,
     548,   549,   550,   551,   552,   553,   554,   555,   556,   557,
     558,   559,   560,   561,   562,   565,   566,   567,   568,   569,
     570,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,   582,   583,   584,   585,   586,   587,   588,   589,
     590,   591,   592,   593,   594,   597,   603,   607,   608,   609,
     610,   611,   612,   613,   614,   615,   616,   617,   618,   619,
     620,   621,   622,   623,   624,   625,   626,   627,   628,   629,
     630,   631,   632,   633,   634,   635,   636,   637,   638,   641,
     647,   651,   652,   655,   656,   659,   660,   661,   662,   663,
     664,   665,   666,   667,   668,   669,   670,   671,   672,   673,
     674,   675,   676,   677,   678,   679,   680,   681,   682,   683,
     684,   685,   686,   687,   688,   689,   690,   691,   692,   693,
     694,   695,   696,   697,   698,   701,   708,   717,   723,   739,
     745,   753,   754,   757,   756,   761,   760,   766,   767,   770,
     771,   774,   775,   778,   785,   784,   797,   803,   805,   812,
     821,   822,   825,   827,   852,   859,   874,   876,   881,   889,
     894,   900,   905,   911,   919,   928,   937,   944,   952,   960,
     968,   976,   984,   990,  1002,  1003,  1004,  1007,  1010,  1011,
    1014,  1015,  1018,  1019,  1020,  1021,  1024,  1025,  1026,  1027,
    1028,  1029,  1030,  1031,  1032,  1033,  1034,  1035,  1036,  1037,
    1038,  1039,  1040,  1041,  1042,  1043,  1044,  1045,  1046,  1047,
    1050,  1051,  1054,  1055,  1058,  1059,  1060,  1061,  1062,  1063,
    1064,  1065,  1066,  1067,  1068,  1069,  1070,  1071,  1072,  1073,
    1074,  1075,  1076,  1077,  1078,  1079,  1080,  1081,  1085,  1089,
    1093,  1097,  1101,  1103,  1109,  1124,  1131,  1132,  1139,  1142,
    1151,  1152,  1155,  1156,  1159,  1160,  1161,  1162,  1163,  1164,
    1165,  1166,  1167,  1168,  1169,  1170,  1171,  1172,  1173,  1174,
    1175,  1176,  1177,  1178,  1179,  1180,  1183,  1184,  1187,  1188,
    1191,  1192,  1195,  1196,  1199,  1200,  1201,  1202,  1203,  1204,
    1205,  1206,  1207,  1208,  1209,  1210,  1211,  1212,  1213,  1214,
    1215,  1216,  1217,  1218,  1219,  1220,  1221,  1222,  1223,  1224,
    1225,  1226,  1227,  1230,  1236,  1250,  1271,  1272,  1273,  1274,
    1275,  1276,  1277,  1278,  1279,  1280,  1281,  1282,  1283,  1284,
    1285,  1286,  1287,  1288,  1291,  1293,  1301,  1302,  1303,  1304,
    1305,  1306,  1307,  1308,  1309,  1310,  1311,  1312,  1313,  1314,
    1315,  1316,  1317,  1318,  1319,  1320,  1321,  1324,  1326,  1334,
    1340,  1356,  1357,  1358,  1359,  1360,  1361,  1362,  1363,  1364,
    1365,  1366,  1367,  1368,  1369,  1370,  1371,  1372,  1373,  1374,
    1375,  1376,  1377,  1380,  1382,  1390,  1391,  1392,  1393,  1398,
    1399,  1402,  1403,  1404,  1405,  1406,  1407,  1408,  1409,  1410,
    1411,  1412,  1413,  1414,  1415,  1416,  1417,  1418,  1419,  1420,
    1421,  1422,  1423,  1424,  1425,  1426,  1427,  1430,  1431,  1432,
    1433,  1434,  1435,  1436,  1437,  1438,  1439,  1440,  1441,  1442,
    1443,  1444,  1445,  1446,  1447,  1448,  1449,  1450,  1451,  1452,
    1453,  1454,  1455,  1456,  1459,  1460,  1461,  1462,  1463,  1464,
    1465,  1466,  1467,  1468,  1469,  1470,  1471,  1472,  1473,  1474,
    1475,  1476,  1477,  1478,  1479,  1480,  1481,  1482,  1483,  1484,
    1485,  1488,  1488,  1496,  1505,  1514,  1521,  1528,  1536,  1537,
    1540,  1541,  1545,  1546,  1547,  1548,  1549,  1550,  1551,  1552,
    1553,  1554,  1555,  1556,  1557,  1558,  1559,  1560,  1561,  1562,
    1563,  1564,  1565,  1566,  1567,  1568,  1569,  1570,  1571,  1572,
    1573,  1574,  1575,  1576,  1577,  1578,  1579,  1580,  1583,  1584,
    1585,  1586,  1590,  1591,  1592,  1593,  1594,  1595,  1596,  1597,
    1598,  1599,  1600,  1601,  1602,  1603,  1604,  1605,  1606,  1607,
    1608,  1609,  1610,  1611,  1612,  1613,  1614,  1615,  1616,  1617,
    1618,  1619,  1620,  1621,  1622,  1623,  1624,  1625,  1628,  1629,
    1630,  1631,  1632,  1635,  1641,  1647,  1652,  1660,  1661,  1664,
    1668,  1672,  1676,  1682,  1686,  1690,  1694,  1698,  1702,  1708,
    1712,  1716,  1719,  1726,  1733,  1741,  1748,  1757,  1762,  1767,
    1773,  1774,  1778,  1779,  1780,  1781,  1782,  1783,  1784,  1785,
    1786,  1787,  1788,  1789,  1790,  1791,  1792,  1793,  1794,  1795,
    1796,  1797,  1798,  1799,  1800,  1801,  1802,  1803,  1804,  1805,
    1806,  1807,  1808,  1809,  1810,  1811,  1812,  1813,  1816,  1818,
    1822,  1824,  1828,  1830,  1834,  1836,  1844,  1845,  1848,  1850,
    1859,  1861,  1870,  1872,  1879,  1881,  1887,  1895,  1897,  1901,
    1905,  1907,  1913,  1915,  1917,  1919,  1921,  1923,  1925,  1927,
    1929,  1931,  1933,  1935,  1937,  1939,  1941,  1945,  1946,  1949,
    1950,  1951,  1952,  1953,  1954,  1955,  1956,  1957,  1958,  1959,
    1960,  1961,  1962,  1963,  1964,  1965,  1966,  1967,  1968,  1969,
    1970,  1971,  1972,  1973,  1974,  1975,  1976,  1977,  1978,  1979,
    1980,  1981,  1982,  1985,  1988,  1989,  1992,  1993,  1997,  1998,
    1999,  2000,  2001,  2002,  2003,  2004,  2005,  2006,  2007,  2008,
    2009,  2010,  2011,  2012,  2013,  2014,  2015,  2016,  2017,  2018,
    2019,  2020,  2021,  2022,  2023,  2024,  2025,  2026,  2027,  2028,
    2029,  2030,  2031,  2032,  2033,  2034,  2035,  2036,  2037,  2038,
    2039,  2040,  2043,  2044,  2047,  2059,  2071,  2074,  2079,  2080
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "_IDENTIFIER_", "_STRUCT_", "_EXTERN_",
  "_PRIVATE_", "_AND_OP_", "_OR_OP_", "_CASE_", "_DEFAULT_", "_IF_",
  "_ELSE_", "_SWITCH_", "_WHILE_", "_DO_", "_FOR_", "_GOTO_", "_CONTINUE_",
  "_BREAK_", "_RETURN_", "_THROW_", "_SOMETHING_",
  "_SOME_BINARY_OPERATOR_", "_QUALIF_", "_STATIC_", "_TRY_", "_CATCH_",
  "_ASM_", "_TOKEN_NOT_FOUND_", "_TOKEN_TO_IGNORE_", "_ASM_MS_LINE_",
  "_UNSAFE_", "_FINALLY_", "_FOREACH_", "_LOCK_", "_USING_", "_SET_GET_",
  "_DELEGATE_", "_YIELD_", "'='", "'?'", "';'", "'{'", "'}'", "':'", "'('",
  "')'", "'<'", "'>'", "'!'", "','", "']'", "'['", "$accept", "file",
  "definitions_opt", "definitions", "definition_decl", "definition", "$@1",
  "$@2", "private_or_brakets_defs", "private_or_brakets_defs_item",
  "private_def", "set_get", "definition_parentesis",
  "definition_decl_any_opt", "definition_decl_any",
  "definition_decl_any_item", "definition_parentesis_items_opt",
  "definition_parentesis_items", "definition_parentesis_item",
  "definition_expr_opt", "definition_expr", "definition_item",
  "definition_expr_no_parenthesis",
  "_definition_expr_no_parenthesis_no_double_quote_",
  "_definition_expr_no_parenthesis_no_double_quote_rest",
  "_definition_expr_no_parenthesis_", "_definition_item_no_parenthesis_",
  "_definition_item_no_parenthesis_no_double_quote__no_action_first",
  "_definition_expr_no_parenthesis_no_double_quote_first",
  "_definition_item_no_parenthesis_no_double_quote__no_action",
  "_definition_item_no_parenthesis_no_double_quote_",
  "definition_template_opt", "definition_template",
  "definition_template_item", "qualified_identifier_declation",
  "_qualified_identifier_declaration", "qualified_identifier_statement",
  "template_definitions_opt", "template_definitions", "$@3", "$@4",
  "qualified_identifier_something_opt", "qualified_identifier_something",
  "qualified_identifier_something_item", "identifier",
  "compound_statement", "$@5", "statements_opt", "labeled_statements",
  "statements", "expression_or_function_statement", "statement",
  "asm_expr", "asm_item", "asm_expr_block_list_opt", "asm_expr_block_list",
  "asm_expr_list_block_item", "asm_expr_list_block_item_single",
  "asm_expr_list_opt", "asm_expr_list", "asm_expr_list_item",
  "expression_statement", "expression_statement_expr",
  "function_statement_expr", "expression_statement_assignment",
  "function_statement", "expression_statement_parentesis_rest_opt",
  "expression_statement_parentesis_rest",
  "expression_statement_parentesis_rest_item",
  "expression_statement_items_opt", "expression_statement_items",
  "expression_statement_items_block_opt",
  "expression_statement_items_block",
  "expression_statement_items_block_item",
  "expression_statement_no_equal_no_parentesis",
  "expression_statement_no_equal_no_parentesis_first_item_no_action",
  "expression_statement_no_equal_no_parentesis_first_item",
  "expression_statement_no_equal_no_parentesis_second_item_no_action",
  "expression_statement_no_equal_no_parentesis_second_item",
  "_expression_statement_no_equal_no_parentesis_",
  "_expression_statement_no_equal_no_parentesis_item_no_action_",
  "_expression_statement_no_equal_no_parentesis_item_",
  "expression_statement_parentesis",
  "expression_statement_parentesis_items",
  "expression_statement_parentesis_first_item",
  "expression_statement_parentesis_item", "expression_statement_item",
  "substatement", "$@6", "statement_record", "compound_statement_record",
  "selection_statement", "expr", "_expr_", "expr_first_item", "expr_item",
  "iteration_statement", "expr_opt", "jump_statement", "return_statement",
  "unsafe_statement", "try_statement", "using_statement", "lock_statement",
  "foreach_statement", "finally_statement", "catch_statement",
  "labeled_statement", "expr_labeled_statement",
  "expr_item_labeled_statement", "logical_expr", "logical_expr_list",
  "logical_assignment_expr", "logical_cmp_expr",
  "logical_assignment_expr_opt", "logical_or_expr", "logical_and_expr",
  "logical_binary_operator_high_prio_expr", "logical_not_expr",
  "logical_expr_items", "logical_expr_first", "_logical_expr_items_",
  "_logical_expr_item_", "brackets_expr", "_brackets_expr_items_opt_",
  "_brackets_expr_items_", "_brackets_expr_item_", "delegate_decl",
  "delegate_expr", "inline_cmd_part", 0
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
      61,    63,    59,   123,   125,    58,    40,    41,    60,    62,
      33,    44,    93,    91
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    54,    55,    56,    56,    56,    56,    57,    57,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    60,    59,    61,
      59,    62,    62,    63,    63,    64,    64,    65,    65,    66,
      67,    67,    68,    68,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    70,    70,    71,
      71,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    73,    73,    74,    74,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    76,    76,    76,    77,    77,    78,    78,    79,
      79,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    82,    82,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    84,
      84,    85,    85,    86,    86,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    88,    88,    89,    89,    90,
      90,    91,    91,    93,    92,    94,    92,    95,    95,    96,
      96,    97,    97,    98,   100,    99,   101,   101,   101,   101,
     102,   102,   103,   103,   104,   104,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   106,   106,   106,   107,   108,   108,
     109,   109,   110,   110,   110,   110,   111,   111,   111,   111,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   111,
     112,   112,   113,   113,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   115,   116,
     116,   116,   116,   116,   117,   118,   118,   118,   118,   119,
     120,   120,   121,   121,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   123,   123,   124,   124,
     125,   125,   126,   126,   127,   127,   127,   127,   127,   127,
     127,   127,   127,   127,   127,   127,   127,   127,   127,   127,
     127,   127,   127,   127,   127,   127,   127,   127,   127,   127,
     127,   127,   127,   128,   128,   128,   129,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   130,   130,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   132,   132,   133,
     133,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   135,   135,   136,   136,   136,   136,   137,
     137,   138,   138,   138,   138,   138,   138,   138,   138,   138,
     138,   138,   138,   138,   138,   138,   138,   138,   138,   138,
     138,   138,   138,   138,   138,   138,   138,   139,   139,   139,
     139,   139,   139,   139,   139,   139,   139,   139,   139,   139,
     139,   139,   139,   139,   139,   139,   139,   139,   139,   139,
     139,   139,   139,   139,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     140,   142,   141,   143,   144,   145,   145,   145,   146,   146,
     147,   147,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   150,   150,   150,   150,   151,   151,   152,
     152,   152,   152,   153,   153,   153,   153,   153,   153,   154,
     155,   156,   157,   158,   159,   160,   160,   161,   161,   161,
     162,   162,   163,   163,   163,   163,   163,   163,   163,   163,
     163,   163,   163,   163,   163,   163,   163,   163,   163,   163,
     163,   163,   163,   163,   163,   163,   163,   163,   163,   163,
     163,   163,   163,   163,   163,   163,   163,   163,   164,   164,
     165,   165,   166,   166,   167,   167,   168,   168,   169,   169,
     170,   170,   171,   171,   172,   172,   172,   173,   173,   174,
     174,   174,   174,   174,   174,   174,   174,   174,   174,   174,
     174,   174,   174,   174,   174,   174,   174,   175,   175,   176,
     176,   176,   176,   176,   176,   176,   176,   176,   176,   176,
     176,   176,   176,   176,   176,   176,   176,   176,   176,   176,
     176,   176,   176,   176,   176,   176,   176,   176,   176,   176,
     176,   176,   176,   177,   178,   178,   179,   179,   180,   180,
     180,   180,   180,   180,   180,   180,   180,   180,   180,   180,
     180,   180,   180,   180,   180,   180,   180,   180,   180,   180,
     180,   180,   180,   180,   180,   180,   180,   180,   180,   180,
     180,   180,   180,   180,   180,   180,   180,   180,   180,   180,
     180,   180,   181,   181,   182,   182,   182,   182,   183,   183
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     1,     1,     2,     1,     2,     3,
       4,     3,     2,     4,     5,     6,     2,     1,     1,     3,
       4,     5,     5,     4,     3,     2,     4,     3,     3,     2,
       1,     2,     2,     4,     3,     1,     1,     0,     6,     0,
       5,     1,     2,     1,     1,     1,     2,     3,     3,     3,
       0,     1,     1,     2,     1,     3,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     1,     1,
       2,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     3,     1,     2,     1,     2,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     1,     1,     2,     1,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     2,     5,     1,
       3,     0,     1,     0,     4,     0,     5,     1,     0,     1,
       2,     1,     1,     1,     0,     4,     0,     1,     2,     1,
       1,     2,     1,     2,     1,     1,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     5,     1,     3,     5,     0,     1,
       1,     2,     3,     3,     1,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     3,
       1,     2,     1,     5,     3,     1,     3,     3,     5,     2,
       0,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     1,     2,
       1,     0,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     2,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     1,     2,     4,     3,     3,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     2,     1,     1,     5,     7,     5,     1,     2,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     3,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     3,     3,     1,     1,
       1,     1,     3,     5,     7,     8,     9,     0,     1,     3,
       2,     2,     3,     2,     3,     4,     3,     3,     2,     2,
       2,     5,     5,     5,     2,     5,     2,     3,     2,     2,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     2,     1,     2,
       1,     3,     1,     3,     1,     5,     1,     0,     1,     3,
       1,     3,     1,     3,     1,     2,     3,     2,     1,     3,
       2,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     3,
       2,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     0,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     2,     4,     3,     2,     3,     3,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       3,   353,   232,   233,    45,   226,   227,   228,   229,   230,
     231,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   245,   348,   244,   247,   248,   249,   250,   251,   225,
     246,   144,     0,     0,    35,   354,    97,   252,   253,   914,
       0,     2,     4,     5,     7,    17,    41,    43,    30,   144,
      18,   182,   256,   185,   255,   335,   341,   684,    36,    44,
       0,   254,    46,   351,   352,     0,   347,   349,   158,   159,
     149,   152,   153,   154,   155,   156,   157,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   171,   170,   172,
     174,   175,   176,   177,   173,   178,   179,   180,   150,     0,
     145,   146,   148,   151,   181,   963,     0,   692,   693,   695,
     696,   697,   698,   699,   700,   701,   702,   703,   704,   705,
     706,   707,   708,   709,   711,   712,   716,   717,   713,   718,
     720,   721,   722,   710,   719,   694,     0,   729,   969,     0,
     714,   715,   728,   730,     0,   688,   725,   726,   731,   356,
     132,   116,   117,   108,   109,   110,   112,   113,   114,   115,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     129,   134,   128,   130,   135,   136,   138,   139,   137,   131,
     133,   141,   107,    97,   140,   103,   104,   111,   142,   101,
       0,    98,    99,   105,   106,   143,   950,   934,   935,   925,
     927,   928,   930,   931,   932,   933,   936,   937,   938,   939,
     940,   941,   942,   943,   944,   945,   947,   952,   946,   948,
     953,   956,   954,   955,   926,   949,   951,   958,   959,   921,
     922,   957,   919,   920,   923,   924,   929,   960,   918,     0,
     915,   916,   961,     1,     6,     8,    32,    42,    31,   144,
      12,     0,    16,     0,    39,    25,   144,     0,   183,   266,
     267,   260,   259,   261,   262,   263,   264,   265,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   279,   278,
     281,   282,   283,   284,   285,   257,   280,   286,   287,   186,
     290,   187,   289,   258,   288,   343,   337,   342,    29,   336,
     350,    48,    47,   147,   962,     0,     0,   966,   723,     0,
       0,   968,   732,   733,   735,   736,   737,   738,   739,   740,
     741,   742,   743,   744,   745,   746,   747,   748,   750,   751,
     752,   758,   759,   753,   760,   762,   763,   764,   749,   761,
     734,   769,   491,     0,   756,   757,   768,   770,   689,   690,
     754,   755,   771,   353,   526,   527,   528,   529,   530,     0,
       0,     0,     0,     0,   681,     0,     0,     0,     0,     0,
       0,   531,   538,   348,     0,   681,     0,   420,   539,   540,
     385,     0,   681,     0,     0,     0,   532,     0,   373,     0,
     536,   537,   543,   541,   545,   339,   366,     0,   359,   357,
     367,   362,   380,   534,   365,     0,   452,   364,   450,   544,
     523,   486,   371,   372,   374,   375,   376,   381,   379,   369,
     370,   377,   378,   360,   533,   535,   542,     0,    49,   100,
     913,   917,    11,     0,    37,    24,   144,     0,    28,     0,
      34,    85,    68,    69,    60,    61,    62,    64,    65,    66,
      67,    70,    71,    73,    74,    75,    76,    77,    78,    79,
      80,    82,    87,    81,    83,    88,    89,    90,    91,    72,
      84,    86,    94,     0,    93,    56,    57,    63,    95,    54,
      19,    52,    58,    92,    96,     3,     9,    27,   200,   201,
     192,   194,   195,   196,   197,   198,   199,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   213,   212,   214,
     217,   218,   219,   220,   216,   215,   221,   222,   223,   184,
     189,   191,   193,   224,   188,   291,   348,   345,   967,     0,
     965,   727,   724,   494,   495,   497,   498,   499,   500,   501,
     503,   510,   511,   504,   420,   512,   513,   502,   496,   516,
     515,   491,   514,   519,   520,   508,   509,   521,   517,   507,
       0,   490,   493,   505,   506,   518,   765,     0,     0,   691,
     799,   802,   803,   805,   806,   807,   808,   809,   810,   811,
     812,   813,   814,   815,   816,   817,   818,   819,   820,   825,
     826,   821,   827,   829,   830,   831,   828,   804,   832,     0,
     823,   824,   835,   833,     0,   800,   822,   834,   798,     0,
       0,     0,   683,     0,     0,   777,     0,   780,   781,   783,
       0,   788,     0,     0,   383,   368,   790,     0,   796,   424,
     425,   427,   428,   429,   430,   431,   432,   438,   439,   433,
     440,   441,   442,   426,   444,   443,   436,   437,   447,   445,
     434,   435,     0,   421,   422,   446,   789,     0,   794,     0,
       0,     0,     0,     0,   602,   604,   605,   606,   608,   609,
     610,   611,   618,   619,   612,   620,   621,   607,   603,   623,
     622,   595,   616,   617,   626,   624,     0,   615,   601,     0,
     613,   614,   625,   355,   358,   363,   448,   459,     0,   460,
     546,   547,   548,   549,   550,   551,   553,   560,   554,   561,
     562,   552,     3,   558,   559,   565,   563,   568,   557,   567,
     524,   555,   556,   564,   654,   655,   657,   658,   660,   661,
     662,   664,   671,   672,   665,   673,   674,   663,   659,   676,
     491,   675,   669,   670,   680,   677,   668,   451,   487,   679,
     488,   666,   667,   678,   361,   382,   102,     0,    33,    13,
       3,    10,    26,    20,    59,     0,    53,     0,     0,    23,
     190,   324,   308,   309,   300,   301,   302,   304,   305,   306,
     307,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   321,   326,   320,   322,   327,   328,   329,   330,   323,
     325,   332,   299,    50,   331,   291,   303,   333,   295,     0,
     292,   293,   298,   334,     0,   291,   964,     0,     0,   772,
     492,   767,   766,   837,     0,   797,   801,   866,   867,   876,
     869,   870,   874,   875,   872,   873,   863,     0,   864,   865,
       0,   862,     0,   838,   840,   842,   844,   848,   850,   852,
     854,   858,   871,   868,     0,     0,   682,     0,   778,     0,
     779,   784,   787,   340,     0,   386,   388,   388,   423,     0,
       0,     0,   782,   786,     0,   598,   628,   630,   631,   632,
     633,   634,   635,   636,   643,   644,   637,   645,   646,   647,
     629,   649,   491,   648,   597,   641,   642,   652,   650,   640,
     627,     0,   599,   638,   639,   651,   486,   449,   455,   464,
     465,   468,   469,   470,   471,   472,   473,   478,   479,   474,
     480,   481,   466,   482,   476,   477,   485,   483,   454,   461,
     462,   467,   475,   484,     0,   571,   572,   573,   574,   576,
     577,   578,   585,   579,   586,   587,   575,     3,   589,   583,
     584,   591,   588,   594,   582,   525,   593,   569,   580,   581,
     590,     0,   489,    14,     0,     0,    22,    55,    40,    21,
       0,    51,     0,   344,   294,   338,     0,   522,   836,   860,
       0,     0,   855,   681,   839,     0,     0,   847,     0,     0,
       0,   885,   887,   888,   889,   890,   891,   892,   893,   894,
     895,   896,   897,   898,   899,   900,   901,   902,   907,   903,
     908,   910,   911,   912,   904,   909,   886,   491,     0,   883,
     884,   857,   878,   905,   906,   681,   681,     0,     0,   681,
     396,   397,   399,   400,   401,   402,   403,   404,   410,   411,
     405,   412,   413,   414,   398,   416,   415,   388,   408,   409,
     419,   417,   406,   407,     0,   389,   390,   394,   418,     0,
     681,   681,   681,   785,     0,   596,   600,     0,     0,     0,
     463,   566,     0,   570,   656,    38,    15,   296,   297,   346,
     859,   861,   685,   841,   843,   849,   846,     0,   851,   853,
     856,     0,   880,     0,     0,   877,   687,   773,     0,   777,
       0,   795,     0,     0,   384,   391,   388,   387,   793,   792,
     791,   653,   456,   457,   452,   453,   592,   681,     0,   882,
     881,   879,     0,     0,   777,   393,   392,     0,     0,   686,
     845,   774,   681,     0,   395,   458,   775,   681,   776
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    40,    41,    42,    43,    44,   760,   485,    45,    46,
      47,    48,   479,   970,   480,   481,   190,   191,   192,    99,
     100,   101,    50,    51,   289,   519,   520,    52,    53,   290,
     291,   809,   810,   811,    54,    55,   841,   296,   297,   525,
     815,    65,    66,    67,   395,    57,   149,   397,   398,   399,
     400,   755,   402,   403,  1054,  1055,  1056,  1057,   652,   653,
     654,   404,   405,   406,   907,   407,   928,   929,   930,   747,
     748,   560,   561,   562,   408,   409,   410,   719,   720,   955,
     956,   957,   411,   901,   689,   902,   750,   612,   613,   614,
      58,   412,   858,   348,   145,   349,   413,   859,   414,   415,
     416,   417,   418,   419,   420,   421,   422,   423,   604,   605,
     842,   843,   844,   845,  1087,   846,   847,   848,   849,   850,
     851,  1021,  1022,   852,   239,   240,   241,    60,   853,   484
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1065
static const yytype_int16 yypact[] =
{
    1832, -1065, -1065, -1065,    16, -1065, -1065, -1065, -1065, -1065,
   -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065,
   -1065, -1065,    76, -1065, -1065, -1065, -1065, -1065, -1065, -1065,
   -1065,  2342,  3357,  1883, -1065, -1065,  1359, -1065, -1065,  1434,
      69, -1065,  1832,    39, -1065,  2138, -1065, -1065, -1065,  2342,
      27,    37, -1065,  2495, -1065, -1065,    41, -1065, -1065, -1065,
      45, -1065, -1065, -1065, -1065,    80,    76, -1065, -1065, -1065,
   -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065,
   -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065,
   -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065,    14,
    2342, -1065, -1065, -1065, -1065, -1065,    47, -1065, -1065, -1065,
   -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065,
   -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065,
   -1065, -1065, -1065, -1065, -1065, -1065,  3308, -1065, -1065,  1679,
   -1065, -1065, -1065, -1065,    46,  1934, -1065, -1065, -1065,  1242,
   -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065,
   -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065,
   -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065,
   -1065, -1065, -1065,  1359, -1065, -1065, -1065, -1065, -1065, -1065,
      50,  1359, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065,
   -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065,
   -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065,
   -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065,
   -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065,    55,
    1434, -1065, -1065, -1065,    39, -1065, -1065, -1065, -1065,  2342,
      34,    60,    75,  1628, -1065, -1065,  2342,    71,  2393, -1065,
   -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065,
   -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065,
   -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065,  2495,
   -1065, -1065, -1065, -1065, -1065, -1065,    95,    73, -1065, -1065,
   -1065, -1065, -1065, -1065, -1065,    89,    79, -1065, -1065,    91,
      97, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065,
   -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065,
   -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065,
   -1065, -1065,  2597,  1730, -1065, -1065, -1065, -1065,  1934, -1065,
   -1065, -1065, -1065,   102, -1065, -1065, -1065, -1065, -1065,  2444,
     105,    96,   106,   107, -1065,   109,  2087,   114,   116,  1033,
    1985, -1065, -1065,    76,  3107, -1065,    83,  2903, -1065, -1065,
   -1065,  1242, -1065,   113,   115,   118, -1065,    28, -1065,  2648,
   -1065, -1065, -1065, -1065, -1065, -1065, -1065,    92, -1065,  1242,
   -1065, -1065, -1065, -1065, -1065,   120,    89, -1065,    12, -1065,
    3005,  2801, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065,
   -1065, -1065, -1065,  1242, -1065, -1065, -1065,   104, -1065, -1065,
   -1065, -1065,    90,  1628, -1065, -1065,  2342,   123, -1065,  1628,
   -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065,
   -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065,
   -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065,
   -1065, -1065, -1065,  1485, -1065, -1065, -1065, -1065, -1065, -1065,
    1628, -1065, -1065, -1065, -1065,  1832,    94, -1065, -1065, -1065,
   -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065,
   -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065,
   -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065,  2393,
   -1065, -1065, -1065, -1065, -1065,  1305,    76, -1065, -1065,    89,
   -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065,
   -1065, -1065, -1065, -1065,  2903, -1065, -1065, -1065, -1065, -1065,
   -1065,  2597, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065,
     122,  2597, -1065, -1065, -1065, -1065, -1065,   121,   127, -1065,
   -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065,
   -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065,
   -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065,  2189,
   -1065, -1065, -1065, -1065,  2240, -1065, -1065, -1065, -1065,  3257,
    3257,  3257, -1065,  1242,   137,  2087,   125, -1065, -1065, -1065,
     128, -1065,   133,    80, -1065, -1065, -1065,  2087, -1065, -1065,
   -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065,
   -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065,
   -1065, -1065,    33, -1065,  2903, -1065, -1065,  1242, -1065,  2087,
    2087,  2087,   134,  2036, -1065, -1065, -1065, -1065, -1065, -1065,
   -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065,
   -1065, -1065, -1065, -1065, -1065, -1065,   130, -1065, -1065,  2699,
   -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065,  3184,  3056,
   -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065,
   -1065, -1065,  1832, -1065, -1065, -1065, -1065, -1065, -1065, -1065,
    2954, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065,
   -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065,
    2597, -1065, -1065, -1065, -1065, -1065, -1065, -1065,  2801, -1065,
   -1065, -1065, -1065, -1065, -1065, -1065, -1065,  1628, -1065,  1628,
    1832,   103, -1065,  1628, -1065,  1577, -1065,   135,  1628, -1065,
   -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065,
   -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065,
   -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065,
   -1065, -1065, -1065,  1628, -1065,  1305, -1065, -1065, -1065,   131,
    1305, -1065, -1065, -1065,    80,  1305, -1065,   136,   140, -1065,
   -1065, -1065, -1065, -1065,  2291, -1065, -1065, -1065, -1065, -1065,
   -1065, -1065, -1065, -1065, -1065, -1065, -1065,  3147, -1065, -1065,
    3257, -1065,   138,   142,   129, -1065,    18,   174,   163, -1065,
     139,  2546, -1065, -1065,   141,   147, -1065,   149, -1065,   145,
   -1065, -1065, -1065, -1065,   150, -1065,  2852,  2852, -1065,   151,
     153,   154, -1065, -1065,   160, -1065, -1065, -1065, -1065, -1065,
   -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065,
   -1065, -1065,  2597, -1065, -1065, -1065, -1065, -1065, -1065, -1065,
   -1065,  2750, -1065, -1065, -1065, -1065,  2801, -1065,    11, -1065,
   -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065,
   -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065,   156,  3056,
   -1065, -1065, -1065, -1065,   159, -1065, -1065, -1065, -1065, -1065,
   -1065, -1065, -1065, -1065, -1065, -1065, -1065,  1832, -1065, -1065,
   -1065, -1065, -1065, -1065, -1065,  2954, -1065, -1065, -1065, -1065,
   -1065,   162, -1065,  1628,   164,  1628, -1065, -1065, -1065,  1628,
     165,  1628,   158, -1065, -1065, -1065,   166, -1065, -1065, -1065,
     169,   171, -1065, -1065,  3257,  3257,  3257,  3257,  3257,  3257,
    3257, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065,
   -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065,
   -1065, -1065, -1065, -1065, -1065, -1065, -1065,  2597,  1781, -1065,
   -1065,  2546, -1065, -1065, -1065, -1065, -1065,  3257,  3221, -1065,
   -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065, -1065,
   -1065, -1065, -1065, -1065, -1065, -1065, -1065,  1114, -1065, -1065,
   -1065, -1065, -1065, -1065,   175, -1065,  2852,   170, -1065,   173,
   -1065, -1065, -1065, -1065,   178, -1065, -1065,   180,  3107,  3184,
   -1065, -1065,   181, -1065, -1065, -1065,  1628, -1065, -1065, -1065,
   -1065, -1065,   216,   129, -1065,   174,   129,   184,   163, -1065,
   -1065,   186, -1065,   185,   189, -1065, -1065, -1065,   194,  2087,
     202, -1065,   200,   201, -1065, -1065,  2852, -1065, -1065, -1065,
   -1065, -1065,   199, -1065, -1065, -1065, -1065, -1065,  3257, -1065,
   -1065, -1065,   210,   207,  2087, -1065, -1065,   187,  3107, -1065,
   -1065, -1065, -1065,   208, -1065, -1065, -1065, -1065, -1065
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1065, -1065,  -477, -1065,   215,   222, -1065, -1065, -1065,   220,
   -1065,   -16,    54, -1065,  -418,  -471,    85, -1065,    81,   -44,
   -1065,   176,     5, -1065, -1065, -1065,  -253, -1065, -1065, -1065,
     -19,  -775, -1065,  -539,    35,   -63,  -148, -1065, -1065, -1065,
   -1065,  -353, -1065,   212,    63,  -122, -1065, -1065,  -355, -1065,
   -1065,  -139, -1065,     7,  -843,  -783, -1065, -1065,  -270,  -375,
   -1065,   -94, -1036, -1022,  -787,   -89, -1065, -1065,  -643,  -619,
   -1065,  -548, -1065,  -266, -1065, -1065, -1065, -1065, -1065, -1065,
   -1065,  -659,  -383, -1065, -1065,  -604,  -450,  -725, -1065,  -359,
     -95, -1065,   -15, -1065, -1065,   -43, -1065, -1064, -1065, -1065,
   -1065, -1065, -1065, -1065, -1065, -1065, -1065,  -367,  -292,  -585,
    -599, -1065,  -685,  -978, -1065, -1065,  -678,  -679,  -818, -1065,
   -1065, -1065,  -708,     0, -1065, -1065,    74,    -7,   451,    78
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      59,   394,   299,   818,   302,   252,   688,  1084,   767,   766,
     401,   854,   855,   908,   657,   759,   626,   309,   144,   826,
     623,   763,   982,   658,  1059,   699,   986,   396,   749,   248,
     972,   103,  1113,   146,   255,  1123,   193,   106,   251,   238,
     976,   307,    59,   257,   694,    59,  1114,   662,   663,   103,
     250,   985,   698,   293,    49,   765,   301,    35,   389,   987,
    1133,    62,  1068,    56,    31,    32,   102,   253,   754,   243,
     254,    31,    32,    36,   433,   865,   866,   434,    61,   867,
      36,   246,   258,     1,   102,    98,   105,   298,   292,   295,
     189,   311,  1135,    36,    56,    56,    49,   428,    63,   249,
     103,    64,   438,    98,   256,    56,  1114,   430,    56,   104,
      61,   148,    56,   487,   195,   439,    56,   242,    35,   526,
      61,   527,    35,    61,   310,    36,    35,   104,    56,   627,
     757,   294,    35,    35,   768,   102,   693,    35,   531,   146,
    1130,   306,   609,   965,   532,   350,    35,   570,   756,   424,
     608,   857,   610,   611,    98,   615,   617,   440,   618,   659,
     304,   660,   696,    56,   661,   762,   819,   860,   821,   985,
     861,  1089,  1090,   814,   822,   862,   872,   875,   104,   968,
     973,   988,   867,   193,   977,   983,   989,  1028,  1025,   990,
     305,   193,   961,   984,  1026,  1027,  1069,  1029,  1060,    56,
    1061,  1062,  1063,  1071,  1103,   432,  1074,  1078,  1075,  1077,
     528,   530,   486,  1106,    61,  1079,  1080,   148,  1081,  1104,
    1107,   567,  1111,   352,  1112,  1116,   394,   426,  1117,  1118,
    1119,  1134,  1120,   394,   435,   934,  1121,   189,   981,   826,
     238,  1122,   656,   437,  1124,   189,   657,  1125,  1126,   103,
    1128,   394,  1131,   482,  1132,  1137,   103,   244,   522,   396,
     695,   195,   717,  1127,   245,   247,   770,   686,   427,   195,
     524,   974,   429,  1105,   817,   394,   303,   396,   300,   868,
     624,   628,  1115,   964,   102,   625,  1070,  1067,   766,   293,
     657,   102,   766,   521,   766,   820,  1073,  1066,   962,  1083,
    1096,   396,  1086,    98,   436,   569,   900,   824,  1085,  1088,
      98,   697,    56,  1095,   431,     0,   931,     0,   242,    56,
       0,    56,     0,     0,   292,     0,     0,   104,   568,     0,
       0,     0,     0,     0,   104,     0,   523,   758,     0,   963,
       0,     0,   563,   146,  1064,     0,     0,     0,   350,   559,
     969,   616,    56,     0,   620,   622,     0,     0,     0,   606,
     529,     0,     0,     0,     0,   749,   146,   294,     0,   146,
     146,     0,     0,     0,   424,     0,     0,     0,     0,     0,
       0,   424,     0,     0,   908,   971,     0,     0,     0,   690,
       0,   769,   761,     0,     0,     0,   687,     0,     0,   424,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     721,   751,     0,     0,     0,     0,     0,   718,   746,     0,
     565,   148,     0,   424,     0,     0,   352,     0,  1098,  1100,
       0,     0,     0,   482,   816,     0,   103,   607,     0,   482,
       0,     0,     0,     0,   148,     0,     0,   148,   148,     0,
       0,     0,   426,     0,     0,   655,     0,     0,     0,   426,
       0,     0,     0,     0,     0,   394,     0,   692,     0,  1091,
    1072,   102,     0,   482,   856,     0,     0,   426,     0,     0,
     482,     0,     0,     0,   147,    59,     0,   194,   723,   753,
      98,   396,   766,     0,     0,     0,     0,     0,   766,    56,
     766,   426,     0,     0,     0,     0,     0,     0,     0,   394,
       0,     0,     0,     0,   104,     0,     0,     0,   900,   522,
       0,     0,     0,   749,     0,   812,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   396,     0,     0,     0,    49,
       0,     0,     0,     0,     0,     0,   931,  1076,    56,     0,
       0,   563,     0,     0,   521,     0,     0,     0,   559,     0,
       0,   563,     0,    61,     0,     0,     0,     0,   559,     0,
       0,     0,   953,     0,     0,     0,     0,     0,     0,   808,
       0,     0,    56,     0,     0,     0,     0,     0,     0,     0,
     147,     0,     0,     0,     0,     0,   351,   523,     0,   606,
     425,     0,     0,   813,   606,   766,     0,     0,     0,     0,
       0,     0,   864,   424,     0,   146,     0,     0,     0,     0,
       0,     0,   655,     0,  1082,     0,     0,   146,     0,   565,
       0,     0,     0,     0,   194,     0,     0,     0,     0,   565,
       0,     0,   194,     0,   869,   870,   871,     0,   874,     0,
       0,     0,     0,     0,     0,     0,     0,   424,     0,   146,
     146,   146,     0,   146,     0,     0,   966,  1097,     0,     0,
    1101,     0,     0,     0,     0,     0,     0,   607,     0,     0,
       0,     0,   607,     0,     0,     0,   863,     0,     0,   903,
       0,   426,     0,   148,     0,     0,   899,     0,     0,   932,
       0,  1108,  1109,  1110,   483,   148,     0,     0,     0,     0,
       0,     0,    59,     0,     0,   980,     0,     0,     0,     0,
     958,     0,     0,     0,     0,     0,     0,   954,     0,     0,
       0,     0,   655,     0,     0,   426,     0,   148,   148,   148,
     563,   148,     0,     0,     0,     0,     0,   559,   751,     0,
       0,   975,     0,     0,     0,   746,     0,   482,  1129,   482,
      59,     0,     0,   482,     0,   482,    49,   905,   482,     0,
       0,     0,     0,  1136,     0,    56,     0,   933,  1138,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      61,     0,     0,   564,   147,     0,     0,     0,   960,   351,
       0,     0,     0,   482,     0,   812,     0,   953,     0,     0,
     812,     0,     0,     0,    49,   812,     0,   147,   565,     0,
     147,   147,     0,    56,   606,   425,   753,     0,     0,     0,
       0,     0,   425,     0,     0,     0,     0,     0,    61,     0,
     691,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     425,  1023,     0,     0,     0,     0,     0,     0,     0,   808,
       0,   722,   752,     0,   808,     0,     0,     0,     0,   808,
       0,     0,     0,     0,   425,     0,     0,    56,     0,     0,
       0,     0,     0,   813,   483,     0,     0,     0,   813,     0,
     483,     0,   563,   813,     0,     0,  1093,     0,     0,   559,
       0,   903,   607,     0,     0,     0,   751,     0,   899,     0,
       0,     0,     0,   746,     0,     0,     0,     0,     0,     0,
     394,     0,     0,     0,   483,  1102,     0,     0,     0,   932,
       0,   483,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1058,  1058,     0,    59,     0,     0,
       0,     0,     0,     0,     0,   958,     0,     0,     0,     0,
       0,     0,   954,   482,     0,   482,     0,     0,     0,   482,
     565,   482,     0,     0,     0,     0,     0,     0,     0,   905,
     394,     0,     0,     0,   753,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    49,   564,  1094,     0,     0,     0,   933,     0,     0,
      56,     0,   564,     0,     0,     0,     0,   563,   146,     0,
       0,  1023,     0,     0,   559,    61,     0,     0,     0,     0,
       0,     0,     0,   960,     0,     0,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,     0,   124,   125,   126,   127,   128,   129,
     130,     0,   131,   132,   425,   133,   147,     0,   424,   134,
     135,   136,     0,   137,    33,   619,   482,     0,   147,   139,
       0,   140,   141,   142,   143,     0,    39,     0,     0,     0,
       0,     0,     0,     0,     0,   565,   148,     0,     0,   146,
       0,     0,     0,     0,     0,     0,     0,     0,   425,     0,
     147,   147,   147,     0,   147,     0,     0,  1030,  1031,  1032,
    1033,  1034,  1035,     0,   146,  1058,     0,     0,   424,     0,
       0,     0,     0,     0,  1058,  1036,  1037,  1038,  1039,  1040,
     904,     0,  1041,  1042,  1043,     0,   426,     0,     0,     0,
       0,  1044,     0,     0,  1045,    33,     0,    35,     0,  1046,
    1047,     0,  1048,  1049,  1050,  1051,  1052,  1053,     0,     0,
       0,   959,     0,     0,     0,     0,     0,   148,     0,     0,
       0,     0,     0,     0,  1058,     0,     0,     0,     0,     0,
       0,   564,     0,     0,     0,     0,     0,     0,     0,   752,
       0,     0,   148,     0,     0,     0,   426,     0,   483,     0,
     483,     0,     0,     0,   483,     0,   483,     0,     0,   483,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   483,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   382,   383,   384,   385,   386,
     136,   387,     0,    33,   388,    35,     0,     0,   389,     0,
     390,   391,   392,   393,     0,    39,     0,     0,     0,     0,
       0,     0,  1024,     0,     0,     0,     0,     0,   771,   772,
     773,   774,   775,   776,   777,   778,   779,   780,   781,   782,
     783,   784,   785,   786,   787,   788,   789,   790,   791,   792,
     793,   794,   795,   796,   797,   798,     0,     0,     0,     0,
       0,   799,   800,   564,     0,   801,    33,   802,   803,     0,
     804,    36,   904,   805,     0,   806,   807,   752,    39,     0,
       0,     0,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
       0,   178,     0,     0,     0,   179,   180,   136,     0,   181,
      33,   182,   183,     0,   184,    36,   959,   185,   186,   187,
     188,     0,    39,     0,   483,     0,   483,     0,     0,     0,
     483,     0,   483,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,     0,   224,     0,   564,   147,
     225,   226,  1024,     0,   227,    33,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,     0,    39,   441,   442,
     443,   444,   445,   446,   447,   448,   449,   450,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,     0,   469,     0,   425,
       0,   470,   471,   136,     0,   472,    33,   483,   473,   764,
     474,    36,     0,   475,   476,   477,   478,     0,    39,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     147,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   147,     0,     0,     0,   425,
     441,   442,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,     0,   469,
       0,     0,     0,   470,   471,   136,     0,   472,    33,     0,
     473,   967,   474,    36,     0,   475,   476,   477,   478,     0,
      39,   441,   442,   443,   444,   445,   446,   447,   448,   449,
     450,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,     0,
     469,     0,     0,     0,   470,   471,   136,     0,   472,    33,
       0,   473,     0,   474,    36,     0,   475,   476,   477,   478,
       0,    39,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,     0,
     124,   125,   126,   127,   128,   129,   130,     0,   131,   132,
       0,   133,     0,     0,     0,   134,   135,   136,     0,   137,
      33,     0,    35,     0,     0,   139,   308,   140,   141,   142,
     143,     0,    39,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
       0,   124,   125,   126,   127,   128,   129,   130,     0,   131,
     132,     0,   133,     0,     0,     0,   134,   135,   136,     0,
     137,    33,     0,    35,     0,     0,   139,   566,   140,   141,
     142,   143,     0,    39,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,     0,   124,   125,   126,   127,   128,   129,   130,     0,
     131,   132,     0,   133,     0,     0,     0,   134,   135,   136,
       0,   137,    33,     0,    35,     0,     0,   139,  1092,   140,
     141,   142,   143,     0,    39,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,     0,    29,     0,     0,     0,    30,    31,
      32,     0,     0,    33,    34,    35,     0,     0,    36,     0,
       0,     0,    37,    38,     0,    39,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,     0,   124,   125,   126,   127,   128,   129,
     130,     0,   131,   132,     0,   133,     0,     0,     0,   134,
     135,   136,     0,   137,    33,     0,     0,     0,   138,   139,
       0,   140,   141,   142,   143,     0,    39,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,     0,   329,   330,   331,   332,   333,
     334,   335,     0,   336,   337,     0,   338,     0,     0,     0,
     339,   340,   136,     0,   341,    33,     0,   342,     0,     0,
     343,     0,   344,   345,   346,   347,     0,    39,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,     0,   124,   125,   126,   127,
     128,   129,   130,     0,   131,   132,     0,   133,     0,     0,
       0,   134,   135,   136,     0,   137,    33,   621,     0,     0,
       0,   139,     0,   140,   141,   142,   143,     0,    39,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,     0,   124,   125,   126,
     127,   128,   129,   130,     0,   131,   132,     0,   133,     0,
       0,     0,   134,   135,   136,     0,   137,    33,   873,     0,
       0,     0,   139,     0,   140,   141,   142,   143,     0,    39,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,     0,   124,   125,
     126,   127,   128,   129,   130,     0,   131,   132,     0,   133,
       0,     0,     0,   134,   135,   136,     0,   137,    33,     0,
       0,     0,     0,   139,     0,   140,   141,   142,   143,     0,
      39,     1,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,     0,
      29,     0,     0,     0,    30,    31,    32,     0,     0,    33,
       0,     0,     0,     0,    36,     0,     0,     0,    37,    38,
       0,    39,   571,   572,   573,   574,   575,   576,   577,   578,
     579,   580,   581,   582,   583,   584,   585,   586,   587,     0,
       0,   588,   589,   590,   591,   592,   593,     0,   594,   595,
       0,     0,     0,     0,     0,   596,   597,     0,     0,   598,
      33,     0,     0,     0,     0,   599,   823,   600,   601,   602,
     603,     0,    39,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,   585,   586,   587,
       0,     0,   588,   589,   590,   591,   592,   593,     0,   594,
     595,     0,     0,     0,     0,     0,   596,   597,     0,     0,
     598,    33,     0,     0,     0,   825,   599,     0,   600,   601,
     602,   603,     0,    39,   571,   572,   573,   574,   575,   576,
     577,   578,   579,   580,   581,   582,   583,   584,   585,   586,
     587,     0,     0,   588,   589,   590,   591,   592,   593,     0,
     594,   595,     0,     0,     0,     0,     0,   596,   597,     0,
       0,   598,    33,     0,     0,     0,     0,   599,   978,   600,
     601,   602,   603,     0,    39,     1,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    22,    88,    89,    90,
      91,    92,    93,     0,     0,     0,     0,     0,    94,     0,
       0,     0,     0,    33,     0,     0,     0,    95,    36,     0,
       0,     0,    96,    97,     0,    39,     1,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,    22,   508,   509,
     510,   511,   512,   513,     0,   514,     0,     0,     0,   515,
       0,     0,     0,     0,    33,     0,     0,     0,   516,     0,
       0,     0,     0,   517,   518,     0,    39,   571,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   581,   582,   583,
     584,   585,   586,   587,     0,     0,   588,   589,   590,   591,
     592,   593,     0,   594,   595,     0,     0,     0,     0,     0,
     596,   597,     0,     0,   598,    33,     0,     0,     0,     0,
     599,     0,   600,   601,   602,   603,     0,    39,     1,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,    22,
     279,   280,   281,   282,   283,   284,     0,   285,     0,     0,
       0,   286,     0,     0,     0,     0,    33,     0,     0,     0,
       0,     0,     0,     0,     0,   287,   288,     0,    39,   991,
     992,   993,   994,     0,     0,   995,   996,   997,   998,   999,
    1000,  1001,  1002,  1003,  1004,  1005,     0,  1006,  1007,     0,
    1008,  1009,  1010,  1011,     0,  1012,  1013,     0,  1014,     0,
       0,     0,  1015,  1016,   136,     0,     0,     0,     0,  1017,
       0,     0,  1018,     0,  1019,  1020,     0,     0,     0,    39,
     533,   534,   535,   536,   537,   538,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   539,   540,
     541,   542,   543,     0,     0,   544,   545,   546,     0,   547,
       0,     0,     0,     0,   548,   136,     0,   549,    33,   550,
     551,     0,   552,   553,   554,   555,   556,   557,   558,     0,
      39,   664,   665,   666,   667,   668,   669,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   670,
     671,   672,   673,   674,     0,     0,   544,   675,   676,     0,
     677,     0,     0,     0,     0,   678,   136,     0,   679,    33,
       0,    35,     0,   680,   389,   681,   682,   683,   684,   685,
       0,    39,   876,   877,   878,   879,   880,   881,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     882,   883,   884,   885,   886,     0,     0,   544,   887,   888,
       0,   889,     0,     0,     0,     0,   890,   136,     0,   891,
      33,     0,   892,     0,   893,   389,   894,   895,   896,   897,
     898,     0,    39,   876,   877,   878,   879,   880,   881,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   882,   883,   884,   885,   886,     0,     0,   544,   887,
     888,     0,   889,     0,     0,     0,     0,   890,   136,     0,
     891,    33,     0,   892,     0,   893,   389,  1065,   895,   896,
     897,   898,     0,    39,   724,   725,   726,   727,   728,   729,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   730,   731,   732,   733,   734,     0,     0,   544,
     735,   736,     0,   737,     0,     0,     0,     0,   738,   136,
       0,   739,    33,     0,   740,     0,   741,   389,     0,   742,
     743,   744,   745,     0,    39,  1030,  1031,  1032,  1033,  1034,
    1035,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1036,  1037,  1038,  1039,  1040,     0,     0,
    1041,  1042,  1043,     0,     0,     0,     0,     0,     0,  1044,
       0,     0,  1045,    33,     0,     0,     0,  1046,  1047,     0,
    1048,  1049,  1050,  1051,  1052,  1053,   629,   630,   631,   632,
     633,   634,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   635,   636,   637,   638,   639,     0,
       0,   640,   641,   642,     0,     0,     0,     0,     0,     0,
     643,     0,     0,   644,    33,     0,     0,     0,   645,     0,
       0,   646,   647,   648,   649,   650,   651,     1,   935,   936,
     937,   938,   939,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   940,   941,   942,   373,   943,
       0,     0,   544,   944,   945,     0,     0,     0,     0,     0,
       0,   946,   136,     0,     0,    33,     0,   947,     0,   948,
       0,     0,   949,   950,   951,   952,     0,    39,     1,   700,
     701,   702,   703,   704,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   705,   706,   707,   373,
     708,     0,     0,   544,   709,   710,     0,     0,     0,     0,
       0,     0,   711,   136,     0,     0,    33,     0,   712,     0,
       0,     0,     0,   713,   714,   715,   716,     0,    39,   909,
     910,   911,   912,   913,   914,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   915,   916,   917,
     918,   919,     0,     0,     0,   920,   921,     0,     0,     0,
       0,     0,     0,   922,     0,     0,     0,    33,     0,     0,
       0,   923,   389,     0,   924,   925,   926,   927,     0,    39,
       1,   354,   355,   356,   357,   358,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   371,
     372,   373,     0,     0,     0,   544,   378,   379,     0,     0,
       0,     0,     0,     0,   386,   136,     0,     0,    33,     0,
       1,   827,   828,   389,   829,   390,   391,   392,   393,     0,
      39,     0,     0,     0,     0,     0,     0,     0,     0,   830,
     831,   373,     0,     0,     0,     0,   832,   833,     0,   834,
       0,     0,     0,   835,   836,   136,     0,     1,   827,   828,
      35,   829,     0,   837,   979,   838,   839,   840,     0,     0,
      39,     0,     0,     0,     0,     0,   830,   831,   373,     0,
       0,     0,     0,   832,   833,     0,   834,     0,     0,     0,
     835,   836,   136,     0,     1,   827,   828,   906,   829,     0,
     837,     0,   838,   839,   840,     0,     0,    39,     0,     0,
       0,     0,     0,   830,   831,   373,     0,     0,     0,     0,
     832,   833,     0,   834,     0,     0,     0,   835,   836,   136,
       1,   827,   828,  1099,   829,     0,     0,   837,     0,   838,
     839,   840,     0,     0,    39,     0,     0,     0,     0,   830,
     831,   373,     0,     0,     0,     0,   832,   833,     0,   834,
       0,     0,     0,   835,   836,   136,     0,     0,     0,     0,
       0,     0,     0,   837,     0,   838,   839,   840,     0,     0,
      39,     1,     2,     3,     0,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,     0,
      29,     0,     0,     0,    30,     0,     0,     0,     0,    33,
       0,    35,     0,     0,    36,     0,     0,     0,    37,    38,
       1,     2,     3,     0,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,     0,    29,
       0,     0,     0,    30,     0,     0,     0,     0,    33,     0,
       0,     0,     0,    36,     0,     0,     0,    37,    38
};

static const yytype_int16 yycheck[] =
{
       0,   149,    65,   551,    99,    49,   389,   985,   485,   480,
     149,   610,   611,   698,   381,   433,   375,   139,    33,   604,
     373,   439,   840,   382,   867,   408,     8,   149,   411,    45,
     805,    31,  1068,    33,    50,  1099,    36,    32,    45,    39,
     815,   136,    42,    50,   399,    45,  1068,    19,    20,    49,
      45,    40,    40,    53,     0,   473,    42,    43,    46,    41,
    1124,    45,    51,     0,    37,    38,    31,    40,   423,     0,
      43,    37,    38,    46,    40,    42,    43,    43,     0,    46,
      46,    42,    45,     3,    49,    31,    32,    42,    53,    48,
      36,    45,  1128,    46,    31,    32,    42,    47,    22,    45,
     100,    25,    42,    49,    50,    42,  1128,    52,    45,    31,
      32,    33,    49,    42,    36,    40,    53,    39,    43,    24,
      42,    48,    43,    45,   139,    46,    43,    49,    65,    46,
      40,    53,    43,    43,    40,   100,    44,    43,    47,   139,
    1118,   136,    46,    40,    47,   145,    43,    45,    44,   149,
      45,    14,    46,    46,   100,    46,    42,   252,    42,    46,
     106,    46,    42,   100,    46,    42,    44,    42,    47,    40,
      42,   989,   990,   526,    47,    42,    42,    47,   100,    44,
      49,     7,    46,   183,    44,    47,    23,    42,    47,    50,
     136,   191,   740,    51,    47,    46,    40,    47,    47,   136,
      47,    47,    42,    44,  1047,   249,    44,    49,    44,    44,
     305,   306,   256,    43,   136,    49,    47,   139,    47,    44,
      47,   343,    44,   145,    44,    44,   374,   149,    12,    45,
      44,    44,    47,   381,   250,   712,    47,   183,   837,   824,
     240,    47,   381,   250,    42,   191,   613,    47,    47,   249,
      51,   399,    42,   253,    47,    47,   256,    42,   258,   381,
     399,   183,   410,  1106,    42,    45,   519,   389,   183,   191,
     289,   810,   191,  1056,   544,   423,   100,   399,    66,   654,
     374,   376,  1069,   760,   249,   374,   929,   906,   759,   289,
     657,   256,   763,   258,   765,   561,   955,   901,   748,   984,
    1025,   423,   987,   249,   250,   348,   689,   599,   986,   988,
     256,   406,   249,  1021,   240,    -1,   699,    -1,   240,   256,
      -1,   258,    -1,    -1,   289,    -1,    -1,   249,   343,    -1,
      -1,    -1,    -1,    -1,   256,    -1,   258,   432,    -1,   757,
      -1,    -1,   342,   343,   892,    -1,    -1,    -1,   348,   342,
     768,   366,   289,    -1,   369,   370,    -1,    -1,    -1,   359,
     306,    -1,    -1,    -1,    -1,   748,   366,   289,    -1,   369,
     370,    -1,    -1,    -1,   374,    -1,    -1,    -1,    -1,    -1,
      -1,   381,    -1,    -1,  1069,   803,    -1,    -1,    -1,   389,
      -1,   486,   436,    -1,    -1,    -1,   389,    -1,    -1,   399,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     410,   411,    -1,    -1,    -1,    -1,    -1,   410,   411,    -1,
     342,   343,    -1,   423,    -1,    -1,   348,    -1,  1027,  1028,
      -1,    -1,    -1,   433,   529,    -1,   436,   359,    -1,   439,
      -1,    -1,    -1,    -1,   366,    -1,    -1,   369,   370,    -1,
      -1,    -1,   374,    -1,    -1,   377,    -1,    -1,    -1,   381,
      -1,    -1,    -1,    -1,    -1,   613,    -1,   389,    -1,  1017,
     947,   436,    -1,   473,   613,    -1,    -1,   399,    -1,    -1,
     480,    -1,    -1,    -1,    33,   485,    -1,    36,   410,   411,
     436,   613,   963,    -1,    -1,    -1,    -1,    -1,   969,   436,
     971,   423,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   657,
      -1,    -1,    -1,    -1,   436,    -1,    -1,    -1,   901,   519,
      -1,    -1,    -1,   906,    -1,   525,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   657,    -1,    -1,    -1,   485,
      -1,    -1,    -1,    -1,    -1,    -1,   929,   965,   485,    -1,
      -1,   551,    -1,    -1,   519,    -1,    -1,    -1,   551,    -1,
      -1,   561,    -1,   485,    -1,    -1,    -1,    -1,   561,    -1,
      -1,    -1,   720,    -1,    -1,    -1,    -1,    -1,    -1,   525,
      -1,    -1,   519,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     139,    -1,    -1,    -1,    -1,    -1,   145,   519,    -1,   599,
     149,    -1,    -1,   525,   604,  1076,    -1,    -1,    -1,    -1,
      -1,    -1,   627,   613,    -1,   615,    -1,    -1,    -1,    -1,
      -1,    -1,   544,    -1,   983,    -1,    -1,   627,    -1,   551,
      -1,    -1,    -1,    -1,   183,    -1,    -1,    -1,    -1,   561,
      -1,    -1,   191,    -1,   659,   660,   661,    -1,   663,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   657,    -1,   659,
     660,   661,    -1,   663,    -1,    -1,   761,  1026,    -1,    -1,
    1029,    -1,    -1,    -1,    -1,    -1,    -1,   599,    -1,    -1,
      -1,    -1,   604,    -1,    -1,    -1,   623,    -1,    -1,   689,
      -1,   613,    -1,   615,    -1,    -1,   689,    -1,    -1,   699,
      -1,  1060,  1061,  1062,   253,   627,    -1,    -1,    -1,    -1,
      -1,    -1,   712,    -1,    -1,   837,    -1,    -1,    -1,    -1,
     720,    -1,    -1,    -1,    -1,    -1,    -1,   720,    -1,    -1,
      -1,    -1,   654,    -1,    -1,   657,    -1,   659,   660,   661,
     740,   663,    -1,    -1,    -1,    -1,    -1,   740,   748,    -1,
      -1,   814,    -1,    -1,    -1,   748,    -1,   757,  1117,   759,
     760,    -1,    -1,   763,    -1,   765,   712,   689,   768,    -1,
      -1,    -1,    -1,  1132,    -1,   712,    -1,   699,  1137,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     712,    -1,    -1,   342,   343,    -1,    -1,    -1,   720,   348,
      -1,    -1,    -1,   803,    -1,   805,    -1,   955,    -1,    -1,
     810,    -1,    -1,    -1,   760,   815,    -1,   366,   740,    -1,
     369,   370,    -1,   760,   824,   374,   748,    -1,    -1,    -1,
      -1,    -1,   381,    -1,    -1,    -1,    -1,    -1,   760,    -1,
     389,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     399,   851,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   805,
      -1,   410,   411,    -1,   810,    -1,    -1,    -1,    -1,   815,
      -1,    -1,    -1,    -1,   423,    -1,    -1,   814,    -1,    -1,
      -1,    -1,    -1,   805,   433,    -1,    -1,    -1,   810,    -1,
     439,    -1,   892,   815,    -1,    -1,  1018,    -1,    -1,   892,
      -1,   901,   824,    -1,    -1,    -1,   906,    -1,   901,    -1,
      -1,    -1,    -1,   906,    -1,    -1,    -1,    -1,    -1,    -1,
    1068,    -1,    -1,    -1,   473,  1047,    -1,    -1,    -1,   929,
      -1,   480,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   866,   867,    -1,   947,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   955,    -1,    -1,    -1,    -1,
      -1,    -1,   955,   963,    -1,   965,    -1,    -1,    -1,   969,
     892,   971,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   901,
    1128,    -1,    -1,    -1,   906,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   947,   551,  1018,    -1,    -1,    -1,   929,    -1,    -1,
     947,    -1,   561,    -1,    -1,    -1,    -1,  1017,  1018,    -1,
      -1,  1021,    -1,    -1,  1017,   947,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   955,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    21,    22,    23,    24,    25,    26,
      27,    -1,    29,    30,   613,    32,   615,    -1,  1068,    36,
      37,    38,    -1,    40,    41,    42,  1076,    -1,   627,    46,
      -1,    48,    49,    50,    51,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1017,  1018,    -1,    -1,  1099,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   657,    -1,
     659,   660,   661,    -1,   663,    -1,    -1,     3,     4,     5,
       6,     7,     8,    -1,  1124,  1047,    -1,    -1,  1128,    -1,
      -1,    -1,    -1,    -1,  1056,    21,    22,    23,    24,    25,
     689,    -1,    28,    29,    30,    -1,  1068,    -1,    -1,    -1,
      -1,    37,    -1,    -1,    40,    41,    -1,    43,    -1,    45,
      46,    -1,    48,    49,    50,    51,    52,    53,    -1,    -1,
      -1,   720,    -1,    -1,    -1,    -1,    -1,  1099,    -1,    -1,
      -1,    -1,    -1,    -1,  1106,    -1,    -1,    -1,    -1,    -1,
      -1,   740,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   748,
      -1,    -1,  1124,    -1,    -1,    -1,  1128,    -1,   757,    -1,
     759,    -1,    -1,    -1,   763,    -1,   765,    -1,    -1,   768,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,   803,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    -1,    41,    42,    43,    -1,    -1,    46,    -1,
      48,    49,    50,    51,    -1,    53,    -1,    -1,    -1,    -1,
      -1,    -1,   851,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    36,    37,   892,    -1,    40,    41,    42,    43,    -1,
      45,    46,   901,    48,    -1,    50,    51,   906,    53,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    32,    -1,    -1,    -1,    36,    37,    38,    -1,    40,
      41,    42,    43,    -1,    45,    46,   955,    48,    49,    50,
      51,    -1,    53,    -1,   963,    -1,   965,    -1,    -1,    -1,
     969,    -1,   971,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    32,    -1,  1017,  1018,
      36,    37,  1021,    -1,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    -1,    53,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    32,    -1,  1068,
      -1,    36,    37,    38,    -1,    40,    41,  1076,    43,    44,
      45,    46,    -1,    48,    49,    50,    51,    -1,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1099,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1124,    -1,    -1,    -1,  1128,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    32,
      -1,    -1,    -1,    36,    37,    38,    -1,    40,    41,    -1,
      43,    44,    45,    46,    -1,    48,    49,    50,    51,    -1,
      53,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      32,    -1,    -1,    -1,    36,    37,    38,    -1,    40,    41,
      -1,    43,    -1,    45,    46,    -1,    48,    49,    50,    51,
      -1,    53,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      21,    22,    23,    24,    25,    26,    27,    -1,    29,    30,
      -1,    32,    -1,    -1,    -1,    36,    37,    38,    -1,    40,
      41,    -1,    43,    -1,    -1,    46,    47,    48,    49,    50,
      51,    -1,    53,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    21,    22,    23,    24,    25,    26,    27,    -1,    29,
      30,    -1,    32,    -1,    -1,    -1,    36,    37,    38,    -1,
      40,    41,    -1,    43,    -1,    -1,    46,    47,    48,    49,
      50,    51,    -1,    53,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    21,    22,    23,    24,    25,    26,    27,    -1,
      29,    30,    -1,    32,    -1,    -1,    -1,    36,    37,    38,
      -1,    40,    41,    -1,    43,    -1,    -1,    46,    47,    48,
      49,    50,    51,    -1,    53,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    32,    -1,    -1,    -1,    36,    37,
      38,    -1,    -1,    41,    42,    43,    -1,    -1,    46,    -1,
      -1,    -1,    50,    51,    -1,    53,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    21,    22,    23,    24,    25,    26,
      27,    -1,    29,    30,    -1,    32,    -1,    -1,    -1,    36,
      37,    38,    -1,    40,    41,    -1,    -1,    -1,    45,    46,
      -1,    48,    49,    50,    51,    -1,    53,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    21,    22,    23,    24,    25,
      26,    27,    -1,    29,    30,    -1,    32,    -1,    -1,    -1,
      36,    37,    38,    -1,    40,    41,    -1,    43,    -1,    -1,
      46,    -1,    48,    49,    50,    51,    -1,    53,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    21,    22,    23,    24,
      25,    26,    27,    -1,    29,    30,    -1,    32,    -1,    -1,
      -1,    36,    37,    38,    -1,    40,    41,    42,    -1,    -1,
      -1,    46,    -1,    48,    49,    50,    51,    -1,    53,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    21,    22,    23,
      24,    25,    26,    27,    -1,    29,    30,    -1,    32,    -1,
      -1,    -1,    36,    37,    38,    -1,    40,    41,    42,    -1,
      -1,    -1,    46,    -1,    48,    49,    50,    51,    -1,    53,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    21,    22,
      23,    24,    25,    26,    27,    -1,    29,    30,    -1,    32,
      -1,    -1,    -1,    36,    37,    38,    -1,    40,    41,    -1,
      -1,    -1,    -1,    46,    -1,    48,    49,    50,    51,    -1,
      53,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      32,    -1,    -1,    -1,    36,    37,    38,    -1,    -1,    41,
      -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,    50,    51,
      -1,    53,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    22,    23,    24,    25,    26,    27,    -1,    29,    30,
      -1,    -1,    -1,    -1,    -1,    36,    37,    -1,    -1,    40,
      41,    -1,    -1,    -1,    -1,    46,    47,    48,    49,    50,
      51,    -1,    53,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    -1,    22,    23,    24,    25,    26,    27,    -1,    29,
      30,    -1,    -1,    -1,    -1,    -1,    36,    37,    -1,    -1,
      40,    41,    -1,    -1,    -1,    45,    46,    -1,    48,    49,
      50,    51,    -1,    53,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    -1,    22,    23,    24,    25,    26,    27,    -1,
      29,    30,    -1,    -1,    -1,    -1,    -1,    36,    37,    -1,
      -1,    40,    41,    -1,    -1,    -1,    -1,    46,    47,    48,
      49,    50,    51,    -1,    53,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    -1,    45,    46,    -1,
      -1,    -1,    50,    51,    -1,    53,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    32,    -1,    -1,    -1,    36,
      -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    45,    -1,
      -1,    -1,    -1,    50,    51,    -1,    53,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    -1,    22,    23,    24,    25,
      26,    27,    -1,    29,    30,    -1,    -1,    -1,    -1,    -1,
      36,    37,    -1,    -1,    40,    41,    -1,    -1,    -1,    -1,
      46,    -1,    48,    49,    50,    51,    -1,    53,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    32,    -1,    -1,
      -1,    36,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    53,     3,
       4,     5,     6,    -1,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    21,    22,    -1,
      24,    25,    26,    27,    -1,    29,    30,    -1,    32,    -1,
      -1,    -1,    36,    37,    38,    -1,    -1,    -1,    -1,    43,
      -1,    -1,    46,    -1,    48,    49,    -1,    -1,    -1,    53,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,
      23,    24,    25,    -1,    -1,    28,    29,    30,    -1,    32,
      -1,    -1,    -1,    -1,    37,    38,    -1,    40,    41,    42,
      43,    -1,    45,    46,    47,    48,    49,    50,    51,    -1,
      53,     3,     4,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      22,    23,    24,    25,    -1,    -1,    28,    29,    30,    -1,
      32,    -1,    -1,    -1,    -1,    37,    38,    -1,    40,    41,
      -1,    43,    -1,    45,    46,    47,    48,    49,    50,    51,
      -1,    53,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      21,    22,    23,    24,    25,    -1,    -1,    28,    29,    30,
      -1,    32,    -1,    -1,    -1,    -1,    37,    38,    -1,    40,
      41,    -1,    43,    -1,    45,    46,    47,    48,    49,    50,
      51,    -1,    53,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    23,    24,    25,    -1,    -1,    28,    29,
      30,    -1,    32,    -1,    -1,    -1,    -1,    37,    38,    -1,
      40,    41,    -1,    43,    -1,    45,    46,    47,    48,    49,
      50,    51,    -1,    53,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    22,    23,    24,    25,    -1,    -1,    28,
      29,    30,    -1,    32,    -1,    -1,    -1,    -1,    37,    38,
      -1,    40,    41,    -1,    43,    -1,    45,    46,    -1,    48,
      49,    50,    51,    -1,    53,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    23,    24,    25,    -1,    -1,
      28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      -1,    -1,    40,    41,    -1,    -1,    -1,    45,    46,    -1,
      48,    49,    50,    51,    52,    53,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    21,    22,    23,    24,    25,    -1,
      -1,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    -1,    -1,    40,    41,    -1,    -1,    -1,    45,    -1,
      -1,    48,    49,    50,    51,    52,    53,     3,     4,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,    25,
      -1,    -1,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    38,    -1,    -1,    41,    -1,    43,    -1,    45,
      -1,    -1,    48,    49,    50,    51,    -1,    53,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,
      25,    -1,    -1,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    38,    -1,    -1,    41,    -1,    43,    -1,
      -1,    -1,    -1,    48,    49,    50,    51,    -1,    53,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    -1,    -1,    -1,    41,    -1,    -1,
      -1,    45,    46,    -1,    48,    49,    50,    51,    -1,    53,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    -1,    -1,    -1,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    41,    -1,
       3,     4,     5,    46,     7,    48,    49,    50,    51,    -1,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    -1,    -1,    -1,    -1,    29,    30,    -1,    32,
      -1,    -1,    -1,    36,    37,    38,    -1,     3,     4,     5,
      43,     7,    -1,    46,    47,    48,    49,    50,    -1,    -1,
      53,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    -1,
      -1,    -1,    -1,    29,    30,    -1,    32,    -1,    -1,    -1,
      36,    37,    38,    -1,     3,     4,     5,    43,     7,    -1,
      46,    -1,    48,    49,    50,    -1,    -1,    53,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    -1,    -1,    -1,    -1,
      29,    30,    -1,    32,    -1,    -1,    -1,    36,    37,    38,
       3,     4,     5,    42,     7,    -1,    -1,    46,    -1,    48,
      49,    50,    -1,    -1,    53,    -1,    -1,    -1,    -1,    22,
      23,    24,    -1,    -1,    -1,    -1,    29,    30,    -1,    32,
      -1,    -1,    -1,    36,    37,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    -1,    48,    49,    50,    -1,    -1,
      53,     3,     4,     5,    -1,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      32,    -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    41,
      -1,    43,    -1,    -1,    46,    -1,    -1,    -1,    50,    51,
       3,     4,     5,    -1,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    32,
      -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    41,    -1,
      -1,    -1,    -1,    46,    -1,    -1,    -1,    50,    51
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    32,
      36,    37,    38,    41,    42,    43,    46,    50,    51,    53,
      55,    56,    57,    58,    59,    62,    63,    64,    65,    66,
      76,    77,    81,    82,    88,    89,    98,    99,   144,   177,
     181,   183,    45,    22,    25,    95,    96,    97,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    25,    26,
      27,    28,    29,    30,    36,    45,    50,    51,    66,    73,
      74,    75,    88,   177,   183,    66,    76,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    21,    22,    23,    24,    25,    26,
      27,    29,    30,    32,    36,    37,    38,    40,    45,    46,
      48,    49,    50,    51,   146,   148,   177,   182,   183,   100,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    32,    36,
      37,    40,    42,    43,    45,    48,    49,    50,    51,    66,
      70,    71,    72,   177,   182,   183,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    32,    36,    37,    40,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,   177,   178,
     179,   180,   183,     0,    58,    59,    42,    63,    65,    66,
      76,   181,    73,    40,    43,    65,    66,   181,    45,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    25,
      26,    27,    28,    29,    30,    32,    36,    50,    51,    78,
      83,    84,    88,   177,   183,    48,    91,    92,    42,    89,
      97,    42,   144,    75,    66,    66,    76,   144,    47,    99,
     146,    45,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    21,
      22,    23,    24,    25,    26,    27,    29,    30,    32,    36,
      37,    40,    43,    46,    48,    49,    50,    51,   147,   149,
     177,   182,   183,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    39,    42,    46,
      48,    49,    50,    51,    90,    98,    99,   101,   102,   103,
     104,   105,   106,   107,   115,   116,   117,   119,   128,   129,
     130,   136,   145,   150,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   177,   182,   183,    70,    47,    72,
      52,   180,    73,    40,    43,    65,    66,   181,    42,    40,
     144,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    32,
      36,    37,    40,    43,    45,    48,    49,    50,    51,    66,
      68,    69,   177,   182,   183,    61,    73,    42,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    25,    26,
      27,    28,    29,    30,    32,    36,    45,    50,    51,    79,
      80,    88,   177,   183,    84,    93,    24,    48,   144,    66,
     144,    47,    47,     3,     4,     5,     6,     7,     8,    21,
      22,    23,    24,    25,    28,    29,    30,    32,    37,    40,
      42,    43,    45,    46,    47,    48,    49,    50,    51,   107,
     125,   126,   127,   177,   182,   183,    47,    99,   146,   149,
      45,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    22,    23,
      24,    25,    26,    27,    29,    30,    36,    37,    40,    46,
      48,    49,    50,    51,   162,   163,   177,   183,    45,    46,
      46,    46,   141,   142,   143,    46,   146,    42,    42,    42,
     146,    42,   146,    95,   115,   119,   143,    46,   144,     3,
       4,     5,     6,     7,     8,    21,    22,    23,    24,    25,
      28,    29,    30,    37,    40,    45,    48,    49,    50,    51,
      52,    53,   112,   113,   114,   183,   105,   161,   143,    46,
      46,    46,    19,    20,     3,     4,     5,     6,     7,     8,
      21,    22,    23,    24,    25,    29,    30,    32,    37,    40,
      45,    47,    48,    49,    50,    51,    99,   107,   136,   138,
     177,   182,   183,    44,   102,   105,    42,   144,    40,   136,
       4,     5,     6,     7,     8,    21,    22,    23,    25,    29,
      30,    37,    43,    48,    49,    50,    51,    90,   107,   131,
     132,   177,   182,   183,     3,     4,     5,     6,     7,     8,
      21,    22,    23,    24,    25,    29,    30,    32,    37,    40,
      43,    45,    48,    49,    50,    51,   107,   123,   124,   136,
     140,   177,   182,   183,   102,   105,    44,    40,   144,    68,
      60,    73,    42,    68,    44,    68,    69,    56,    40,   144,
      80,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    36,
      37,    40,    42,    43,    45,    48,    50,    51,    66,    85,
      86,    87,   177,   183,    95,    94,   144,   112,   125,    44,
     127,    47,    47,    47,   162,    45,   163,     4,     5,     7,
      22,    23,    29,    30,    32,    36,    37,    46,    48,    49,
      50,    90,   164,   165,   166,   167,   169,   170,   171,   172,
     173,   174,   177,   182,   164,   164,   105,    14,   146,   151,
      42,    42,    42,    98,   146,    42,    43,    46,   113,   146,
     146,   146,    42,    42,   146,    47,     3,     4,     5,     6,
       7,     8,    21,    22,    23,    24,    25,    29,    30,    32,
      37,    40,    43,    45,    47,    48,    49,    50,    51,   107,
     136,   137,   139,   177,   182,   183,    43,   118,   166,     3,
       4,     5,     6,     7,     8,    21,    22,    23,    24,    25,
      29,    30,    37,    45,    48,    49,    50,    51,   120,   121,
     122,   136,   177,   183,    56,     4,     5,     6,     7,     8,
      21,    22,    23,    25,    29,    30,    37,    43,    45,    48,
      49,    50,    51,    90,   107,   133,   134,   135,   177,   182,
     183,   125,   140,    68,    56,    40,   144,    44,    44,    68,
      67,    68,    85,    49,    87,    89,    85,    44,    47,    47,
      99,   164,   172,    47,    51,    40,     8,    41,     7,    23,
      50,     3,     4,     5,     6,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    21,    22,    24,    25,
      26,    27,    29,    30,    32,    36,    37,    43,    46,    48,
      49,   175,   176,   177,   182,    47,    47,    46,    42,    47,
       3,     4,     5,     6,     7,     8,    21,    22,    23,    24,
      25,    28,    29,    30,    37,    40,    45,    46,    48,    49,
      50,    51,    52,    53,   108,   109,   110,   111,   183,   108,
      47,    47,    47,    42,   125,    47,   139,   123,    51,    40,
     122,    44,    56,   135,    44,    44,    68,    44,    49,    49,
      47,    47,   143,   166,   167,   170,   166,   168,   171,   172,
     172,   125,    47,    99,   146,   176,   141,   143,   164,    42,
     164,   143,    99,   108,    44,   109,    43,    47,   143,   143,
     143,    44,    44,   116,   117,   118,    44,    12,    45,    44,
      47,    47,    47,   151,    42,    47,    47,   108,    51,   143,
     167,    42,    47,   151,    44,   116,   143,    47,   143
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {
      case 58: /* "definition_decl" */

/* Line 1000 of yacc.c  */
#line 72 "c_cs_cpp_parser.y"
	{ if ((yyvaluep->definition_decl).scoped_name_p) delete (yyvaluep->definition_decl).scoped_name_p; };

/* Line 1000 of yacc.c  */
#line 2833 "c_cs_cpp_parser_yacc_release.cxx"
	break;
      case 76: /* "definition_expr_no_parenthesis" */

/* Line 1000 of yacc.c  */
#line 97 "c_cs_cpp_parser.y"
	{ if ((yyvaluep->qualified_identifier_func).scoped_name_p) delete (yyvaluep->qualified_identifier_func).scoped_name_p; };

/* Line 1000 of yacc.c  */
#line 2842 "c_cs_cpp_parser_yacc_release.cxx"
	break;
      case 77: /* "_definition_expr_no_parenthesis_no_double_quote_" */

/* Line 1000 of yacc.c  */
#line 97 "c_cs_cpp_parser.y"
	{ if ((yyvaluep->qualified_identifier_func).scoped_name_p) delete (yyvaluep->qualified_identifier_func).scoped_name_p; };

/* Line 1000 of yacc.c  */
#line 2851 "c_cs_cpp_parser_yacc_release.cxx"
	break;
      case 78: /* "_definition_expr_no_parenthesis_no_double_quote_rest" */

/* Line 1000 of yacc.c  */
#line 97 "c_cs_cpp_parser.y"
	{ if ((yyvaluep->qualified_identifier_func).scoped_name_p) delete (yyvaluep->qualified_identifier_func).scoped_name_p; };

/* Line 1000 of yacc.c  */
#line 2860 "c_cs_cpp_parser_yacc_release.cxx"
	break;
      case 82: /* "_definition_expr_no_parenthesis_no_double_quote_first" */

/* Line 1000 of yacc.c  */
#line 97 "c_cs_cpp_parser.y"
	{ if ((yyvaluep->qualified_identifier_func).scoped_name_p) delete (yyvaluep->qualified_identifier_func).scoped_name_p; };

/* Line 1000 of yacc.c  */
#line 2869 "c_cs_cpp_parser_yacc_release.cxx"
	break;
      case 84: /* "_definition_item_no_parenthesis_no_double_quote_" */

/* Line 1000 of yacc.c  */
#line 97 "c_cs_cpp_parser.y"
	{ if ((yyvaluep->qualified_identifier_func).scoped_name_p) delete (yyvaluep->qualified_identifier_func).scoped_name_p; };

/* Line 1000 of yacc.c  */
#line 2878 "c_cs_cpp_parser_yacc_release.cxx"
	break;
      case 88: /* "qualified_identifier_declation" */

/* Line 1000 of yacc.c  */
#line 77 "c_cs_cpp_parser.y"
	{ if ((yyvaluep->qualified_identifier).scoped_name_p) delete (yyvaluep->qualified_identifier).scoped_name_p; };

/* Line 1000 of yacc.c  */
#line 2887 "c_cs_cpp_parser_yacc_release.cxx"
	break;
      case 89: /* "_qualified_identifier_declaration" */

/* Line 1000 of yacc.c  */
#line 77 "c_cs_cpp_parser.y"
	{ if ((yyvaluep->qualified_identifier).scoped_name_p) delete (yyvaluep->qualified_identifier).scoped_name_p; };

/* Line 1000 of yacc.c  */
#line 2896 "c_cs_cpp_parser_yacc_release.cxx"
	break;
      case 90: /* "qualified_identifier_statement" */

/* Line 1000 of yacc.c  */
#line 77 "c_cs_cpp_parser.y"
	{ if ((yyvaluep->qualified_identifier).scoped_name_p) delete (yyvaluep->qualified_identifier).scoped_name_p; };

/* Line 1000 of yacc.c  */
#line 2905 "c_cs_cpp_parser_yacc_release.cxx"
	break;
      case 117: /* "function_statement_expr" */

/* Line 1000 of yacc.c  */
#line 105 "c_cs_cpp_parser.y"
	{ if ((yyvaluep->function_statement_expr).scoped_name_p) delete (yyvaluep->function_statement_expr).scoped_name_p; };

/* Line 1000 of yacc.c  */
#line 2914 "c_cs_cpp_parser_yacc_release.cxx"
	break;
      case 128: /* "expression_statement_no_equal_no_parentesis" */

/* Line 1000 of yacc.c  */
#line 86 "c_cs_cpp_parser.y"
	{ if ((yyvaluep->qualified_identifier_func).scoped_name_p) delete (yyvaluep->qualified_identifier_func).scoped_name_p; };

/* Line 1000 of yacc.c  */
#line 2923 "c_cs_cpp_parser_yacc_release.cxx"
	break;
      case 130: /* "expression_statement_no_equal_no_parentesis_first_item" */

/* Line 1000 of yacc.c  */
#line 86 "c_cs_cpp_parser.y"
	{ if ((yyvaluep->qualified_identifier_func).scoped_name_p) delete (yyvaluep->qualified_identifier_func).scoped_name_p; };

/* Line 1000 of yacc.c  */
#line 2932 "c_cs_cpp_parser_yacc_release.cxx"
	break;
      case 132: /* "expression_statement_no_equal_no_parentesis_second_item" */

/* Line 1000 of yacc.c  */
#line 86 "c_cs_cpp_parser.y"
	{ if ((yyvaluep->qualified_identifier_func).scoped_name_p) delete (yyvaluep->qualified_identifier_func).scoped_name_p; };

/* Line 1000 of yacc.c  */
#line 2941 "c_cs_cpp_parser_yacc_release.cxx"
	break;
      case 133: /* "_expression_statement_no_equal_no_parentesis_" */

/* Line 1000 of yacc.c  */
#line 86 "c_cs_cpp_parser.y"
	{ if ((yyvaluep->qualified_identifier_func).scoped_name_p) delete (yyvaluep->qualified_identifier_func).scoped_name_p; };

/* Line 1000 of yacc.c  */
#line 2950 "c_cs_cpp_parser_yacc_release.cxx"
	break;
      case 135: /* "_expression_statement_no_equal_no_parentesis_item_" */

/* Line 1000 of yacc.c  */
#line 86 "c_cs_cpp_parser.y"
	{ if ((yyvaluep->qualified_identifier_func).scoped_name_p) delete (yyvaluep->qualified_identifier_func).scoped_name_p; };

/* Line 1000 of yacc.c  */
#line 2959 "c_cs_cpp_parser_yacc_release.cxx"
	break;

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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Location data for the lookahead symbol.  */
YYLTYPE yylloc;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.
       `yyls': related to locations.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[2];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;
  yylsp = yyls;

#if YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 1;
#endif

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
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);

	yyls = yyls1;
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
	YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 9:

/* Line 1455 of yacc.c  */
#line 129 "c_cs_cpp_parser.y"
    {
                  if ((yyvsp[(1) - (3)].qualified_identifier_func).scoped_name_p)
                  {
                    YYLTYPE proto;
                    proto.first_line=(yylsp[(1) - (3)]).first_line;
                    proto.first_column=(yylsp[(1) - (3)]).first_column;
                    proto.last_line=(yylsp[(2) - (3)]).last_line;
                    proto.last_column=(yylsp[(2) - (3)]).last_column;
                    (yyval.definition_decl).pos=proto;
                    (yyval.definition_decl).scoped_name_p=(yyvsp[(1) - (3)].qualified_identifier_func).scoped_name_p;
                    (yyvsp[(1) - (3)].qualified_identifier_func).scoped_name_p=NULL; // ownner is now definition_decl
                  }
                ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 143 "c_cs_cpp_parser.y"
    {
                  if ((yyvsp[(2) - (4)].qualified_identifier_func).scoped_name_p)
                  {
                    YYLTYPE proto;
                    proto.first_line=(yylsp[(2) - (4)]).first_line;
                    proto.first_column=(yylsp[(2) - (4)]).first_column;
                    proto.last_line=(yylsp[(3) - (4)]).last_line;
                    proto.last_column=(yylsp[(3) - (4)]).last_column;
                    (yyval.definition_decl).pos=proto;
                    (yyval.definition_decl).scoped_name_p=(yyvsp[(2) - (4)].qualified_identifier_func).scoped_name_p;
                    (yyvsp[(2) - (4)].qualified_identifier_func).scoped_name_p=NULL; // ownner is now definition_decl
                  }
                ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 157 "c_cs_cpp_parser.y"
    { (yyval.definition_decl).scoped_name_p=NULL; ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 159 "c_cs_cpp_parser.y"
    { (yyval.definition_decl).scoped_name_p=NULL; ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 161 "c_cs_cpp_parser.y"
    { (yyval.definition_decl).scoped_name_p=NULL; ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 163 "c_cs_cpp_parser.y"
    { (yyval.definition_decl).scoped_name_p=NULL; ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 165 "c_cs_cpp_parser.y"
    { (yyval.definition_decl).scoped_name_p=NULL; ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 167 "c_cs_cpp_parser.y"
    { (yyval.definition_decl).scoped_name_p=NULL; ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 169 "c_cs_cpp_parser.y"
    { (yyval.definition_decl).scoped_name_p=NULL; ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 171 "c_cs_cpp_parser.y"
    { (yyval.definition_decl).scoped_name_p=NULL; ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 173 "c_cs_cpp_parser.y"
    { (yyval.definition_decl).scoped_name_p=NULL; ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 175 "c_cs_cpp_parser.y"
    { (yyval.definition_decl).scoped_name_p=NULL; ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 177 "c_cs_cpp_parser.y"
    { (yyval.definition_decl).scoped_name_p=NULL; ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 181 "c_cs_cpp_parser.y"
    {
               if ((yyvsp[(2) - (5)].qualified_identifier_func).scoped_name_p)
               {
                 YYLTYPE proto;
                 proto.first_line=(yylsp[(2) - (5)]).first_line;
                 proto.first_column=(yylsp[(2) - (5)]).first_column;
                 proto.last_line=(yylsp[(3) - (5)]).last_line;
                 proto.last_column=(yylsp[(3) - (5)]).last_column;
                 record_function((yyvsp[(2) - (5)].qualified_identifier_func).scoped_name_p,&proto,&(yylsp[(5) - (5)]));
                if (is_function_name_no_scope((yyvsp[(2) - (5)].qualified_identifier_func).scoped_name_p,"Main"))
                {
                  YYLTYPE header;
                  header.first_line=(yylsp[(1) - (5)]).first_line;
                  header.first_column=(yylsp[(1) - (5)]).first_column;
                  header.last_line=(yylsp[(4) - (5)]).last_line;
                  header.last_column=(yylsp[(4) - (5)]).last_column;
                  record_main_function(&(yyloc),&header,&(yylsp[(5) - (5)]));
                }
               }
            ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 202 "c_cs_cpp_parser.y"
    {
               if ((yyvsp[(1) - (4)].qualified_identifier_func).scoped_name_p)
               {
                 YYLTYPE proto;
                 proto.first_line=(yylsp[(1) - (4)]).first_line;
                 proto.first_column=(yylsp[(1) - (4)]).first_column;
                 proto.last_line=(yylsp[(2) - (4)]).last_line;
                 proto.last_column=(yylsp[(2) - (4)]).last_column;
                 record_function((yyvsp[(1) - (4)].qualified_identifier_func).scoped_name_p,&proto,&(yylsp[(4) - (4)]));
                if (is_function_name_no_scope((yyvsp[(1) - (4)].qualified_identifier_func).scoped_name_p,"Main"))
                {
                  YYLTYPE header;
                  header.first_line=(yylsp[(1) - (4)]).first_line;
                  header.first_column=(yylsp[(1) - (4)]).first_column;
                  header.last_line=(yylsp[(3) - (4)]).last_line;
                  header.last_column=(yylsp[(3) - (4)]).last_column;
                  record_main_function(&(yyloc),&header,&(yylsp[(4) - (4)]));
                }
               }
            ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 231 "c_cs_cpp_parser.y"
    {
              if ((yyvsp[(1) - (2)].definition_decl).scoped_name_p && (bracket_level==0))
              {
                if (kr_function_def_scope_p)
                  delete kr_function_def_scope_p;
                kr_function_def_scope_p=(yyvsp[(1) - (2)].definition_decl).scoped_name_p;
                kr_function_def_pos=(yyvsp[(1) - (2)].definition_decl).pos;
                (yyvsp[(1) - (2)].definition_decl).scoped_name_p=NULL; // changing owner
              }
            ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 242 "c_cs_cpp_parser.y"
    {
            ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 245 "c_cs_cpp_parser.y"
    {
            ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 249 "c_cs_cpp_parser.y"
    {
              if (kr_function_def_scope_p)
              {
                  record_function(kr_function_def_scope_p,&kr_function_def_pos,&(yylsp[(1) - (1)]));
                  delete kr_function_def_scope_p;
                  kr_function_def_scope_p=NULL;
              }
            ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 258 "c_cs_cpp_parser.y"
    { 
              if ((yyvsp[(2) - (3)].qualified_identifier_func).scoped_name_p)
                pushCurrentScope((yyvsp[(2) - (3)].qualified_identifier_func).scoped_name_p)
            ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 263 "c_cs_cpp_parser.y"
    {
              if ((yyvsp[(2) - (6)].qualified_identifier_func).scoped_name_p)
                popCurrentScope();
            ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 268 "c_cs_cpp_parser.y"
    { 
              if ((yyvsp[(1) - (2)].qualified_identifier_func).scoped_name_p)
                pushCurrentScope((yyvsp[(1) - (2)].qualified_identifier_func).scoped_name_p)
            ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 273 "c_cs_cpp_parser.y"
    {
              if ((yyvsp[(1) - (5)].qualified_identifier_func).scoped_name_p)
                popCurrentScope();
            ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 294 "c_cs_cpp_parser.y"
    {
            Scope sc;
            sc.addName((yyvsp[(1) - (3)].token).text);
            record_function(&sc,&(yylsp[(1) - (3)]),&(yylsp[(3) - (3)]));
         ;}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 456 "c_cs_cpp_parser.y"
    {
                                   (yyval.qualified_identifier_func).is_exit_function=(yyvsp[(1) - (1)].qualified_identifier_func).is_exit_function; 
                                   (yyval.qualified_identifier_func).scoped_name_p=(yyvsp[(1) - (1)].qualified_identifier_func).scoped_name_p;
                                   (yyvsp[(1) - (1)].qualified_identifier_func).scoped_name_p=NULL;
                                   DUMP_SCOPE((yyval.qualified_identifier_func).scoped_name_p);
                                ;}
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 463 "c_cs_cpp_parser.y"
    {
                                   (yyval.qualified_identifier_func).is_exit_function=(yyvsp[(1) - (2)].qualified_identifier_func).is_exit_function; 
                                   (yyval.qualified_identifier_func).scoped_name_p=(yyvsp[(1) - (2)].qualified_identifier_func).scoped_name_p;
                                   (yyvsp[(1) - (2)].qualified_identifier_func).scoped_name_p=NULL;
                                ;}
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 469 "c_cs_cpp_parser.y"
    {
                                   (yyval.qualified_identifier_func).is_exit_function=(yyvsp[(1) - (3)].qualified_identifier_func).is_exit_function; 
                                   (yyval.qualified_identifier_func).scoped_name_p=(yyvsp[(1) - (3)].qualified_identifier_func).scoped_name_p;
                                   (yyvsp[(1) - (3)].qualified_identifier_func).scoped_name_p=NULL;
                                   DUMP_SCOPE((yyval.qualified_identifier_func).scoped_name_p);
                                ;}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 478 "c_cs_cpp_parser.y"
    {
                                                         (yyval.qualified_identifier_func).is_exit_function=(yyvsp[(1) - (1)].qualified_identifier_func).is_exit_function; 
                                                         (yyval.qualified_identifier_func).scoped_name_p=(yyvsp[(1) - (1)].qualified_identifier_func).scoped_name_p;
                                                         (yyvsp[(1) - (1)].qualified_identifier_func).scoped_name_p=NULL;
                                                         DUMP_SCOPE((yyval.qualified_identifier_func).scoped_name_p);
                                                      ;}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 485 "c_cs_cpp_parser.y"
    { 
                                                        (yyval.qualified_identifier_func).is_exit_function=(yyvsp[(2) - (2)].qualified_identifier_func).is_exit_function || (yyvsp[(1) - (2)].qualified_identifier_func).is_exit_function;
                                                        if ((yyvsp[(2) - (2)].qualified_identifier_func).scoped_name_p)
                                                        {
                                                           (yyval.qualified_identifier_func).scoped_name_p=(yyvsp[(2) - (2)].qualified_identifier_func).scoped_name_p;
                                                           (yyvsp[(2) - (2)].qualified_identifier_func).scoped_name_p=NULL;
                                                        }
                                                        else
                                                        {
                                                           (yyval.qualified_identifier_func).scoped_name_p=(yyvsp[(1) - (2)].qualified_identifier_func).scoped_name_p;
                                                           (yyvsp[(1) - (2)].qualified_identifier_func).scoped_name_p=NULL;
                                                        }
                                                        DUMP_SCOPE((yyval.qualified_identifier_func).scoped_name_p);
                                                      ;}
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 502 "c_cs_cpp_parser.y"
    {
                                                         (yyval.qualified_identifier_func).is_exit_function=(yyvsp[(1) - (1)].qualified_identifier_func).is_exit_function; 
                                                         (yyval.qualified_identifier_func).scoped_name_p=(yyvsp[(1) - (1)].qualified_identifier_func).scoped_name_p;
                                                         (yyvsp[(1) - (1)].qualified_identifier_func).scoped_name_p=NULL;
                                                         DUMP_SCOPE((yyval.qualified_identifier_func).scoped_name_p);
                                                      ;}
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 509 "c_cs_cpp_parser.y"
    { 
                                                        (yyval.qualified_identifier_func).is_exit_function=(yyvsp[(2) - (2)].qualified_identifier_func).is_exit_function || (yyvsp[(1) - (2)].qualified_identifier_func).is_exit_function;
                                                        if ((yyvsp[(2) - (2)].qualified_identifier_func).scoped_name_p)
                                                        {
                                                           (yyval.qualified_identifier_func).scoped_name_p=(yyvsp[(2) - (2)].qualified_identifier_func).scoped_name_p;
                                                           (yyvsp[(2) - (2)].qualified_identifier_func).scoped_name_p=NULL;
                                                        }
                                                        else
                                                        {
                                                           (yyval.qualified_identifier_func).scoped_name_p=(yyvsp[(1) - (2)].qualified_identifier_func).scoped_name_p;
                                                           (yyvsp[(1) - (2)].qualified_identifier_func).scoped_name_p=NULL;
                                                        }
                                                        DUMP_SCOPE((yyval.qualified_identifier_func).scoped_name_p);
                                                      ;}
    break;

  case 255:

/* Line 1455 of yacc.c  */
#line 598 "c_cs_cpp_parser.y"
    { 
                                                    (yyval.qualified_identifier_func).is_exit_function=(yyvsp[(1) - (1)].qualified_identifier).is_exit_function; 
                                                    (yyval.qualified_identifier_func).scoped_name_p=(yyvsp[(1) - (1)].qualified_identifier).scoped_name_p;
                                                    (yyvsp[(1) - (1)].qualified_identifier).scoped_name_p=NULL;
                                                  ;}
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 604 "c_cs_cpp_parser.y"
    { (yyval.qualified_identifier_func).scoped_name_p=NULL; (yyval.qualified_identifier_func).is_exit_function=false; ;}
    break;

  case 289:

/* Line 1455 of yacc.c  */
#line 642 "c_cs_cpp_parser.y"
    { 
                                                    (yyval.qualified_identifier_func).is_exit_function=(yyvsp[(1) - (1)].qualified_identifier).is_exit_function; 
                                                    (yyval.qualified_identifier_func).scoped_name_p=(yyvsp[(1) - (1)].qualified_identifier).scoped_name_p;
                                                    (yyvsp[(1) - (1)].qualified_identifier).scoped_name_p=NULL;
                                                  ;}
    break;

  case 290:

/* Line 1455 of yacc.c  */
#line 648 "c_cs_cpp_parser.y"
    { (yyval.qualified_identifier_func).scoped_name_p=NULL; (yyval.qualified_identifier_func).is_exit_function=false; ;}
    break;

  case 335:

/* Line 1455 of yacc.c  */
#line 702 "c_cs_cpp_parser.y"
    { 
                          (yyval.qualified_identifier).is_exit_function = (yyvsp[(1) - (1)].qualified_identifier).is_exit_function;
                          (yyval.qualified_identifier).scoped_name_p=(yyvsp[(1) - (1)].qualified_identifier).scoped_name_p;
                          (yyvsp[(1) - (1)].qualified_identifier).scoped_name_p=NULL;
                          DUMP_SCOPE((yyval.qualified_identifier).scoped_name_p);
                      ;}
    break;

  case 336:

/* Line 1455 of yacc.c  */
#line 709 "c_cs_cpp_parser.y"
    {
                          (yyval.qualified_identifier).scoped_name_p=(yyvsp[(3) - (3)].qualified_identifier).scoped_name_p;
                          (yyvsp[(3) - (3)].qualified_identifier).scoped_name_p=NULL;
                          (yyval.qualified_identifier).is_exit_function = (yyvsp[(3) - (3)].qualified_identifier).is_exit_function;
                          DUMP_SCOPE((yyval.qualified_identifier).scoped_name_p);
                        ;}
    break;

  case 337:

/* Line 1455 of yacc.c  */
#line 718 "c_cs_cpp_parser.y"
    { 
                          (yyval.qualified_identifier).scoped_name_p=new Scope;
                          (yyval.qualified_identifier).scoped_name_p->addName((yyvsp[(1) - (2)].token).text);
                          (yyval.qualified_identifier).is_exit_function = parser_compiler_p->isExitFunction((yyvsp[(1) - (2)].token).text);
                        ;}
    break;

  case 338:

/* Line 1455 of yacc.c  */
#line 724 "c_cs_cpp_parser.y"
    {
                          (yyval.qualified_identifier).scoped_name_p=new Scope;
                          (yyval.qualified_identifier).scoped_name_p->addName((yyvsp[(1) - (5)].token).text);
                          if ((yyvsp[(5) - (5)].qualified_identifier).scoped_name_p)
                          {
                            (yyval.qualified_identifier).scoped_name_p->pushScope(*(yyvsp[(5) - (5)].qualified_identifier).scoped_name_p);
                            Scope *sc=new Scope;
                            sc->addName((yyval.qualified_identifier).scoped_name_p->fullName().c_str());
                            delete (yyval.qualified_identifier).scoped_name_p;
                            (yyval.qualified_identifier).scoped_name_p = sc ;
                          }
                          (yyval.qualified_identifier).is_exit_function = false;
                        ;}
    break;

  case 339:

/* Line 1455 of yacc.c  */
#line 740 "c_cs_cpp_parser.y"
    { 
                          (yyval.qualified_identifier).scoped_name_p=new Scope;
                          (yyval.qualified_identifier).scoped_name_p->addName((yyvsp[(1) - (1)].token).text);
                          (yyval.qualified_identifier).is_exit_function = parser_compiler_p->isExitFunction((yyvsp[(1) - (1)].token).text);
                      ;}
    break;

  case 340:

/* Line 1455 of yacc.c  */
#line 746 "c_cs_cpp_parser.y"
    {
                          (yyval.qualified_identifier).scoped_name_p=new Scope;
                          (yyval.qualified_identifier).scoped_name_p->addName((yyvsp[(3) - (3)].token).text);
                          (yyval.qualified_identifier).is_exit_function = parser_compiler_p->isExitFunction((yyvsp[(3) - (3)].token).text);
                        ;}
    break;

  case 343:

/* Line 1455 of yacc.c  */
#line 757 "c_cs_cpp_parser.y"
    { in_template_definition=true; ;}
    break;

  case 344:

/* Line 1455 of yacc.c  */
#line 759 "c_cs_cpp_parser.y"
    { in_template_definition=false; ;}
    break;

  case 345:

/* Line 1455 of yacc.c  */
#line 761 "c_cs_cpp_parser.y"
    { in_template_definition=true; ;}
    break;

  case 346:

/* Line 1455 of yacc.c  */
#line 763 "c_cs_cpp_parser.y"
    { in_template_definition=false; ;}
    break;

  case 353:

/* Line 1455 of yacc.c  */
#line 779 "c_cs_cpp_parser.y"
    { (yyval.token).text=(yyvsp[(1) - (1)].token).text; ;}
    break;

  case 354:

/* Line 1455 of yacc.c  */
#line 785 "c_cs_cpp_parser.y"
    {
                      level++;
                    ;}
    break;

  case 355:

/* Line 1455 of yacc.c  */
#line 789 "c_cs_cpp_parser.y"
    { 
                      level--;
                      (yyval.compound)=(yyvsp[(3) - (4)].compound);
                      (yyval.compound).pos=(yylsp[(4) - (4)]); 
                   ;}
    break;

  case 356:

/* Line 1455 of yacc.c  */
#line 797 "c_cs_cpp_parser.y"
    {
                       (yyval.compound).statement_completely_instrumented=false;
                       (yyval.compound).nop_instruction=true;
                       (yyval.compound).return_or_break_statement=false;
                       (yyval.compound).non_sequential_entry_point=false;
                     ;}
    break;

  case 357:

/* Line 1455 of yacc.c  */
#line 804 "c_cs_cpp_parser.y"
    { (yyval.compound)=(yyvsp[(1) - (1)].compound); ;}
    break;

  case 358:

/* Line 1455 of yacc.c  */
#line 806 "c_cs_cpp_parser.y"
    { 
                       (yyval.compound).statement_completely_instrumented=false;
                       (yyval.compound).nop_instruction=false;
                       (yyval.compound).non_sequential_entry_point=true;
                       (yyval.compound).return_or_break_statement=(yyvsp[(1) - (2)].compound).return_or_break_statement;
                     ;}
    break;

  case 359:

/* Line 1455 of yacc.c  */
#line 813 "c_cs_cpp_parser.y"
    { 
                       (yyval.compound).statement_completely_instrumented=false;
                       (yyval.compound).nop_instruction=false;
                       (yyval.compound).non_sequential_entry_point=true;
                       (yyval.compound).return_or_break_statement=false;
                     ;}
    break;

  case 362:

/* Line 1455 of yacc.c  */
#line 826 "c_cs_cpp_parser.y"
    { (yyval.compound)=(yyvsp[(1) - (1)].compound); ;}
    break;

  case 363:

/* Line 1455 of yacc.c  */
#line 828 "c_cs_cpp_parser.y"
    { 
              (yyval.compound)=(yyvsp[(2) - (2)].compound); 
              (yyval.compound).nop_instruction=(yyvsp[(1) - (2)].compound).nop_instruction && (yyvsp[(2) - (2)].compound).nop_instruction;
              (yyval.compound).non_sequential_entry_point=(yyvsp[(1) - (2)].compound).non_sequential_entry_point || (yyvsp[(2) - (2)].compound).non_sequential_entry_point;
              if ((yyvsp[(2) - (2)].compound).non_sequential_entry_point)
              {
                (yyval.compound).return_or_break_statement=(yyvsp[(2) - (2)].compound).return_or_break_statement;
              }
              else
              {
                (yyval.compound).return_or_break_statement=(yyvsp[(2) - (2)].compound).return_or_break_statement || (yyvsp[(1) - (2)].compound).return_or_break_statement;
                if ((yyvsp[(1) - (2)].compound).return_or_break_statement)
                  skip_area( & (yylsp[(2) - (2)]));
              }
              if ((yyvsp[(2) - (2)].compound).nop_instruction)
                (yyval.compound).statement_completely_instrumented=(yyvsp[(1) - (2)].compound).statement_completely_instrumented ;
              else if ((yyval.compound).return_or_break_statement)
                (yyval.compound).statement_completely_instrumented=true;
              else
                (yyval.compound).statement_completely_instrumented=(yyvsp[(2) - (2)].compound).statement_completely_instrumented;
            ;}
    break;

  case 364:

/* Line 1455 of yacc.c  */
#line 853 "c_cs_cpp_parser.y"
    { 
              (yyval.compound).pos=(yylsp[(1) - (1)]);
              (yyval.compound).statement_completely_instrumented=false; 
              (yyval.compound).non_sequential_entry_point=true;
              (yyval.compound).return_or_break_statement=false;
            ;}
    break;

  case 365:

/* Line 1455 of yacc.c  */
#line 860 "c_cs_cpp_parser.y"
    { 
              (yyval.compound).pos=(yylsp[(1) - (1)]);
              if ((yyvsp[(1) - (1)].exit_function).is_exit_function)
              {
                record_expression_computation( & (yylsp[(1) - (1)]),level+1);  
                (yyval.compound).statement_completely_instrumented=true; 
              }
              else
                (yyval.compound).statement_completely_instrumented=false; 
              (yyval.compound).non_sequential_entry_point=false;
              (yyval.compound).return_or_break_statement=false;
            ;}
    break;

  case 366:

/* Line 1455 of yacc.c  */
#line 875 "c_cs_cpp_parser.y"
    { (yyval.compound)=(yyvsp[(1) - (1)].compound); ;}
    break;

  case 367:

/* Line 1455 of yacc.c  */
#line 877 "c_cs_cpp_parser.y"
    { 
              (yyval.compound)=(yyvsp[(1) - (1)].compound); 
              (yyval.compound).nop_instruction=false;
            ;}
    break;

  case 368:

/* Line 1455 of yacc.c  */
#line 882 "c_cs_cpp_parser.y"
    { 
              (yyval.compound).pos=(yyloc);
              (yyval.compound).statement_completely_instrumented=false; 
              (yyval.compound).nop_instruction=false;
              (yyval.compound).non_sequential_entry_point=true;
              (yyval.compound).return_or_break_statement=false;
            ;}
    break;

  case 369:

/* Line 1455 of yacc.c  */
#line 890 "c_cs_cpp_parser.y"
    {
              (yyval.compound)=(yyvsp[(1) - (1)].compound);
              (yyval.compound).nop_instruction=false;
            ;}
    break;

  case 370:

/* Line 1455 of yacc.c  */
#line 895 "c_cs_cpp_parser.y"
    { 
              (yyval.compound)=(yyvsp[(1) - (1)].compound);
              (yyval.compound).nop_instruction=false;
              (yyval.compound).return_or_break_statement=false;
            ;}
    break;

  case 371:

/* Line 1455 of yacc.c  */
#line 901 "c_cs_cpp_parser.y"
    {
              (yyval.compound)=(yyvsp[(1) - (1)].compound); 
              (yyval.compound).nop_instruction=false;
            ;}
    break;

  case 372:

/* Line 1455 of yacc.c  */
#line 906 "c_cs_cpp_parser.y"
    { 
              (yyval.compound)=(yyvsp[(1) - (1)].compound) ; 
              (yyval.compound).nop_instruction=false;
              (yyval.compound).statement_completely_instrumented=false; 
            ;}
    break;

  case 373:

/* Line 1455 of yacc.c  */
#line 912 "c_cs_cpp_parser.y"
    {
              (yyval.compound).pos=(yylsp[(1) - (1)]);
              (yyval.compound).statement_completely_instrumented=false;
              (yyval.compound).nop_instruction=true;
              (yyval.compound).non_sequential_entry_point=false;
              (yyval.compound).return_or_break_statement=false;
            ;}
    break;

  case 374:

/* Line 1455 of yacc.c  */
#line 920 "c_cs_cpp_parser.y"
    { 
              record_expression_computation( & (yylsp[(1) - (1)]),level+1);  
              (yyval.compound).pos=(yylsp[(1) - (1)]);
              (yyval.compound).statement_completely_instrumented=true;
              (yyval.compound).nop_instruction=false;
              (yyval.compound).non_sequential_entry_point=false;
              (yyval.compound).return_or_break_statement=(yyvsp[(1) - (1)].compound).return_or_break_statement;
            ;}
    break;

  case 375:

/* Line 1455 of yacc.c  */
#line 929 "c_cs_cpp_parser.y"
    {  
              record_expression_computation( & (yylsp[(1) - (1)]),level+1);  
              (yyval.compound).pos=(yylsp[(1) - (1)]);
              (yyval.compound).statement_completely_instrumented=true; 
              (yyval.compound).nop_instruction=false;
              (yyval.compound).non_sequential_entry_point=false;
              (yyval.compound).return_or_break_statement=(yyvsp[(1) - (1)].compound).return_or_break_statement;
            ;}
    break;

  case 376:

/* Line 1455 of yacc.c  */
#line 938 "c_cs_cpp_parser.y"
    { 
              (yyval.compound)=(yyvsp[(1) - (1)].compound); 
              (yyval.compound).nop_instruction=false;
              (yyval.compound).non_sequential_entry_point=true;
              (yyval.compound).return_or_break_statement=false;
            ;}
    break;

  case 377:

/* Line 1455 of yacc.c  */
#line 945 "c_cs_cpp_parser.y"
    { 
              (yyval.compound).pos=(yylsp[(1) - (1)]);
              (yyval.compound).statement_completely_instrumented=false; 
              (yyval.compound).nop_instruction=false;
              (yyval.compound).non_sequential_entry_point=true;
              (yyval.compound).return_or_break_statement=false;
            ;}
    break;

  case 378:

/* Line 1455 of yacc.c  */
#line 953 "c_cs_cpp_parser.y"
    { 
              (yyval.compound).pos=(yylsp[(1) - (1)]);
              (yyval.compound).statement_completely_instrumented=false; 
              (yyval.compound).nop_instruction=false;
              (yyval.compound).non_sequential_entry_point=true;
              (yyval.compound).return_or_break_statement=false;
            ;}
    break;

  case 379:

/* Line 1455 of yacc.c  */
#line 961 "c_cs_cpp_parser.y"
    { 
              (yyval.compound).pos=(yylsp[(1) - (1)]);
              (yyval.compound).statement_completely_instrumented=false; 
              (yyval.compound).nop_instruction=false;
              (yyval.compound).non_sequential_entry_point=false;
              (yyval.compound).return_or_break_statement=false;
            ;}
    break;

  case 380:

/* Line 1455 of yacc.c  */
#line 969 "c_cs_cpp_parser.y"
    { 
              (yyval.compound).pos=(yylsp[(1) - (1)]);
              (yyval.compound).statement_completely_instrumented=false; 
              (yyval.compound).nop_instruction=false;
              (yyval.compound).non_sequential_entry_point=false;
              (yyval.compound).return_or_break_statement=false;
            ;}
    break;

  case 381:

/* Line 1455 of yacc.c  */
#line 977 "c_cs_cpp_parser.y"
    { 
              (yyval.compound).pos=(yylsp[(1) - (1)]);
              (yyval.compound).statement_completely_instrumented=false; 
              (yyval.compound).nop_instruction=false;
              (yyval.compound).non_sequential_entry_point=true;
              (yyval.compound).return_or_break_statement=false;
            ;}
    break;

  case 382:

/* Line 1455 of yacc.c  */
#line 985 "c_cs_cpp_parser.y"
    { 
              (yyval.compound)=(yyvsp[(2) - (2)].compound); 
              (yyval.compound).nop_instruction=false;
              (yyval.compound).non_sequential_entry_point=true;
            ;}
    break;

  case 383:

/* Line 1455 of yacc.c  */
#line 991 "c_cs_cpp_parser.y"
    { 
              (yyval.compound).pos=(yylsp[(2) - (2)]);
              (yyval.compound).statement_completely_instrumented=false; 
              (yyval.compound).nop_instruction=false;
              (yyval.compound).return_or_break_statement=false;
              (yyval.compound).non_sequential_entry_point=false;
              skip_area( & (yylsp[(2) - (2)]));
            ;}
    break;

  case 448:

/* Line 1455 of yacc.c  */
#line 1086 "c_cs_cpp_parser.y"
    { (yyval.exit_function)=(yyvsp[(1) - (2)].exit_function); ;}
    break;

  case 449:

/* Line 1455 of yacc.c  */
#line 1090 "c_cs_cpp_parser.y"
    { 
                              (yyval.exit_function).is_exit_function=false; 
                            ;}
    break;

  case 450:

/* Line 1455 of yacc.c  */
#line 1094 "c_cs_cpp_parser.y"
    { 
                                  (yyval.exit_function).is_exit_function=false; 
                                ;}
    break;

  case 451:

/* Line 1455 of yacc.c  */
#line 1098 "c_cs_cpp_parser.y"
    { 
                                  (yyval.exit_function).is_exit_function=false; 
                                ;}
    break;

  case 452:

/* Line 1455 of yacc.c  */
#line 1102 "c_cs_cpp_parser.y"
    { (yyval.exit_function).is_exit_function = (yyvsp[(1) - (1)].function_statement_expr).is_exit_function; ;}
    break;

  case 453:

/* Line 1455 of yacc.c  */
#line 1104 "c_cs_cpp_parser.y"
    { 
                              (yyval.exit_function).is_exit_function=false; 
                            ;}
    break;

  case 454:

/* Line 1455 of yacc.c  */
#line 1110 "c_cs_cpp_parser.y"
    { 
                                  (yyval.function_statement_expr).is_exit_function=(yyvsp[(1) - (3)].qualified_identifier_func).is_exit_function; 
                                  (yyval.function_statement_expr).scoped_name_p = (yyvsp[(1) - (3)].qualified_identifier_func).scoped_name_p;
                                  (yyvsp[(1) - (3)].qualified_identifier_func).scoped_name_p = NULL;
                                   if ((yyval.function_statement_expr).scoped_name_p)
                                   {
                                     (yyval.function_statement_expr).proto.first_line=(yylsp[(1) - (3)]).first_line;
                                     (yyval.function_statement_expr).proto.first_column=(yylsp[(1) - (3)]).first_column;
                                     (yyval.function_statement_expr).proto.last_line=(yylsp[(2) - (3)]).last_line;
                                     (yyval.function_statement_expr).proto.last_column=(yylsp[(2) - (3)]).last_column;
                                   }
                                ;}
    break;

  case 455:

/* Line 1455 of yacc.c  */
#line 1125 "c_cs_cpp_parser.y"
    { 
                                    if (instrumentation_option((yylsp[(1) - (1)]).first_line).instrument_assignment)
                                      record_expression_assignment( & (yylsp[(1) - (1)]),level+1,(yyvsp[(1) - (1)].logical_expr).expression_id);  
                                    else
                                      skip_area(&(yylsp[(1) - (1)]));
                                  ;}
    break;

  case 457:

/* Line 1455 of yacc.c  */
#line 1133 "c_cs_cpp_parser.y"
    { 
                                    if (instrumentation_option((yylsp[(1) - (3)]).first_line).instrument_assignment)
                                      record_expression_assignment( & (yylsp[(1) - (3)]),level+1,(yyvsp[(1) - (3)].logical_expr).expression_id);  
                                    else
                                      skip_area(&(yylsp[(1) - (3)]));
                                  ;}
    break;

  case 459:

/* Line 1455 of yacc.c  */
#line 1143 "c_cs_cpp_parser.y"
    {
                       (yyval.exit_function).is_exit_function=false; 
                       if ((yyvsp[(1) - (2)].function_statement_expr).scoped_name_p)
                         record_function((yyvsp[(1) - (2)].function_statement_expr).scoped_name_p,&(yyvsp[(1) - (2)].function_statement_expr).proto,&(yylsp[(2) - (2)]));
                     ;}
    break;

  case 523:

/* Line 1455 of yacc.c  */
#line 1231 "c_cs_cpp_parser.y"
    {
                                                 (yyval.qualified_identifier_func).is_exit_function=(yyvsp[(1) - (1)].qualified_identifier_func).is_exit_function; 
                                                 (yyval.qualified_identifier_func).scoped_name_p=(yyvsp[(1) - (1)].qualified_identifier_func).scoped_name_p;
                                                 (yyvsp[(1) - (1)].qualified_identifier_func).scoped_name_p=NULL;
                                              ;}
    break;

  case 524:

/* Line 1455 of yacc.c  */
#line 1237 "c_cs_cpp_parser.y"
    { 
                                                (yyval.qualified_identifier_func).is_exit_function=false;
                                                if ((yyvsp[(2) - (2)].qualified_identifier_func).scoped_name_p)
                                                {
                                                   (yyval.qualified_identifier_func).scoped_name_p=(yyvsp[(2) - (2)].qualified_identifier_func).scoped_name_p;
                                                   (yyvsp[(2) - (2)].qualified_identifier_func).scoped_name_p=NULL;
                                                }
                                                else
                                                {
                                                   (yyval.qualified_identifier_func).scoped_name_p=(yyvsp[(1) - (2)].qualified_identifier_func).scoped_name_p;
                                                   (yyvsp[(1) - (2)].qualified_identifier_func).scoped_name_p=NULL;
                                                }
                                              ;}
    break;

  case 525:

/* Line 1455 of yacc.c  */
#line 1251 "c_cs_cpp_parser.y"
    { 
                                                (yyval.qualified_identifier_func).is_exit_function=false;
                                                if ((yyvsp[(3) - (3)].qualified_identifier_func).scoped_name_p)
                                                {
                                                   (yyval.qualified_identifier_func).scoped_name_p=(yyvsp[(3) - (3)].qualified_identifier_func).scoped_name_p;
                                                   (yyvsp[(3) - (3)].qualified_identifier_func).scoped_name_p=NULL;
                                                }
                                                else if ((yyvsp[(2) - (3)].qualified_identifier_func).scoped_name_p)
                                                {
                                                   (yyval.qualified_identifier_func).scoped_name_p=(yyvsp[(2) - (3)].qualified_identifier_func).scoped_name_p;
                                                   (yyvsp[(2) - (3)].qualified_identifier_func).scoped_name_p=NULL;
                                                }
                                                else
                                                {
                                                   (yyval.qualified_identifier_func).scoped_name_p=(yyvsp[(1) - (3)].qualified_identifier_func).scoped_name_p;
                                                   (yyvsp[(1) - (3)].qualified_identifier_func).scoped_name_p=NULL;
                                                }
                                              ;}
    break;

  case 544:

/* Line 1455 of yacc.c  */
#line 1292 "c_cs_cpp_parser.y"
    { (yyval.qualified_identifier_func).scoped_name_p=NULL; (yyval.qualified_identifier_func).is_exit_function=false; ;}
    break;

  case 545:

/* Line 1455 of yacc.c  */
#line 1294 "c_cs_cpp_parser.y"
    { 
                                                          (yyval.qualified_identifier_func).is_exit_function=(yyvsp[(1) - (1)].qualified_identifier).is_exit_function; 
                                                          (yyval.qualified_identifier_func).scoped_name_p=(yyvsp[(1) - (1)].qualified_identifier).scoped_name_p;
                                                          (yyvsp[(1) - (1)].qualified_identifier).scoped_name_p=NULL;
                                                        ;}
    break;

  case 567:

/* Line 1455 of yacc.c  */
#line 1325 "c_cs_cpp_parser.y"
    { (yyval.qualified_identifier_func).scoped_name_p=NULL; (yyval.qualified_identifier_func).is_exit_function=false; ;}
    break;

  case 568:

/* Line 1455 of yacc.c  */
#line 1327 "c_cs_cpp_parser.y"
    { 
                                                          (yyval.qualified_identifier_func).is_exit_function=(yyvsp[(1) - (1)].qualified_identifier).is_exit_function; 
                                                          (yyval.qualified_identifier_func).scoped_name_p=(yyvsp[(1) - (1)].qualified_identifier).scoped_name_p;
                                                          (yyvsp[(1) - (1)].qualified_identifier).scoped_name_p=NULL;
                                                        ;}
    break;

  case 569:

/* Line 1455 of yacc.c  */
#line 1335 "c_cs_cpp_parser.y"
    { 
                                                    (yyval.qualified_identifier_func).is_exit_function=(yyvsp[(1) - (1)].qualified_identifier_func).is_exit_function;
                                                    (yyval.qualified_identifier_func).scoped_name_p=(yyvsp[(1) - (1)].qualified_identifier_func).scoped_name_p;
                                                    (yyvsp[(1) - (1)].qualified_identifier_func).scoped_name_p=NULL;
                                                 ;}
    break;

  case 570:

/* Line 1455 of yacc.c  */
#line 1341 "c_cs_cpp_parser.y"
    { 
                                                   (yyval.qualified_identifier_func).is_exit_function=(yyvsp[(1) - (2)].qualified_identifier_func).is_exit_function || (yyvsp[(2) - (2)].qualified_identifier_func).is_exit_function; 
                                                   if ((yyvsp[(2) - (2)].qualified_identifier_func).scoped_name_p)
                                                   {
                                                      (yyval.qualified_identifier_func).scoped_name_p=(yyvsp[(2) - (2)].qualified_identifier_func).scoped_name_p;
                                                      (yyvsp[(2) - (2)].qualified_identifier_func).scoped_name_p=NULL;
                                                   }
                                                   else
                                                   {
                                                      (yyval.qualified_identifier_func).scoped_name_p=(yyvsp[(1) - (2)].qualified_identifier_func).scoped_name_p;
                                                      (yyvsp[(1) - (2)].qualified_identifier_func).scoped_name_p=NULL;
                                                   }
                                                 ;}
    break;

  case 593:

/* Line 1455 of yacc.c  */
#line 1381 "c_cs_cpp_parser.y"
    { (yyval.qualified_identifier_func).scoped_name_p=NULL; (yyval.qualified_identifier_func).is_exit_function=false; ;}
    break;

  case 594:

/* Line 1455 of yacc.c  */
#line 1383 "c_cs_cpp_parser.y"
    { 
                                                      (yyval.qualified_identifier_func).is_exit_function=(yyvsp[(1) - (1)].qualified_identifier).is_exit_function; 
                                                      (yyval.qualified_identifier_func).scoped_name_p=(yyvsp[(1) - (1)].qualified_identifier).scoped_name_p;
                                                      (yyvsp[(1) - (1)].qualified_identifier).scoped_name_p=NULL;
                                                    ;}
    break;

  case 598:

/* Line 1455 of yacc.c  */
#line 1394 "c_cs_cpp_parser.y"
    {
                                    ;}
    break;

  case 681:

/* Line 1455 of yacc.c  */
#line 1488 "c_cs_cpp_parser.y"
    { level++; ;}
    break;

  case 682:

/* Line 1455 of yacc.c  */
#line 1490 "c_cs_cpp_parser.y"
    { 
                  level--;
                  (yyval.compound)=(yyvsp[(2) - (2)].compound);
                ;}
    break;

  case 683:

/* Line 1455 of yacc.c  */
#line 1497 "c_cs_cpp_parser.y"
    { 
                  if (!(yyvsp[(1) - (1)].compound).statement_completely_instrumented)
                    record_expression_computation( & (yyvsp[(1) - (1)].compound).pos,level+1);  
                  (yyval.compound)=(yyvsp[(1) - (1)].compound); 
                  (yyval.compound).statement_completely_instrumented=true;
                ;}
    break;

  case 684:

/* Line 1455 of yacc.c  */
#line 1506 "c_cs_cpp_parser.y"
    { 
                  if (!(yyvsp[(1) - (1)].compound).statement_completely_instrumented)
                    record_expression_computation( & (yyvsp[(1) - (1)].compound).pos,level+1);  
                  (yyval.compound)=(yyvsp[(1) - (1)].compound); 
                  (yyval.compound).statement_completely_instrumented=true;
                ;}
    break;

  case 685:

/* Line 1455 of yacc.c  */
#line 1515 "c_cs_cpp_parser.y"
    { 
                        record_expression_if_then( & (yylsp[(3) - (5)]),& (yylsp[(5) - (5)]) ,& (yyloc) ,level,(yyvsp[(3) - (5)].logical_expr).expression_id); 
                        (yyval.compound).statement_completely_instrumented=false;
                        (yyval.compound).non_sequential_entry_point=(yyvsp[(5) - (5)].compound).non_sequential_entry_point;
                        (yyval.compound).return_or_break_statement=false;
                      ;}
    break;

  case 686:

/* Line 1455 of yacc.c  */
#line 1522 "c_cs_cpp_parser.y"
    { 
                        record_expression_if_then_else( & (yylsp[(3) - (7)]),& (yylsp[(5) - (7)]) ,& (yylsp[(7) - (7)]),level,(yyvsp[(3) - (7)].logical_expr).expression_id);
                        (yyval.compound).statement_completely_instrumented=true;
                        (yyval.compound).non_sequential_entry_point=(yyvsp[(5) - (7)].compound).non_sequential_entry_point || (yyvsp[(7) - (7)].compound).non_sequential_entry_point;
                        (yyval.compound).return_or_break_statement=(yyvsp[(5) - (7)].compound).return_or_break_statement && (yyvsp[(7) - (7)].compound).return_or_break_statement;
                      ;}
    break;

  case 687:

/* Line 1455 of yacc.c  */
#line 1529 "c_cs_cpp_parser.y"
    { 
                        (yyval.compound)=(yyvsp[(5) - (5)].compound); 
                        (yyval.compound).statement_completely_instrumented=false;
                        (yyval.compound).return_or_break_statement=false;
                      ;}
    break;

  case 727:

/* Line 1455 of yacc.c  */
#line 1581 "c_cs_cpp_parser.y"
    {
                  ;}
    break;

  case 767:

/* Line 1455 of yacc.c  */
#line 1626 "c_cs_cpp_parser.y"
    {
            ;}
    break;

  case 773:

/* Line 1455 of yacc.c  */
#line 1636 "c_cs_cpp_parser.y"
    {
                        record_expression_while( & (yylsp[(3) - (5)]),&(yylsp[(1) - (5)]),&(yylsp[(5) - (5)]),level,(yyvsp[(3) - (5)].logical_expr).expression_id);  
                        (yyval.compound).non_sequential_entry_point=(yyvsp[(5) - (5)].compound).non_sequential_entry_point;
                        (yyval.compound).return_or_break_statement=false;
                      ;}
    break;

  case 774:

/* Line 1455 of yacc.c  */
#line 1642 "c_cs_cpp_parser.y"
    {
                        record_expression_condition( & (yylsp[(5) - (7)]),level,(yyvsp[(5) - (7)].logical_expr).expression_id);  
                        (yyval.compound).non_sequential_entry_point=(yyvsp[(2) - (7)].compound).non_sequential_entry_point;
                        (yyval.compound).return_or_break_statement=false;
                      ;}
    break;

  case 775:

/* Line 1455 of yacc.c  */
#line 1648 "c_cs_cpp_parser.y"
    {
                        (yyval.compound).non_sequential_entry_point=(yyvsp[(8) - (8)].compound).non_sequential_entry_point;
                        (yyval.compound).return_or_break_statement=false;
                      ;}
    break;

  case 776:

/* Line 1455 of yacc.c  */
#line 1653 "c_cs_cpp_parser.y"
    {
                        record_expression_for( & (yylsp[(5) - (9)]),&(yylsp[(5) - (9)]), &(yylsp[(9) - (9)]), level,(yyvsp[(5) - (9)].logical_expr).expression_id);
                        (yyval.compound).non_sequential_entry_point=(yyvsp[(9) - (9)].compound).non_sequential_entry_point;
                        (yyval.compound).return_or_break_statement=false;
                      ;}
    break;

  case 779:

/* Line 1455 of yacc.c  */
#line 1665 "c_cs_cpp_parser.y"
    {
                  (yyval.compound).return_or_break_statement=true;
                ;}
    break;

  case 780:

/* Line 1455 of yacc.c  */
#line 1669 "c_cs_cpp_parser.y"
    {
                  (yyval.compound).return_or_break_statement=true;
                ;}
    break;

  case 781:

/* Line 1455 of yacc.c  */
#line 1673 "c_cs_cpp_parser.y"
    {
                  (yyval.compound).return_or_break_statement=true;
                ;}
    break;

  case 782:

/* Line 1455 of yacc.c  */
#line 1677 "c_cs_cpp_parser.y"
    {
                  (yyval.compound).return_or_break_statement=false;
                ;}
    break;

  case 783:

/* Line 1455 of yacc.c  */
#line 1683 "c_cs_cpp_parser.y"
    {
                    (yyval.compound).return_or_break_statement=true;
                  ;}
    break;

  case 784:

/* Line 1455 of yacc.c  */
#line 1687 "c_cs_cpp_parser.y"
    {
                    (yyval.compound).return_or_break_statement=true;
                  ;}
    break;

  case 785:

/* Line 1455 of yacc.c  */
#line 1691 "c_cs_cpp_parser.y"
    {
                    (yyval.compound).return_or_break_statement=false;
                  ;}
    break;

  case 786:

/* Line 1455 of yacc.c  */
#line 1695 "c_cs_cpp_parser.y"
    {
                    (yyval.compound).return_or_break_statement=false;
                  ;}
    break;

  case 787:

/* Line 1455 of yacc.c  */
#line 1699 "c_cs_cpp_parser.y"
    {
                    (yyval.compound).return_or_break_statement=true;
                  ;}
    break;

  case 788:

/* Line 1455 of yacc.c  */
#line 1703 "c_cs_cpp_parser.y"
    {
                    (yyval.compound).return_or_break_statement=true;
                  ;}
    break;

  case 789:

/* Line 1455 of yacc.c  */
#line 1709 "c_cs_cpp_parser.y"
    { (yyval.compound)=(yyvsp[(2) - (2)].compound); ;}
    break;

  case 792:

/* Line 1455 of yacc.c  */
#line 1720 "c_cs_cpp_parser.y"
    {
                        (yyval.compound)=(yyvsp[(5) - (5)].compound);
                        (yyval.compound).statement_completely_instrumented=false; 
                      ;}
    break;

  case 793:

/* Line 1455 of yacc.c  */
#line 1727 "c_cs_cpp_parser.y"
    {
                        (yyval.compound)=(yyvsp[(5) - (5)].compound);
                        (yyval.compound).statement_completely_instrumented=false; 
                      ;}
    break;

  case 794:

/* Line 1455 of yacc.c  */
#line 1734 "c_cs_cpp_parser.y"
    {
                        if (!instrumentation_option((yyvsp[(2) - (2)].compound).pos.first_line).instrument_exception)
                        {
                          skip_area( & (yyvsp[(2) - (2)].compound).pos);
                        }
                      ;}
    break;

  case 795:

/* Line 1455 of yacc.c  */
#line 1742 "c_cs_cpp_parser.y"
    {
                        if (!instrumentation_option((yyvsp[(5) - (5)].compound).pos.first_line).instrument_exception)
                        {
                          skip_area( & (yyvsp[(5) - (5)].compound).pos);
                        }
                      ;}
    break;

  case 796:

/* Line 1455 of yacc.c  */
#line 1749 "c_cs_cpp_parser.y"
    {
                        if (!instrumentation_option((yyvsp[(2) - (2)].compound).pos.first_line).instrument_exception)
                        {
                          skip_area( & (yyvsp[(2) - (2)].compound).pos);
                        }
                      ;}
    break;

  case 797:

/* Line 1455 of yacc.c  */
#line 1758 "c_cs_cpp_parser.y"
    {
                        //if (language_to_parse()!=CompilerInterface::EXT_SOURCE_CS)
                          //record_expression_case( & @$,level)
                      ;}
    break;

  case 798:

/* Line 1455 of yacc.c  */
#line 1763 "c_cs_cpp_parser.y"
    {
                        //if (language_to_parse()!=CompilerInterface::EXT_SOURCE_CS)
                          //record_expression_case( & @$,level)
                      ;}
    break;

  case 799:

/* Line 1455 of yacc.c  */
#line 1768 "c_cs_cpp_parser.y"
    {
                          //record_expression_label( & @$,level)
                      ;}
    break;

  case 838:

/* Line 1455 of yacc.c  */
#line 1817 "c_cs_cpp_parser.y"
    { (yyval.logical_expr)=(yyvsp[(1) - (1)].logical_expr); ;}
    break;

  case 839:

/* Line 1455 of yacc.c  */
#line 1819 "c_cs_cpp_parser.y"
    { (yyval.logical_expr)=(yyvsp[(1) - (2)].logical_expr); ;}
    break;

  case 840:

/* Line 1455 of yacc.c  */
#line 1823 "c_cs_cpp_parser.y"
    { (yyval.logical_expr)=(yyvsp[(1) - (1)].logical_expr); ;}
    break;

  case 841:

/* Line 1455 of yacc.c  */
#line 1825 "c_cs_cpp_parser.y"
    { (yyval.logical_expr)=(yyvsp[(3) - (3)].logical_expr); ;}
    break;

  case 842:

/* Line 1455 of yacc.c  */
#line 1829 "c_cs_cpp_parser.y"
    { (yyval.logical_expr)=(yyvsp[(1) - (1)].logical_expr); ;}
    break;

  case 843:

/* Line 1455 of yacc.c  */
#line 1831 "c_cs_cpp_parser.y"
    { (yyval.logical_expr)=(yyvsp[(3) - (3)].logical_expr); ;}
    break;

  case 844:

/* Line 1455 of yacc.c  */
#line 1835 "c_cs_cpp_parser.y"
    { (yyval.logical_expr)=(yyvsp[(1) - (1)].logical_expr); ;}
    break;

  case 845:

/* Line 1455 of yacc.c  */
#line 1837 "c_cs_cpp_parser.y"
    {
                    (yyval.logical_expr)=(yyvsp[(1) - (5)].logical_expr); 
                    Expression* expr_id = record_expression_sub_condition( & (yylsp[(1) - (5)]),level,(yyvsp[(1) - (5)].logical_expr).expression_id);
                    (yyval.logical_expr).expression_id=expr_id;
                  ;}
    break;

  case 848:

/* Line 1455 of yacc.c  */
#line 1849 "c_cs_cpp_parser.y"
    { (yyval.logical_expr)=(yyvsp[(1) - (1)].logical_expr); ;}
    break;

  case 849:

/* Line 1455 of yacc.c  */
#line 1851 "c_cs_cpp_parser.y"
    {
                    Expression* expr_id1 = record_expression_sub_condition( & (yylsp[(1) - (3)]),level,(yyvsp[(1) - (3)].logical_expr).expression_id);
                    Expression* expr_id2 = record_expression_sub_condition( & (yylsp[(3) - (3)]),level,(yyvsp[(3) - (3)].logical_expr).expression_id);
                    Expression* expr_id  = record_expression_or_expr( & (yyloc),level,expr_id1,expr_id2);
                    (yyval.logical_expr).expression_id=expr_id;
                  ;}
    break;

  case 850:

/* Line 1455 of yacc.c  */
#line 1860 "c_cs_cpp_parser.y"
    { (yyval.logical_expr)=(yyvsp[(1) - (1)].logical_expr); ;}
    break;

  case 851:

/* Line 1455 of yacc.c  */
#line 1862 "c_cs_cpp_parser.y"
    {
                    Expression* expr_id1 = record_expression_sub_condition( & (yylsp[(1) - (3)]),level,(yyvsp[(1) - (3)].logical_expr).expression_id);   
                    Expression* expr_id2 = record_expression_sub_condition( & (yylsp[(3) - (3)]),level,(yyvsp[(3) - (3)].logical_expr).expression_id);   
                    Expression* expr_id  = record_expression_and_expr( & (yyloc),level,expr_id1,expr_id2);
                    (yyval.logical_expr).expression_id=expr_id;
                  ;}
    break;

  case 852:

/* Line 1455 of yacc.c  */
#line 1871 "c_cs_cpp_parser.y"
    { (yyval.logical_expr)=(yyvsp[(1) - (1)].logical_expr); ;}
    break;

  case 853:

/* Line 1455 of yacc.c  */
#line 1873 "c_cs_cpp_parser.y"
    {
                                  Expression* expr_id  = record_expression_some_binary_operator( & (yyloc),level,(yyvsp[(1) - (3)].logical_expr).expression_id,(yyvsp[(3) - (3)].logical_expr).expression_id);
                                  (yyval.logical_expr).expression_id=expr_id;
                                ;}
    break;

  case 854:

/* Line 1455 of yacc.c  */
#line 1880 "c_cs_cpp_parser.y"
    { (yyval.logical_expr)=(yyvsp[(1) - (1)].logical_expr); ;}
    break;

  case 855:

/* Line 1455 of yacc.c  */
#line 1882 "c_cs_cpp_parser.y"
    {
                    Expression* expr_id1 = (yyvsp[(2) - (2)].logical_expr).expression_id;
                    Expression* expr_id  = record_expression_not_expr( & (yylsp[(2) - (2)]),level,expr_id1);
                    (yyval.logical_expr).expression_id=expr_id;
                  ;}
    break;

  case 856:

/* Line 1455 of yacc.c  */
#line 1888 "c_cs_cpp_parser.y"
    {
                    Expression* expr_id1 = (yyvsp[(3) - (3)].logical_expr).expression_id;
                    Expression* expr_id  = record_expression_not_expr( & (yylsp[(3) - (3)]),level,expr_id1);
                    (yyval.logical_expr).expression_id=expr_id;
                  ;}
    break;

  case 857:

/* Line 1455 of yacc.c  */
#line 1896 "c_cs_cpp_parser.y"
    { (yyval.logical_expr)=(yyvsp[(1) - (2)].logical_expr); ;}
    break;

  case 858:

/* Line 1455 of yacc.c  */
#line 1898 "c_cs_cpp_parser.y"
    { (yyval.logical_expr)=(yyvsp[(1) - (1)].logical_expr); ;}
    break;

  case 859:

/* Line 1455 of yacc.c  */
#line 1902 "c_cs_cpp_parser.y"
    {
                  { (yyval.logical_expr).expression_id=NULL;}
                     ;}
    break;

  case 860:

/* Line 1455 of yacc.c  */
#line 1906 "c_cs_cpp_parser.y"
    { (yyval.logical_expr).expression_id=NULL;;}
    break;

  case 861:

/* Line 1455 of yacc.c  */
#line 1908 "c_cs_cpp_parser.y"
    {
                    Expression* expr_id1 = (yyvsp[(2) - (3)].logical_expr).expression_id;
                    Expression* expr_id  = record_expression_parenthesis_expr( & (yyloc),level,expr_id1);
                    (yyval.logical_expr).expression_id=expr_id;
                  ;}
    break;

  case 862:

/* Line 1455 of yacc.c  */
#line 1914 "c_cs_cpp_parser.y"
    { (yyval.logical_expr).expression_id=NULL;;}
    break;

  case 863:

/* Line 1455 of yacc.c  */
#line 1916 "c_cs_cpp_parser.y"
    { (yyval.logical_expr).expression_id=NULL;;}
    break;

  case 864:

/* Line 1455 of yacc.c  */
#line 1918 "c_cs_cpp_parser.y"
    { (yyval.logical_expr).expression_id=NULL;;}
    break;

  case 865:

/* Line 1455 of yacc.c  */
#line 1920 "c_cs_cpp_parser.y"
    { (yyval.logical_expr).expression_id=NULL;;}
    break;

  case 866:

/* Line 1455 of yacc.c  */
#line 1922 "c_cs_cpp_parser.y"
    { (yyval.logical_expr).expression_id=NULL;;}
    break;

  case 867:

/* Line 1455 of yacc.c  */
#line 1924 "c_cs_cpp_parser.y"
    { (yyval.logical_expr).expression_id=NULL;;}
    break;

  case 868:

/* Line 1455 of yacc.c  */
#line 1926 "c_cs_cpp_parser.y"
    { (yyval.logical_expr).expression_id=NULL;;}
    break;

  case 869:

/* Line 1455 of yacc.c  */
#line 1928 "c_cs_cpp_parser.y"
    { (yyval.logical_expr).expression_id=NULL;;}
    break;

  case 870:

/* Line 1455 of yacc.c  */
#line 1930 "c_cs_cpp_parser.y"
    { (yyval.logical_expr).expression_id=NULL;;}
    break;

  case 871:

/* Line 1455 of yacc.c  */
#line 1932 "c_cs_cpp_parser.y"
    { (yyval.logical_expr).expression_id=NULL;;}
    break;

  case 872:

/* Line 1455 of yacc.c  */
#line 1934 "c_cs_cpp_parser.y"
    { (yyval.logical_expr).expression_id=NULL;;}
    break;

  case 873:

/* Line 1455 of yacc.c  */
#line 1936 "c_cs_cpp_parser.y"
    { (yyval.logical_expr).expression_id=NULL;;}
    break;

  case 874:

/* Line 1455 of yacc.c  */
#line 1938 "c_cs_cpp_parser.y"
    { (yyval.logical_expr).expression_id=NULL;;}
    break;

  case 875:

/* Line 1455 of yacc.c  */
#line 1940 "c_cs_cpp_parser.y"
    { (yyval.logical_expr).expression_id=NULL;;}
    break;

  case 876:

/* Line 1455 of yacc.c  */
#line 1942 "c_cs_cpp_parser.y"
    { (yyval.logical_expr).expression_id=NULL;;}
    break;

  case 964:

/* Line 1455 of yacc.c  */
#line 2048 "c_cs_cpp_parser.y"
    {
                  if ((yyvsp[(2) - (4)].qualified_identifier_func).scoped_name_p)
                  {
                    YYLTYPE proto;
                    proto.first_line=(yylsp[(1) - (4)]).first_line;
                    proto.first_column=(yylsp[(1) - (4)]).first_column;
                    proto.last_line=(yylsp[(3) - (4)]).last_line;
                    proto.last_column=(yylsp[(3) - (4)]).last_column;
                    record_function((yyvsp[(2) - (4)].qualified_identifier_func).scoped_name_p,&proto,&(yylsp[(4) - (4)]));
                  }
               ;}
    break;

  case 965:

/* Line 1455 of yacc.c  */
#line 2060 "c_cs_cpp_parser.y"
    {
                  if ((yyvsp[(2) - (3)].qualified_identifier_func).scoped_name_p)
                  {
                    YYLTYPE proto;
                    proto.first_line=(yylsp[(1) - (3)]).first_line;
                    proto.first_column=(yylsp[(1) - (3)]).first_column;
                    proto.last_line=(yylsp[(2) - (3)]).last_line;
                    proto.last_column=(yylsp[(2) - (3)]).last_column;
                    record_function((yyvsp[(2) - (3)].qualified_identifier_func).scoped_name_p,&proto,&(yylsp[(3) - (3)]));
                  }
               ;}
    break;

  case 966:

/* Line 1455 of yacc.c  */
#line 2072 "c_cs_cpp_parser.y"
    {
               ;}
    break;

  case 967:

/* Line 1455 of yacc.c  */
#line 2075 "c_cs_cpp_parser.y"
    {
               ;}
    break;



/* Line 1455 of yacc.c  */
#line 5049 "c_cs_cpp_parser_yacc_release.cxx"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

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

  yyerror_range[0] = yylloc;

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
		      yytoken, &yylval, &yylloc);
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

  yyerror_range[0] = yylsp[1-yylen];
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

      yyerror_range[0] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
  *++yylsp = yyloc;

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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, &yylloc);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp);
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



/* Line 1675 of yacc.c  */
#line 2082 "c_cs_cpp_parser.y"


#include <stdio.h>


static const char*error_format=NULL;
int c_cs_cpp_parsererror(const char *s)
{
  std::string m=  parser_error( error_format, filename, line, column, s);
  fprintf(stderr,"%s\n",m.c_str());
  return 0;
}

int yyparse();
long c_cs_cpp_analyse(const char*filename_orig,const char *finput,Expressions &e,Source &s,LinePos &l,Functions &funct,const Option  &opt,const CompilerInterface &comp,CompilerInterface::extension_t parse_language,const instrumentation_option_t &option, const Defines &defines,int (*yy_input_func)(char *,int),const char *err_format)
{
  int ret;
  FILE *f=NULL;

  preprocessor_init(defines,err_format);
  error_format=err_format;
  kr_function_def_scope_p=NULL;
  init_instrumentation_option(option);
  level=0;

  parser_compiler_p    = &comp;
  parser_option_p      = &opt;
  parser_source_p      = &s;
  parser_functions_p   = &funct;
  parser_expressions_p = &e;
  parser_line_pos_p    = &l;

  clearCurrentScope();
  initExcludeIncludeWarning();
  init_c_cs_cpp_parserlex(parse_language,yy_input_func,filename_orig);
#if YYDEBUG
  yydebug=1;
#endif
  if (finput!=NULL)
  {
    if (yy_input_func==NULL)
    {
      f=fopen(finput,"r");
      if (f==NULL)
        FATAL2("Could not open file %s",finput);
    }
  }
  else
  {
    FATAL1("File name not defined");
  }
  test_input_file=f;


  ret=yyparse();
  if (f)
    fclose(f);
  return ret;
}

int c_cs_cpp_yyprint(FILE *f,int /*type*/,YYSTYPE value)
{
  yyprint_token(f,value.token.text);
  return 0;
}


