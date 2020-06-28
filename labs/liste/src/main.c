#include <stdio.h>
#include "liste.h"

int main()
{
    List l = creerListe();
    l = ajouterElementEnpremier(l, 8);
    l = ajouterElementEnpremier(l, 2);
    l = ajouterElementEnpremier(l, 1);
    l = ajouterElementEndernier(l, 5);
    l = ajouterElementEndernier(l, 50);
    l = ajouterElementEndernier(l, 4);
    afficherListe(l);
    fprintf(stdout, "\n--------------------\n");
    l = supprimerPremierElement(l);
    afficherListe(l);
    fprintf(stdout, "\n--------------------\n");
    l = supprimerDernierElement(l);
    afficherListe(l);
    fprintf(stdout, "\n--------------------\n");

    fprintf(stdout, " Le premier element est %f\n", premierElement(l));
    fprintf(stdout, "Le dernier element est %f\n", dernierElement(l));
    fprintf(stdout, "nombre d'element %u\n", nbElement(l));
    if (estListeVide(l) == VRAI)
    {
        fprintf(stdout, "Liste vide");
    }
    else
    {
        fprintf(stdout, "Liste non vide");
    }

    return 0;
}