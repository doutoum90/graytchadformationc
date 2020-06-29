#ifndef __DLIST__H__
#define __DLIST__H__

/**************** définition des types ********/

typedef enum
{
    VRAI,
    FAUX
} Booleen;

typedef struct ElementNoeud
{
    float valeur;
    struct ElementNoeud *precedant;
    struct ElementNoeud *suivant;
} ElementNoeud, *Noeud;

typedef struct ElementDListe
{
    unsigned nbElement;
    struct ElementNoeud *debut;
    struct ElementNoeud *fin;
} * DListe;
/**************** définition des fonctions ********/

DListe creerDListe();
Booleen estDListeVide(DListe l);

void afficherDListeD(DListe l);
void afficherDListeF(DListe l);
DListe ajouterElementEnpremier(DListe l, float valeur);
DListe ajouterElementEndernier(DListe l, float valeur);

DListe supprimerPremierElement(DListe l);
DListe supprimerDernierElement(DListe l);
float premierElement(DListe l);
float dernierElement(DListe l);
unsigned nbElement(DListe l);

#endif