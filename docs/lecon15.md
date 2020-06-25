# Leçon C 15
## Les fichiers : entrées/sorties

- persistance des données

```c
FILE *fopen(const char *nomfichier, const char *modeOuverture);
/*
les differents mode ouverture de fichiers:
- r : lecture seule (le fichier doit exister)
- w : écriture seule
- a : ajout à la fin de fichier
- r+ : lecture et écriture (le fichier doit exister)
- w+ : lecture et écriture (supprime le fichier)
- a+ : ajout, lecture et écriture en fin de fichier
*/

int fclose(FILE *);
/*
ferme le flux sur le fichier en parametre.
*/

/******* lecture ******/
int fgetc(FILE *flux);
/**
lit un caractére dans le fichier.
*/
char *fgets(char *str, int tailleChaine, FILE *flux);
/*
lit une dans le fichier et passe le curseur à la suivante.
*/
int fscanf(FILE *flux, const char *format, ...);
/*
lit un texte formaté dans le fichier
*/

/******* écriture ******/
int fputc(int ch, FILE *flux);
/*
Ecrit le caractère passé en paramétre dans le fichier.
*/
int fputs(const char *str,FILE *flux);
/*
Ecrit la chaine de caractère passé en paramétre dans le fichier.
*/
int fprintf(FILE *flux, const char *format, ...);
/*
ecrit du texte formatté
*/
```