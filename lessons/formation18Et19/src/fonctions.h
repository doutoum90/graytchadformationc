#ifndef __FONCTIONS__H
#define __FONCTIONS__H

#define pi 3.14


#define LARGEUR 10
#define LONGUEUR 15

#define SURFACE(long, larg) long*larg
#define AFFICHER(message) printf("%s", message)

void afficherMessage(char *chaine);
unsigned factoriel(unsigned n);
unsigned factorielRec(unsigned n);
unsigned fib(unsigned n);
unsigned sommeNpremier(unsigned n);



#endif