#include <stdio.h>
#include "file.h"

int main()
{

    FileElement file1 = creerFile();
    afficherFile(file1);

    fprintf(stdout, "\n_____________________\n");
    file1 = enfiler(file1, 1);
    file1 = enfiler(file1, 2);
    file1 = enfiler(file1, 3);
    file1 = enfiler(file1, 4);

    afficherFile(file1);
    printf("\nle premier element de la file est %u\n", premierValeur(file1));
    printf("le dernier element de la file est %u\n", derniereValeur(file1));
    printf("le nombre d'element de la file est %u\n", nombreElementListe(file1));
    fprintf(stdout, "\n_____________________\n");

    file1 = defiler(file1);
    afficherFile(file1);
    fprintf(stdout, "\n_____________________\n");

    if (estFileVide(file1) == VRAI)
    {
        fprintf(stdout, "La file est vide");
    }
    else
    {
        fprintf(stdout, "La file n'est pas vide");
    }

    return 0;
}