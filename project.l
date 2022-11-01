%{
#include<string.h>
%}
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
"#ImporT >".+".h<" {printf("Header file included");}

">IntegeR< "{VARIABLE}[ ]?":="[ ]?{INT_NUMBER} {printf("Integer with initilization");}

">IntegeR< "{VARIABLE}[ ]? {printf("Integer without initilization");}

">CharacteR< "{VARIABLE}[ ]?":="[ ]?. {printf("Character with initilization");}

">CharacteR< "{VARIABLE}[ ]? {printf("Character without initilization");}

">LonG< "{VARIABLE}[ ]?":="[ ]?{INT_NUMBER} {printf("Long with initilization");}

">LonG< "{VARIABLE}[ ]? {printf("Long without initilization");}

">FloaT< "{VARIABLE}[ ]?":="[ ]?{REAL_NUMBER} {printf("Float with initilization");}

">FloaT< "{VARIABLE}[ ]? {printf("Float without initilization");}

">FloaT64< "{VARIABLE}[ ]?":="[ ]?{REAL_NUMBER} {printf("Double with initilization");}

">FloaT64< "{VARIABLE}[ ]? {printf("Double without initilization");}

{VARIABLE}[ ]?":="[ ]*{DATA_TYPE}"(("{INT_NUMBER}"))["[ ]?{INT_NUMBER}",,"[ ]?{INT_NUMBER}"]" {
  printf("defining array");
}

">VoiD<" {printf("Void DataType");}

{VARIABLE}[ ]?":="[ ]*{VARIABLE}[ ]?{OPERATOR}[ ]?{VARIABLE} {
  printf("String is %s", yytext);
}

{VARIABLE}[ ]?":="[ ]*{VARIABLE}[ ]?{BITWISE_OPERATOR}[ ]?{VARIABLE} {
  printf("String is %s", yytext);
}

{VARIABLE}[ ]?":="[ ]*"NoT "{VARIABLE} {
  printf("String is %s", yytext);
}

{VARIABLE}[ ]?":="[ ]?({VARIABLE}|{REAL_NUMBER}|{INT_NUMBER}) {
  printf("String is %s", yytext);
}

"+" {printf("Plus sign");}

"-" {printf("minus sign");}

"*" {printf("multiplication sign");}

"/" {printf("division sign");}

"%" {printf("Modulas operation");}

"**" {printf("Power operation");}

">" {printf("Greater");}

"<" {printf("Less");}

">=" {printf("GreaterEqual");}

"<=" {printf("LessEqual");}

"EquaL" {printf("Logical Equal");}

"&AnD" {printf("Logical AND operation");}

"|OR" {printf("Logical OR operation");}

"!NoT" {printf("Logical NOT opeation");}

":=" {printf("Assignment opeation");}

"{{" {printf("Curly bracket started");}

"}}" {printf("Curly bracket end");}

"((" {printf("bracket started");}

"))" {printf("bracket ended");}

";;" {printf("semi-colon");}

",," {printf("comma");}

"->FoR<-"[ ]?"(("{LOOP_INIT}"::"{LOOP_COND}"::"{LOOP_INC_DEC}"))"[ ]? {printf("For loop");}

"->WhilE<-"[ ]?"(("{LOOP_COND}"))"[ ]? {printf("While loop");}

">BacK< "({INT_NUMBER}|{REAL_NUMBER}|{VARIABLE}) {printf("return statement");}

"->OuT<-"[ ]?"((".*"))" {
  int i = 0;
  while (i < strlen(yytext)-1 && yytext[i] != '(' && yytext[i+1] != '(') i = i+1;
  i = i + 3;
  while (i < strlen(yytext) && yytext[i] != ')') {
    printf("%c", yytext[i]);
    i++;
  }
}

"->IN<-"[ ]?"(("[ ]*{VARIABLE}[ ]*"))" {printf("taking input from user");}

">ContinuE<" {printf("for continuing loop");}

">BreaK<" {printf("for breaking from loop");}

">StrucT< "{VARIABLE} {printf("for defining structure");}

"->SizeoF<-(("{VARIABLE}"))" {printf("for defining the size of variable");}

"->->".* {printf("inline comment %s", yytext);}

"->IF<-"[ ]?"(("{LOOP_COND}"))" {printf("for using if statement");}

"->EliF<-"[ ]?"(("{LOOP_COND}"))" {printf("for using else if statement");}

"->ElsE<-" {printf("for using else statement");}

"IncremenT1" {printf("For incrementing the variable value 1");}

"DecremenT1" {printf("For decrementing the variable value 1");}

"AnD" {printf("Bitwise AND operation");}

"OR" {printf("Bitwise OR operation");}

"NoT" {printf("Bitwise NOT operation");}

"XoR" {printf("Bitwise XOR operation");}

"->SwitcH<-"[ ]?"(("[ ]*({VARIABLE}|{INT_NUMBER}|{REAL_NUMBER})[ ]*"))" {
  printf("defining switch statement");
}

">CasE< "({INT_NUMBER}|{REAL_NUMBER})"::" {printf("defining case statement");}

">Default<::" {printf("default statement");}

(">IntegeR<"|">VoiD<")[ ]"->MaiN<-"[ ]?"(())" {printf("defining main function");}

({DATA_TYPE}|">VoiD<")[ ]{VARIABLE}[ ]?"(("[ ]*{DATA_TYPE}[ ]+{VARIABLE}[ ]*",,"[ ]*{DATA_TYPE}[ ]+{VARIABLE}[ ]*"))" {
  printf("Function with parameter");
}

({DATA_TYPE}|">VoiD<")[ ]{VARIABLE}[ ]?"(())" {printf("defining a function");}

{VARIABLE}"(())" {printf("function calling");}

{VARIABLE}"(("[ ]*({VARIABLE}|{INT_NUMBER}|{REAL_NUMBER})[ ]*",,"[ ]*({VARIABLE}|{INT_NUMBER}|{REAL_NUMBER})[ ]*"))" {
  printf("parameterize function calling");
}

. {}

%%

int yywrap()
{
  return 1;
}

int main()
{

    yyin = freopen("input.txt","r",stdin);
	  yyout = freopen("output.txt","w",stdout);
    yylex();
    return 0;
}