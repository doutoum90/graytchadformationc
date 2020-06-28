#ifndef __FILE__H__
#define __FILE__H__

/**************** définition des types ********/

typedef enum
{
    VRAI,
    FAUX
} Booleen;

typedef struct NoeudFile
{
    unsigned valeur;
    struct NoeudFile *suivant;
} NoeudFile, *Noeud;

typedef struct FileElement
{
    Noeud premier;
    Noeud dernier;
    unsigned nombreElement;
} FileElement;

/**************** définition des fonctions ********/

FileElement creerFile();

Booleen estFileVide(FileElement file);

FileElement enfiler(FileElement file, unsigned valeur);
FileElement defiler(FileElement file);

void afficherFile(FileElement file);
unsigned premierValeur(FileElement file);
unsigned derniereValeur(FileElement file);
unsigned nombreElementListe(FileElement file);


#endif