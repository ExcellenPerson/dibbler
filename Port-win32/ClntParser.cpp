#define YY_clntParser_h_included

/*  A Bison++ parser, made from ClntParser.y  */

 /* with Bison++ version bison++ Version 1.21-8, adapted from GNU bison by coetmeur@icdc.fr
  */

/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
/* Skeleton output parser for bison,
   Copyright (C) 1984, 1989, 1990 Bob Corbett and Richard Stallman

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 1, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.  */

/* HEADER SECTION */
#if defined( _MSDOS ) || defined(MSDOS) || defined(__MSDOS__) 
#define __MSDOS_AND_ALIKE
#endif
#if defined(_WINDOWS) && defined(_MSC_VER)
#define __HAVE_NO_ALLOCA
#define __MSDOS_AND_ALIKE
#endif

#ifndef alloca
#if defined( __GNUC__)
#define alloca __builtin_alloca

#elif (!defined (__STDC__) && defined (sparc)) || defined (__sparc__) || defined (__sparc)  || defined (__sgi)
#include <alloca.h>

#elif defined (__MSDOS_AND_ALIKE)
#include <malloc.h>
#ifndef __TURBOC__
/* MS C runtime lib */
#define alloca _alloca
#endif

#elif defined(_AIX)
#include <malloc.h>
#pragma alloca

#elif defined(__hpux)
#ifdef __cplusplus
extern "C" {
void *alloca (unsigned int);
};
#else /* not __cplusplus */
void *alloca ();
#endif /* not __cplusplus */

#endif /* not _AIX  not MSDOS, or __TURBOC__ or _AIX, not sparc.  */
#endif /* alloca not defined.  */
#ifdef c_plusplus
#ifndef __cplusplus
#define __cplusplus
#endif
#endif
#ifdef __cplusplus
#ifndef YY_USE_CLASS
#define YY_USE_CLASS
#endif
#else
#ifndef __STDC__
#define const
#endif
#endif
#include <stdio.h>
#define YYBISON 1  

#include <iostream>
#include <string>
#include <malloc.h>
#include "FlexLexer.h"
#include "DHCPConst.h"
#include "SmartPtr.h"
#include "Container.h"
#include "ClntParser.h"
#include "ClntParsGlobalOpt.h"
#include "ClntCfgIface.h"
#include "ClntCfgAddr.h"
#include "ClntCfgIA.h"
#include "ClntCfgGroup.h"
    
#define YY_USE_CLASS
#define YY_clntParser_MEMBERS  yyFlexLexer * lex; \
/*List of options in scope stack,the most fresh is last in the list*/ \
TContainer<SmartPtr<TClntParsGlobalOpt> > ParserOptStack; \
/*List of parsed interfaces/IAs/Addresses, last */ \
/*interface/IA/address is just being parsing or have been just parsed*/ \
/*FIXME:Don't forget to clear this lists in apropriate moment*/ \
TContainer<SmartPtr<TClntCfgIface> > ClntCfgIfaceLst; \
TContainer<SmartPtr<TClntCfgGroup> > ClntCfgGroupLst; \
TContainer<SmartPtr<TClntCfgIA> >    ClntCfgIALst;    \
TContainer<SmartPtr<TClntCfgAddr> >  ClntCfgAddrLst;  \
/*Pointer to list which should contain either rejected servers or */ \
/*preffered servers*/  \
TContainer<SmartPtr<TStationID> > PresentStationLst;\
TContainer<SmartPtr<TIPv6Addr> > PresentAddrLst; \
/*method check whether interface with id=ifaceNr has been */ \
/*already declared */ \
bool CheckIsIface(int ifaceNr); \
/* method check whether interface with id=ifaceName has been already declared */ \
bool CheckIsIface(string ifaceName); \
void StartIfaceDeclaration(); \
bool EndIfaceDeclaration(); \
void EmptyIface(); \
void StartIADeclaration(bool aggregation); \
void EndIADeclaration(long iaCnt); \
void EmptyIA(); \
void EmptyAddr(); \

#define YY_clntParser_CONSTRUCTOR_PARAM  yyFlexLexer * lex
#define YY_clntParser_CONSTRUCTOR_CODE  \
   this->lex = lex; \
    ParserOptStack.append(new TClntParsGlobalOpt()); \
    ParserOptStack.getFirst()->setIAIDCnt(1);

typedef union    
{
    int          ival;    
    char         *strval;  
    struct SDuid  {      
        int         length;    
        char*     duid;  
    } duidval;  
    char    addrval[16];  
    ESendOpt  SendOpt;  
    EReqOpt   ReqOpt; 
} yy_clntParser_stype;
#define YY_clntParser_STYPE yy_clntParser_stype
/* %{ and %header{ and %union, during decl */
#define YY_clntParser_BISON 1
#ifndef YY_clntParser_COMPATIBILITY
#ifndef YY_USE_CLASS
#define  YY_clntParser_COMPATIBILITY 1
#else
#define  YY_clntParser_COMPATIBILITY 0
#endif
#endif

#if YY_clntParser_COMPATIBILITY != 0
/* backward compatibility */
#ifdef YYLTYPE
#ifndef YY_clntParser_LTYPE
#define YY_clntParser_LTYPE YYLTYPE
#endif
#endif
#ifdef YYSTYPE
#ifndef YY_clntParser_STYPE 
#define YY_clntParser_STYPE YYSTYPE
#endif
#endif
#ifdef YYDEBUG
#ifndef YY_clntParser_DEBUG
#define  YY_clntParser_DEBUG YYDEBUG
#endif
#endif
#ifdef YY_clntParser_STYPE
#ifndef yystype
#define yystype YY_clntParser_STYPE
#endif
#endif
/* use goto to be compatible */
#ifndef YY_clntParser_USE_GOTO
#define YY_clntParser_USE_GOTO 1
#endif
#endif

/* use no goto to be clean in C++ */
#ifndef YY_clntParser_USE_GOTO
#define YY_clntParser_USE_GOTO 0
#endif

#ifndef YY_clntParser_PURE
/*  YY_clntParser_PURE */
#endif

/* section apres lecture def, avant lecture grammaire S2 */
/* prefix */
#ifndef YY_clntParser_DEBUG
/* YY_clntParser_DEBUG */
#endif


#ifndef YY_clntParser_LSP_NEEDED
 /* YY_clntParser_LSP_NEEDED*/
#endif



/* DEFAULT LTYPE*/
#ifdef YY_clntParser_LSP_NEEDED
#ifndef YY_clntParser_LTYPE
typedef
  struct yyltype
    {
      int timestamp;
      int first_line;
      int first_column;
      int last_line;
      int last_column;
      char *text;
   }
  yyltype;

#define YY_clntParser_LTYPE yyltype
#endif
#endif
/* DEFAULT STYPE*/
      /* We used to use `unsigned long' as YY_clntParser_STYPE on MSDOS,
	 but it seems better to be consistent.
	 Most programs should declare their own type anyway.  */

#ifndef YY_clntParser_STYPE
#define YY_clntParser_STYPE int
#endif
/* DEFAULT MISCELANEOUS */
#ifndef YY_clntParser_PARSE
#define YY_clntParser_PARSE yyparse
#endif
#ifndef YY_clntParser_LEX
#define YY_clntParser_LEX yylex
#endif
#ifndef YY_clntParser_LVAL
#define YY_clntParser_LVAL yylval
#endif
#ifndef YY_clntParser_LLOC
#define YY_clntParser_LLOC yylloc
#endif
#ifndef YY_clntParser_CHAR
#define YY_clntParser_CHAR yychar
#endif
#ifndef YY_clntParser_NERRS
#define YY_clntParser_NERRS yynerrs
#endif
#ifndef YY_clntParser_DEBUG_FLAG
#define YY_clntParser_DEBUG_FLAG yydebug
#endif
#ifndef YY_clntParser_ERROR
#define YY_clntParser_ERROR yyerror
#endif
#ifndef YY_clntParser_PARSE_PARAM
#ifndef __STDC__
#ifndef __cplusplus
#ifndef YY_USE_CLASS
#define YY_clntParser_PARSE_PARAM
#ifndef YY_clntParser_PARSE_PARAM_DEF
#define YY_clntParser_PARSE_PARAM_DEF
#endif
#endif
#endif
#endif
#ifndef YY_clntParser_PARSE_PARAM
#define YY_clntParser_PARSE_PARAM void
#endif
#endif
#if YY_clntParser_COMPATIBILITY != 0
/* backward compatibility */
#ifdef YY_clntParser_LTYPE
#ifndef YYLTYPE
#define YYLTYPE YY_clntParser_LTYPE
#else
/* WARNING obsolete !!! user defined YYLTYPE not reported into generated header */
#endif
#endif
#ifndef YYSTYPE
#define YYSTYPE YY_clntParser_STYPE
#else
/* WARNING obsolete !!! user defined YYSTYPE not reported into generated header */
#endif
#ifdef YY_clntParser_PURE
#ifndef YYPURE
#define YYPURE YY_clntParser_PURE
#endif
#endif
#ifdef YY_clntParser_DEBUG
#ifndef YYDEBUG
#define YYDEBUG YY_clntParser_DEBUG 
#endif
#endif
#ifndef YY_clntParser_ERROR_VERBOSE
#ifdef YYERROR_VERBOSE
#define YY_clntParser_ERROR_VERBOSE YYERROR_VERBOSE
#endif
#endif
#ifndef YY_clntParser_LSP_NEEDED
#ifdef YYLSP_NEEDED
#define YY_clntParser_LSP_NEEDED YYLSP_NEEDED
#endif
#endif
#endif
#ifndef YY_USE_CLASS
/* TOKEN C */
#define	T1_	258
#define	T2_	259
#define	PREF_TIME_	260
#define	DNS_SERVER_	261
#define	VALID_TIME_	262
#define	NTP_SERVER_	263
#define	DOMAIN_	264
#define	TIME_ZONE_	265
#define	IFACE_	266
#define	NO_CONFIG_	267
#define	REJECT_SERVERS_	268
#define	PREFERRED_SERVERS_	269
#define	REQUIRE_	270
#define	REQUEST_	271
#define	SEND_	272
#define	DEFAULT_	273
#define	SUPERSEDE_	274
#define	APPEND_	275
#define	PREPEND_	276
#define	IA_	277
#define	ADDRES_	278
#define	IPV6ADDR_	279
#define	LOGLEVEL_	280
#define	WORKDIR_	281
#define	RAPID_COMMIT_	282
#define	NOIA_	283
#define	STRING_	284
#define	HEXNUMBER_	285
#define	INTNUMBER_	286
#define	DUID_	287

 /* #defines tokens */
