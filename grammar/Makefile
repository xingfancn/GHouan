LEX = flex 
YACC = bison 
CC = gcc

INTERMEDIATE =  *.o *~ \
	        GHouan.output \
		GHouan.tab.c GHouan.tab.h \
		lex.yy.c \
		ghc

ghc : GHouan.tab.o lex.yy.o
	$(CC) -o ghc GHouan.tab.o lex.yy.o -lm

GHouan.tab.o : GHouan.tab.c
	$(CC) -c GHouan.tab.c

lex.yy.o : lex.yy.c
	$(CC) -c lex.yy.c
 
GHouan.tab.c : GHouan.y
	$(YACC) -dv GHouan.y 

lex.yy.c : GHouan.l
	$(LEX) -I GHouan.l

clean :
	rm  $(INTERMEDIATE) 

