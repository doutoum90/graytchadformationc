executable: fonctions.o main.o
	gcc -o bin/executable bin/fonctions.o bin/main.o

fonctions.o: fonctions.c
	gcc -o bin/fonctions.o -c src/fonctions.c

main.o: main.c type.h fonction.h
	gcc -o bin/main.o -c src/main.c