#else
/* CLASS */
#ifndef YY_clntParser_CLASS
#define YY_clntParser_CLASS clntParser
#endif
#ifndef YY_clntParser_INHERIT
#define YY_clntParser_INHERIT
#endif
#ifndef YY_clntParser_MEMBERS
#define YY_clntParser_MEMBERS 
#endif
#ifndef YY_clntParser_LEX_BODY
#define YY_clntParser_LEX_BODY  
#endif
#ifndef YY_clntParser_ERROR_BODY
#define YY_clntParser_ERROR_BODY  
#endif
#ifndef YY_clntParser_CONSTRUCTOR_PARAM
#define YY_clntParser_CONSTRUCTOR_PARAM
#endif
#ifndef YY_clntParser_CONSTRUCTOR_CODE
#define YY_clntParser_CONSTRUCTOR_CODE
#endif
#ifndef YY_clntParser_CONSTRUCTOR_INIT
#define YY_clntParser_CONSTRUCTOR_INIT
#endif
/* choose between enum and const */
#ifndef YY_clntParser_USE_CONST_TOKEN
#define YY_clntParser_USE_CONST_TOKEN 0
/* yes enum is more compatible with flex,  */
/* so by default we use it */ 
#endif
#if YY_clntParser_USE_CONST_TOKEN != 0
#ifndef YY_clntParser_ENUM_TOKEN
#define YY_clntParser_ENUM_TOKEN yy_clntParser_enum_token
#endif
#endif

class YY_clntParser_CLASS YY_clntParser_INHERIT
{
public: 
#if YY_clntParser_USE_CONST_TOKEN != 0
/* static const int token ... */
static const int T1_;
static const int T2_;
static const int PREF_TIME_;
static const int DNS_SERVER_;
static const int VALID_TIME_;
static const int NTP_SERVER_;
static const int DOMAIN_;
static const int TIME_ZONE_;
static const int IFACE_;
static const int NO_CONFIG_;
static const int REJECT_SERVERS_;
static const int PREFERRED_SERVERS_;
static const int REQUIRE_;
static const int REQUEST_;
static const int SEND_;
static const int DEFAULT_;
static const int SUPERSEDE_;
static const int APPEND_;
static const int PREPEND_;
static const int IA_;
static const int ADDRES_;
static const int IPV6ADDR_;
static const int LOGLEVEL_;
static const int WORKDIR_;
static const int RAPID_COMMIT_;
static const int NOIA_;
static const int STRING_;
static const int HEXNUMBER_;
static const int INTNUMBER_;
static const int DUID_;

 /* decl const */
#else
enum YY_clntParser_ENUM_TOKEN { YY_clntParser_NULL_TOKEN=0
	,T1_=258
	,T2_=259
	,PREF_TIME_=260
	,DNS_SERVER_=261
	,VALID_TIME_=262
	,NTP_SERVER_=263
	,DOMAIN_=264
	,TIME_ZONE_=265
	,IFACE_=266
	,NO_CONFIG_=267
	,REJECT_SERVERS_=268
	,PREFERRED_SERVERS_=269
	,REQUIRE_=270
	,REQUEST_=271
	,SEND_=272
	,DEFAULT_=273
	,SUPERSEDE_=274
	,APPEND_=275
	,PREPEND_=276
	,IA_=277
	,ADDRES_=278
	,IPV6ADDR_=279
	,LOGLEVEL_=280
	,WORKDIR_=281
	,RAPID_COMMIT_=282
	,NOIA_=283
	,STRING_=284
	,HEXNUMBER_=285
	,INTNUMBER_=286
	,DUID_=287

 /* enum token */
     }; /* end of enum declaration */
#endif
public:
 int YY_clntParser_PARSE (YY_clntParser_PARSE_PARAM);
 virtual void YY_clntParser_ERROR(char *msg) YY_clntParser_ERROR_BODY;
#ifdef YY_clntParser_PURE
#ifdef YY_clntParser_LSP_NEEDED
 virtual int  YY_clntParser_LEX (YY_clntParser_STYPE *YY_clntParser_LVAL,YY_clntParser_LTYPE *YY_clntParser_LLOC) YY_clntParser_LEX_BODY;
#else
 virtual int  YY_clntParser_LEX (YY_clntParser_STYPE *YY_clntParser_LVAL) YY_clntParser_LEX_BODY;
#endif
#else
 virtual int YY_clntParser_LEX() YY_clntParser_LEX_BODY;
 YY_clntParser_STYPE YY_clntParser_LVAL;
#ifdef YY_clntParser_LSP_NEEDED
 YY_clntParser_LTYPE YY_clntParser_LLOC;
#endif
 int   YY_clntParser_NERRS;
 int    YY_clntParser_CHAR;
#endif
#if YY_clntParser_DEBUG != 0
 int YY_clntParser_DEBUG_FLAG;   /*  nonzero means print parse trace     */
#endif
public:
 YY_clntParser_CLASS(YY_clntParser_CONSTRUCTOR_PARAM);
public:
 YY_clntParser_MEMBERS 
};
/* other declare folow */
#if YY_clntParser_USE_CONST_TOKEN != 0
const int YY_clntParser_CLASS::T1_=258;
const int YY_clntParser_CLASS::T2_=259;
const int YY_clntParser_CLASS::PREF_TIME_=260;
const int YY_clntParser_CLASS::DNS_SERVER_=261;
const int YY_clntParser_CLASS::VALID_TIME_=262;
const int YY_clntParser_CLASS::NTP_SERVER_=263;
const int YY_clntParser_CLASS::DOMAIN_=264;
const int YY_clntParser_CLASS::TIME_ZONE_=265;
const int YY_clntParser_CLASS::IFACE_=266;
const int YY_clntParser_CLASS::NO_CONFIG_=267;
const int YY_clntParser_CLASS::REJECT_SERVERS_=268;
const int YY_clntParser_CLASS::PREFERRED_SERVERS_=269;
const int YY_clntParser_CLASS::REQUIRE_=270;
const int YY_clntParser_CLASS::REQUEST_=271;
const int YY_clntParser_CLASS::SEND_=272;
const int YY_clntParser_CLASS::DEFAULT_=273;
const int YY_clntParser_CLASS::SUPERSEDE_=274;
const int YY_clntParser_CLASS::APPEND_=275;
const int YY_clntParser_CLASS::PREPEND_=276;
const int YY_clntParser_CLASS::IA_=277;
const int YY_clntParser_CLASS::ADDRES_=278;
const int YY_clntParser_CLASS::IPV6ADDR_=279;
const int YY_clntParser_CLASS::LOGLEVEL_=280;
const int YY_clntParser_CLASS::WORKDIR_=281;
const int YY_clntParser_CLASS::RAPID_COMMIT_=282;
const int YY_clntParser_CLASS::NOIA_=283;
const int YY_clntParser_CLASS::STRING_=284;
const int YY_clntParser_CLASS::HEXNUMBER_=285;
const int YY_clntParser_CLASS::INTNUMBER_=286;
const int YY_clntParser_CLASS::DUID_=287;

 /* const YY_clntParser_CLASS::token */
#endif
/*apres const  */
YY_clntParser_CLASS::YY_clntParser_CLASS(YY_clntParser_CONSTRUCTOR_PARAM) YY_clntParser_CONSTRUCTOR_INIT
{
#if YY_clntParser_DEBUG != 0
YY_clntParser_DEBUG_FLAG=0;
#endif
YY_clntParser_CONSTRUCTOR_CODE;
};
#endif


#define	YYFINAL		169
#define	YYFLAG		32768
#define	YYNTBASE	36

#define YYTRANSLATE(x) ((unsigned)(x) <= 287 ? yytranslate[x] : 86)

static const char yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,    35,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,    33,     2,    34,     2,     2,     2,     2,     2,
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
     2,     2,     2,     2,     2,     1,     2,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
    16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
    26,    27,    28,    29,    30,    31,    32
};

#if YY_clntParser_DEBUG != 0
static const short yyprhs[] = {     0,
     0,     2,     3,     5,     7,    10,    13,    14,    21,    22,
    29,    34,    39,    43,    47,    49,    52,    54,    57,    58,
    64,    65,    72,    77,    80,    84,    86,    88,    91,    93,
    96,    97,   103,   104,   111,   116,   120,   123,   125,   127,
   130,   132,   135,   137,   139,   141,   143,   145,   147,   149,
   151,   153,   155,   157,   159,   161,   163,   165,   167,   169,
   172,   174,   177,   178,   182,   183,   187,   190,   194,   197,
   200,   204,   207,   211,   214,   218,   220,   221,   225,   226,
   231,   232,   237,   238,   244,   245,   250,   252,   255,   259,
   263,   268,   270,   273,   277,   281,   286,   288,   289,   293,
   294,   299,   300,   305,   306,   312,   313,   318,   320,   322,
   326,   330,   332,   336,   338,   340,   342,   344,   346,   348,
   350,   352
};

