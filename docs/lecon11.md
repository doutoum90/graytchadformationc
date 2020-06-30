# Leçon C 11

## Les pointeurs

* effet de bord
* éviter les copies des valeurs qui peuvent être assez grand.

``` c
float nombre = 1.5;
// nombre: valeur de la variable nombre
// &nombre: adresse de la variable nombre (de la case memoire reservé pour nombre)

float *pointeur;

// pointeur: adresse de la variable pointée.
// *pointeur: valeur de case pointée.
// &pointeur: adresse du pointeur.

float *pt_nombre = &nombre;

// pt_nombre: adresse de la variable pointée (ou contenu de la variable pt_nombre).
// *pointeur: valeur de case pointée : 1.5
// &pointeur: adresse du pointeur.
```
