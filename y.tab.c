/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "calc.y"

#include <stdio.h>
extern FILE *yyin;
void yyerror(char *s);
int yylex();

#line 77 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    TOK_NUMERO = 258,
    TOK_AJUSTE = 259,
    TOK_RUTA = 260,
    TOK_UNIDADES = 261,
    TOK_TIPO = 262,
    TOK_NOMBRE = 263,
    TOK_CAPACIDAD = 264,
    TOK_SISTEMA = 265,
    TOK_IDENTIFICADOR = 266,
    TOK_MKDISK = 267,
    TOK_RMDISK = 268,
    TOK_FDISK = 269,
    TOK_MOUNT = 270,
    TOK_UNMOUNT = 271,
    TOK_MKFS = 272,
    TOK_LOGIN = 273,
    TOK_LOGOUT = 274,
    TOK_MKGRP = 275,
    TOK_RMGRP = 276,
    TOK_MKUSR = 277,
    TOK_RMUSR = 278,
    TOK_CHMOD = 279,
    TOK_TOUCH = 280,
    TOK_MKDIR = 281,
    TOK_RM = 282,
    TOK_EDIT = 283,
    TOK_REN = 284,
    TOK_CP = 285,
    TOK_MV = 286,
    TOK_FIND = 287,
    TOK_CHOWN = 288,
    TOK_CHGRP = 289,
    TOK_RECOVERY = 290,
    TOK_LOSS = 291,
    TOK_EXEC = 292,
    TOK_SIZE = 293,
    TOK_PATH = 294,
    TOK_NAME = 295,
    TOK_ID = 296,
    TOK_USR = 297,
    TOK_PWD = 298,
    TOK_GRP = 299,
    TOK_UGO = 300,
    TOK_CAT = 301,
    TOK_FILEN = 302,
    TOK_STDIN = 303,
    TOK_CONT = 304,
    TOK_DEST = 305,
    TOK_F = 306,
    TOK_U = 307,
    TOK_TYPE = 308,
    TOK_DELETE = 309,
    TOK_ADD = 310,
    TOK_FS = 311,
    TOK_R = 312,
    TOK_P = 313,
    TOK_IGUAL = 314,
    TOK_SALTO = 315
  };
#endif
/* Tokens.  */
#define TOK_NUMERO 258
#define TOK_AJUSTE 259
#define TOK_RUTA 260
#define TOK_UNIDADES 261
#define TOK_TIPO 262
#define TOK_NOMBRE 263
#define TOK_CAPACIDAD 264
#define TOK_SISTEMA 265
#define TOK_IDENTIFICADOR 266
#define TOK_MKDISK 267
#define TOK_RMDISK 268
#define TOK_FDISK 269
#define TOK_MOUNT 270
#define TOK_UNMOUNT 271
#define TOK_MKFS 272
#define TOK_LOGIN 273
#define TOK_LOGOUT 274
#define TOK_MKGRP 275
#define TOK_RMGRP 276
#define TOK_MKUSR 277
#define TOK_RMUSR 278
#define TOK_CHMOD 279
#define TOK_TOUCH 280
#define TOK_MKDIR 281
#define TOK_RM 282
#define TOK_EDIT 283
#define TOK_REN 284
#define TOK_CP 285
#define TOK_MV 286
#define TOK_FIND 287
#define TOK_CHOWN 288
#define TOK_CHGRP 289
#define TOK_RECOVERY 290
#define TOK_LOSS 291
#define TOK_EXEC 292
#define TOK_SIZE 293
#define TOK_PATH 294
#define TOK_NAME 295
#define TOK_ID 296
#define TOK_USR 297
#define TOK_PWD 298
#define TOK_GRP 299
#define TOK_UGO 300
#define TOK_CAT 301
#define TOK_FILEN 302
#define TOK_STDIN 303
#define TOK_CONT 304
#define TOK_DEST 305
#define TOK_F 306
#define TOK_U 307
#define TOK_TYPE 308
#define TOK_DELETE 309
#define TOK_ADD 310
#define TOK_FS 311
#define TOK_R 312
#define TOK_P 313
#define TOK_IGUAL 314
#define TOK_SALTO 315

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 8 "calc.y"

    char *entrada;

#line 253 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  143
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   346

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  56
/* YYNRULES -- Number of rules.  */
#define YYNRULES  143
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  303

