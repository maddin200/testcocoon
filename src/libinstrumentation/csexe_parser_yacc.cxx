
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison LALR(1) parsers in C++
   
      Copyright (C) 2002, 2003, 2004, 2005, 2006, 2007, 2008 Free Software
   Foundation, Inc.
   
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


/* First part of user declarations.  */

/* Line 311 of lalr1.cc  */
#line 19 "csexe_parser.y"

#include "csexe_parser.h"
#include "debug.h"
#include "executionname.h"
#include <QString>
#define yyerror csexe_parsererror
#if OS_WIN32
#pragma warning(disable : 4065)
#endif


/* Line 311 of lalr1.cc  */
#line 53 "csexe_parser_yacc.cxx"


#include "csexe_parser_yacc.hxx"

/* User implementation prologue.  */


/* Line 317 of lalr1.cc  */
#line 62 "csexe_parser_yacc.cxx"

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* FIXME: INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#define YYUSE(e) ((void) (e))

/* Enable debugging if requested.  */
#if YYDEBUG

/* A pseudo ostream that takes yydebug_ into account.  */
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)	\
do {							\
  if (yydebug_)						\
    {							\
      *yycdebug_ << Title << ' ';			\
      yy_symbol_print_ ((Type), (Value), (Location));	\
      *yycdebug_ << std::endl;				\
    }							\
} while (false)

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug_)				\
    yy_reduce_print_ (Rule);		\
} while (false)

# define YY_STACK_PRINT()		\
do {					\
  if (yydebug_)				\
    yystack_print_ ();			\
} while (false)

#else /* !YYDEBUG */

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_REDUCE_PRINT(Rule)
# define YY_STACK_PRINT()

#endif /* !YYDEBUG */

#define yyerrok		(yyerrstatus_ = 0)
#define yyclearin	(yychar = yyempty_)

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)


/* Line 380 of lalr1.cc  */
#line 1 "[Bison:b4_percent_define_default]"

namespace yy {

/* Line 380 of lalr1.cc  */
#line 131 "csexe_parser_yacc.cxx"
#if YYERROR_VERBOSE

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  CSExeParser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr = "";
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
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }

#endif

  /// Build a parser object.
  CSExeParser::CSExeParser (CSExeParserDriver& driver_yyarg)
    :
#if YYDEBUG
      yydebug_ (false),
      yycdebug_ (&std::cerr),
#endif
      driver (driver_yyarg)
  {
  }

  CSExeParser::~CSExeParser ()
  {
  }

#if YYDEBUG
  /*--------------------------------.
  | Print this symbol on YYOUTPUT.  |
  `--------------------------------*/

  inline void
  CSExeParser::yy_symbol_value_print_ (int yytype,
			   const semantic_type* yyvaluep, const location_type* yylocationp)
  {
    YYUSE (yylocationp);
    YYUSE (yyvaluep);
    switch (yytype)
      {
         default:
	  break;
      }
  }


  void
  CSExeParser::yy_symbol_print_ (int yytype,
			   const semantic_type* yyvaluep, const location_type* yylocationp)
  {
    *yycdebug_ << (yytype < yyntokens_ ? "token" : "nterm")
	       << ' ' << yytname_[yytype] << " ("
	       << *yylocationp << ": ";
    yy_symbol_value_print_ (yytype, yyvaluep, yylocationp);
    *yycdebug_ << ')';
  }
