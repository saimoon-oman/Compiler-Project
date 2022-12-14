%{
  #include<stdio.h>
  #include<stdlib.h>
  #include<string.h>
  #include<math.h>
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

  int index=0, if_check=0, sw = 0, check = 0;
  int find_symbol_table_index(char *var);
  int gcd(int x, int y);
  void assignment(char *name, int ival, float fval, char *type);
%}

%start program
%token INT FLOAT CHAR VOID PLUS MINUS MUL DIV MOD POW GT LT GTE
%token LTE EQUAL LOGICALAND LOGICALOR ASSIGN LPAR RPAR
%token LBRA RBRA SEMICOLON COMMA COLON FOR WHILE BACK OUT IN 
%token CONTINUE BREAK STRUCT SIZEOF IF ELSEIF ELSE INCREMENT
%token DECREMENT SWITCH CASE DEFAULT INTVAL REALVAL VAR MIN MAX
%token OUTPUTTEXT NOTEQUAL BITWISEAND BITWISEXOR BITWISEOR LIB MIN GCD LCM
%union {
  struct abc {
    int ival;
    float fval;
    char *str;
    char *type;
  }uni_var;
}
%type<uni_var> VAR LIB INTVAL REALVAL assignval block statement expression OUTPUTTEXT
%left PLUS MINUS
%left MUL DIV MOD
%left POW
%%	  	
program: 
       |program statement  
       ;			   

statement: 
          declaration
          | expression1
          | print
          | in
          | if
          | while
          | for
          | library
          | function
          | function_call
          | ret
          | switch
          | case
          | fun
          ;

library:
    LIB {printf("%s is detected.\n", $1.str);}
    ;

function:
    TYPE VAR LBRA params RBRA LPAR block {
      if(strcmp($2.str, "main") == 0)
      {
          printf("Main function.\n");
      }
      else
      {
          printf("User defined function.\n");
      }
    }
    ;

params:
    params COMMA declaration_for_function
    |declaration_for_function {printf("Function declared\n");}
    ;

declaration_for_function: 
                    |TYPE expression
    ;

function_call:
    VAR LBRA expression1 RBRA {printf("Function calling with parameter\n");}
    |VAR LBRA RBRA {printf("Function calling without parameter\n");}
    ;
fun:
    gcd
    | lcm
    | min
    | max
    ;
gcd: 
    GCD LBRA assignval COMMA assignval RBRA       {
    printf("%d %d GCD is %d\n",$3.ival, $5.ival, gcd($3.ival, $5.ival));
}
lcm: 
    LCM LBRA assignval COMMA assignval RBRA       {
    printf("%d %d LCM is %d\n",$3.ival, $5.ival, $3.ival * $5.ival / gcd($3.ival, $5.ival));
}       

min:
    MIN LBRA assignval COMMA assignval RBRA {
      if (strcmp($3.type, "int") == 0) {
        printf("Minimum between %d and %d is : ", $3.ival, $5.ival);
        if ($3.ival < $5.ival) printf("%d\n", $3.ival);
        else printf("%d\n", $5.ival);
      }
      else if (strcmp($3.type, "float") == 0) {
        printf("Minimum between %.2f and %.2f is : ", $3.fval, $5.fval);
        if ($3.fval < $5.fval) printf("%.2f\n", $3.fval);
        else printf("%.2f\n", $5.fval);
      }
    }

max:
    MAX LBRA assignval COMMA assignval RBRA {
      if (strcmp($3.type, "int") == 0) {
        printf("Maximum between %d and %d is : ", $3.ival, $5.ival);
        if ($3.ival > $5.ival) printf("%d\n", $3.ival);
        else printf("%d\n", $5.ival);
      }
      else if (strcmp($3.type, "float") == 0) {
        printf("Maximum between %.2f and %.2f is : ", $3.fval, $5.fval);
        if ($3.fval > $5.fval) printf("%.2f\n", $3.fval);
        else printf("%.2f\n", $5.fval);
      }
    }

declaration:
            TYPE expression1
            ;

switch:
    SWITCH LBRA assignval RBRA {
        sw = $3.ival;
        check = 0;
        printf("switch statement.\n");
    }
    ;

case:
    cases
    {
        if(check == 0)
        {
            printf("default value\n");
        }
    }
    ;

cases: 
    CASE assignval COLON LBRA statement RBRA cases{
        if(sw==$2.ival)
        {
            printf("Matched with case %d\n",$2.ival);
            check = 1;
        }

    }
    |CASE assignval COLON LBRA statement RBRA default_function {
        
        if(sw==$2.ival)
        {
            printf("Matched with case %d\n",$2.ival);
            check = 1;
        }
    }
    ;
default_function:
    DEFAULT LBRA statement RBRA {
    }
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
          VAR ASSIGN assignval {assignment($1.str, $3.ival, $3.fval, $3.type); $$.str = $1.str; $$.ival = $3.ival; $$.fval = $3.fval; $$.type = $3.type}
          | VAR INCREMENT {
            int i = find_symbol_table_index($1.str);
            if (i != index) {
              symbol_table[i].ival = symbol_table[i].ival + 1;
              symbol_table[i].fval = symbol_table[i].fval + 1.0;
            }
          }
          | VAR DECREMENT {
            int i = find_symbol_table_index($1.str);
            if (i != index) {
              symbol_table[i].ival = symbol_table[i].ival - 1;
              symbol_table[i].fval = symbol_table[i].fval - 1.0;
            }
          }
          | VAR {assignment($1.str, 0, 0.0, "int");}
          ;

