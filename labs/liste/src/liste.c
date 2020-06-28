#include <stdlib.h>
#include <stdio.h>
#include "liste.h"

List creerListe()
{
    return NULL;
}

Booleen estListeVide(List l)
{
    return l == NULL ? VRAI : FAUX;
}
void afficherListe(List l)
{
    if (estListeVide(l) == VRAI)
    {
        fprintf(stderr, "liste vide");
    }
    else
    {
        while (l != NULL)
        {
            printf("[%f]", l->valeur);
            if (l->suivant != NULL)
                printf("-->");
            l = l->suivant;
        }
    }
}

List ajouterElementEnpremier(List l, float valeur)
{
    ListElement *noeud;
    noeud = malloc(sizeof(*noeud));
    if (noeud == NULL)
    {
        fprintf(stderr, "probleme memoire");
        exit(EXIT_FAILURE);
    }

    noeud->valeur = valeur;

    if (estListeVide(l) == VRAI)
    {
        noeud->suivant = NULL;
    }

    noeud->suivant = l;
    return noeud;
}

List ajouterElementEndernier(List l, float valeur)
{
    ListElement *noeud;
    noeud = malloc(sizeof(*noeud));
    if (noeud == NULL)
    {
        fprintf(stderr, "probleme memoire");
        exit(EXIT_FAILURE);
    }

    noeud->valeur = valeur;
    noeud->suivant = NULL;

    if (estListeVide(l) == VRAI)
    {

        return noeud;
    }
    List pt_temporaire = l;

    while (pt_temporaire->suivant != NULL)
        pt_temporaire = pt_temporaire->suivant;
    pt_temporaire->suivant = noeud;
    return l;
}

List supprimerPremierElement(List l)
{
    if (estListeVide(l) == VRAI)
    {
        fprintf(stderr, "Impossible de supprimer un élément dans une liste vide\n");
        exit(EXIT_FAILURE);
    }

    List pt_temporaire = l;
    l = l->suivant;
    free(pt_temporaire);
    return l;
}
List supprimerDernierElement(List l)
{
    if (estListeVide(l) == VRAI)
    {
        fprintf(stderr, "Impossible de supprimer un élément dans une liste vide\n");
        exit(EXIT_FAILURE);
    }

    List pt_temporaire1 = l;
    List pt_temporaire2 = l;

    while (pt_temporaire1->suivant != NULL)
    {

        pt_temporaire2 = pt_temporaire1;
        pt_temporaire1 = pt_temporaire1->suivant;
    }
    pt_temporaire2->suivant = NULL;

    free(pt_temporaire1);
    return l;
}

float premierElement(List l)
{
    if (estListeVide(l) == VRAI)
    {
        fprintf(stderr, "La liste est vide\n");
        exit(EXIT_FAILURE);
    }
    return l->valeur;
}
float dernierElement(List l)
{
    if (estListeVide(l) == VRAI)
    {
        fprintf(stderr, "La liste est vide\n");
        exit(EXIT_FAILURE);
    }

    while (l->suivant != NULL)
        l = l->suivant;

    return l->valeur;
}
unsigned nbElement(List l)
{
    if (estListeVide(l) == VRAI)
    {
        return 0;
    }
    unsigned n = 1;

    while (l->suivant != NULL)
    {

        l = l->suivant;
        n++;
    }
    return n;
}