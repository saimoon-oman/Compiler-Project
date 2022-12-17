%{
 #include<stdio.h>
 #include "project2.tab.h"
 #include<stdlib.h>
 #include<string.h>
%}

delim	[ \t]
whitesp	{delim}+
INT_NUMBER [0-9]+
REAL_NUMBER	[-]?[0-9]+[.]?[0-9]*
VARIABLE [a-zA-Z][a-zA-Z_0-9]*
DATA_TYPE ">IntegeR<"|">CharacteR<"|">LonG<"|">FloaT<"|">FloaT64<"
OPERATOR "+"|"-"|"*"|"/"|"%"|"**"
INC_DEC "IncremenT1"|"DecremenT1"
LOGICAL_OPERATOR "<"|">"|"<="|">="|"EquaL"|"&AnD"|"|OR"|"!NoT"
LOOP_INIT [ ]*{VARIABLE}[ ]*":="[ ]*{INT_NUMBER}[ ]*
LOOP_COND [ ]*({VARIABLE}|{INT_NUMBER})[ ]*{LOGICAL_OPERATOR}[ ]*({VARIABLE}|{INT_NUMBER})[ ]*
LOOP_INC_DEC [ ]*{VARIABLE}[ ]{INC_DEC}[ ]*
BITWISE_OPERATOR "AnD"|"OR"|"XoR"

%%
"#ImporT>".+".h<" {
  yylval.uni_var.str = strdup(yytext);
  return LIB;}

">IntegeR<"   {return INT;}

">FloaT<"     {return FLOAT;}

"+" {return PLUS;}

"-" {return MINUS;}

"*" {return MUL;}

"/" {return DIV;}

"%" {return MOD;}

"**" {return POW;}

">" {return GT;}

"<" {return LT;}

">=" {return GTE;}

"<=" {return LTE;}

"EquaL" {return EQUAL;}

"!EquaL!" {return NOTEQUAL;}

"&&" {return BITWISEAND;}

"^^" {return BITWISEXOR;}

"||" {return BITWISEOR;}

"&AnD" {return LOGICALAND;}

"|OR" {return LOGICALOR;}

":=" {return ASSIGN;}

"{{" {return LPAR;}

"}}" {return RPAR;}

"((" {return LBRA;}

"))" {return RBRA;}

";;" {return SEMICOLON;}

",," {return COMMA;}

"::" {return COLON;}

"->FoR<-" {return FOR;}

"->WhilE<-" {return WHILE;}

">BacK<" {return BACK;}

"->OuT<-" {return OUT;}

"->IN<-" {return IN;}

"->->".* {}

"->->->"({whitesp}|[\n]|.)*"<-<-" {}

"??"({whitesp}|.)*"??" {
  yytext++;
  yytext++;
  int l=strlen(yytext);
  yylval.uni_var.str=yytext;
  yylval.uni_var.str[l-2]='\0';
  return OUTPUTTEXT;
}

"->IF<-" {return IF;}

"->ElsE<-" {return ELSE;}

"IncremenT1" {return INCREMENT;}

"DecremenT1" {return DECREMENT;}

"min" {return MIN;}

"->SwitcH<-" {return SWITCH;}

">CasE<" {return CASE;}

">DefaulT<::" {return DEFAULT;}

{INT_NUMBER} {
  yylval.uni_var.ival = atoi(yytext);
  yylval.uni_var.fval = 0.0;
  yylval.uni_var.type = "int";
  return INTVAL;
}

{REAL_NUMBER} {
  yylval.uni_var.fval = atof(yytext);
  yylval.uni_var.ival = 0;
  yylval.uni_var.type = "float";
  return REALVAL;
}

{VARIABLE} {
  yylval.uni_var.str = strdup(yytext);
  return VAR;
}

[?][a-zA-Z][?] {
  printf("matched");
}

{whitesp}	{ /* No action and no return */}

[\n] {}

%%