static const short yyrhs[] = {    37,
     0,     0,    50,     0,    38,     0,    37,    50,     0,    37,
    38,     0,     0,    11,    29,    33,    39,    41,    34,     0,
     0,    11,    85,    33,    40,    41,    34,     0,    11,    29,
    33,    34,     0,    11,    85,    33,    34,     0,    11,    29,
    12,     0,    11,    85,    12,     0,    51,     0,    41,    51,
     0,    42,     0,    41,    42,     0,     0,    22,    33,    43,
    45,    34,     0,     0,    22,    85,    33,    44,    45,    34,
     0,    22,    85,    33,    34,     0,    22,    85,     0,    22,
    33,    34,     0,    22,     0,    52,     0,    45,    52,     0,
    46,     0,    45,    46,     0,     0,    23,    33,    47,    49,
    34,     0,     0,    23,    85,    33,    48,    49,    34,     0,
    23,    85,    33,    34,     0,    23,    33,    34,     0,    23,
    85,     0,    23,     0,    53,     0,    49,    53,     0,    24,
     0,    49,    24,     0,    51,     0,    54,     0,    56,     0,
    52,     0,    66,     0,    74,     0,    55,     0,    72,     0,
    73,     0,    64,     0,    65,     0,    57,     0,    59,     0,
    62,     0,    53,     0,    61,     0,    63,     0,    25,    85,
     0,    28,     0,    26,    29,     0,     0,    13,    58,    80,
     0,     0,    14,    60,    80,     0,     5,    85,     0,     5,
    82,    85,     0,    27,    85,     0,     7,    85,     0,     7,
    82,    85,     0,     3,    85,     0,     3,    82,    85,     0,
     4,    85,     0,     4,    82,    85,     0,     6,     0,     0,
     6,    67,    81,     0,     0,     6,    82,    68,    81,     0,
     0,    83,     6,    69,    81,     0,     0,    83,     6,    82,
    70,    81,     0,     0,     6,    84,    71,    81,     0,     9,
     0,     9,    29,     0,     9,    82,    29,     0,    83,     9,
    29,     0,    83,     9,    82,    29,     0,    10,     0,    10,
    29,     0,    10,    82,    29,     0,    83,    10,    29,     0,
    83,    10,    82,    29,     0,     8,     0,     0,     8,    75,
    81,     0,     0,     8,    82,    76,    81,     0,     0,    83,
     8,    77,    81,     0,     0,    83,     8,    82,    78,    81,
     0,     0,     8,    84,    79,    81,     0,    24,     0,    32,
     0,    80,    35,    24,     0,    80,    35,    32,     0,    24,
     0,    81,    35,    24,     0,    17,     0,    18,     0,    19,
     0,    16,     0,    15,     0,    20,     0,    21,     0,    30,
     0,    31,     0
};

#endif

#if YY_clntParser_DEBUG != 0
static const short yyrline[] = { 0,
    95,    96,   100,   101,   102,   103,   110,   115,   128,   133,
   142,   153,   163,   175,   185,   186,   187,   188,   195,   199,
   207,   211,   219,   228,   237,   246,   254,   255,   256,   257,
   261,   265,   273,   278,   284,   289,   294,   299,   306,   307,
   308,   319,   335,   336,   337,   342,   343,   344,   345,   347,
   348,   352,   353,   354,   355,   356,   357,   361,   362,   366,
   379,   386,   393,   400,   406,   411,   418,   424,   432,   442,
   447,   455,   460,   468,   473,   482,   490,   494,   501,   505,
   512,   516,   523,   527,   534,   539,   548,   555,   562,   571,
   578,   588,   595,   603,   611,   619,   629,   637,   640,   646,
   649,   655,   658,   664,   667,   674,   678,   721,   725,   729,
   733,   740,   741,   745,   746,   747,   751,   752,   756,   757,
   760,   761
};

static const char * const yytname[] = {   "$","error","$illegal.","T1_","T2_",
"PREF_TIME_","DNS_SERVER_","VALID_TIME_","NTP_SERVER_","DOMAIN_","TIME_ZONE_",
"IFACE_","NO_CONFIG_","REJECT_SERVERS_","PREFERRED_SERVERS_","REQUIRE_","REQUEST_",
"SEND_","DEFAULT_","SUPERSEDE_","APPEND_","PREPEND_","IA_","ADDRES_","IPV6ADDR_",
"LOGLEVEL_","WORKDIR_","RAPID_COMMIT_","NOIA_","STRING_","HEXNUMBER_","INTNUMBER_",
"DUID_","'{'","'}'","','","Grammar","GlobalDeclarationList","InterfaceDeclaration",
"@1","@2","InterfaceDeclarationsList","IADeclaration","@3","@4","IADeclarationList",
"ADDRESDeclaration","@5","@6","ADDRESDeclarationList","GlobalOptionDeclaration",
"InterfaceOptionDeclaration","IAOptionDeclaration","ADDRESOptionDeclaration",
"LogLevelOption","NoIAsOptions","WorkDirOption","RejectServersOption","@7","PreferServersOption",
"@8","PreferredTimeOption","RapidCommitOption","ValidTimeOption","T1Option",
"T2Option","DNSServerOption","@9","@10","@11","@12","@13","DomainOption","TimeZoneOption",
"NTPServerOption","@14","@15","@16","@17","@18","ADDRESDUIDList","ADDRESSList",
"SendDefaultSupersedeOpt","RequestRequirePrefix","SuperAppPrepOpt","Number",
""
};
#endif

static const short yyr1[] = {     0,
    36,    36,    37,    37,    37,    37,    39,    38,    40,    38,
    38,    38,    38,    38,    41,    41,    41,    41,    43,    42,
    44,    42,    42,    42,    42,    42,    45,    45,    45,    45,
    47,    46,    48,    46,    46,    46,    46,    46,    49,    49,
    49,    49,    50,    50,    50,    51,    51,    51,    51,    51,
    51,    52,    52,    52,    52,    52,    52,    53,    53,    54,
    55,    56,    58,    57,    60,    59,    61,    61,    62,    63,
    63,    64,    64,    65,    65,    66,    67,    66,    68,    66,
    69,    66,    70,    66,    71,    66,    72,    72,    72,    72,
    72,    73,    73,    73,    73,    73,    74,    75,    74,    76,
    74,    77,    74,    78,    74,    79,    74,    80,    80,    80,
    80,    81,    81,    82,    82,    82,    83,    83,    84,    84,
    85,    85
};

static const short yyr2[] = {     0,
     1,     0,     1,     1,     2,     2,     0,     6,     0,     6,
     4,     4,     3,     3,     1,     2,     1,     2,     0,     5,
     0,     6,     4,     2,     3,     1,     1,     2,     1,     2,
     0,     5,     0,     6,     4,     3,     2,     1,     1,     2,
     1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
     1,     2,     0,     3,     0,     3,     2,     3,     2,     2,
     3,     2,     3,     2,     3,     1,     0,     3,     0,     4,
     0,     4,     0,     5,     0,     4,     1,     2,     3,     3,
     4,     1,     2,     3,     3,     4,     1,     0,     3,     0,
     4,     0,     4,     0,     5,     0,     4,     1,     1,     3,
     3,     1,     3,     1,     1,     1,     1,     1,     1,     1,
     1,     1
};

static const short yydefact[] = {     2,
     0,     0,     0,    76,     0,    97,    87,    92,     0,    63,
    65,   118,   117,     0,     0,     0,    61,     1,     4,     3,
    43,    46,    57,    44,    49,    45,    54,    55,    58,    56,
    59,    52,    53,    47,    50,    51,    48,     0,   114,   115,
   116,   121,   122,     0,    72,     0,    74,     0,    67,   119,
   120,     0,    79,    85,     0,    70,     0,   100,   106,    88,
     0,    93,     0,     0,     0,     0,     0,    60,    62,    69,
     6,     5,    81,   102,     0,     0,    73,    75,    68,   112,
    78,     0,     0,    71,    99,     0,     0,    89,    94,    13,
     7,    14,     9,   108,   109,    64,    66,     0,    83,     0,
   104,    90,     0,    95,     0,     0,    80,    86,   101,   107,
    11,     0,    12,     0,     0,    82,     0,   103,     0,    91,
    96,   113,    26,     0,    17,    15,     0,   110,   111,    84,
   105,    19,    24,     8,    18,    16,    10,    25,     0,    21,
    38,     0,    29,    27,    23,     0,    31,    37,    20,    30,
    28,     0,    36,     0,    33,    22,    41,     0,    39,    35,
     0,    42,    32,    40,     0,    34,     0,     0,     0
};

static const short yydefgoto[] = {   167,
    18,    19,   112,   114,   124,   125,   139,   146,   142,   143,
   154,   161,   158,    20,    21,    22,    23,    24,    25,    26,
    27,    66,    28,    67,    29,    30,    31,    32,    33,    34,
    52,    82,    98,   117,    83,    35,    36,    37,    57,    86,
   100,   119,    87,    96,    81,    44,    38,    54,    45
};

static const short yypact[] = {   155,
   124,   124,   124,   213,   124,   221,   182,   187,    20,-32768,
-32768,-32768,-32768,   -21,     7,   -21,-32768,   155,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,   168,-32768,-32768,
-32768,-32768,-32768,   -21,-32768,   -21,-32768,   -21,-32768,-32768,
-32768,    11,-32768,-32768,   -21,-32768,    11,-32768,-32768,-32768,
    25,-32768,    31,    -7,    -4,    88,    88,-32768,-32768,-32768,
-32768,-32768,   208,   208,   195,   200,-32768,-32768,-32768,-32768,
    28,    11,    11,-32768,    28,    11,    11,-32768,-32768,-32768,
    40,-32768,    47,-32768,-32768,    48,    48,    11,-32768,    11,
-32768,-32768,    55,-32768,    64,    70,    28,    28,    28,    28,
-32768,   181,-32768,   181,   143,    28,    11,    28,    11,-32768,
-32768,-32768,   102,    63,-32768,-32768,    95,-32768,-32768,    28,
    28,    62,    73,-32768,-32768,-32768,-32768,-32768,    34,    79,
   190,   111,-32768,-32768,-32768,    34,    85,    74,-32768,-32768,
-32768,   123,-32768,    51,    97,-32768,-32768,    -1,-32768,-32768,
    51,-32768,-32768,-32768,     6,-32768,   148,   149,-32768
};