#endif

  void
  CSExeParser::yydestruct_ (const char* yymsg,
			   int yytype, semantic_type* yyvaluep, location_type* yylocationp)
  {
    YYUSE (yylocationp);
    YYUSE (yymsg);
    YYUSE (yyvaluep);

    YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

    switch (yytype)
      {
        case 31: /* "module_name" */

/* Line 480 of lalr1.cc  */
#line 84 "csexe_parser.y"
	{ if ((yyvaluep->str)) FREE((yyvaluep->str)); };

/* Line 480 of lalr1.cc  */
#line 238 "csexe_parser_yacc.cxx"
	break;
      case 39: /* "str" */

/* Line 480 of lalr1.cc  */
#line 84 "csexe_parser.y"
	{ if ((yyvaluep->str)) FREE((yyvaluep->str)); };

/* Line 480 of lalr1.cc  */
#line 247 "csexe_parser_yacc.cxx"
	break;

	default:
	  break;
      }
  }

  void
  CSExeParser::yypop_ (unsigned int n)
  {
    yystate_stack_.pop (n);
    yysemantic_stack_.pop (n);
    yylocation_stack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  CSExeParser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  CSExeParser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  CSExeParser::debug_level_type
  CSExeParser::debug_level () const
  {
    return yydebug_;
  }

  void
  CSExeParser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif

  int
  CSExeParser::parse ()
  {
    /// Lookahead and lookahead in internal form.
    int yychar = yyempty_;
    int yytoken = 0;

    /* State.  */
    int yyn;
    int yylen = 0;
    int yystate = 0;

    /* Error handling.  */
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// Semantic value of the lookahead.
    semantic_type yylval;
    /// Location of the lookahead.
    location_type yylloc;
    /// The locations where the error started and ended.
    location_type yyerror_range[2];

    /// $$.
    semantic_type yyval;
    /// @$.
    location_type yyloc;

    int yyresult;

    YYCDEBUG << "Starting parse" << std::endl;


    /* User initialization code.  */
    
/* Line 553 of lalr1.cc  */
#line 58 "csexe_parser.y"
{
 // Initialize the initial location.
}

/* Line 553 of lalr1.cc  */
#line 332 "csexe_parser_yacc.cxx"

    /* Initialize the stacks.  The initial state will be pushed in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystate_stack_ = state_stack_type (0);
    yysemantic_stack_ = semantic_stack_type (0);
    yylocation_stack_ = location_stack_type (0);
    yysemantic_stack_.push (yylval);
    yylocation_stack_.push (yylloc);

    /* New state.  */
  yynewstate:
    yystate_stack_.push (yystate);
    YYCDEBUG << "Entering state " << yystate << std::endl;

    /* Accept?  */
    if (yystate == yyfinal_)
      goto yyacceptlab;

    goto yybackup;

    /* Backup.  */
  yybackup:

    /* Try to take a decision without lookahead.  */
    yyn = yypact_[yystate];
    if (yyn == yypact_ninf_)
      goto yydefault;

    /* Read a lookahead token.  */
    if (yychar == yyempty_)
      {
	YYCDEBUG << "Reading a token: ";
	yychar = yylex (&yylval, driver);
      }


    /* Convert token to internal form.  */
    if (yychar <= yyeof_)
      {
	yychar = yytoken = yyeof_;
	YYCDEBUG << "Now at end of input." << std::endl;
      }
    else
      {
	yytoken = yytranslate_ (yychar);
	YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
      }

    /* If the proper action on seeing token YYTOKEN is to reduce or to
       detect an error, take that action.  */
    yyn += yytoken;
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yytoken)
      goto yydefault;

    /* Reduce or error.  */
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
	if (yyn == 0 || yyn == yytable_ninf_)
	goto yyerrlab;
	yyn = -yyn;
	goto yyreduce;
      }

    /* Shift the lookahead token.  */
    YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

    /* Discard the token being shifted.  */
    yychar = yyempty_;

    yysemantic_stack_.push (yylval);
    yylocation_stack_.push (yylloc);

    /* Count tokens shifted since error; after three, turn off error
       status.  */
    if (yyerrstatus_)
      --yyerrstatus_;

    yystate = yyn;
    goto yynewstate;

  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystate];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;

  /*-----------------------------.
  | yyreduce -- Do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    /* If YYLEN is nonzero, implement the default value of the action:
       `$$ = $1'.  Otherwise, use the top of the stack.

       Otherwise, the following line sets YYVAL to garbage.
       This behavior is undocumented and Bison
       users should not rely upon it.  */
    if (yylen)
      yyval = yysemantic_stack_[yylen - 1];
    else
      yyval = yysemantic_stack_[0];

    {
      slice<location_type, location_stack_type> slice (yylocation_stack_, yylen);
      YYLLOC_DEFAULT (yyloc, slice, yylen);
    }
    YY_REDUCE_PRINT (yyn);
    switch (yyn)
      {
	  case 6:

/* Line 678 of lalr1.cc  */
#line 99 "csexe_parser.y"
    {
                      if (! driver.begin_csexe_measurement())
                      { // Interrupt
                        YYERROR;
                      }
                    }
    break;

  case 7:

/* Line 678 of lalr1.cc  */
#line 106 "csexe_parser.y"
    {
                      driver.end_csexe_measurement();
                    }
    break;

  case 9:

/* Line 678 of lalr1.cc  */
#line 115 "csexe_parser.y"
    {
                    driver.begin_measurement();
                  }
    break;

  case 14:

/* Line 678 of lalr1.cc  */
#line 129 "csexe_parser.y"
    {
                        long nb_mes=(yysemantic_stack_[(6) - (2)].l_value);
                        unsigned long signature=(yysemantic_stack_[(6) - (4)].ul_value);
                        QString module=QString((yysemantic_stack_[(6) - (6)].str));
                        (yysemantic_stack_[(6) - (6)].str)=NULL;
                        driver.init_add_instrumentation(module,nb_mes,signature);
                     }
    break;

  case 15:

/* Line 678 of lalr1.cc  */
#line 137 "csexe_parser.y"
    {
                        driver.endup_add_instrumentation();
                     }
    break;

  case 18:

/* Line 678 of lalr1.cc  */
#line 149 "csexe_parser.y"
    { (yyval.str)=(yysemantic_stack_[(1) - (1)].str); (yysemantic_stack_[(1) - (1)].str)=NULL; }
    break;

  case 25:

/* Line 678 of lalr1.cc  */
#line 165 "csexe_parser.y"
    { driver.set_status(Executions::EXECUTION_STATUS_PASSED); }
    break;

  case 26:

/* Line 678 of lalr1.cc  */
#line 167 "csexe_parser.y"
    { driver.set_status(Executions::EXECUTION_STATUS_FAILED); }
    break;

  case 27:

/* Line 678 of lalr1.cc  */
#line 169 "csexe_parser.y"
    { driver.set_status(Executions::EXECUTION_STATUS_TO_BE_CHECK_MANUALLY); }
    break;

  case 28:

/* Line 678 of lalr1.cc  */
#line 171 "csexe_parser.y"
    { driver.set_status(Executions::EXECUTION_STATUS_UNKNOWN); }
    break;

  case 33:

/* Line 678 of lalr1.cc  */
#line 182 "csexe_parser.y"
    {
              driver.set_title(QString::fromUtf8((yysemantic_stack_[(2) - (2)].str)).trimmed());
            }
    break;

  case 34:

/* Line 678 of lalr1.cc  */
#line 186 "csexe_parser.y"
    {
              driver.set_title(QString());
            }
    break;

  case 35:

/* Line 678 of lalr1.cc  */
#line 192 "csexe_parser.y"
    { (yyval.str)=(yysemantic_stack_[(1) - (1)].str); }
    break;



/* Line 678 of lalr1.cc  */
#line 563 "csexe_parser_yacc.cxx"
	default:
          break;
      }
    YY_SYMBOL_PRINT ("-> $$ =", yyr1_[yyn], &yyval, &yyloc);

    yypop_ (yylen);
    yylen = 0;
    YY_STACK_PRINT ();

    yysemantic_stack_.push (yyval);
    yylocation_stack_.push (yyloc);

    /* Shift the result of the reduction.  */
    yyn = yyr1_[yyn];
    yystate = yypgoto_[yyn - yyntokens_] + yystate_stack_[0];
    if (0 <= yystate && yystate <= yylast_
	&& yycheck_[yystate] == yystate_stack_[0])
      yystate = yytable_[yystate];
    else
      yystate = yydefgoto_[yyn - yyntokens_];
    goto yynewstate;

  /*------------------------------------.
  | yyerrlab -- here on detecting error |
  `------------------------------------*/
  yyerrlab:
    /* If not already recovering from an error, report this error.  */
    if (!yyerrstatus_)
      {
	++yynerrs_;
	error (yylloc, yysyntax_error_ (yystate, yytoken));
      }

    yyerror_range[0] = yylloc;
    if (yyerrstatus_ == 3)
      {
	/* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

	if (yychar <= yyeof_)
	  {
	  /* Return failure if at end of input.  */
	  if (yychar == yyeof_)
	    YYABORT;
	  }
	else
	  {
	    yydestruct_ ("Error: discarding", yytoken, &yylval, &yylloc);
	    yychar = yyempty_;
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
    if (false)
      goto yyerrorlab;

    yyerror_range[0] = yylocation_stack_[yylen - 1];
    /* Do not reclaim the symbols of the rule which action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    yystate = yystate_stack_[0];
    goto yyerrlab1;

  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;	/* Each real token shifted decrements this.  */

    for (;;)
      {
	yyn = yypact_[yystate];
	if (yyn != yypact_ninf_)
	{
	  yyn += yyterror_;
	  if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yyterror_)
	    {
	      yyn = yytable_[yyn];
	      if (0 < yyn)
		break;
	    }
	}

	/* Pop the current state because it cannot handle the error token.  */
	if (yystate_stack_.height () == 1)
	YYABORT;

	yyerror_range[0] = yylocation_stack_[0];
	yydestruct_ ("Error: popping",
		     yystos_[yystate],
		     &yysemantic_stack_[0], &yylocation_stack_[0]);
	yypop_ ();
	yystate = yystate_stack_[0];
	YY_STACK_PRINT ();
      }

    yyerror_range[1] = yylloc;
    // Using YYLLOC is tempting, but would change the location of
    // the lookahead.  YYLOC is available though.
    YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
    yysemantic_stack_.push (yylval);
    yylocation_stack_.push (yyloc);

    /* Shift the error token.  */
    YY_SYMBOL_PRINT ("Shifting", yystos_[yyn],
		     &yysemantic_stack_[0], &yylocation_stack_[0]);

    yystate = yyn;
    goto yynewstate;

    /* Accept.  */
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;

    /* Abort.  */
  yyabortlab:
    yyresult = 1;
    goto yyreturn;

  yyreturn:
    if (yychar != yyempty_)
      yydestruct_ ("Cleanup: discarding lookahead", yytoken, &yylval, &yylloc);

    /* Do not reclaim the symbols of the rule which action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (yystate_stack_.height () != 1)
      {
	yydestruct_ ("Cleanup: popping",
		   yystos_[yystate_stack_[0]],
		   &yysemantic_stack_[0],
		   &yylocation_stack_[0]);
	yypop_ ();
      }

    return yyresult;
  }

  // Generate an error message.
  std::string
  CSExeParser::yysyntax_error_ (int yystate, int tok)
  {
    std::string res;
    YYUSE (yystate);
#if YYERROR_VERBOSE
    int yyn = yypact_[yystate];
    if (yypact_ninf_ < yyn && yyn <= yylast_)
      {
	/* Start YYX at -YYN if negative to avoid negative indexes in
	   YYCHECK.  */
	int yyxbegin = yyn < 0 ? -yyn : 0;

	/* Stay within bounds of both yycheck and yytname.  */
	int yychecklim = yylast_ - yyn + 1;
	int yyxend = yychecklim < yyntokens_ ? yychecklim : yyntokens_;
	int count = 0;
	for (int x = yyxbegin; x < yyxend; ++x)
	  if (yycheck_[x + yyn] == x && x != yyterror_)
	    ++count;

	// FIXME: This method of building the message is not compatible
	// with internationalization.  It should work like yacc.c does it.
	// That is, first build a string that looks like this:
	// "syntax error, unexpected %s or %s or %s"
	// Then, invoke YY_ on this string.
	// Finally, use the string as a format to output
	// yytname_[tok], etc.
	// Until this gets fixed, this message appears in English only.
	res = "syntax error, unexpected ";
	res += yytnamerr_ (yytname_[tok]);
	if (count < 5)
	  {
	    count = 0;
	    for (int x = yyxbegin; x < yyxend; ++x)
	      if (yycheck_[x + yyn] == x && x != yyterror_)
		{
		  res += (!count++) ? ", expecting " : " or ";
		  res += yytnamerr_ (yytname_[x]);
		}
	  }
      }
    else
