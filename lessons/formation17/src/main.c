#include <stdio.h>
#include <string.h>
#include "fonctions.h"

#include "fonction2.h"


int main()
{

    afficherMessage("Debut du programme\n");

    int som = somme(4, 5);
    printf("%d\n", som);

    afficherMessage("fin du programme\n");

    return 0;
}