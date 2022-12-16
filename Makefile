make:
		bison -d project2.y
		gcc project2.tab.c lex.yy.c
		a
		