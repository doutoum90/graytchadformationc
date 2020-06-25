#include <stdio.h>

float somme(float *tab, unsigned n)
{
    float som = 0;

    unsigned i = 0;

    while (i < n)
    {
        // som  += tab[i];
        som += (*(tab + i));
        i++;
    }

    return som;
}

void affichageTableauIndice(float *tab, unsigned n)
{
    unsigned i;
    for (i = 0; i < 3; i++)
    {
        printf("%f\n", tab[i]);
    }
    printf("----------------\n");
}

void affichageTableauIndiceEntier(int *tab, unsigned n)
{
    unsigned i;
    for (i = 0; i < 3; i++)
    {
        printf("%d\n", tab[i]);
    }
    printf("----------------\n");
}

void affichageTableauPointeur(float *tab, unsigned n)
{
    unsigned i;
    for (i = 0; i < 3; i++)
    {
        printf("%f\n", *(tab + i));
    }
    printf("----------------\n");
}
int main()
{

    // tableau1: 0.O, 0.0, 0.0
    // tableau1: 0, -50.4, 105
    // tableau1: 0, 1, 2
    float tableau1[3] = {0.0}, tableau2[3] = {0, -50.4, 105}, tableau3[3];
    unsigned i;
    for (i = 0; i < 3; i++)
    {
        tableau3[i] = i;
    }

    // avec indice
    affichageTableauIndice(tableau1, 3);
    affichageTableauIndice(tableau2, 3);
    affichageTableauIndice(tableau3, 3);
    // avec indice

    affichageTableauPointeur(tableau1, 3);
    affichageTableauPointeur(tableau2, 3);
    affichageTableauPointeur(tableau3, 3);

    // Structure de données
    // somme
    float som1 = somme(tableau1, 3);
    float som2 = somme(tableau2, 3);
    float som3 = somme(tableau3, 3);

    printf("%f --- %f ---- %f", som1, som2, som3);

    // remplir le tableau travers le clavier

    printf("veuillez saisir les elements du tableau \n");
    int tableau4[3];
    unsigned compt = 0;
    do
    {
        scanf("%d", tableau4 + compt);
        compt++;
    } while (compt < 3);

    affichageTableauIndiceEntier(tableau4, 3);

    // penser à implementer des fonctions qui font respectivement le
    // tri (il existe une panoplie d'algorithme de tri qui sont les algorithmes de tri selection, tri insertion, tri à bulle, tri par tas, tri rapide)
    // moyenne
    // calcul le maximium
    // calcul le minimium
    // la recherche d'element(existe une panoplie d'algorithme de recherche comme la recherche sequentiel,et la recherche dichotomique )

    return 1;
}