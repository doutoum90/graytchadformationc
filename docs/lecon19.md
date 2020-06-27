# Leçon C 18
## Les préprocesseurs

### Importation des bibliothèques 
* Utilisateurs
* Systèmes
* Tierce

```c
#include <stdio.h>
#include "fonctions.h"
#include <SDL/SDL2>
```

### définition des constantes globales
```c
#define N 5
```

### defintion de fonctions

``` c
#define A  2
#define B  3
#define PRODUIT (A *B)
```


### Pour éviter les dépendances circulaires

on les mets dans .h
exemple de fichier entête.h
```c
#ifndef __ENTETE__H
#define __ENTETE__H
// declaration des variables
// prototypes(déclaration des fonctions)

#endif

```