#endif
      res = YY_("syntax error");
    return res;
  }


  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
  const signed char CSExeParser::yypact_ninf_ = -14;
  const signed char
  CSExeParser::yypact_[] =
  {
         1,    -8,     6,   -14,   -14,    -2,   -14,   -14,   -14,   -14,
     -14,   -14,     8,    -5,   -14,   -14,     5,   -14,     4,   -14,
      -5,   -14,   -14,   -14,    -1,   -14,    10,    -2,   -14,    -1,
     -14,     9,   -14,   -14,    15,   -14,    12,     5,   -14,   -14,
      -3,     0,   -14,   -14,   -14
  };

  /* YYDEFACT[S] -- default rule to reduce with in state S when YYTABLE
     doesn't specify something else to do.  Zero means the default is an
     error.  */
  const unsigned char
  CSExeParser::yydefact_[] =
  {
        21,     0,     0,     6,    22,    23,    25,    26,    27,    28,
       1,     2,     6,    29,    24,     5,    34,     7,     0,    30,
      31,    35,    33,     9,    10,    32,     0,    21,    11,    12,
      16,     0,     8,    13,     0,    17,     0,     0,    14,    18,
       0,     0,    15,    20,    19
  };

  /* YYPGOTO[NTERM-NUM].  */
  const signed char
  CSExeParser::yypgoto_[] =
  {
       -14,   -14,    11,   -14,   -14,   -14,   -14,   -14,    -9,   -14,
     -14,   -14,   -14,   -14,   -14,    -6,    17,   -14,   -14,     7,
     -14,   -13
  };

  /* YYDEFGOTO[NTERM-NUM].  */
  const signed char
  CSExeParser::yydefgoto_[] =
  {
        -1,     2,    11,    12,    13,    17,    24,    27,    28,    29,
      40,    31,    36,    38,    42,     3,     4,     5,    18,    19,
      20,    22
  };

  /* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule which
     number is the opposite.  If zero, do what YYDEFACT says.  */
  const signed char CSExeParser::yytable_ninf_ = -5;
  const signed char
  CSExeParser::yytable_[] =
  {
        43,    -3,     6,     7,     8,     9,    10,     1,    -4,    16,
       1,    21,    23,    41,    26,    30,    34,    44,    35,    37,
      33,    32,    14,    15,    39,     0,     0,    25
  };

  /* YYCHECK.  */
  const signed char
  CSExeParser::yycheck_[] =
  {
         0,     0,    10,    11,    12,    13,     0,     9,     0,    14,
       9,     6,     8,    16,    15,     5,     7,    17,     3,     7,
      29,    27,     5,    12,    37,    -1,    -1,    20
  };

  /* STOS_[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
  const unsigned char
  CSExeParser::yystos_[] =
  {
         0,     9,    19,    33,    34,    35,    10,    11,    12,    13,
       0,    20,    21,    22,    34,    20,    14,    23,    36,    37,
      38,     6,    39,     8,    24,    37,    15,    25,    26,    27,
       5,    29,    33,    26,     7,     3,    30,     7,    31,    39,
      28,    16,    32,     0,    17
  };

#if YYDEBUG
  /* TOKEN_NUMBER_[YYLEX-NUM] -- Internal symbol number corresponding
     to YYLEX-NUM.  */
  const unsigned short int
  CSExeParser::yytoken_number_[] =
  {
         0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272
  };
