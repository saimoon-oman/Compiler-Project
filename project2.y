%{
  #include<stdio.h>
  void yyerror(char *s);
  extern int yylex();
  extern int yyparse();
  
  typedef struct {
    char *name;
    char *data_type;
    int ival;
    float fval;
  }value;
  value symbol_table[200];

  int index=0;
%}


%start program
%token INT FLOAT CHAR VOID PLUS MINUS MUL DIV MOD POW GT LT GTE
%token LTE EQUAL LOGICALAND LOGICALOR LOGICALNOT ASSIGN LPAR RPAR
%token LBRA RBRA SEMICOLON COMMA COLON FOR WHILE BACK OUT IN 
%token CONTINUE BREAK STRUCT SIZEOF IF ELSEIF ELSE INCREMENT
%token DECREMENT AND OR NOT XOR SWITCH CASE DEFAULT INTVAL REALVAL VAR
%union {
  struct abc {
    int ival;
    float fval;
    char *str;
  }uni_var;
}
%type<uni_var> VAR INTVAL

%%	  	
program: 
       |program statement  
       ;			   

statement: 
          |declaration
          ;

declaration:
            TYPE expression1
            ;

TYPE :
     INT
     | FLOAT
     ;

expression1 :
            expression1 COMMA expression
            | expression
            ; 

expression:
          VAR ASSIGN INTVAL {
            symbol_table[index].data_type = "int";
            symbol_table[index].name = $1.str;
            symbol_table[index].ival = $3.ival;
            index++;
          }
          ;

%%


void yyerror(char *s) {
    fprintf(stderr, "%s\n", s);
}

int yywrap()
{
return 1;
}

int main(void)
{    
  yyparse();
  printf("%s %s : %d\n",symbol_table[0].data_type, symbol_table[0].name, symbol_table[0].ival);
}
