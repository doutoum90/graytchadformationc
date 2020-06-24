# Leçon C 10
## Programmation modulaire

besoins de séparer son code pour qu'il soit
- lisible
- bien agencé
- portable

exemple de fonction qui affiche ```hello```
1- ajout de header (déclaration)
	hello.h
``` c
void Hello(void);
```
2- ajout de corps (implementation)
hello.c

``` c
void Hello(void)
{
	printf("hello");
}
```

3- ajout de la fonction principale (test)
main.c
``` c
....
#include "hello.h"
int main(void)
{
	Hello();
	return 0;
}
```
### compilation avec les makefiles

``` console
cible: dependance
	commandes
```

exemple
``` console
hello: hello.o main.o
	gcc -o hello hello.o main.o

hello.o: hello.c
	gcc -o hello.o hello.c

main.o: main.c hello.h
	gcc -o main.o main.c
```

on compile avec la commande `Make`.
Il générera trois fichiers `main.o`, `hello.o` et `main` mais c'est le dernier qui nous intéresse.

pour executer nous faisons ceci: ./main