ret:
    BACK
    | BACK assignval {printf("Return %d from function\n", $2.ival);}
    ;

assignval:
          INTVAL {$$.ival = $1.ival, $$.fval = $1.fval, $$.type = $1.type;}
          | REALVAL {$$.ival = $1.ival, $$.fval = $1.fval, $$.type = $1.type;}
          | VAR {
            int i = 0;
            for (i = 0; i < index; i++) {
              if (strcmp($1.str, symbol_table[i].name) == 0) {
                $$.ival = symbol_table[i].ival, $$.fval = symbol_table[i].fval, $$.type = symbol_table[i].data_type;
                break;
              }
            }
            // if (i == index) printf("NOT FOUND\n");
          }
          | MIN LBRA VAR COMMA VAR RBRA {
            if (strcmp($3.type, "int") == 0) {
              int i = find_symbol_table_index("min");
              symbol_table[i].name = "min";
              symbol_table[i].data_type = "int";
              symbol_table[i].ival = $3.ival < $5.ival ? $3.ival : $5.ival;
              symbol_table[i].fval = $3.fval < $5.fval ? $3.fval : $5.fval;
              if (i == index) index++;
              $$.ival = symbol_table[i].ival;
              $$.fval = symbol_table[i].fval;
              $$.type = symbol_table[i].data_type;
            }
            else if (strcmp($3.type, "float") == 0) {
              int i = find_symbol_table_index("min");
              symbol_table[i].name = "min";
              symbol_table[i].data_type = "float";
              symbol_table[i].ival = $3.ival < $5.ival ? $3.ival : $5.ival;
              symbol_table[i].fval = $3.fval < $5.fval ? $3.fval : $5.fval;
              if (i == index) index++;
              $$.ival = symbol_table[i].ival;
              $$.fval = symbol_table[i].fval;
              $$.type = symbol_table[i].data_type;
            }
          }
          | assignval LOGICALOR assignval {
            if (strcmp($1.type, "int")==0) {
              $$.ival = ($1.ival || $3.ival);
              $$.fval = $1.fval, $$.type = $1.type;
            }
          }
          | assignval LOGICALAND assignval {
            if (strcmp($1.type, "int")==0) {
              $$.ival = ($1.ival && $3.ival);
              $$.fval = $1.fval, $$.type = $1.type;
            }
          }
          | assignval BITWISEXOR assignval {
            if (strcmp($1.type, "int")==0) {
              $$.ival = $1.ival ^ $3.ival;
              $$.fval = $1.fval, $$.type = $1.type;
            }
          }
          | assignval BITWISEAND assignval {
            if (strcmp($1.type, "int")==0) {
              $$.ival = $1.ival & $3.ival;
              $$.fval = $1.fval, $$.type = $1.type;
            }
          }
          | assignval BITWISEOR assignval {
            if (strcmp($1.type, "int")==0) {
              $$.ival = $1.ival | $3.ival;
              $$.fval = $1.fval, $$.type = $1.type;
            }
          }
          | assignval EQUAL assignval {
            if (strcmp($1.type, "int")==0) {
              if ($1.ival == $3.ival) $$.ival = 1, $$.fval = 1.0;
              else $$.ival = 0, $$.fval = 0.0;
              $$.type = $1.type;
            }
            else if (strcmp($1.type, "float") == 0) {
              if ($1.fval == $3.fval) $$.fval = 1.0, $$.ival = 1;
              else $$.fval = 0.0, $$.ival = 0;
              $$.type = $1.type;
            }
          }
          | assignval NOTEQUAL assignval {
            if (strcmp($1.type, "int")==0) {
              if ($1.ival != $3.ival) $$.ival = 1, $$.fval = 1.0;
              else $$.ival = 0, $$.fval = 0.0;
              $$.type = $1.type;
            }
            else if (strcmp($1.type, "float") == 0) {
              if ($1.fval != $3.fval) $$.fval = 1.0, $$.ival = 1;
              else $$.fval = 0.0, $$.ival = 0;
              $$.type = $1.type;
            }
          }
          | assignval LT assignval {
            if (strcmp($1.type, "int")==0) {
              if ($1.ival < $3.ival) $$.ival = 1, $$.fval = 1.0;
              else $$.ival = 0, $$.fval = 0.0;
              $$.type = $1.type;
            }
            else if (strcmp($1.type, "float") == 0) {
              if ($1.fval < $3.fval) $$.fval = 1.0, $$.ival = 1;
              else $$.fval = 0.0, $$.ival = 0;
              $$.type = $1.type;
            }
          }
          | assignval LTE assignval {
            if (strcmp($1.type, "int")==0) {
              if ($1.ival <= $3.ival) $$.ival = 1, $$.fval = 1.0;
              else $$.ival = 0, $$.fval = 0.0;
              $$.type = $1.type;
            }
            else if (strcmp($1.type, "float") == 0) {
              if ($1.fval <= $3.fval) $$.fval = 1.0, $$.ival = 1;
              else $$.fval = 0.0, $$.ival = 0;
              $$.type = $1.type;
            }
          }
          | assignval GT assignval {
            if (strcmp($1.type, "int")==0) {
              if ($1.ival > $3.ival) $$.ival = 1, $$.fval = 1.0;
              else $$.ival = 0, $$.fval = 0.0;
              $$.type = $1.type;
            }
            else if (strcmp($1.type, "float") == 0) {
              if ($1.fval > $3.fval) $$.fval = 1.0, $$.ival = 1;
              else $$.fval = 0.0, $$.ival = 0;
              $$.type = $1.type;
            }
          }
          | assignval GTE assignval {
            if (strcmp($1.type, "int")==0) {
              if ($1.ival >= $3.ival) $$.ival = 1, $$.fval = 1.0;
              else $$.ival = 0, $$.fval = 0.0;
              $$.type = $1.type;
            }
            else if (strcmp($1.type, "float") == 0) {
              if ($1.fval >= $3.fval) $$.fval = 1.0, $$.ival = 1;
              else $$.fval = 0.0, $$.ival = 0;
              $$.type = $1.type;
            }
          }
          | assignval PLUS assignval     { $$.ival = $1.ival + $3.ival, $$.fval = $1.fval + $3.fval, $$.type = $1.type; }
          | assignval MINUS assignval     { $$.ival = $1.ival - $3.ival, $$.fval = $1.fval - $3.fval, $$.type = $1.type; }
          | assignval MUL assignval     { $$.ival = $1.ival * $3.ival, $$.fval = $1.fval * $3.fval, $$.type = $1.type; }
          | assignval DIV assignval     { 
            if (strcmp($1.type, "int") == 0 && $3.ival != 0) $$.ival = $1.ival / $3.ival;
            else if (strcmp($1.type, "float") == 0 && $3.fval != 0.0) $$.fval = $1.fval / $3.fval;
            $$.type = $1.type;
          }
          | assignval MOD assignval {$$.ival = $1.ival % $3.ival, $$.fval = $1.fval, $$.type = $1.type;}
          | assignval POW assignval     { $$.ival = pow($1.ival, $3.ival), $$.fval = $1.fval, $$.type = $1.type; }
          | LBRA assignval RBRA           { $$.ival = $2.ival, $$.fval = $2.fval, $$.type = $2.type;}
          ;

