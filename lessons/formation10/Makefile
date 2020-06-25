executable10: mesfonctions10.o main10.o
	gcc -o executable10 mesfonctions10.o main10.o

mesfonctions10.o: mesfonctions.c
	gcc -o mesfonctions10.o -c mesfonctions.c

main10.o: main.c mesfonctions.h
	gcc -o main10.o -c main.c