#include <stdlib.h>
#include <stdio.h>
#include "arbrebinaire.h"

ArbreBinaire creerArbreBinaire(int valeur)
{
    ArbreBinaire arbre;
    arbre = malloc(sizeof(*arbre));
    arbre->valeur = valeur;
    arbre->gauche = arbre->droite = NULL;
    return arbre;
}

Booleen estFeuille(ArbreBinaire a)
{
    return (a->gauche == NULL && a->droite == NULL) ? VRAI : FAUX;
}
ArbreBinaire joindre(ArbreBinaire g, int valeur, ArbreBinaire d)
{
    ArbreBinaire arbre;
    arbre = malloc(sizeof(*arbre));
    arbre->valeur = valeur;
    arbre->gauche = g;
    arbre->droite = d;
    return arbre;
}

void parcoursInfixe(ArbreBinaire a)
{
    if (a->gauche != NULL)
        parcoursInfixe(a->gauche);
    printf("%d\n", a->valeur);
    if (a->droite != NULL)
        parcoursInfixe(a->droite);
}
void parcoursPreFixe(ArbreBinaire a)
{
    printf("%d\n", a->valeur);
    if (a->gauche != NULL)
        parcoursPreFixe(a->gauche);
    if (a->droite != NULL)
        parcoursPreFixe(a->droite);
}
void parcoursPostFixe(ArbreBinaire a)
{
    if (a->gauche != NULL)
        parcoursPostFixe(a->gauche);
    if (a->droite != NULL)
        parcoursPostFixe(a->droite);
    printf("%d\n", a->valeur);
}

unsigned nombreNoeud(ArbreBinaire a)
{
    if (estFeuille(a) == VRAI)
        return 1;
    return 1 + nombreNoeud(a->gauche) + nombreNoeud(a->droite);
}