print:
      OUT LBRA assignval RBRA {
        if (strcmp($3.type, "int") == 0) printf("%d\n", $3.ival);
        else if (strcmp($3.type, "float") == 0) printf("%.2f\n", $3.fval);
      }
      | OUT LBRA OUTPUTTEXT RBRA {
        printf("%s\n", $3.str);
      }
      ;

in:
    IN LBRA VAR RBRA {
      int i = find_symbol_table_index($3.str);
      if (i != index) {
        printf("Enter value for %s := ", symbol_table[i].name);
        if (strcmp(symbol_table[i].data_type, "int") == 0) {
          scanf("%d", &symbol_table[i].ival);
        }
        else if (strcmp(symbol_table[i].data_type, "float") == 0) {
          scanf("%f", &symbol_table[i].fval);
        }
      }
      else {
        printf("Variable not declared\n");
      }
    }
    ;

block:
    statement block
    |statement RPAR {$$.ival=$1.ival;}
    ;

if:
    IF LBRA assignval RBRA LPAR block {
      if($3.ival)
      {
          if_check=1;
          printf("If statement will be executed.\n");
      }
      if(if_check!=1)
      {
          printf("Else statement will be executed.\n");
      }
    }
    | IF LBRA assignval RBRA LPAR block else {
      if($3.ival)
      {  
          if_check=1;
          printf("If statement will be executed.\n");
      }
      if(if_check!=1)
      {
          printf("Else statement will be executed.\n");
      }
    }
    ;

else:
    ELSE LPAR block {}
    ;

while:
    WHILE LBRA assignval RBRA LPAR block {
      if($3.ival)
      {
          printf("condition matched for while loop\n");
      }
    }
    ;

for:
    FOR LBRA expression COLON assignval COLON expression RBRA LPAR block{
      if ($5.ival) {
        printf("condition matched for for loop.\n");
      }
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

int find_symbol_table_index(char *var)
{
  int i;
  for (i = 0; i < index; i++) {
    if (strcmp(symbol_table[i].name, var) == 0) return i;
  }
  return index;
}

void assignment(char *name, int ival, float fval, char *type)
{
  int i = find_symbol_table_index(name);
  symbol_table[i].data_type = type;
  symbol_table[i].name = name;
  symbol_table[i].ival = ival;
  symbol_table[i].fval = fval;
  if (i == index) index++;
}

int gcd(int x, int y)
{
    if (y == 0)   
    {
        return x;
    }
    else 
    {
        return gcd(y, x % y);   
    }
}

int main(void)
{   
  yyparse();
}
