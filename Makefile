make:
		bison -d project2.y
		flex project2.l
		gcc lex.yy.c project2.tab.c
		a <input2.txt> output2.txt
make2:
		bison -d project2.y
		flex project2.l
		gcc lex.yy.c project2.tab.c
		a
		