static const short yypgoto[] = {-32768,
-32768,   134,-32768,-32768,    39,  -102,-32768,-32768,    10,  -118,
-32768,-32768,    12,   154,   -32,   -87,   -14,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,   112,   -55,    13,-32768,   186,    -2
};


#define	YYLAST		245


static const short yytable[] = {    47,
    49,    85,    56,     3,    90,     5,    65,    92,    42,    43,
     3,    68,     5,    70,    46,    48,    53,    55,    58,    61,
    63,   135,   162,   150,   135,    91,   107,   108,    93,   162,
   109,   110,   163,   150,    80,    69,     1,     2,     3,   166,
     5,    77,   116,    78,   118,    79,    10,    11,    64,    42,
    43,   144,    84,    88,   151,     3,   141,     5,   144,    89,
    16,   130,   106,   131,   151,     1,     2,     3,     4,     5,
     6,     7,     8,   111,   157,    10,    11,    12,    13,   126,
   113,   126,   115,   120,   123,    99,   101,   103,   105,    16,
    17,   136,   121,   122,   136,   138,   134,     1,     2,     3,
     4,     5,     6,     7,     8,   140,   155,    10,    11,    12,
    13,    94,   145,     1,     2,     3,   123,     5,   153,    95,
   133,    16,    17,    10,    11,     1,     2,     3,   137,     5,
   160,    42,    43,   141,   132,    10,    11,    16,   148,   159,
    39,    40,    41,   164,   149,   141,   159,   168,   169,    16,
   164,    71,   127,    42,    43,   152,   156,     1,     2,     3,
     4,     5,     6,     7,     8,     9,   128,    10,    11,    12,
    13,    72,   165,    73,   129,    74,    75,    76,    97,    14,
    15,    16,    17,     1,     2,     3,     4,     5,     6,     7,
     8,    59,     0,    10,    11,    12,    13,     0,    39,    40,
    41,     0,   123,    39,    40,    41,     0,    16,    17,     0,
    60,    39,    40,    41,     0,    62,    39,    40,    41,    42,
    43,     0,   147,   102,    39,    40,    41,     0,   104,    39,
    40,    41,    50,    51,     0,     0,   -77,    39,    40,    41,
    50,    51,     0,     0,   -98
};

static const short yycheck[] = {     2,
     3,    57,     5,     5,    12,     7,     9,    12,    30,    31,
     5,    14,     7,    16,     2,     3,     4,     5,     6,     7,
     8,   124,    24,   142,   127,    33,    82,    83,    33,    24,
    86,    87,    34,   152,    24,    29,     3,     4,     5,    34,
     7,    44,    98,    46,   100,    48,    13,    14,    29,    30,
    31,   139,    55,    29,   142,     5,    23,     7,   146,    29,
    27,   117,    35,   119,   152,     3,     4,     5,     6,     7,
     8,     9,    10,    34,    24,    13,    14,    15,    16,   112,
    34,   114,    35,    29,    22,    73,    74,    75,    76,    27,
    28,   124,    29,    24,   127,    34,    34,     3,     4,     5,
     6,     7,     8,     9,    10,    33,    33,    13,    14,    15,
    16,    24,    34,     3,     4,     5,    22,     7,    34,    32,
   123,    27,    28,    13,    14,     3,     4,     5,    34,     7,
    34,    30,    31,    23,    33,    13,    14,    27,   141,   154,
    17,    18,    19,   158,    34,    23,   161,     0,     0,    27,
   165,    18,   114,    30,    31,   146,    34,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    24,    13,    14,    15,
    16,    18,   161,     6,    32,     8,     9,    10,    67,    25,
    26,    27,    28,     3,     4,     5,     6,     7,     8,     9,
    10,     6,    -1,    13,    14,    15,    16,    -1,    17,    18,
    19,    -1,    22,    17,    18,    19,    -1,    27,    28,    -1,
    29,    17,    18,    19,    -1,    29,    17,    18,    19,    30,
    31,    -1,    33,    29,    17,    18,    19,    -1,    29,    17,
    18,    19,    20,    21,    -1,    -1,    24,    17,    18,    19,
    20,    21,    -1,    -1,    24
};
 /* fattrs + tables */

/* parser code folow  */


/* This is the parser code that is written into each bison parser
  when the %semantic_parser declaration is not specified in the grammar.
  It was written by Richard Stallman by simplifying the hairy parser
  used when %semantic_parser is specified.  */

/* Note: dollar marks section change
   the next  is replaced by the list of actions, each action
   as one case of the switch.  */ 

#if YY_clntParser_USE_GOTO != 0
/* 
 SUPRESSION OF GOTO : on some C++ compiler (sun c++)
  the goto is strictly forbidden if any constructor/destructor
  is used in the whole function (very stupid isn't it ?)
 so goto are to be replaced with a 'while/switch/case construct'
 here are the macro to keep some apparent compatibility
*/
#define YYGOTO(lb) {yy_gotostate=lb;continue;}
#define YYBEGINGOTO  enum yy_labels yy_gotostate=yygotostart; \
                     for(;;) switch(yy_gotostate) { case yygotostart: {
#define YYLABEL(lb) } case lb: {
#define YYENDGOTO } } 
#define YYBEGINDECLARELABEL enum yy_labels {yygotostart
#define YYDECLARELABEL(lb) ,lb
#define YYENDDECLARELABEL  };
#else
/* macro to keep goto */
#define YYGOTO(lb) goto lb
#define YYBEGINGOTO 
#define YYLABEL(lb) lb:
#define YYENDGOTO
#define YYBEGINDECLARELABEL 
#define YYDECLARELABEL(lb)
#define YYENDDECLARELABEL 
#endif
/* LABEL DECLARATION */
YYBEGINDECLARELABEL
  YYDECLARELABEL(yynewstate)
  YYDECLARELABEL(yybackup)
/* YYDECLARELABEL(yyresume) */
  YYDECLARELABEL(yydefault)
  YYDECLARELABEL(yyreduce)
  YYDECLARELABEL(yyerrlab)   /* here on detecting error */
  YYDECLARELABEL(yyerrlab1)   /* here on error raised explicitly by an action */
  YYDECLARELABEL(yyerrdefault)  /* current state does not do anything special for the error token. */
  YYDECLARELABEL(yyerrpop)   /* pop the current state because it cannot handle the error token */
  YYDECLARELABEL(yyerrhandle)  
YYENDDECLARELABEL
/* ALLOCA SIMULATION */
/* __HAVE_NO_ALLOCA */
#ifdef __HAVE_NO_ALLOCA
int __alloca_free_ptr(char *ptr,char *ref)
{if(ptr!=ref) free(ptr);
 return 0;}

#define __ALLOCA_alloca(size) malloc(size)
#define __ALLOCA_free(ptr,ref) __alloca_free_ptr((char *)ptr,(char *)ref)

#ifdef YY_clntParser_LSP_NEEDED
#define __ALLOCA_return(num) \
            return( __ALLOCA_free(yyss,yyssa)+\
		    __ALLOCA_free(yyvs,yyvsa)+\
		    __ALLOCA_free(yyls,yylsa)+\
		   (num))
#else
#define __ALLOCA_return(num) \
            return( __ALLOCA_free(yyss,yyssa)+\
		    __ALLOCA_free(yyvs,yyvsa)+\
		   (num))
#endif
#else
#define __ALLOCA_return(num) return(num)
#define __ALLOCA_alloca(size) alloca(size)
#define __ALLOCA_free(ptr,ref) 
#endif

/* ENDALLOCA SIMULATION */

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (YY_clntParser_CHAR = YYEMPTY)
#define YYEMPTY         -2
#define YYEOF           0
#define YYACCEPT        __ALLOCA_return(0)
#define YYABORT         __ALLOCA_return(1)
#define YYERROR         YYGOTO(yyerrlab1)
/* Like YYERROR except do call yyerror.
   This remains here temporarily to ease the
   transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL          YYGOTO(yyerrlab)
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(token, value) \
do                                                              \
  if (YY_clntParser_CHAR == YYEMPTY && yylen == 1)                               \
    { YY_clntParser_CHAR = (token), YY_clntParser_LVAL = (value);                 \
      yychar1 = YYTRANSLATE (YY_clntParser_CHAR);                                \
      YYPOPSTACK;                                               \
      YYGOTO(yybackup);                                            \
    }                                                           \
  else                                                          \
    { YY_clntParser_ERROR ("syntax error: cannot back up"); YYERROR; }   \
while (0)

#define YYTERROR        1
#define YYERRCODE       256

#ifndef YY_clntParser_PURE
/* UNPURE */
#define YYLEX           YY_clntParser_LEX()
#ifndef YY_USE_CLASS
/* If nonreentrant, and not class , generate the variables here */
int     YY_clntParser_CHAR;                      /*  the lookahead symbol        */
YY_clntParser_STYPE      YY_clntParser_LVAL;              /*  the semantic value of the */
				/*  lookahead symbol    */
int YY_clntParser_NERRS;                 /*  number of parse errors so far */
#ifdef YY_clntParser_LSP_NEEDED
YY_clntParser_LTYPE YY_clntParser_LLOC;   /*  location data for the lookahead     */
			/*  symbol                              */
#endif
#endif


#else
/* PURE */
#ifdef YY_clntParser_LSP_NEEDED
#define YYLEX           YY_clntParser_LEX(&YY_clntParser_LVAL, &YY_clntParser_LLOC)
#else
#define YYLEX           YY_clntParser_LEX(&YY_clntParser_LVAL)
#endif
#endif
#ifndef YY_USE_CLASS
#if YY_clntParser_DEBUG != 0
int YY_clntParser_DEBUG_FLAG;                    /*  nonzero means print parse trace     */
/* Since this is uninitialized, it does not stop multiple parsers
   from coexisting.  */
#endif
#endif



/*  YYINITDEPTH indicates the initial size of the parser's stacks       */

#ifndef YYINITDEPTH
#define YYINITDEPTH 200
#endif

/*  YYMAXDEPTH is the maximum size the stacks can grow to
    (effective only if the built-in stack extension method is used).  */

#if YYMAXDEPTH == 0
#undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif


#if __GNUC__ > 1                /* GNU C and GNU C++ define this.  */
#define __yy_bcopy(FROM,TO,COUNT)       __builtin_memcpy(TO,FROM,COUNT)
#else                           /* not GNU C or C++ */

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */

#ifdef __cplusplus
static void __yy_bcopy (char *from, char *to, int count)
#else
#ifdef __STDC__
static void __yy_bcopy (char *from, char *to, int count)
#else
static void __yy_bcopy (from, to, count)
     char *from;
     char *to;
     int count;
#endif
#endif
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}
#endif

int
#ifdef YY_USE_CLASS
 YY_clntParser_CLASS::
#endif
     YY_clntParser_PARSE(YY_clntParser_PARSE_PARAM)
#ifndef __STDC__
#ifndef __cplusplus
#ifndef YY_USE_CLASS
/* parameter definition without protypes */
YY_clntParser_PARSE_PARAM_DEF
#endif
#endif
#endif
{
  register int yystate;
  register int yyn;
  register short *yyssp;
  register YY_clntParser_STYPE *yyvsp;
  int yyerrstatus;      /*  number of tokens to shift before error messages enabled */
  int yychar1=0;          /*  lookahead token as an internal (translated) token number */

  short yyssa[YYINITDEPTH];     /*  the state stack                     */
  YY_clntParser_STYPE yyvsa[YYINITDEPTH];        /*  the semantic value stack            */

  short *yyss = yyssa;          /*  refer to the stacks thru separate pointers */
  YY_clntParser_STYPE *yyvs = yyvsa;     /*  to allow yyoverflow to reallocate them elsewhere */

#ifdef YY_clntParser_LSP_NEEDED
  YY_clntParser_LTYPE yylsa[YYINITDEPTH];        /*  the location stack                  */
  YY_clntParser_LTYPE *yyls = yylsa;
  YY_clntParser_LTYPE *yylsp;

#define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
#define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  int yystacksize = YYINITDEPTH;

#ifdef YY_clntParser_PURE
  int YY_clntParser_CHAR;
  YY_clntParser_STYPE YY_clntParser_LVAL;
  int YY_clntParser_NERRS;
#ifdef YY_clntParser_LSP_NEEDED
  YY_clntParser_LTYPE YY_clntParser_LLOC;
#endif
#endif

  YY_clntParser_STYPE yyval;             /*  the variable used to return         */
				/*  semantic values from the action     */
				/*  routines                            */

  int yylen;
/* start loop, in which YYGOTO may be used. */
YYBEGINGOTO

#if YY_clntParser_DEBUG != 0
  if (YY_clntParser_DEBUG_FLAG)
    fprintf(stderr, "Starting parse\n");
#endif
  yystate = 0;
  yyerrstatus = 0;
  YY_clntParser_NERRS = 0;
  YY_clntParser_CHAR = YYEMPTY;          /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss - 1;
  yyvsp = yyvs;
#ifdef YY_clntParser_LSP_NEEDED
  yylsp = yyls;
#endif

/* Push a new state, which is found in  yystate  .  */
/* In all cases, when you get here, the value and location stacks
   have just been pushed. so pushing a state here evens the stacks.  */
YYLABEL(yynewstate)

  *++yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Give user a chance to reallocate the stack */
      /* Use copies of these so that the &'s don't force the real ones into memory. */
      YY_clntParser_STYPE *yyvs1 = yyvs;
      short *yyss1 = yyss;
#ifdef YY_clntParser_LSP_NEEDED
      YY_clntParser_LTYPE *yyls1 = yyls;
#endif

      /* Get the current used size of the three stacks, in elements.  */
      int size = yyssp - yyss + 1;

#ifdef yyoverflow
      /* Each stack pointer address is followed by the size of
	 the data in use in that stack, in bytes.  */
#ifdef YY_clntParser_LSP_NEEDED
      /* This used to be a conditional around just the two extra args,
	 but that might be undefined if yyoverflow is a macro.  */
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yyls1, size * sizeof (*yylsp),
		 &yystacksize);
#else
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yystacksize);
#endif

      yyss = yyss1; yyvs = yyvs1;
