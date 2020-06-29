#include <stdio.h>
#include "arbrebinaire.h"

int main()
{
    ArbreBinaire a = joindre(joindre(creerArbreBinaire(5), 1, creerArbreBinaire(7)), 54, joindre(NULL, 45, NULL));

    if (estFeuille(a) == VRAI)
    {
        printf("votre arbre est une feuille\n");
    }
    else
    {
        printf("votre arbre n'est pas une feuille\n");
    }
    parcoursPreFixe(a);
    printf("\n-------------------\n");
    parcoursInfixe(a);
    printf("\n-------------------\n");
    parcoursPostFixe(a);
    printf("\n-------------------\n");
    printf("Le nombre de noeud dans l'arbre a %u", nombreNoeud(a));
    return 0;
}