#define YYUNDEFTOK  2
#define YYMAXUTOK   315


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    79,    79,    84,    87,    90,    93,    96,    99,   102,
     105,   108,   111,   114,   117,   120,   123,   126,   129,   132,
     135,   138,   141,   144,   147,   150,   153,   156,   159,   162,
     165,   168,   171,   176,   178,   182,   184,   188,   190,   194,
     196,   200,   202,   206,   208,   212,   214,   218,   220,   224,
     226,   230,   232,   236,   238,   242,   244,   248,   250,   254,
     256,   260,   262,   266,   268,   272,   274,   278,   280,   284,
     286,   290,   292,   296,   298,   302,   304,   308,   310,   314,
     316,   320,   322,   326,   328,   332,   335,   338,   341,   346,
     351,   354,   357,   360,   363,   366,   369,   372,   377,   380,
     385,   390,   393,   396,   401,   404,   407,   412,   417,   422,
     425,   428,   433,   438,   441,   444,   449,   452,   455,   458,
     461,   466,   471,   476,   479,   482,   487,   490,   495,   498,
     503,   506,   511,   514,   519,   522,   527,   530,   533,   538,
     541,   546,   551,   556
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOK_NUMERO", "TOK_AJUSTE", "TOK_RUTA",
  "TOK_UNIDADES", "TOK_TIPO", "TOK_NOMBRE", "TOK_CAPACIDAD", "TOK_SISTEMA",
  "TOK_IDENTIFICADOR", "TOK_MKDISK", "TOK_RMDISK", "TOK_FDISK",
  "TOK_MOUNT", "TOK_UNMOUNT", "TOK_MKFS", "TOK_LOGIN", "TOK_LOGOUT",
  "TOK_MKGRP", "TOK_RMGRP", "TOK_MKUSR", "TOK_RMUSR", "TOK_CHMOD",
  "TOK_TOUCH", "TOK_MKDIR", "TOK_RM", "TOK_EDIT", "TOK_REN", "TOK_CP",
  "TOK_MV", "TOK_FIND", "TOK_CHOWN", "TOK_CHGRP", "TOK_RECOVERY",
  "TOK_LOSS", "TOK_EXEC", "TOK_SIZE", "TOK_PATH", "TOK_NAME", "TOK_ID",
  "TOK_USR", "TOK_PWD", "TOK_GRP", "TOK_UGO", "TOK_CAT", "TOK_FILEN",
  "TOK_STDIN", "TOK_CONT", "TOK_DEST", "TOK_F", "TOK_U", "TOK_TYPE",
  "TOK_DELETE", "TOK_ADD", "TOK_FS", "TOK_R", "TOK_P", "TOK_IGUAL",
  "TOK_SALTO", "$accept", "inicio", "instrucciones", "instruccion",
  "paramslist1", "paramslist2", "paramslist3", "paramslist4",
  "paramslist5", "paramslist6", "paramslist7", "paramslist8",
  "paramslist9", "paramslist10", "paramslist11", "paramslist12",
  "paramslist13", "paramslist14", "paramslist15", "paramslist16",
  "paramslist17", "paramslist18", "paramslist19", "paramslist20",
  "paramslist21", "paramslist22", "paramslist23", "paramslist24",
  "paramslist25", "paramslist26", "params1", "params2", "params3",
  "params4", "params5", "params6", "params7", "params8", "params9",
  "params10", "params11", "params12", "params13", "params14", "params15",
  "params16", "params17", "params18", "params19", "params20", "params21",
  "params22", "params23", "params24", "params25", "params26", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315
};
# endif

