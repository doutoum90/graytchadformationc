#include <stdio.h>
#include "mesfonctions.h"

int main()
{

    unsigned n, fact1 = 1, fact2 = 1, fact3 = 1, compteur1, compteur2, compteur3;
    afficherMessage();
    scanf("%u", &n);

    // n!=n*(n-1)....1

    // boucle while
    // initialisation compteur
    fact1 = factorielwhile(n);

    printf("%u ! = %u \n", n, fact1);
    // boucle do while
    // initialisation compteur

    fact2 = factorielDowhile(n);
    printf("%u ! = %u \n", n, fact2);
    // boucle for

    fact3 = factorielFor(n);
    printf("%u ! = %u \n", n, fact3);

    return 1;
}
