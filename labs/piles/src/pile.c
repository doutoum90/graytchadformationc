#include <stdlib.h>
#include <stdio.h>
#include "pile.h"


Pile creerPile()
{
    return NULL;
}

/**
 * this function test if a stack is empty or not
 * @param pile : a stack element
 * @return boolean that determine if stack is empty or not
 * @author Doutoum
 * @date 28/06/2020
*/
Booleen estPileVide(Pile pile)
{
    /* if(pile== NULL){
        return VRAI;
    }
    return FAUX; */
    return pile == NULL ? VRAI : FAUX;
}

Pile empiler(Pile pile, unsigned nombre)
{
    ElementPile *element = malloc(sizeof(*element));
    if(element==NULL){
        fprintf(stderr, "L'allocation de la memoire n'a pas reussi");
        exit(EXIT_FAILURE);
    }
    element->valeur = nombre;
    element->suivant = pile;
    return element;
}

void afficherElement(Pile pile)
{
    if(estPileVide(pile)== VRAI){
        printf("la pile est vide\n");
    }
    
    while (estPileVide(pile) == FAUX)
    {
        printf("[%u]\n", pile->valeur);
        pile = pile->suivant;
    }
}

Pile depiler(Pile pile)
{
    Pile temp = pile;
    pile = pile->suivant;
    free(temp);
    return pile;
}