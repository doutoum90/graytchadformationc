#include <stdio.h>
#include "dliste.h"

int main()
{
    DListe dl = creerDListe();

    afficherDListeD(dl);
    afficherDListeF(dl);
    dl = ajouterElementEnpremier(dl, 5);
    dl = ajouterElementEnpremier(dl, 4);
    dl = ajouterElementEnpremier(dl, 3);
    dl = ajouterElementEnpremier(dl, 2);
    dl = ajouterElementEnpremier(dl, 1);
    dl = supprimerDernierElement(dl);
    printf("\n---------------------\n");
    printf("Parcours du debut vers la fin\n");
    afficherDListeD(dl);
    printf("\n---------------------\n");
    printf("Parcours de la fin vers le debut\n");
    afficherDListeF(dl);
     printf("\n---------------------\n");
    printf(" le nombre d'element dans la liste est %u\n", nbElement(dl));
    printf(" le dernier element de la liste est %f\n", dernierElement(dl));
    printf(" le premier element de la liste est %f\n", premierElement(dl));
    dl = supprimerPremierElement(dl);
    dl = ajouterElementEndernier(dl, 50);
    printf("\n---------------------\n");
    printf("Parcours du debut vers la fin\n");
    afficherDListeD(dl);
    printf("\n---------------------\n");
    printf("Parcours de la fin vers le debut\n");
    afficherDListeF(dl);
    printf("\n---------------------\n");
    printf(" le nombre d'element dans la liste est %u\n", nbElement(dl));
    printf(" le dernier element de la liste est %f\n", dernierElement(dl));
    printf(" le premier element de la liste est %f\n", premierElement(dl));

    return 0;
}