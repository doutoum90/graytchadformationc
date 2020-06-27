#include <stdio.h>
#include "pile.h"

int main()
{
    Pile p = creerPile();
    Pile p2 = creerPile();

    p = empiler(empiler(p, 5), 4);

    afficherElement(p);
    printf("----------------\n");
    p = depiler(p);
    afficherElement(p);
    printf("----------------\n");

    p = depiler(p);
    afficherElement(p);
    printf("----------------\n");
    if (estPileVide(p) == VRAI)
    {
        printf("Votre pile est vide\n");
    }
    else
    {
        printf("La pile n'est pas vide\n");
    }
    // création d'une deuxieme pile
    p2 = empiler(p2, 0);
    afficherElement(p2);
    return 0;
}