#ifdef YY_clntParser_LSP_NEEDED
      yyls = yyls1;
#endif
#else /* no yyoverflow */
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	{
	  YY_clntParser_ERROR("parser stack overflow");
	  __ALLOCA_return(2);
	}
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;
      yyss = (short *) __ALLOCA_alloca (yystacksize * sizeof (*yyssp));
      __yy_bcopy ((char *)yyss1, (char *)yyss, size * sizeof (*yyssp));
      __ALLOCA_free(yyss1,yyssa);
      yyvs = (YY_clntParser_STYPE *) __ALLOCA_alloca (yystacksize * sizeof (*yyvsp));
      __yy_bcopy ((char *)yyvs1, (char *)yyvs, size * sizeof (*yyvsp));
      __ALLOCA_free(yyvs1,yyvsa);
#ifdef YY_clntParser_LSP_NEEDED
      yyls = (YY_clntParser_LTYPE *) __ALLOCA_alloca (yystacksize * sizeof (*yylsp));
      __yy_bcopy ((char *)yyls1, (char *)yyls, size * sizeof (*yylsp));
      __ALLOCA_free(yyls1,yylsa);
#endif
#endif /* no yyoverflow */

      yyssp = yyss + size - 1;
      yyvsp = yyvs + size - 1;
#ifdef YY_clntParser_LSP_NEEDED
      yylsp = yyls + size - 1;
#endif

#if YY_clntParser_DEBUG != 0
      if (YY_clntParser_DEBUG_FLAG)
	fprintf(stderr, "Stack size increased to %d\n", yystacksize);
#endif

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

#if YY_clntParser_DEBUG != 0
  if (YY_clntParser_DEBUG_FLAG)
    fprintf(stderr, "Entering state %d\n", yystate);
#endif

  YYGOTO(yybackup);