#endif

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
  const unsigned char
  CSExeParser::yyr1_[] =
  {
         0,    18,    19,    19,    20,    20,    22,    21,    23,    24,
      25,    25,    26,    26,    28,    27,    29,    30,    31,    32,
      32,    33,    33,    34,    34,    35,    35,    35,    35,    36,
      36,    37,    37,    38,    38,    39
  };

  /* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
  const unsigned char
  CSExeParser::yyr2_[] =
  {
         0,     2,     2,     0,     1,     2,     0,     2,     4,     1,
       0,     1,     1,     2,     0,     8,     1,     1,     1,     2,
       2,     0,     1,     1,     2,     2,     2,     2,     2,     0,
       1,     1,     2,     2,     1,     1
  };

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
  /* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
     First, the terminals, then, starting at \a yyntokens_, nonterminals.  */
  const char*
  const CSExeParser::yytname_[] =
  {
    "\"EOF\"", "error", "$undefined", "\"unsigned value\"", "__UINT__",
  "\"value\"", "\"string\"", "\":\"", "\"execution report\"",
  "\"execution status (! character)\"", "\"status PASSED\"",
  "\"status FAILED\"", "\"status CHECKED_MANUALLY\"", "\"status UNKNOWN\"",
  "\"title\"", "\"execution report source file\"",
  "\"execution report values\"", "\"end of line\"", "$accept",
  "csexe_parser", "csexe_measurements", "csexe_measurement", "$@1",
  "csexe_measurement_", "csexe_start_banner", "csexe_instrumentations_opt",
  "csexe_instrumentations", "csexe_instrumentation", "$@2", "nb_mes",
  "signature", "module_name", "module_instrumentation", "csexe_status_opt",
  "csexe_status", "csexe_one_status", "csexe_titles_opt", "csexe_titles",
  "csexe_title", "str", 0
  };
