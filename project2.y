%{
  #include<stdio.h>
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

  int index=0;
  int find_symbol_table_index(char *var);
  void assignment(char *name, int ival, float fval, char *type);
%}


%start program
%token INT FLOAT CHAR VOID PLUS MINUS MUL DIV MOD POW GT LT GTE
%token LTE EQUAL LOGICALAND LOGICALOR ASSIGN LPAR RPAR
%token LBRA RBRA SEMICOLON COMMA COLON FOR WHILE BACK OUT IN 
%token CONTINUE BREAK STRUCT SIZEOF IF ELSEIF ELSE INCREMENT
%token DECREMENT SWITCH CASE DEFAULT INTVAL REALVAL VAR
%token OUTPUTTEXT NOTEQUAL BITWISEAND BITWISEXOR BITWISEOR
%union {
  struct abc {
    int ival;
    float fval;
    char *str;
    char *type;
  }uni_var;
}
%type<uni_var> VAR INTVAL REALVAL assignval expression OUTPUTTEXT
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
          VAR ASSIGN assignval {assignment($1.str, $3.ival, $3.fval, $3.type);}
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
          | assignval BITWISEXOR assignval {
            if (strcmp($1.type, "int")==0) {
              $$.ival = $1.ival ^ $3.ival;
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
        else if (strcmp($3.type, "float") == 0) printf("%.2lf\n", $3.fval);
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

int main(void)
{   
  yyparse();
  printf("%s %s : %d\n",symbol_table[0].data_type, symbol_table[0].name, symbol_table[0].ival);
  printf("%s %s : %d\n",symbol_table[1].data_type, symbol_table[1].name, symbol_table[1].ival);
  
}