YYLABEL(yybackup)

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* YYLABEL(yyresume) */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    YYGOTO(yydefault);

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (YY_clntParser_CHAR == YYEMPTY)
    {
#if YY_clntParser_DEBUG != 0
      if (YY_clntParser_DEBUG_FLAG)
	fprintf(stderr, "Reading a token: ");
#endif
      YY_clntParser_CHAR = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (YY_clntParser_CHAR <= 0)           /* This means end of input. */
    {
      yychar1 = 0;
      YY_clntParser_CHAR = YYEOF;                /* Don't call YYLEX any more */

#if YY_clntParser_DEBUG != 0
      if (YY_clntParser_DEBUG_FLAG)
	fprintf(stderr, "Now at end of input.\n");
#endif
    }
  else
    {
      yychar1 = YYTRANSLATE(YY_clntParser_CHAR);

#if YY_clntParser_DEBUG != 0
      if (YY_clntParser_DEBUG_FLAG)
	{
	  fprintf (stderr, "Next token is %d (%s", YY_clntParser_CHAR, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise meaning
	     of a token, for further debugging info.  */
#ifdef YYPRINT
	  YYPRINT (stderr, YY_clntParser_CHAR, YY_clntParser_LVAL);
#endif
	  fprintf (stderr, ")\n");
	}
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    YYGOTO(yydefault);

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	YYGOTO(yyerrlab);
      yyn = -yyn;
      YYGOTO(yyreduce);
    }
  else if (yyn == 0)
    YYGOTO(yyerrlab);

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */

#if YY_clntParser_DEBUG != 0
  if (YY_clntParser_DEBUG_FLAG)
    fprintf(stderr, "Shifting token %d (%s), ", YY_clntParser_CHAR, yytname[yychar1]);
#endif

  /* Discard the token being shifted unless it is eof.  */
  if (YY_clntParser_CHAR != YYEOF)
    YY_clntParser_CHAR = YYEMPTY;

  *++yyvsp = YY_clntParser_LVAL;
#ifdef YY_clntParser_LSP_NEEDED
  *++yylsp = YY_clntParser_LLOC;
#endif

  /* count tokens shifted since error; after three, turn off error status.  */
  if (yyerrstatus) yyerrstatus--;

  yystate = yyn;
  YYGOTO(yynewstate);

/* Do the default action for the current state.  */
YYLABEL(yydefault)

  yyn = yydefact[yystate];
  if (yyn == 0)
    YYGOTO(yyerrlab);

/* Do a reduction.  yyn is the number of a rule to reduce with.  */
YYLABEL(yyreduce)
  yylen = yyr2[yyn];
  if (yylen > 0)
    yyval = yyvsp[1-yylen]; /* implement default value of the action */

#if YY_clntParser_DEBUG != 0
  if (YY_clntParser_DEBUG_FLAG)
    {
      int i;

      fprintf (stderr, "Reducing via rule %d (line %d), ",
	       yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (i = yyprhs[yyn]; yyrhs[i] > 0; i++)
	fprintf (stderr, "%s ", yytname[yyrhs[i]]);
      fprintf (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif


  switch (yyn) {

case 7:
{
        CheckIsIface(string(yyvsp[-1].strval)); //If no - everything is ok
        StartIfaceDeclaration();
    ;
    break;}
case 8:
{
        //Information about new interface has been read
        //Add it to list of read interfaces
        ClntCfgIfaceLst.append(new TClntCfgIface(yyvsp[-4].strval));
        //FIXME:used of char * should be always realeased
        delete yyvsp[-4].strval;
        EndIfaceDeclaration();
    ;
    break;}
case 9:
{
        CheckIsIface(yyvsp[-1].ival);   //If no - everything is ok
        StartIfaceDeclaration();
    ;
    break;}
case 10:
{
        ClntCfgIfaceLst.append(new TClntCfgIface(yyvsp[-4].ival) );
        EndIfaceDeclaration();
    ;
    break;}
case 11:
{
      CheckIsIface(string(yyvsp[-2].strval));
      ClntCfgIfaceLst.append(new TClntCfgIface(yyvsp[-2].strval));
      delete yyvsp[-2].strval;
      EmptyIface();
    ;
    break;}
case 12:
{
      CheckIsIface(yyvsp[-2].ival);
      ClntCfgIfaceLst.append(new TClntCfgIface(yyvsp[-2].ival));
      EmptyIface();
    ;
    break;}
case 13:
{
        CheckIsIface(string(yyvsp[-1].strval));
        ClntCfgIfaceLst.append(new TClntCfgIface(yyvsp[-1].strval));
        ClntCfgIfaceLst.getLast()->setOptions(ParserOptStack.getLast());
        ClntCfgIfaceLst.getLast()->setNoConfig();
        delete yyvsp[-1].strval;
    ;
    break;}
case 14:
{
        CheckIsIface(yyvsp[-1].ival);
        ClntCfgIfaceLst.append(SmartPtr<TClntCfgIface> (new TClntCfgIface(yyvsp[-1].ival)) );
        ClntCfgIfaceLst.getLast()->setOptions(ParserOptStack.getLast());
        ClntCfgIfaceLst.getLast()->setNoConfig();
    ;
    break;}
case 19:
{ 
    StartIADeclaration(false);
  ;
    break;}
case 20:
{
        EndIADeclaration(1);
    ;
    break;}
case 21:
{
        StartIADeclaration(false);
    ;
    break;}
case 22:
{
    EndIADeclaration(yyvsp[-4].ival);
  ;
    break;}
case 23:
{
    StartIADeclaration(false);
        EndIADeclaration(yyvsp[-2].ival);
    ;
    break;}
case 24:
{
    StartIADeclaration(false);
        EndIADeclaration(yyvsp[0].ival);
    ;
    break;}
case 25:
{
    StartIADeclaration(true);
        EndIADeclaration(1);
    ;
    break;}
case 26:
{
    StartIADeclaration(true);
        EndIADeclaration(1);
    ;
    break;}
case 31:
{
      ParserOptStack.append(new TClntParsGlobalOpt(*ParserOptStack.getLast()));
    ;
    break;}
case 32:
{
      //ClntCfgAddrLst.append(SmartPtr<TClntCfgAddr> (new TClntCfgAddr()));
      //set proper options specific for this Address
      //ClntCfgAddrLst.getLast()->setOptions(&(*ParserOptStack.getLast()));
      ParserOptStack.delLast();
    ;
    break;}
case 33:
{
      ParserOptStack.append(new TClntParsGlobalOpt(*ParserOptStack.getLast()));
      ParserOptStack.getLast()->setAddrHint(false);
    ;
    break;}
case 34:
{
      for (int i=0;i<yyvsp[-4].ival; i++) EmptyAddr();
      ParserOptStack.delLast();
    ;
    break;}
case 35:
{
      for (int i=0;i<yyvsp[-2].ival; i++) EmptyAddr();
    ;
    break;}
case 36:
{
      EmptyAddr();
    ;
    break;}
case 37:
{
      for (int i=0;i<yyvsp[0].ival; i++) EmptyAddr();
    ;
    break;}
case 38:
{
      EmptyAddr();
    ;
    break;}
case 41:
{
    if (ParserOptStack.getLast()->getAddrHint())
    {
        ClntCfgAddrLst.append(new TClntCfgAddr(new TIPv6Addr(yyvsp[0].addrval)));
        ClntCfgAddrLst.getLast()->setOptions(ParserOptStack.getLast());
    }
        else
            //here is agregated version of IA
            YYABORT; 
  ;
    break;}
case 42:
{
        if (ParserOptStack.getLast()->getAddrHint())
        {
                ClntCfgAddrLst.append(new TClntCfgAddr(new TIPv6Addr(yyvsp[0].addrval)));
                ClntCfgAddrLst.getLast()->setOptions(ParserOptStack.getLast());
        }
            else
                //here is agregated version of IA
                YYABORT;
  ;
    break;}
case 60:
{
	ParserOptStack.getLast()->setLogLevel(yyvsp[0].ival);
    ;
    break;}
case 61:
{
           ParserOptStack.getLast()->setIsIAs(false);
        ;
    break;}
case 62:
{
        ParserOptStack.getLast()->setWorkDir(yyvsp[0].strval);
    ;
    break;}
case 63:
{
            //ParserOptStack.getLast()->clearRejedSrv();
            PresentStationLst.clear();
            if (!(ParserOptStack.getLast()->isNewGroup())) 
                ParserOptStack.getLast()->setNewGroup(true);
    ;
    break;}
case 64:
{
        ParserOptStack.getLast()->setRejedSrvLst(&PresentStationLst);
    ;
    break;}
case 65:
{
            PresentStationLst.clear();
            if (!(ParserOptStack.getLast()->isNewGroup())) 
                ParserOptStack.getLast()->setNewGroup(true);
  ;
    break;}
case 66:
{
            ParserOptStack.getLast()->setPrefSrvLst(&PresentStationLst);
     ;
    break;}
case 67:
{
        ParserOptStack.getLast()->setPref(yyvsp[0].ival);
        ParserOptStack.getLast()->setPrefSendOpt(Send);
    ;
    break;}
case 68:
{
        ParserOptStack.getLast()->setPref(yyvsp[0].ival);
        ParserOptStack.getLast()->setPrefSendOpt(yyvsp[-1].SendOpt);
    ;
    break;}
case 69:
{ 
        if ((!(ParserOptStack.getLast()->isNewGroup()))&&
            (ParserOptStack.getLast()->getRapidCommit()!=(bool)yyvsp[0].ival))
            ParserOptStack.getLast()->setNewGroup(true);
        ParserOptStack.getLast()->setRapidCommit(yyvsp[0].ival);
    ;
    break;}
case 70:
{
        ParserOptStack.getLast()->setValid(yyvsp[0].ival);
        ParserOptStack.getLast()->setValidSendOpt(Send);
  ;
    break;}
case 71:
{
        ParserOptStack.getLast()->setValid(yyvsp[0].ival);
        ParserOptStack.getLast()->setValidSendOpt(yyvsp[-1].SendOpt);
    ;
    break;}
case 72:
{
        ParserOptStack.getLast()->setT1(yyvsp[0].ival);
        ParserOptStack.getLast()->setT1SendOpt(Send);
    ;
    break;}
case 73:
{
        ParserOptStack.getLast()->setT1(yyvsp[0].ival);
        ParserOptStack.getLast()->setT1SendOpt(yyvsp[-1].SendOpt);
    ;
    break;}
case 74:
{
        ParserOptStack.getLast()->setT2(yyvsp[0].ival);
        ParserOptStack.getLast()->setT2SendOpt(Send);
  ;
    break;}
case 75:
{
        ParserOptStack.getLast()->setT2(yyvsp[0].ival);
        ParserOptStack.getLast()->setT2SendOpt(yyvsp[-1].SendOpt);
  ;
    break;}
case 76:
{
        PresentAddrLst.clear();
        ParserOptStack.getLast()->setDNSSrvLst(&PresentAddrLst);
        ParserOptStack.getLast()->setDNSSrvSendOpt(Send);
        ParserOptStack.getLast()->setDNSSrvReqOpt(Request);
        ParserOptStack.getLast()->setReqDNSSrv(true);
    ;
    break;}
case 77:
{
            PresentAddrLst.clear();
    ;
    break;}
case 78:
{
            ParserOptStack.getLast()->setDNSSrvLst(&PresentAddrLst);
            ParserOptStack.getLast()->setDNSSrvSendOpt(Send);
            ParserOptStack.getLast()->setDNSSrvReqOpt(Request);
            ParserOptStack.getLast()->setReqDNSSrv(true);
    ;
    break;}
case 79:
{
        PresentAddrLst.clear();
    ;
    break;}
case 80:
{
        ParserOptStack.getLast()->setDNSSrvLst(&PresentAddrLst);
        ParserOptStack.getLast()->setDNSSrvSendOpt(yyvsp[-2].SendOpt);
        ParserOptStack.getLast()->setDNSSrvReqOpt(Request);
        ParserOptStack.getLast()->setReqDNSSrv(true);
    ;
    break;}
case 81:
{
        PresentAddrLst.clear();
    ;
    break;}
case 82:
{
        ParserOptStack.getLast()->setDNSSrvLst(&PresentAddrLst);
        ParserOptStack.getLast()->setDNSSrvSendOpt(Send);
        ParserOptStack.getLast()->setDNSSrvReqOpt(yyvsp[-3].ReqOpt);
        ParserOptStack.getLast()->setReqDNSSrv(true);
  ;
    break;}
case 83:
{
        PresentAddrLst.clear();
  ;
    break;}
case 84:
{
        ParserOptStack.getLast()->setDNSSrvLst(&PresentAddrLst);
        ParserOptStack.getLast()->setDNSSrvSendOpt(yyvsp[-2].SendOpt);
        ParserOptStack.getLast()->setDNSSrvReqOpt(yyvsp[-4].ReqOpt);
        ParserOptStack.getLast()->setReqDNSSrv(true);
  ;
    break;}
case 85:
{
        PresentAddrLst.clear();
        ParserOptStack.getLast()->setReqDNSSrv(true);
  ;
    break;}
case 86:
{
        if (yyvsp[-2].ival)
            ParserOptStack.getLast()->setAppDNSSrvLst(&PresentAddrLst);
        else
            ParserOptStack.getLast()->setPrepDNSSrvLst(&PresentAddrLst);
  ;
    break;}
case 87:
{
        ParserOptStack.getLast()->setDomainReqOpt(Request); 
        ParserOptStack.getLast()->setDomainSendOpt(Send);
        ParserOptStack.getLast()->setDomain(string(""));
        ParserOptStack.getLast()->setReqDomainName(true);  
  ;
    break;}
case 88:
{
        ParserOptStack.getLast()->setDomainReqOpt(Request); 
        ParserOptStack.getLast()->setDomainSendOpt(Send);
        ParserOptStack.getLast()->setDomain(yyvsp[0].strval);
        ParserOptStack.getLast()->setReqDomainName(true);
  ;
    break;}
case 89:
{
        ParserOptStack.getLast()->setDomainReqOpt(Request);
        ParserOptStack.getLast()->setDomainSendOpt(yyvsp[-1].SendOpt);
        ParserOptStack.getLast()->setDomain(yyvsp[0].strval);
        ParserOptStack.getLast()->setReqDomainName(true);

  ;
    break;}
case 90:
{
    ParserOptStack.getLast()->setDomainReqOpt(yyvsp[-2].ReqOpt);
    ParserOptStack.getLast()->setDomainSendOpt(Send);
    ParserOptStack.getLast()->setDomain(yyvsp[0].strval);
    ParserOptStack.getLast()->setReqDomainName(true);
  ;
    break;}
case 91:
{
    ParserOptStack.getLast()->setDomainReqOpt(yyvsp[-3].ReqOpt);
    ParserOptStack.getLast()->setDomainSendOpt(yyvsp[-1].SendOpt);
    ParserOptStack.getLast()->setDomain(yyvsp[0].strval);
    ParserOptStack.getLast()->setReqDomainName(true);
  ;
    break;}
case 92:
{
        ParserOptStack.getLast()->setTimeZoneReqOpt(Request);   
        ParserOptStack.getLast()->setTimeZoneSendOpt(Send);
        ParserOptStack.getLast()->setTimeZone(string(""));
        ParserOptStack.getLast()->setReqTimeZone(true);
  ;
    break;}
case 93:
{
        ParserOptStack.getLast()->setTimeZoneReqOpt(Request);   
        ParserOptStack.getLast()->setTimeZoneSendOpt(Send);
        ParserOptStack.getLast()->setTimeZone(yyvsp[0].strval);
        ParserOptStack.getLast()->setReqTimeZone(true);
  ;
    break;}
case 94:
{
        ParserOptStack.getLast()->setTimeZoneReqOpt(Request);
        ParserOptStack.getLast()->setTimeZoneSendOpt(yyvsp[-1].SendOpt);
        ParserOptStack.getLast()->setTimeZone(yyvsp[0].strval);
        ParserOptStack.getLast()->setReqTimeZone(true);
    ;
    break;}
case 95:
{
    ParserOptStack.getLast()->setTimeZoneReqOpt(yyvsp[-2].ReqOpt);
    ParserOptStack.getLast()->setTimeZoneSendOpt(Send);
    ParserOptStack.getLast()->setTimeZone(yyvsp[0].strval);
    ParserOptStack.getLast()->setReqTimeZone(true);
  ;
    break;}
case 96:
{
    ParserOptStack.getLast()->setTimeZoneReqOpt(yyvsp[-3].ReqOpt);
    ParserOptStack.getLast()->setTimeZoneSendOpt(yyvsp[-1].SendOpt);
    ParserOptStack.getLast()->setTimeZone(yyvsp[0].strval);
    ParserOptStack.getLast()->setReqTimeZone(true);
  ;
    break;}
case 97:
{
        PresentAddrLst.clear();
        ParserOptStack.getLast()->setNTPSrvLst(&PresentAddrLst);
        ParserOptStack.getLast()->setNTPSrvSendOpt(Send);
        ParserOptStack.getLast()->setNTPSrvReqOpt(Request);
        ParserOptStack.getLast()->setReqNTPSrv(true);        
    ;
    break;}
case 98:
{
        PresentAddrLst.clear();
    ;
    break;}
case 99:
{
        ParserOptStack.getLast()->setNTPSrvLst(&PresentAddrLst);
        ParserOptStack.getLast()->setNTPSrvSendOpt(Send);
        ParserOptStack.getLast()->setNTPSrvReqOpt(Request);
        ParserOptStack.getLast()->setReqNTPSrv(true);
    ;
    break;}
case 100:
{
        PresentAddrLst.clear();
    ;
    break;}
case 101:
{
        ParserOptStack.getLast()->setNTPSrvLst(&PresentAddrLst);
        ParserOptStack.getLast()->setNTPSrvSendOpt(yyvsp[-2].SendOpt);
        ParserOptStack.getLast()->setNTPSrvReqOpt(Request);
        ParserOptStack.getLast()->setReqNTPSrv(true);
    ;
    break;}
case 102:
{
        PresentAddrLst.clear();
    ;
    break;}
case 103:
{
        ParserOptStack.getLast()->setNTPSrvLst(&PresentAddrLst);
        ParserOptStack.getLast()->setNTPSrvSendOpt(Send);
        ParserOptStack.getLast()->setNTPSrvReqOpt(yyvsp[-3].ReqOpt);
        ParserOptStack.getLast()->setReqNTPSrv(true);
    ;
    break;}
case 104:
{
        PresentAddrLst.clear();
    ;
    break;}
case 105:
{
        ParserOptStack.getLast()->setNTPSrvLst(&PresentAddrLst);
        ParserOptStack.getLast()->setNTPSrvSendOpt(yyvsp[-2].SendOpt);
        ParserOptStack.getLast()->setNTPSrvReqOpt(yyvsp[-4].ReqOpt);
        ParserOptStack.getLast()->setReqNTPSrv(true);
    ;
    break;}
case 106:
{      
        PresentAddrLst.clear(); 
        ParserOptStack.getLast()->setReqNTPSrv(true);
    ;
    break;}
case 107:
{
        if (yyvsp[-2].ival)
            ParserOptStack.getLast()->setAppNTPSrvLst(&PresentAddrLst);
        else
            ParserOptStack.getLast()->setPrepNTPSrvLst(&PresentAddrLst);
    ;
    break;}
case 108:
{
    PresentStationLst.append(SmartPtr<TStationID> (new TStationID(new TIPv6Addr(yyvsp[0].addrval))));
  ;
    break;}
case 109:
{
    PresentStationLst.append(SmartPtr<TStationID> (new TStationID(new TDUID(yyvsp[0].duidval.duid,yyvsp[0].duidval.length))));
  ;
    break;}
case 110:
{
    PresentStationLst.append(SmartPtr<TStationID> (new TStationID(new TIPv6Addr(yyvsp[0].addrval))));
  ;
    break;}
case 111:
{
    PresentStationLst.append(SmartPtr<TStationID> (new TStationID( new TDUID(yyvsp[0].duidval.duid,yyvsp[0].duidval.length))));
  ;
    break;}
case 112:
{PresentAddrLst.append(SmartPtr<TIPv6Addr> (new TIPv6Addr(yyvsp[0].addrval)));;
    break;}
case 113:
{PresentAddrLst.append(SmartPtr<TIPv6Addr> (new TIPv6Addr(yyvsp[0].addrval)));;
    break;}
case 114:
{yyval.SendOpt=Send;;
    break;}
case 115:
{yyval.SendOpt=Default;;
    break;}
case 116:
{yyval.SendOpt=Supersede;;
    break;}
case 117:
{yyval.ReqOpt=Request;;
    break;}
case 118:
{yyval.ReqOpt=Require;;
    break;}
case 119:
{yyval.ival=1;;
    break;}
case 120:
{yyval.ival=0;;
    break;}
case 121:
{yyval.ival=yyvsp[0].ival;;
    break;}
case 122:
{yyval.ival=yyvsp[0].ival;;
    break;}
}
   /* the action file gets copied in in place of this dollarsign  */
  yyvsp -= yylen;
  yyssp -= yylen;
#ifdef YY_clntParser_LSP_NEEDED
  yylsp -= yylen;
#endif

#if YY_clntParser_DEBUG != 0
  if (YY_clntParser_DEBUG_FLAG)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;

#ifdef YY_clntParser_LSP_NEEDED
  yylsp++;
  if (yylen == 0)
    {
      yylsp->first_line = YY_clntParser_LLOC.first_line;
      yylsp->first_column = YY_clntParser_LLOC.first_column;
      yylsp->last_line = (yylsp-1)->last_line;
      yylsp->last_column = (yylsp-1)->last_column;
      yylsp->text = 0;
    }
  else
    {
      yylsp->last_line = (yylsp+yylen-1)->last_line;
      yylsp->last_column = (yylsp+yylen-1)->last_column;
    }
#endif

  /* Now "shift" the result of the reduction.
     Determine what state that goes to,
     based on the state we popped back to
     and the rule number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  YYGOTO(yynewstate);

YYLABEL(yyerrlab)   /* here on detecting error */

  if (! yyerrstatus)
    /* If not already recovering from an error, report this error.  */
    {
      ++YY_clntParser_NERRS;

#ifdef YY_clntParser_ERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  int size = 0;
	  char *msg;
	  int x, count;

	  count = 0;
	  /* Start X at -yyn if nec to avoid negative indexes in yycheck.  */
	  for (x = (yyn < 0 ? -yyn : 0);
	       x < (sizeof(yytname) / sizeof(char *)); x++)
	    if (yycheck[x + yyn] == x)
	      size += strlen(yytname[x]) + 15, count++;
	  msg = (char *) malloc(size + 15);
	  if (msg != 0)
	    {
	      strcpy(msg, "parse error");

	      if (count < 5)
		{
		  count = 0;
		  for (x = (yyn < 0 ? -yyn : 0);
		       x < (sizeof(yytname) / sizeof(char *)); x++)
		    if (yycheck[x + yyn] == x)
		      {
			strcat(msg, count == 0 ? ", expecting `" : " or `");
			strcat(msg, yytname[x]);
			strcat(msg, "'");
			count++;
		      }
		}
	      YY_clntParser_ERROR(msg);
	      free(msg);
	    }
	  else
	    YY_clntParser_ERROR ("parse error; also virtual memory exceeded");
	}
      else
#endif /* YY_clntParser_ERROR_VERBOSE */
	YY_clntParser_ERROR("parse error");
    }

  YYGOTO(yyerrlab1);
YYLABEL(yyerrlab1)   /* here on error raised explicitly by an action */

  if (yyerrstatus == 3)
    {
      /* if just tried and failed to reuse lookahead token after an error, discard it.  */

      /* return failure if at end of input */
      if (YY_clntParser_CHAR == YYEOF)
	YYABORT;

#if YY_clntParser_DEBUG != 0
      if (YY_clntParser_DEBUG_FLAG)
	fprintf(stderr, "Discarding token %d (%s).\n", YY_clntParser_CHAR, yytname[yychar1]);
#endif

      YY_clntParser_CHAR = YYEMPTY;
    }

  /* Else will try to reuse lookahead token
     after shifting the error token.  */

  yyerrstatus = 3;              /* Each real token shifted decrements this */

  YYGOTO(yyerrhandle);

YYLABEL(yyerrdefault)  /* current state does not do anything special for the error token. */

#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */
  yyn = yydefact[yystate];  /* If its default is to accept any token, ok.  Otherwise pop it.*/
  if (yyn) YYGOTO(yydefault);
#endif

YYLABEL(yyerrpop)   /* pop the current state because it cannot handle the error token */

  if (yyssp == yyss) YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#ifdef YY_clntParser_LSP_NEEDED
  yylsp--;
#endif

#if YY_clntParser_DEBUG != 0
  if (YY_clntParser_DEBUG_FLAG)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "Error: state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

YYLABEL(yyerrhandle)

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    YYGOTO(yyerrdefault);

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    YYGOTO(yyerrdefault);

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	YYGOTO(yyerrpop);
      yyn = -yyn;
      YYGOTO(yyreduce);
    }
  else if (yyn == 0)
    YYGOTO(yyerrpop);

  if (yyn == YYFINAL)
    YYACCEPT;

#if YY_clntParser_DEBUG != 0
  if (YY_clntParser_DEBUG_FLAG)
    fprintf(stderr, "Shifting error token, ");
#endif

  *++yyvsp = YY_clntParser_LVAL;
#ifdef YY_clntParser_LSP_NEEDED
  *++yylsp = YY_clntParser_LLOC;
#endif

  yystate = yyn;
  YYGOTO(yynewstate);
/* end loop, in which YYGOTO may be used. */
  YYENDGOTO
}

/* END */


    /////////////////////////////////////////////////////////////////////////////
    // programs section
    
    //method check whether interface with id=ifaceNr has been 
    //already declared
bool clntParser::CheckIsIface(int ifaceNr)
{
  SmartPtr<TClntCfgIface> ptr;
  ClntCfgIfaceLst.first();
  while (ptr=ClntCfgIfaceLst.get())
    if ((ptr->getID())==ifaceNr) YYABORT;
  return true;
};
    
    //method check whether interface with id=ifaceName has been
    //already declared 
bool clntParser::CheckIsIface(string ifaceName)
{
  SmartPtr<TClntCfgIface> ptr;
  ClntCfgIfaceLst.first();
  while (ptr=ClntCfgIfaceLst.get())
  {
    string presName=ptr->getName();
    if (presName==ifaceName) YYABORT;
  };
  return true;
};

    //method creates new scope appropriately for interface options and declarations
    //clears all lists except the list of interfaces and adds new group
void clntParser::StartIfaceDeclaration()
{
  //Interface scope, so parameters associated with global scope are pushed on stack
  ParserOptStack.append(new TClntParsGlobalOpt(*ParserOptStack.getLast()));
  ParserOptStack.getLast()->setNewGroup(false);
  ClntCfgGroupLst.clear();
  ClntCfgIALst.clear();
  ClntCfgAddrLst.clear();
  //creation of default, new group
  ClntCfgGroupLst.append(new TClntCfgGroup());
  ClntCfgGroupLst.getLast()->setOptions(ParserOptStack.getLast());

}

bool clntParser::EndIfaceDeclaration()
{
  //add all identity associations to last group
  SmartPtr<TClntCfgIA> ptrIA;
  ClntCfgIALst.first();
  while (ptrIA=ClntCfgIALst.get())
      ClntCfgGroupLst.getLast()->addIA(ptrIA);
   
  //set interface options on the basis of just read information
  ClntCfgIfaceLst.getLast()->setOptions(ParserOptStack.getLast());
  //add list of groups to this iface
  ClntCfgGroupLst.first();
  SmartPtr<TClntCfgGroup> ptr;
  int groupsCnt=0;
  while (ptr=ClntCfgGroupLst.get())
    if (ptr->countIA()>0)
    {
      ClntCfgIfaceLst.getLast()->addGroup(ptr);
      groupsCnt++;
    };
    
  if ((ClntCfgIfaceLst.getLast())->onlyInformationRequest())
  {
    if (groupsCnt) YYABORT;
  }
  else
  {
    //if only options has changed for this iface
    if (groupsCnt==0)
        EmptyIface();  //add one IA with one address to this iface
  }
  //restore global options
  ParserOptStack.delLast();
  return true;    
}   

void clntParser::EmptyIface()
{
    //set iface options on the basis of recent information
  ClntCfgIfaceLst.getLast()->setOptions(ParserOptStack.getLast());
  //add one IA with one address to this iface
  ClntCfgIfaceLst.getLast()->addGroup(new TClntCfgGroup());
  EmptyIA();
  ClntCfgIALst.getLast()->setOptions(ParserOptStack.getLast());
  ClntCfgIfaceLst.getLast()->getLastGroup()->
    addIA(ClntCfgIALst.getLast());
    
}

//method creates new scope appropriately for interface options and declarations
//clears list of addresses
//bool aggregation - whether it is agregated IA option
void clntParser::StartIADeclaration(bool aggregation)
{
  ParserOptStack.append(new TClntParsGlobalOpt(*ParserOptStack.getLast()));
  ParserOptStack.getLast()->setNewGroup(false);
  ParserOptStack.getLast()->setAddrHint(!aggregation);
  ClntCfgAddrLst.clear();
}

void clntParser::EndIADeclaration(long iaCnt)
{
  if(ClntCfgAddrLst.count()==0)
    EmptyIA();
  else
  {
    ClntCfgIALst.append(new TClntCfgIA(ParserOptStack.getFirst()->getIncedIAIDCnt()));
    SmartPtr<TClntCfgAddr> ptr;
    ClntCfgAddrLst.first();
    while(ptr=ClntCfgAddrLst.get())
          ClntCfgIALst.getLast()->addAddr(ptr);
  }
  //set proper options specific for this IA
  ClntCfgIALst.getLast()->setOptions(ParserOptStack.getLast());

  //Options change - new group should be created
  if (ParserOptStack.getLast()->isNewGroup())
  {

    //this IA will have its own group, bcse it does't match with previous ones
    ClntCfgGroupLst.prepend(new TClntCfgGroup());
    ClntCfgGroupLst.getFirst()->setOptions(ParserOptStack.getLast());
    ClntCfgGroupLst.first();
    ClntCfgGroupLst.getFirst()->addIA(ClntCfgIALst.getLast());
    for (int i=1;i<iaCnt;i++)
    {
      //przy tworzeniu wska�nika utworzenie kopi opisu opcji znajduj�cej si� na ko�cu listy
      SmartPtr<TClntCfgIA> ptr 
        (new TClntCfgIA(ClntCfgIALst.getLast(),ParserOptStack.getFirst()->getIncedIAIDCnt()));
      ClntCfgGroupLst.getFirst()->addIA(ptr);
    }
    ClntCfgIALst.delLast();
    ParserOptStack.delLast();
  }
  else
  {
    //FIXME: increase IAID when copy
     for (int i=1;i<iaCnt;i++)
     {
        SmartPtr<TClntCfgIA> ia(new TClntCfgIA(*ClntCfgIALst.getLast()));
        ia->setIAID(ParserOptStack.getFirst()->getIncedIAIDCnt());
        ClntCfgIALst.append(ia);
     }
     //this IA matches with previous ones and can be grouped with them
     //so it's should be left on the list and be appended with them to present list
     ParserOptStack.delLast();
       //new IA was found, so should new group be created ??

     if (ParserOptStack.getLast()->isNewGroup())
     {
          //ParserOptStack.delLast();
            //new IA was found, so should new group be created ??
        //FIXED: in the case list of IAs has more than iaCnt elements insert them into
        //the group except the last iaCnt IA, which belongs to the new group
        while(ClntCfgIALst.count()>iaCnt)
        {
             ClntCfgGroupLst.getLast()->addIA(ClntCfgIALst.getFirst());
             ClntCfgIALst.delFirst();
        }
        ClntCfgGroupLst.append(new TClntCfgGroup());
        //and now we will be waiting for matchin IAs
        ParserOptStack.getLast()->setNewGroup(false);
        ClntCfgGroupLst.getLast()->setOptions(ParserOptStack.getLast());
     };
  };
}

//metoda dodaje 1 IA do kolejki ClntCfgIAs, a nast�pnie adres do 
//ostatniego IA w kolejce ClntCfgIALst o w�a�ciwo�ciach opcji 
//znajduj�cych si� na stosie ParsOptStack
void clntParser::EmptyIA()
{
      EmptyAddr();
    ClntCfgIALst.append(new TClntCfgIA(ParserOptStack.getFirst()->getIncedIAIDCnt()));
    ClntCfgIALst.getLast()->setOptions(ParserOptStack.getLast());
    ClntCfgIALst.getLast()->addAddr(ClntCfgAddrLst.getLast());
}   

//metoda dodaje 1 adres do kolejki ClntCfgAddrLst o w�a�ciwo�ciach opcji 
//znajduj�cych si� na stosie ParsOptStack
void clntParser::EmptyAddr()
{
    ClntCfgAddrLst.append(new TClntCfgAddr());
    ClntCfgAddrLst.getLast()->setOptions(ParserOptStack.getLast());
}   

// <Linux>
extern yy_clntParser_stype yylval;

int clntParser::yylex()
{
    int x = this->lex->yylex();
    this->yylval=::yylval;
    return x;
}


void clntParser::yyerror(char *m)
{
    // logging 
    std::clog << "Config parse error: line " << lex->lineno() << ", unexpected [" 
	      << lex->YYText() << "] token." << std::endl;
}
// </Linux>
