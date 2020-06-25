#include <stdio.h>
#include <string.h>

int main()
{

    FILE *fichier2 = fopen("monfichier2.txt", "w+");
    FILE *fichier = fopen("monfichier.txt", "r");
    int valeur;

    while ((valeur = fgetc(fichier)) != -1)
    {
        printf("%c\n", valeur);
    }

    char machaine[50];

    while (fgets(machaine, 255, fichier) != NULL)
    {
        printf("%s", machaine);
    }

    char nom[50];
    char metier[50];
    while (fscanf(fichier, "%s %s", nom, metier) != -1)
    {
        printf("Le metier de %s est %s \n", nom, metier);
    }

    fclose(fichier);

    fputc('A', fichier2);

    fputs("Bonjour", fichier2);
    strcpy(nom, "Adamou");
    char prenom[50] = "Bichara";

    int age = 50;
    fprintf(fichier2, "%s %s %d", nom, prenom, age);

    fclose(fichier2);

    return 0;
}