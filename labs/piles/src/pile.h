#ifndef __PILE__H__
#define __PILE__H__

/**************** définition des types ********/

typedef enum {
    VRAI,
    FAUX
}Booleen;

typedef struct ElementPile
{
    unsigned valeur;
    struct ElementPile *suivant;
}ElementPile, *Pile;

/**************** définition des fonctions ********/

Pile creerPile();
Booleen estPileVide(Pile pile);
Pile empiler(Pile pile, unsigned nombre);
void afficherElement(Pile pile);
Pile depiler(Pile pile);

#endif