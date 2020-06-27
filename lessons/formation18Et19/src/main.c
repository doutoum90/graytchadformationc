#include <stdio.h>
#include "fonctions.h"


int main()
{

    unsigned n;

    printf("%f\n", pi);
    printf("%u\n", SURFACE(2,3));
    AFFICHER("Bonjour");
    printf("saisir la valeur de n\n");
    scanf("%u", &n);
    printf("%u!=%u\n", n, factoriel(n));
    printf("%u!=%u\n", n, factorielRec(n));
    printf("fib(%u)=%u\n", n, fib(n));
    printf("sommeNpremier(%u)=%u\n", n, sommeNpremier(n));

    return 0;
}