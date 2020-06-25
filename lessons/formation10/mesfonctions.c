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

void afficherMessage()
{
    printf("veuillez saisr la valeur de n \n");
}