#define YYPACT_NINF (-41)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -1,   -41,   148,   -31,   139,    -2,     3,   142,   -40,   -41,
     -30,    32,   -38,     1,   127,    96,    46,    37,   162,     0,
     157,   158,     2,   128,   -35,    36,    38,    39,    91,   154,
      34,   -41,   109,   117,   143,   144,    45,   -41,   145,    79,
     -41,   146,   147,   150,   153,   155,   156,   159,   160,    35,
     -41,   161,   163,    62,   -41,   164,    99,   -41,   165,   166,
     167,    95,   -41,   168,   169,   170,   115,   -41,   171,    90,
     -41,   172,    92,   -41,   173,   174,   175,   121,   -41,   176,
      87,   -41,   177,   178,   -41,    54,   -41,   179,   180,   -41,
     181,   -41,    43,   -41,   182,   -41,    55,   -41,   183,    81,
     -41,   184,   -41,   185,    59,   -41,   186,   187,    77,   -41,
     188,   189,    71,   -41,   190,   191,    73,   -41,   192,   193,
      86,   -41,   194,   195,   -41,    67,   -41,   196,   197,   129,
     -41,   198,   101,   -41,   199,   102,   -41,   200,    89,   -41,
     201,   122,   -41,   -41,   -41,   210,   211,   213,   215,   -41,
     -41,   256,   -41,   -41,   259,   258,   152,   260,   261,   262,
     257,   265,   -41,   -41,   266,   264,   -41,   -41,   254,   -41,
     -41,   263,   267,   268,   -41,   -41,   269,   271,   273,   -41,
     -41,   274,   -41,   -41,   275,   -41,   -41,   276,   277,   278,
     -41,   -41,   279,   -41,   -41,   270,   285,   -41,   -41,   286,
     272,   287,   -41,   -41,   288,   -41,   -41,   289,   -41,   -41,
     290,   291,   -41,   -41,   292,   282,   -41,   -41,   293,   294,
     -41,   -41,   295,   296,   -41,   -41,   297,   283,   -41,   -41,
     298,   299,   -41,   -41,   300,   301,   -41,   -41,   302,   -41,
     -41,   303,   -41,   -41,   305,   -41,   -41,   306,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -41
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     5,     0,     0,     0,     0,     0,     0,     0,    13,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       2,     4,     0,     0,     0,     0,     0,    34,     0,     0,
      36,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      38,     0,     0,     0,    40,     0,     0,    42,     0,     0,
       0,     0,    44,     0,     0,     0,     0,    46,     0,     0,
      48,     0,     0,    50,     0,     0,     0,     0,    52,     0,
       0,    54,     0,     0,   115,     0,    56,     0,     0,   120,
       0,   117,     0,    58,     0,   129,     0,    68,     0,     0,
      62,     0,   125,     0,     0,    64,     0,     0,     0,    66,
       0,     0,     0,    70,     0,     0,     0,    72,     0,     0,
       0,    74,     0,     0,   138,     0,    76,     0,     0,     0,
      78,     0,     0,    80,     0,     0,    82,     0,     0,    84,
       0,     0,    60,     1,     3,     0,     0,     0,     0,     6,
      33,     0,     7,    35,     0,     0,     0,     0,     0,     0,
       0,     0,     8,    37,     0,     0,     9,    39,     0,    10,
      41,     0,     0,     0,    11,    43,     0,     0,     0,    12,
      45,     0,    14,    47,     0,    15,    49,     0,     0,     0,
      16,    51,     0,    17,    53,     0,     0,    18,    55,     0,
       0,     0,    19,    57,     0,    24,    67,     0,    21,    61,
       0,     0,    22,    63,     0,     0,    23,    65,     0,     0,
      25,    69,     0,     0,    26,    71,     0,     0,    27,    73,
       0,     0,    28,    75,     0,     0,    29,    77,     0,    30,
      79,     0,    31,    81,     0,    32,    83,     0,    20,    59,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      96,    95,    97,    98,    99,   100,   101,   102,   103,   106,
     104,   105,   107,   108,   109,   110,   111,   112,   113,   114,
     118,   116,   119,   128,   122,   123,   124,   126,   127,   130,
     131,   132,   133,   134,   135,   136,   137,   139,   140,   141,
     142,   143,   121
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -41,   -41,   -41,   240,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     138,   141,   224,   135,   248,   244,   246,   237,   243,   239,
     238,   232,   227,   202,   221,   217,   214,   228,   216,   207,
     205,   204,   203,   206,   209,   208
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    29,    30,    31,    36,    39,    49,    53,    56,    61,
      66,    69,    72,    77,    80,    85,    92,   141,    99,   104,
     108,    96,   112,   116,   120,   125,   129,   132,   135,   138,
      37,    40,    50,    54,    57,    62,    67,    70,    73,    78,
      81,    86,    93,   142,   100,   105,   109,    97,   113,   117,
     121,   126,   130,   133,   136,   139
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       1,    63,    64,    65,    74,    75,    76,   127,    38,   128,
      68,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    51,    52,   106,
     107,   118,   119,    79,    55,    28,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    71,    41,    42,    43,    98,   131,   137,   134,
      28,    87,    88,    32,    33,    94,    44,    45,    46,    47,
      48,    89,    90,    82,    94,   162,    34,    35,   101,    83,
      91,    51,    52,   202,    95,   149,   122,   102,   103,   123,
     110,    84,   114,    95,   197,   205,   106,   107,    38,   212,
      98,   111,   166,   115,   124,   118,   119,   232,   137,    79,
      68,   220,    71,   224,    87,    88,    58,   216,   140,   152,
      55,   208,   131,   134,    89,    90,   228,   193,    59,   245,
     182,    60,   185,    91,   143,   174,    63,    64,    65,   169,
     257,   239,   242,    74,    75,    76,    82,   122,   145,   140,
     123,   127,    83,   128,   150,   179,   146,    41,    42,    43,
     153,   190,   248,    58,    84,   124,    32,    33,   167,   236,
      44,    45,    46,    47,    48,    59,   110,   114,    60,    34,
      35,   101,   147,   148,   151,   154,   155,   111,   115,   156,
     102,   103,   157,   250,   158,   159,   251,   252,   160,   161,
     164,   253,   165,   168,   171,   172,   173,   176,   177,   178,
     181,   184,   187,   188,   189,   192,   195,   196,   199,   200,
     201,   204,   207,   210,   211,   214,   215,   218,   219,   222,
     223,   226,   227,   230,   231,   234,   235,   238,   241,   244,
     247,   254,   255,   256,   258,   265,   261,   259,   262,   260,
     144,   263,   264,   163,   266,   278,   267,   281,   268,   270,
     269,   271,   272,   273,   274,   275,   276,   277,   279,   280,
     288,   294,   282,   283,   284,   285,   286,   287,   289,   290,
     291,   292,   293,   295,   170,   175,   183,   296,   297,   298,
     301,   302,   180,   299,   300,   186,   191,   198,   194,   203,
     209,   213,   217,   225,   206,   229,     0,     0,   221,   233,
       0,     0,   237,     0,     0,     0,     0,     0,   240,     0,
       0,     0,     0,   249,   243,     0,   246
};

