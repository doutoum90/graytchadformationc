#include <stdio.h>

int main()
{

    unsigned n, fact1 = 1, fact2 = 1, fact3 = 1, compteur1, compteur2, compteur3;

    printf("veuillez saisr la valeur de n \n");
    scanf("%u", &n);

    // n!=n*(n-1)....1

    // boucle while
    // initialisation compteur
    compteur1 = 1;

    while (compteur1 <= n) // comparaison
    {
        fact1 = fact1 * compteur1;
        // inc/decrementation
        compteur1++;
    }

    printf("%u ! = %u \n", n, fact1);
    // boucle do while
    // initialisation compteur
    compteur2 = 1;
    do
    {
        fact2 = fact2 * compteur2;
        // inc/decrementation
        compteur2++;
    } while (compteur2 <= n);

    printf("%u ! = %u \n", n, fact2);
    // boucle for
    for (compteur3 = 1; compteur3 <= n; compteur3++)
    {
        fact3 = fact3 * compteur3;
    }

    printf("%u ! = %u \n", n, fact3);

    return 1;
}

