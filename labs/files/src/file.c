#include <stdlib.h>
#include <stdio.h>
#include "file.h"

FileElement creerFile()
{
    FileElement file;
    // file = { NULL, NULL, 0};
    file.premier = NULL;
    file.dernier = NULL;
    file.nombreElement = 0;
    return file;
}

Booleen estFileVide(FileElement file)
{
    // return file.dernier == NULL && file.dernier == NULL && file.nombreElement ==0)? VRAI: FAUX;
    if (file.premier == NULL && file.dernier == NULL && file.nombreElement == 0)
        return VRAI;
    return FAUX;
}

FileElement enfiler(FileElement file, unsigned valeur)
{
    // creation du noeud
    Noeud noeud;
    noeud = malloc(sizeof(*noeud));
    if (noeud == NULL)
    {
        fprintf(stderr, "probleme memoire");
        exit(EXIT_FAILURE);
    }
    noeud->valeur = valeur;
    noeud->suivant = NULL;
    if (estFileVide(file) == VRAI)
    {
        file.premier = noeud;
        file.dernier = noeud;
    }
    else
    {
        file.dernier->suivant = noeud;
        file.dernier = file.dernier->suivant;
    }

    file.nombreElement++;
    return file;
}

FileElement defiler(FileElement file)
{
    if (estFileVide(file) == VRAI)
    {
        fprintf(stderr, "Impossible de defiler une file vide");
    }
    else if (file.premier->suivant == NULL)
    {
        // file avec un seul element
        // création du tempo
        Noeud temp = file.premier;
        // deplacement le pointeur du premier element
        file.premier = NULL;
        file.dernier = NULL;
        // liberation de la memoire
        free(temp);
        // mettre à jour le nombre d'elements
        file.nombreElement--;
    }
    else
    {
        // création du tempo
        Noeud temp = file.premier;
        // deplacement le pointeur du premier element
        file.premier = file.premier->suivant;
        // liberation de la memoire
        free(temp);
        // mettre à jour le nombre d'elements
        file.nombreElement--;
    }
    return file;
}

void afficherFile(FileElement file)
{
    if (file.premier == NULL && file.dernier == NULL)
    {
        printf("Votre file est vide");
    }

    while (file.premier != NULL)
    {
        printf("[%u]", file.premier->valeur);
        if(file.premier->suivant != NULL){
            printf("-->");
        }

        file.premier = file.premier->suivant;
    }
}

unsigned premierValeur(FileElement file)
{
    if (estFileVide(file) == VRAI)
    {
        fprintf(stderr, "Impossible de recuperer le premier element d'une file vide\n");
        return NULL;
    }

    return file.premier->valeur;
}
unsigned derniereValeur(FileElement file)
{
    if (estFileVide(file) == VRAI)
    {
        fprintf(stderr, "Impossible de recuperer le dernier element d'une file vide\n");
        return NULL;
    }
    return file.dernier->valeur;
}
unsigned nombreElementListe(FileElement file)
{
    return file.nombreElement;
}