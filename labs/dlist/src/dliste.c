#include <stdlib.h>
#include <stdio.h>
#include "dliste.h"
DListe creerDListe()
{
    DListe dlist = NULL;
    dlist = malloc(sizeof(*dlist));
    dlist->debut = NULL;
    dlist->fin = NULL;
    dlist->nbElement = 0;
    return dlist;
}
Booleen estDListeVide(DListe l)
{
    return (l->debut == NULL &&
            l->fin == NULL &&
            l->nbElement == 0)
               ? VRAI
               : FAUX;
}

float premierElement(DListe l)
{
    if (estDListeVide(l) == VRAI)
    {
        fprintf(stderr, "Impossible de recuperer le premier element d'une liste vide \n");
        exit(EXIT_FAILURE);
    }
    return l->debut->valeur;
}
float dernierElement(DListe l)
{
    if (estDListeVide(l) == VRAI)
    {
        fprintf(stderr, "Impossible de recuperer le dernier element d'une liste vide \n");
        exit(EXIT_FAILURE);
    }
    return l->fin->valeur;
}
unsigned nbElement(DListe l)
{
    return l->nbElement;
}
void afficherDListeD(DListe l)
{
    if (estDListeVide(l) == VRAI)
    {
        fprintf(stderr, "liste vide \n");
    }
    else
    {
        struct ElementNoeud *t = l->debut;
        while (t != NULL)
        {
            printf("[%f]", t->valeur);

            if (t->suivant != NULL)
            {
                printf("<-->");
            }
            t = t->suivant;
        }
    }
}

void afficherDListeF(DListe l)
{
    if (estDListeVide(l) == VRAI)
    {
        fprintf(stderr, "liste vide \n");
    }
    else
    {
        struct ElementNoeud *t = l->fin;
        while (t != NULL)
        {
            printf("[%f]", t->valeur);
            if (t->precedant != NULL)
            {
                printf("<-->");
            }
            t = t->precedant;
        }
    }
}
DListe ajouterElementEndernier(DListe l, float valeur)
{
    Noeud n = NULL;
    n = malloc(sizeof(*n));
    if (n == NULL)
    {
        fprintf(stderr, "probleme memoire \n");
        exit(EXIT_FAILURE);
    }
    n->valeur = valeur;

    if (estDListeVide(l) == VRAI)
    {
        n->suivant = n->precedant = NULL;
        l->debut = l->fin = n;
    }
    else
    {
        n->precedant = l->fin;
        l->fin->suivant = n;
        n->suivant = NULL;
        l->fin = n;
    }
    l->nbElement++;
    return l;
}
DListe ajouterElementEnpremier(DListe l, float valeur)
{
    Noeud n = NULL;
    n = malloc(sizeof(*n));
    if (n == NULL)
    {
        fprintf(stderr, "probleme memoire \n");
        exit(EXIT_FAILURE);
    }
    n->valeur = valeur;

    if (estDListeVide(l) == VRAI)
    {
        n->suivant = n->precedant = NULL;
        l->debut = l->fin = n;
    }
    else
    {
        n->precedant = NULL;
        l->debut->precedant = n;
        n->suivant = l->debut;
        l->debut = n;
    }
    l->nbElement++;
    return l;
}

DListe supprimerPremierElement(DListe l)
{
    if (estDListeVide(l) == VRAI)
    {
        fprintf(stderr, "Suppression impossible sur liste vide \n");
        exit(EXIT_FAILURE);
    }
    // creation du tempon
    Noeud t = l->debut;
    l->debut = l->debut->suivant;
    l->debut->precedant = NULL;
    l->nbElement--;
    free(t);
    return l;
}

DListe supprimerDernierElement(DListe l)
{
    if (estDListeVide(l) == VRAI)
    {
        fprintf(stderr, "Suppression impossible sur liste vide \n");
        exit(EXIT_FAILURE);
    }
    // creation du tempon
    Noeud t = l->fin;
    l->fin = l->fin->precedant;
    l->fin->suivant = NULL;
    l->nbElement--;
    free(t);
    return l;
}
