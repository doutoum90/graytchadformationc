#ifndef __FILE__H__
#define __FILE__H__

/**************** définition des types ********/

typedef enum
{
    VRAI,
    FAUX
} Booleen;


typedef struct ListElement
{
    float valeur;
    struct ListElement* suivant;
}ListElement, *List;


/**************** définition des fonctions ********/

List creerListe();
Booleen estListeVide(List l);

void afficherListe(List l);
List ajouterElementEnpremier(List l, float valeur);
List ajouterElementEndernier(List l, float valeur);


List supprimerPremierElement(List l);
List supprimerDernierElement(List l);
float premierElement(List l);
float dernierElement(List l);
unsigned nbElement(List l);

#endif