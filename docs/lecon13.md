# Leçon C 13
## Les chaines de caractères

C'est des tableaux de caractères dont la dernière case contient '\0';

### Déclaration et initialisation
```c
char chaines[250]; 
/* definie une chaine de caractère qui peut
contenir 249 caractères. 
Le dernier caractère sera `'\0'`
*/

char salutation[] = "Bonjour";
/* definie une chaine de avec une taille 
de 8 caractères calculée automatique.
les valeurs sont 
-'B'
-'o'
-'j'
-'o'
-'u'
-'r'
-'\0'*/

char hello[6]; 
hello[0] = 'h';
hello[1] = 'e';
hello[2] = 'l';
hello[3] = 'l';
hello[4] = 'o';
hello[5] = '\0';
```

### fonctions utilitaires
[documentation c](https://en.cppreference.com/w/c/string/byte/strlen)
Pour manipuler de faire assez simple le `c`dispose d'une bibliothèque utilitaire qui s'appelle `string.h`.

1- size_t strlen(const char* chaine);
2- char* strcpy(char* copieDeLaChaine, const char* chaineACopier);
3- char* strcat(char* chaine1, const char* chaine2);
4- int strcmp(const char* chaine1, const char* chaine2);

`entrée sortie`
5- int sprintf(  char  *buffer, const  char  *format, ... );
```c

char salutation[] = "Bonjour";
char salutation2[50] = "Bonjour";
char hello[8] = "hello";
char chainevide[200];
int longueur = strlen(salutation); // 7
strcpy(chainevide, salutation);// copy la valeur de salutation dans chainevide

char nouvelleChaine[200];
nouvelleChaine = strcat(salutation2, hello); 
// concatene les deux chaines 

int comparaison = strcmp(salutation, hello);
char chaine[200];
sprintf(chaine, "Tu as %d ans !", 15);
// ecris dans la chaine.
```