#endif

#if YYDEBUG
  /* YYRHS -- A `-1'-separated list of the rules' RHS.  */
  const CSExeParser::rhs_number_type
  CSExeParser::yyrhs_[] =
  {
        19,     0,    -1,    33,    20,    -1,    -1,    21,    -1,    21,
      20,    -1,    -1,    22,    23,    -1,    36,    24,    25,    33,
      -1,     8,    -1,    -1,    26,    -1,    27,    -1,    27,    26,
      -1,    -1,    15,    29,     7,    30,     7,    31,    28,    32,
      -1,     5,    -1,     3,    -1,    39,    -1,    16,    17,    -1,
      16,     0,    -1,    -1,    34,    -1,    35,    -1,    35,    34,
      -1,     9,    10,    -1,     9,    11,    -1,     9,    12,    -1,
       9,    13,    -1,    -1,    37,    -1,    38,    -1,    38,    37,
      -1,    14,    39,    -1,    14,    -1,     6,    -1
  };

  /* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
     YYRHS.  */
  const unsigned char
  CSExeParser::yyprhs_[] =
  {
         0,     0,     3,     6,     7,     9,    12,    13,    16,    21,
      23,    24,    26,    28,    31,    32,    41,    43,    45,    47,
      50,    53,    54,    56,    58,    61,    64,    67,    70,    73,
      74,    76,    78,    81,    84,    86
  };

  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
  const unsigned char
  CSExeParser::yyrline_[] =
  {
         0,    91,    91,    92,    95,    96,    99,    99,   111,   114,
     120,   121,   124,   125,   129,   128,   142,   145,   148,   152,
     153,   156,   157,   160,   161,   164,   166,   168,   170,   173,
     174,   177,   178,   181,   185,   191
  };

  // Print the state stack on the debug stream.
  void
  CSExeParser::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (state_stack_type::const_iterator i = yystate_stack_.begin ();
	 i != yystate_stack_.end (); ++i)
      *yycdebug_ << ' ' << *i;
    *yycdebug_ << std::endl;
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  CSExeParser::yy_reduce_print_ (int yyrule)
  {
    unsigned int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    /* Print the symbols being reduced, and their result.  */
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
	       << " (line " << yylno << "):" << std::endl;
    /* The symbols being reduced.  */
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
		       yyrhs_[yyprhs_[yyrule] + yyi],
		       &(yysemantic_stack_[(yynrhs) - (yyi + 1)]),
		       &(yylocation_stack_[(yynrhs) - (yyi + 1)]));
  }
