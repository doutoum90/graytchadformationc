#include <stdio.h>
#include <string.h>
#include "type.h"
#include "fonctions.h"


int main()
{

    // stdin
    // stdout
    // stderr

    afficherMessage("Debut du programme");

    enum BOOLEEN monbooleen = VRAI;
    BOOLEEN2 monbooleen2 = SAHI;
    if (monbooleen2 == SAHI)
    {
        fprintf(stdout, "Bonjour\n");
    }
    else
    {
        // monbooleen ==FAUX
        fprintf(stdout, "Lalekou\n");
    }

    if (monbooleen == VRAI)
    {
        fprintf(stdout, "Bonjour\n");
    }
    else
    {
        // monbooleen ==FAUX
        fprintf(stdout, "Lalekou\n");
    }

    struct Complexe nbrComplex1 = {4.5, -8};
    Complexe cmp2 = {50, 9};
    Complexe2 cmp3;
    Complexe *pt_cmp2;
    struct Complexe *pt_nbrComplex1;

    pt_nbrComplex1 = &nbrComplex1;
    pt_cmp2 = &cmp2;

    printf("la partie reel de votre nb complexe est %lf et la partie imaginaire est %lf\n", nbrComplex1.reel, nbrComplex1.imaginaire);
    printf("la partie reel de votre nb complexe est %lf et la partie imaginaire est %lf\n depuis le pointeur", pt_nbrComplex1->reel, pt_nbrComplex1->imaginaire);

    printf("la partie reel de votre nb complexe est %lf et la partie imaginaire est %lf\n", cmp2.reel, cmp2.imaginaire);
    printf("la partie reel de votre nb complexe est %lf et la partie imaginaire est %lf\n depuis le pointeur\n", pt_cmp2->reel, pt_cmp2->imaginaire);

    printf("saisir votre nombre complexe\n");

    scanf("%lf", &cmp3.reel);
    scanf("%lf", &cmp3.imaginaire);

    printf("votre nombre complexe est %lf+%lfi\n", cmp3.reel, cmp3.imaginaire);

    afficherMessage("fin du programme");

    return 0;
}