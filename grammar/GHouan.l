%{
#include "./GHouan.tab.h"
%}

%e 1600
%n 800
%p 5000

Separator	[\(\)\{\}\[\]\;\,\.]
Delimiter1	[\=\>\<\!\~\?\:\+\-\*\/\&\|\^\%]
HexDigit	[0-9a-fA-F]
Digit		[0-9]
OctalDigit	[0-7]
TetraDigit	[0-3]
NonZeroDigit	[1-9]
Letter		[a-zA-Z_]
AnyButSlash	[^\/]
AnyButAstr	[^\*]
BLANK		[ ]
BLK		[\b]
TAB		[\t]
FF		[\f]
ESCCHR		[\\]
CR		[\r]
LF		[\n]
UniEsc          [\1b]

OctEscape1	[\\]{OctalDigit}
OctEscape2	[\\]{OctalDigit}{OctalDigit}
OctEscape3	[\\]{TetraDigit}{OctalDigit}{OctalDigit}
OctEscape	({OctEscape1}|{OctEscape2}|{OctEscape3})

Escape		[\\]([r]|[n]|[b]|[f]|[t]|[\\]|[\']|[\"])
ULetter         ({Letter}|{UniEsc})
Identifier 	{ULetter}({ULetter}|{Digit})*

Comment1        [\/][\*]({AnyButAstr}|[\*]{AnyButSlash})*[\*][\/]
Comment2        [\/][\/].*
Comment		({Comment1}|{Comment2})

Dimension	[\[]({CR}|{LF}|{FF}|{TAB}|{BLK}|{BLANK}|{Comment})*[\]]

IntSuffix	([l]|[L])
DecimalNum	{NonZeroDigit}{Digit}*{IntSuffix}?
OctalNum	[0]{OctalDigit}*{IntSuffix}?
HexNum		[0]([x]|[X]){HexDigit}{HexDigit}*{IntSuffix}?
IntegerLiteral	({DecimalNum}|{OctalNum}|{HexNum})

Sign		([\+]|[\-])
FlSuffix	([f]|[F]|[d]|[D])
SignedInt	{Sign}?{Digit}+
Expo		([e]|[E])
ExponentPart	{Expo}{SignedInt}?
Float1          {Digit}+[\.]{Digit}+?{ExponentPart}?{FlSuffix}?
Float2		[\.]{Digit}+{ExponentPart}?{FlSuffix}?
Float3		{Digit}+{ExponentPart}{FlSuffix}?
Float4		{Digit}+{FlSuffix}
FloatingPoint	({Float1}|{Float2}|{Float3}|{Float4})

AnyChrChr	[^\\']
AnyStrChr	[^\\"]
Character	[\']({Escape}|{OctEscape}|{AnyChrChr})[\']
String		[\"]({Escape}|{OctEscape}|{AnyStrChr})*[\"]
Numeric  	({IntegerLiteral}|{FloatingPoint})
Literal		({Numeric}|{Character}|{String})

%%

"true"		{return BOOLLIT;}
"false"		{return BOOLLIT;}

{Separator}	{return yytext[0];}
{Delimiter1}	{return yytext[0];}
{Dimension}	{return OP_DIM;}

"=="		{return OP_EQ;}
"<="		{return OP_LE;}
">="		{return OP_GE;}
"!="		{return OP_NE;}
"||"		{return OP_LOR;}
"&&"		{return OP_LAND;}
"++"		{return OP_INC;}
"--"		{return OP_DEC;}
">>"		{return OP_SHR;}
"<<"		{return OP_SHL;}
">>>"		{return OP_SHRR;}
"+="		{return ASS_ADD;}
"-="		{return ASS_SUB;}
"*="		{return ASS_MUL;}
"/="		{return ASS_DIV;}
"&="		{return ASS_AND;}
"|="		{return ASS_OR;}
"^="		{return ASS_XOR;}
"%="		{return ASS_MOD;}
"<<="		{return ASS_SHL;}
">>="		{return ASS_SHR;}
">>>="		{return ASS_SHRR;}


"package"	{return PACKAGE;}
"using"	        {return USING;}

"boolean"	{return BOOLEAN;}
"double"	{return DOUBLE;}
"int"		{return INT;}
"byte"		{return BYTE;}
"float"		{return FLOAT;}
"long"		{return LONG;}
"short"		{return SHORT;}
"char"		{return CHAR;}

"private"	{return PRIVATE;}
"public"	{return PUBLIC;}

"loop" 		{return LOOP;}	
"for"		{return FOR;}
"while"		{return WHILE;}
"break"		{return BREAK;}
"continue"	{return CONTINUE;}
"if"		{return IF;}
"else"		{return ELSE;}
"switch"	{return SWITCH;}
"case"		{return CASE;}
"default"	{return DEFAULT;}
"rest"		{return REST;}

"fn"		{return FN;}
"reflex"	{return REFLEX;}
"return"	{return RETURN;}
"void"		{return VOID;}
"emit" 		{return EMIT;}


"new"		{return NEW;}
"null"		{return JNULL;}

"this"		{return THIS;}
"self" 		{return SELF;}

"agent"		{return AGENT;}
"object"	{return OBJECT;}
"trait"		{return TRAIT;}
"die" 		{return DIE;}

"var" 		{return VAR;}
"val" 		{return VAL;}

{Identifier}	{return IDENTIFIER;}

{DecimalNum}    {return LITERAL;}
{OctalNum}      {return LITERAL;}
{HexNum}        {return LITERAL;}

{Float1}        {return LITERAL;}
{Float2}        {return LITERAL;}
{Float3}        {return LITERAL;}
{Float4}        {return LITERAL;}

{Character}     {return LITERAL;}
{String}	{return LITERAL;}

{CR}   		{}
{LF}		{}
{FF}		{}
{TAB}		{}
{BLK}           {}
{BLANK}		{}

{Comment}	{}

%%

int yywrap(void){}