#endif // YYDEBUG

  /* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
  CSExeParser::token_number_type
  CSExeParser::yytranslate_ (int t)
  {
    static
    const token_number_type
    translate_table[] =
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
      15,    16,    17
    };
    if ((unsigned int) t <= yyuser_token_number_max_)
      return translate_table[t];
    else
      return yyundef_token_;
  }

  const int CSExeParser::yyeof_ = 0;
  const int CSExeParser::yylast_ = 27;
  const int CSExeParser::yynnts_ = 22;
  const int CSExeParser::yyempty_ = -2;
  const int CSExeParser::yyfinal_ = 10;
  const int CSExeParser::yyterror_ = 1;
  const int CSExeParser::yyerrcode_ = 256;
  const int CSExeParser::yyntokens_ = 18;

  const unsigned int CSExeParser::yyuser_token_number_max_ = 272;
  const CSExeParser::token_number_type CSExeParser::yyundef_token_ = 2;


/* Line 1054 of lalr1.cc  */
#line 1 "[Bison:b4_percent_define_default]"

} // yy

/* Line 1054 of lalr1.cc  */
#line 1023 "csexe_parser_yacc.cxx"


/* Line 1056 of lalr1.cc  */
#line 195 "csexe_parser.y"


#include <stdio.h>
#include <QString>


bool CSExeParser::parse(const QString &filename,QIODevice &file,ExecutionNames &new_executions,QString &info,QString &short_status,QString &errmsgs,QHash<ExecutionName,Executions::modules_executions_private_t> *undo_backup_p,CSMesIO::progress_function_t progress_p)
{
  info.clear();
  _file_p=&file;

  if ( file.open( QIODevice::ReadOnly ) )
  {
    bool ret;
    init_csexe_parserlex();
    DEBUG2("Start parsing:#%s\n",text_line);
    CSExeParserDriver driver(_csmes,*this);
    ret = driver.parse(filename,new_executions,info,short_status,errmsgs,undo_backup_p,( (!file.isSequential()) && (progress_p!=NULL) )?progress_p:NULL);
    DEBUG3("End parsing(ret=%i):#%s\n",driver.result,text_line);
    file.close();
    return ret;
  }

  short_status=QObject::tr("Error opening I/O device");
  info=short_status;
  return false;
}


void yy::CSExeParser::error (const yy::CSExeParser::location_type& l, const std::string& m)
{
 driver.error (QString::fromStdString(m));
}

