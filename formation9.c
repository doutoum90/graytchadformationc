#include <stdio.h>

unsigned factorielwhile(unsigned n)
{
    unsigned fact = 1, compteur = 1;

    while (compteur <= n) // comparaison
    {
        fact = fact * compteur;
        // inc/decrementation
        compteur++;
    }
    return fact;
}

unsigned factorielDowhile(unsigned n)
{
    unsigned fact = 1, compteur = 1;

    do
    {
        fact = fact * compteur;
        // inc/decrementation
        compteur++;
    } while (compteur <= n);

    return fact;
}

unsigned factorielFor(unsigned n)
{
    unsigned fact = 1, compteur = 1;

    for (compteur = 1; compteur <= n; compteur++)
    {
        fact = fact * compteur;
    }
    return fact;
}

int main()
{

    unsigned n, fact1 = 1, fact2 = 1, fact3 = 1, compteur1, compteur2, compteur3;

    printf("veuillez saisr la valeur de n \n");
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
