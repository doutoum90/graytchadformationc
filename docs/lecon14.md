# Leçon C 14

## Gestion de la mémoire : Allocation dynamique

C met à disposition quelques fonctions utilitaires pour la gestion de la memoire dans la bibliothèque `stdlib.h` . 

A travers ces fonctions nous pouvons alloué de la memoire à la demande et la libéré à la fin du travaille.

Nous utiliserons essentiellement ces 4 fonctions.

``` c
void*  malloc(  size_t t  );
/* 
crée dynamiquement en memoire
un bloc de taille t
et retourne un pointeur qui
pointe null part.
*/
void* calloc(  size_t num, size_t t );
/* 
crée dynamiquement en memoire
un bloc de taille t et initialise 
tout à une valeur par defaut
*/
void  *realloc(  void  *ptr, size_t  t  );
/* 
alloue et modifie la taille 
*/
void free(  void* ptr );
/* 
libére la memoire pointée par le pointeur ptr
*/
```

Nous aurons besoins d'utiliser également l'opérateur `sizeof` défini dans `stdio.h` . 

* size_t size sizeof(type var)

Elle retourne le nombre d'octet contenu dans la variable var.
