#ifndef __ARBREBINAIRE__H__
#define __ARBREBINAIRE__H__

/**************** définition des types ********/

typedef enum
{
    VRAI,
    FAUX
} Booleen;

typedef struct ElementArbre
{
    int valeur;
    struct ElementArbre *gauche;
    struct ElementArbre *droite;
} ElementArbre, *ArbreBinaire;

/**************** définition des fonctions ********/

ArbreBinaire creerArbreBinaire(int valeur);

Booleen estFeuille(ArbreBinaire l);

void parcoursInfixe(ArbreBinaire l);
void parcoursPreFixe(ArbreBinaire l);
void parcoursPostFixe(ArbreBinaire l);

ArbreBinaire joindre(ArbreBinaire g, int valeur, ArbreBinaire d);
unsigned nombreNoeud(ArbreBinaire l);

#endif