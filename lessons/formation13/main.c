#include <stdio.h>
#include <string.h>

int main()
{

    // crée une chaine capable de stocké 4 caracteres.
    char chaine1[5] = "Bonj";
    // char chaine1[5] ="Bonjo"; faux

    char chaine2[5];
    char chaine3[5] = {'T', 'e', 's', 't'};
    char nom[5];

    char chaine4[] = "Bonjour Monsieur "; // chaine[17]

    char chaine5[200] = "Bonjour";
    /***
     * B
     * o
     * n
     * j
     * o
     * u
     * r
     * \0
     * */
    chaine2[0] = 'B';
    chaine2[1] = 'o';
    chaine2[2] = 'n';
    chaine2[3] = 'j';
    unsigned compt;
    for (compt = 0; compt < 5; compt++)
    {
        printf("%c %c\n", chaine1[compt], *(chaine2 + compt));
    }

    printf("%s ---- %s ---- %s\n", chaine1, chaine2, chaine3);

    printf("saisissez votre nom avec 4 caracteres\n");

    scanf("%s", nom);

    printf("votre nom est %s \n", nom);

    unsigned longueur = strlen(chaine5);

    printf("%u\n", longueur);

    char chaine6[200];
    strcpy(chaine6, chaine5);

    printf("%s test %s\n", chaine6, chaine5);

    /****/
    const char name[] = "Mr Doutoum";
    char chaine7[200];
    strcpy(chaine7, strcat(chaine5, name));
    printf(" %s %s\n", chaine7, strcat(chaine5, name));

    printf("%d\n", strcmp(name, chaine5)); // -> >0
    printf("%d\n", strcmp(name, name));    // > =0
    printf("%d\n", strcmp(chaine5, name)); // -> <0
    char chaine8[100];
    sprintf(chaine8, "Bonjour Monsieur %s", name);

    printf("%s", chaine8);
    return 0;
}