static const yytype_int16 yycheck[] =
{
       1,    41,    42,    43,    42,    43,    44,    42,    39,    44,
      40,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    39,    40,    39,
      40,    39,    40,    42,    41,    46,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    40,    38,    39,    40,    39,    41,    39,    41,
      46,    38,    39,    38,    39,    39,    51,    52,    53,    54,
      55,    48,    49,    39,    39,    60,    51,    52,    39,    45,
      57,    39,    40,    60,    58,    60,    39,    48,    49,    42,
      39,    57,    39,    58,    60,    60,    39,    40,    39,    60,
      39,    50,    60,    50,    57,    39,    40,    60,    39,    42,
      40,    60,    40,    60,    38,    39,    41,    60,    47,    60,
      41,    60,    41,    41,    48,    49,    60,    60,    53,    60,
      60,    56,    60,    57,     0,    60,    41,    42,    43,    60,
       8,    60,    60,    42,    43,    44,    39,    39,    59,    47,
      42,    42,    45,    44,    36,    60,    59,    38,    39,    40,
      39,    60,    60,    41,    57,    57,    38,    39,    53,    60,
      51,    52,    53,    54,    55,    53,    39,    39,    56,    51,
      52,    39,    59,    59,    59,    59,    59,    50,    50,    59,
      48,    49,    59,     3,    59,    59,     5,     4,    59,    59,
      59,     6,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,     5,     3,     5,     4,    11,     9,     6,     3,     7,
      30,     5,     8,    49,    11,     5,     9,     5,    10,     8,
      11,     8,     8,     8,     8,     8,     8,     8,     3,     3,
       8,     8,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     5,    56,    61,    69,     8,     8,     8,
       5,     5,    66,    11,    11,    72,    77,    85,    80,    92,
      99,   104,   108,   116,    96,   120,    -1,    -1,   112,   125,
      -1,    -1,   129,    -1,    -1,    -1,    -1,    -1,   132,    -1,
      -1,    -1,    -1,   141,   135,    -1,   138
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    46,    62,
      63,    64,    38,    39,    51,    52,    65,    91,    39,    66,
      92,    38,    39,    40,    51,    52,    53,    54,    55,    67,
      93,    39,    40,    68,    94,    41,    69,    95,    41,    53,
      56,    70,    96,    41,    42,    43,    71,    97,    40,    72,
      98,    40,    73,    99,    42,    43,    44,    74,   100,    42,
      75,   101,    39,    45,    57,    76,   102,    38,    39,    48,
      49,    57,    77,   103,    39,    58,    82,   108,    39,    79,
     105,    39,    48,    49,    80,   106,    39,    40,    81,   107,
      39,    50,    83,   109,    39,    50,    84,   110,    39,    40,
      85,   111,    39,    42,    57,    86,   112,    42,    44,    87,
     113,    41,    88,   114,    41,    89,   115,    39,    90,   116,
      47,    78,   104,     0,    64,    59,    59,    59,    59,    60,
      91,    59,    60,    92,    59,    59,    59,    59,    59,    59,
      59,    59,    60,    93,    59,    59,    60,    94,    59,    60,
      95,    59,    59,    59,    60,    96,    59,    59,    59,    60,
      97,    59,    60,    98,    59,    60,    99,    59,    59,    59,
      60,   100,    59,    60,   101,    59,    59,    60,   102,    59,
      59,    59,    60,   103,    59,    60,   108,    59,    60,   105,
      59,    59,    60,   106,    59,    59,    60,   107,    59,    59,
      60,   109,    59,    59,    60,   110,    59,    59,    60,   111,
      59,    59,    60,   112,    59,    59,    60,   113,    59,    60,
     114,    59,    60,   115,    59,    60,   116,    59,    60,   104,
       3,     5,     4,     6,     5,     3,     5,     8,     4,     6,
       7,     9,     3,     5,     8,    11,    11,     9,    10,    11,
       8,     8,     8,     8,     8,     8,     8,     8,     5,     3,
       3,     5,     5,     5,     5,     5,     5,     5,     8,     5,
       5,     5,     5,     5,     8,     5,     8,     8,     8,    11,
      11,     5,     5
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    61,    62,    63,    63,    63,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    65,    65,    66,    66,    67,    67,    68,
      68,    69,    69,    70,    70,    71,    71,    72,    72,    73,
      73,    74,    74,    75,    75,    76,    76,    77,    77,    78,
      78,    79,    79,    80,    80,    81,    81,    82,    82,    83,
      83,    84,    84,    85,    85,    86,    86,    87,    87,    88,
      88,    89,    89,    90,    90,    91,    91,    91,    91,    92,
      93,    93,    93,    93,    93,    93,    93,    93,    94,    94,
      95,    96,    96,    96,    97,    97,    97,    98,    99,   100,
     100,   100,   101,   102,   102,   102,   103,   103,   103,   103,
     103,   104,   105,   106,   106,   106,   107,   107,   108,   108,
     109,   109,   110,   110,   111,   111,   112,   112,   112,   113,
     113,   114,   115,   116
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     3,     3,     3,     3,
       3,     3,     3,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     3,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     3,
       3,     3,     3,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2:
#line 79 "calc.y"
                         {
                
            }
#line 1660 "y.tab.c"
    break;

  case 3:
#line 84 "calc.y"
                                         {
                    printf("Analisis exitoso\n");
                    }
#line 1668 "y.tab.c"
    break;

  case 4:
#line 87 "calc.y"
                            { 
                    printf("Analisis exitoso \n"); 
                }
#line 1676 "y.tab.c"
    break;

  case 6:
#line 93 "calc.y"
                                                    {
                        printf("comando mkdisk\t");
                    }
#line 1684 "y.tab.c"
    break;

  case 7:
#line 96 "calc.y"
                                                     {
                        printf("comando rmdisk\t");
                    }
#line 1692 "y.tab.c"
    break;

  case 8:
#line 99 "calc.y"
                                                    {
                        printf("comando fdisk\t");
                    }
#line 1700 "y.tab.c"
    break;

  case 9:
#line 102 "calc.y"
                                                    {
                        printf("comando mount\t");
                    }
#line 1708 "y.tab.c"
    break;

  case 10:
#line 105 "calc.y"
                                                      {
                        printf("comando unmount\t");
                    }
#line 1716 "y.tab.c"
    break;

  case 11:
#line 108 "calc.y"
                                                   {
                        printf("comando mkfs\t");
                    }
#line 1724 "y.tab.c"
    break;

  case 12:
#line 111 "calc.y"
                                                    {
                        printf("comando login\t");
                    }
#line 1732 "y.tab.c"
    break;

  case 13:
#line 114 "calc.y"
                               {
                        printf("comando logout\t");
                    }
#line 1740 "y.tab.c"
    break;

  case 14:
#line 117 "calc.y"
                                                    {
                        printf("comando mkgrp\t");
                    }
#line 1748 "y.tab.c"
    break;

  case 15:
#line 120 "calc.y"
                                                    {
                        printf("comando rmgrp\t");
                    }
#line 1756 "y.tab.c"
    break;

  case 16:
#line 123 "calc.y"
                                                     {
                        printf("comando mkusr\t");
                    }
#line 1764 "y.tab.c"
    break;

  case 17:
#line 126 "calc.y"
                                                     {
                        printf("comando rmusr\t");
                    }
#line 1772 "y.tab.c"
    break;

  case 18:
#line 129 "calc.y"
                                                     {
                        printf("comando chmod\t");
                    }
#line 1780 "y.tab.c"
    break;

  case 19:
#line 132 "calc.y"
                                                     {
                        printf("comando touch\t");
                    }
#line 1788 "y.tab.c"
    break;

  case 20:
#line 135 "calc.y"
                                                   {
                        printf("comando cat\t");
                    }
#line 1796 "y.tab.c"
    break;

  case 21:
#line 138 "calc.y"
                                                  {
                        printf("comando rm\t");
                    }
#line 1804 "y.tab.c"
    break;

  case 22:
#line 141 "calc.y"
                                                    {
                        printf("comando edit\t");
                    }
#line 1812 "y.tab.c"
    break;

  case 23:
#line 144 "calc.y"
                                                   {
                        printf("comando ren\t");
                    }
#line 1820 "y.tab.c"
    break;

  case 24:
#line 147 "calc.y"
                                                     {
                        printf("comando mkdir\t");
                    }
#line 1828 "y.tab.c"
    break;

  case 25:
#line 150 "calc.y"
                                                  {
                        printf("comando cp\t");
                    }
#line 1836 "y.tab.c"
    break;

  case 26:
#line 153 "calc.y"
                                                  {
                        printf("comando mv\t");
                    }
#line 1844 "y.tab.c"
    break;

  case 27:
#line 156 "calc.y"
                                                    {
                        printf("comando find\t");
                    }
#line 1852 "y.tab.c"
    break;

  case 28:
#line 159 "calc.y"
                                                     {
                        printf("comando chown\t");
                    }
#line 1860 "y.tab.c"
    break;

  case 29:
#line 162 "calc.y"
                                                     {
                        printf("comando chgrp\t");
                    }
#line 1868 "y.tab.c"
    break;

  case 30:
#line 165 "calc.y"
                                                        {
                        printf("comando recovery\t");
                    }
#line 1876 "y.tab.c"
    break;

  case 31:
#line 168 "calc.y"
                                                    {
                        printf("comando loss\t");
                    }
#line 1884 "y.tab.c"
    break;

  case 32:
#line 171 "calc.y"
                                                    {
                        printf("comando exec\t"); 
                    }
#line 1892 "y.tab.c"
    break;

  case 33:
#line 176 "calc.y"
                                       {
                    }
#line 1899 "y.tab.c"
    break;

  case 34:
#line 178 "calc.y"
                            {                        
                    }
#line 1906 "y.tab.c"
    break;

  case 35:
#line 182 "calc.y"
                                       {
                    }
#line 1913 "y.tab.c"
    break;

  case 36:
#line 184 "calc.y"
                            {                        
                    }
#line 1920 "y.tab.c"
    break;

  case 37:
#line 188 "calc.y"
                                       {
                    }
#line 1927 "y.tab.c"
    break;

  case 38:
#line 190 "calc.y"
                            {                        
                    }
#line 1934 "y.tab.c"
    break;

  case 39:
#line 194 "calc.y"
                                       {
                    }
#line 1941 "y.tab.c"
    break;

  case 40:
#line 196 "calc.y"
                            {                        
                    }
#line 1948 "y.tab.c"
    break;

  case 41:
#line 200 "calc.y"
                                       {
                    }
#line 1955 "y.tab.c"
    break;

  case 42:
#line 202 "calc.y"
                            {                        
                    }
#line 1962 "y.tab.c"
    break;

  case 43:
#line 206 "calc.y"
                                       {
                    }
#line 1969 "y.tab.c"
    break;

  case 44:
#line 208 "calc.y"
                            {                        
                    }
#line 1976 "y.tab.c"
    break;

  case 45:
#line 212 "calc.y"
                                       {
                    }
#line 1983 "y.tab.c"
    break;

  case 46:
#line 214 "calc.y"
                            {                        
                    }
#line 1990 "y.tab.c"
    break;

  case 47:
#line 218 "calc.y"
                                       {
                    }
#line 1997 "y.tab.c"
    break;

  case 48:
#line 220 "calc.y"
                            {                        
                    }
#line 2004 "y.tab.c"
    break;

  case 49:
#line 224 "calc.y"
                                       {
                    }
#line 2011 "y.tab.c"
    break;

  case 50:
#line 226 "calc.y"
                            {                        
                    }
#line 2018 "y.tab.c"
    break;

  case 51:
#line 230 "calc.y"
                                         {
                    }
#line 2025 "y.tab.c"
    break;

  case 52:
#line 232 "calc.y"
                             {                        
                    }
#line 2032 "y.tab.c"
    break;

  case 53:
#line 236 "calc.y"
                                         {
                    }
#line 2039 "y.tab.c"
    break;

  case 54:
#line 238 "calc.y"
                             {                        
                    }
#line 2046 "y.tab.c"
    break;

  case 55:
#line 242 "calc.y"
                                         {
                    }
#line 2053 "y.tab.c"
    break;

  case 56:
#line 244 "calc.y"
                             {                        
                    }
#line 2060 "y.tab.c"
    break;

  case 57:
#line 248 "calc.y"
                                         {
                    }
#line 2067 "y.tab.c"
    break;

  case 58:
#line 250 "calc.y"
                             {                        
                    }
#line 2074 "y.tab.c"
    break;

  case 59:
#line 254 "calc.y"
                                         {
                    }
#line 2081 "y.tab.c"
    break;

  case 60:
#line 256 "calc.y"
                             {                        
                    }
#line 2088 "y.tab.c"
    break;

  case 61:
#line 260 "calc.y"
                                         {
                    }
#line 2095 "y.tab.c"
    break;

  case 62:
#line 262 "calc.y"
                             {                        
                    }
#line 2102 "y.tab.c"
    break;

  case 63:
#line 266 "calc.y"
                                         {
                    }
#line 2109 "y.tab.c"
    break;

  case 64:
#line 268 "calc.y"
                             {                        
                    }
#line 2116 "y.tab.c"
    break;

  case 65:
#line 272 "calc.y"
                                         {
                    }
#line 2123 "y.tab.c"
    break;

  case 66:
#line 274 "calc.y"
                             {                        
                    }
#line 2130 "y.tab.c"
    break;

  case 67:
#line 278 "calc.y"
                                         {
                    }
#line 2137 "y.tab.c"
    break;

  case 68:
#line 280 "calc.y"
                             {                        
                    }
#line 2144 "y.tab.c"
    break;

  case 69:
#line 284 "calc.y"
                                         {
                    }
#line 2151 "y.tab.c"
    break;

  case 70:
#line 286 "calc.y"
                             {                        
                    }
#line 2158 "y.tab.c"
    break;

  case 71:
#line 290 "calc.y"
                                         {
                    }
#line 2165 "y.tab.c"
    break;

  case 72:
#line 292 "calc.y"
                             {                        
                    }
#line 2172 "y.tab.c"
    break;

  case 73:
#line 296 "calc.y"
                                         {
                    }
#line 2179 "y.tab.c"
    break;

  case 74:
#line 298 "calc.y"
                             {                        
                    }
#line 2186 "y.tab.c"
    break;

  case 75:
#line 302 "calc.y"
                                         {
                    }
#line 2193 "y.tab.c"
    break;

  case 76:
#line 304 "calc.y"
                             {                        
                    }
#line 2200 "y.tab.c"
    break;

  case 77:
#line 308 "calc.y"
                                         {
                    }
#line 2207 "y.tab.c"
    break;

  case 78:
#line 310 "calc.y"
                             {                        
                    }
#line 2214 "y.tab.c"
    break;

  case 79:
#line 314 "calc.y"
                                         {
                    }
#line 2221 "y.tab.c"
    break;

  case 80:
#line 316 "calc.y"
                             {                        
                    }
#line 2228 "y.tab.c"
    break;

  case 81:
#line 320 "calc.y"
                                         {
                    }
#line 2235 "y.tab.c"
    break;

  case 82:
#line 322 "calc.y"
                             {                        
                    }
#line 2242 "y.tab.c"
    break;

  case 83:
#line 326 "calc.y"
                                         {
                    }
#line 2249 "y.tab.c"
    break;

  case 84:
#line 328 "calc.y"
                             {                        
                    }
#line 2256 "y.tab.c"
    break;

  case 85:
#line 332 "calc.y"
                                                 {
                        printf("parametro size\t");
                    }
#line 2264 "y.tab.c"
    break;

  case 86:
#line 335 "calc.y"
                                                {
                        printf("parametro path\t");
                    }
#line 2272 "y.tab.c"
    break;

  case 87:
#line 338 "calc.y"
                                               {
                        printf("parametro f\t");
                    }
#line 2280 "y.tab.c"
    break;

  case 88:
#line 341 "calc.y"
                                                 {
                        printf("parametro u\t");
                    }
#line 2288 "y.tab.c"
    break;

  case 89:
#line 346 "calc.y"
                                               {
                        printf("parametro path\t");
                    }
#line 2296 "y.tab.c"
    break;

  case 90:
#line 351 "calc.y"
                                                 {
                        printf("parametro size\t");
                    }
#line 2304 "y.tab.c"
    break;

  case 91:
#line 354 "calc.y"
                                                {
                        printf("parametro path\t");
                    }
#line 2312 "y.tab.c"
    break;

  case 92:
#line 357 "calc.y"
                                                  {
                        printf("parametro name\t");
                    }
#line 2320 "y.tab.c"
    break;

  case 93:
#line 360 "calc.y"
                                               {
                        printf("parametro f\t");
                    }
#line 2328 "y.tab.c"
    break;

  case 94:
#line 363 "calc.y"
                                                 {
                        printf("parametro u\t");
                    }
#line 2336 "y.tab.c"
    break;

  case 95:
#line 366 "calc.y"
                                                       {
                        printf("parametro delete\t");
                    }
#line 2344 "y.tab.c"
    break;

  case 96:
#line 369 "calc.y"
                                                {
                        printf("parametro type\t");
                    }
#line 2352 "y.tab.c"
    break;

  case 97:
#line 372 "calc.y"
                                                 {
                        printf("parametro add\t");
                    }
#line 2360 "y.tab.c"
    break;

  case 98:
#line 377 "calc.y"
                                               {
                        printf("parametro path\t");
                    }
#line 2368 "y.tab.c"
    break;

  case 99:
#line 380 "calc.y"
                                                  {
                        printf("parametro name\t");
                    }
#line 2376 "y.tab.c"
    break;

  case 100:
#line 385 "calc.y"
                                                      {
                        printf("parametro id\t");
                    }
#line 2384 "y.tab.c"
    break;

  case 101:
#line 390 "calc.y"
                                                      {
                        printf("parametro id\t");
                    }
#line 2392 "y.tab.c"
    break;

  case 102:
#line 393 "calc.y"
                                                     {
                        printf("parametro type\t");
                    }
#line 2400 "y.tab.c"
    break;

  case 103:
#line 396 "calc.y"
                                                 {
                        printf("parametro fs\t");
                    }
#line 2408 "y.tab.c"
    break;

  case 104:
#line 401 "calc.y"
                                                {
                        printf("parametro usr\t");
                    }
#line 2416 "y.tab.c"
    break;

  case 105:
#line 404 "calc.y"
                                                 {
                        printf("parametro pwd\t");
                    }
#line 2424 "y.tab.c"
    break;

  case 106:
#line 407 "calc.y"
                                                       {
                        printf("parametro id\t");
                    }
#line 2432 "y.tab.c"
    break;

  case 107:
#line 412 "calc.y"
                                                 {
                        printf("parametro name\t");
                    }
#line 2440 "y.tab.c"
    break;

  case 108:
#line 417 "calc.y"
                                                 {
                        printf("parametro name\t");
                    }
#line 2448 "y.tab.c"
    break;

  case 109:
#line 422 "calc.y"
                                                {
                        printf("parametro usr\t");
                    }
#line 2456 "y.tab.c"
    break;

  case 110:
#line 425 "calc.y"
                                                 {
                        printf("parametro pwd\t");
                    }
#line 2464 "y.tab.c"
    break;

  case 111:
#line 428 "calc.y"
                                                 {
                        printf("parametro grp\t");
                    }
#line 2472 "y.tab.c"
    break;

  case 112:
#line 433 "calc.y"
                                                 {
                        printf("parametro usr\t");
                    }
#line 2480 "y.tab.c"
    break;

  case 113:
#line 438 "calc.y"
                                               {
                        printf("parametro path\t");
                    }
#line 2488 "y.tab.c"
    break;

  case 114:
#line 441 "calc.y"
                                                 {
                        printf("parametro ugo\t");
                    }
#line 2496 "y.tab.c"
    break;

  case 115:
#line 444 "calc.y"
                          {
                        printf("parametro r\t");
                    }
#line 2504 "y.tab.c"
    break;

  case 116:
#line 449 "calc.y"
                                               {
                        printf("parametro path\t");
                    }
#line 2512 "y.tab.c"
    break;

  case 117:
#line 452 "calc.y"
                          {
                        printf("parametro r\t");
                    }
#line 2520 "y.tab.c"
    break;

  case 118:
#line 455 "calc.y"
                                                  {
                        printf("parametro size\t");
                    }
#line 2528 "y.tab.c"
    break;

  case 119:
#line 458 "calc.y"
                                                {
                        printf("parametro cont\t");
                    }
#line 2536 "y.tab.c"
    break;

  case 120:
#line 461 "calc.y"
                              {
                        printf("parametro stdin\t");
                    }
#line 2544 "y.tab.c"
    break;

  case 121:
#line 466 "calc.y"
                                                {
                        printf("parametro filen\t");
                    }
#line 2552 "y.tab.c"
    break;

  case 122:
#line 471 "calc.y"
                                               {
                        printf("parametro path\t");
                    }
#line 2560 "y.tab.c"
    break;

  case 123:
#line 476 "calc.y"
                                               {
                        printf("parametro path\t");
                    }
#line 2568 "y.tab.c"
    break;

  case 124:
#line 479 "calc.y"
                                                {
                        printf("parametro cont\t");
                    }
#line 2576 "y.tab.c"
    break;

  case 125:
#line 482 "calc.y"
                              {
                        printf("parametro stdin\t");
                    }
#line 2584 "y.tab.c"
    break;

  case 126:
#line 487 "calc.y"
                                               {
                        printf("parametro path\t");
                    }
#line 2592 "y.tab.c"
    break;

  case 127:
#line 490 "calc.y"
                                                  {
                        printf("parametro name\t");
                    }
#line 2600 "y.tab.c"
    break;

  case 128:
#line 495 "calc.y"
                                               {
                        printf("parametro path\t");
                    }
#line 2608 "y.tab.c"
    break;

  case 129:
#line 498 "calc.y"
                          {
                        printf("parametro p\t");
                    }
#line 2616 "y.tab.c"
    break;

  case 130:
#line 503 "calc.y"
                                               {
                        printf("parametro path\t");
                    }
#line 2624 "y.tab.c"
    break;

  case 131:
#line 506 "calc.y"
                                                {
                        printf("parametro dest\t");
                    }
#line 2632 "y.tab.c"
    break;

  case 132:
#line 511 "calc.y"
                                               {
                        printf("parametro path\t");
                    }
#line 2640 "y.tab.c"
    break;

  case 133:
#line 514 "calc.y"
                                                {
                        printf("parametro dest\t");
                    }
#line 2648 "y.tab.c"
    break;

  case 134:
#line 519 "calc.y"
                                               {
                        printf("parametro path\t");
                    }
#line 2656 "y.tab.c"
    break;

  case 135:
#line 522 "calc.y"
                                                  {
                        printf("parametro name\t");
                    }
#line 2664 "y.tab.c"
    break;

  case 136:
#line 527 "calc.y"
                                               {
                        printf("parametro path\t");
                    }
#line 2672 "y.tab.c"
    break;

  case 137:
#line 530 "calc.y"
                                                 {
                        printf("parametro usr\t");
                    }
#line 2680 "y.tab.c"
    break;

  case 138:
#line 533 "calc.y"
                          {
                        printf("parametro r\t");
                    }
#line 2688 "y.tab.c"
    break;

  case 139:
#line 538 "calc.y"
                                                {
                        printf("parametro usr\t");
                    }
#line 2696 "y.tab.c"
    break;

  case 140:
#line 541 "calc.y"
                                                 {
                        printf("parametro grp\t");
                    }
#line 2704 "y.tab.c"
    break;

  case 141:
#line 546 "calc.y"
                                                      {
                        printf("parametro id\t");
                    }
#line 2712 "y.tab.c"
    break;

  case 142:
#line 551 "calc.y"
                                                      {
                        printf("parametro id\t");
                    }
#line 2720 "y.tab.c"
    break;

  case 143:
#line 556 "calc.y"
                                               {
                        printf("parametro path\t");
                    }
#line 2728 "y.tab.c"
    break;


#line 2732 "y.tab.c"

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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
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
#line 561 "calc.y"

int main(){
    
    FILE *file = fopen("entrada.txt", "r");
    yyin = file;
    yyparse();
    fclose(yyin);
    
    
}

void yyerror(char* s){
    printf("%s\n" , s);
}

