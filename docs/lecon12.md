# Leçon C 12

## Les tableaux

Une suite contigue en memoire des elements uniformes (niveau typage).

---------------------

### Rappel des types

#### Types prédéfinis Simple

* les caractères : char (signé et non signé)
* les entiers: short, int et long (signé et non signé)
* les réels: float, double, long double

#### Types prédéfinis Composé

* Les pointeurs: type*
* les tableaux: 
* les chaines des caractères:

#### Types simples à définir 

* les enumerations
* les structures
* les unions

#### Types composée à définir 

* tableau d'un type simple non prédéfini
* tableau d'un type simple non prédéfini

---------------------

``` c
int tab1[5];
// definie un tableau d'entier de taille 5.
int tab2[5]={0};
// definie un tableau d'entier de taille 5 et initialise toutes les cases par 0.
int tab3[5]={0,50,10,-3,4}

//le tableau est indexé  de 0 à n-1 ou n est la taille du tableau.
tab3[0]->0 // le premier element du tableau
tab3[3]->-3 // le quatrieme element du tableau
tab3[5]-> non connu // en dehors de notre tableau

// possible de definir des tableaux de n dimensions
int tab4[2][2]={{2,3},{4, 5}};
```

le tableau 4 est représenté comme suit 
|||
| ----| ----|
|2|3|
|4|5|
Le tableau est un type très utilisé et donc il est possible d'implementer  divers operations dessus.
on peut penser à faire 

### Exercice:

 Penser à implementer des fonctions qui font respectivement le

* tri des élements du tableau
* la moyenne des éléments du tableau
* calculer le maximium/minimium
* recherche un élement dans le tableau.

 Note 1: il existe une panoplie d'algorithme de tri qui sont les algorithmes de
 - [tri selection](https://fr.wikibooks.org/wiki/Implémentation_d%27algorithmes_classiques/Algorithmes_de_tri/Tri_par_sélection).
 - [tri insertion](https://fr.wikibooks.org/wiki/Implémentation_d%27algorithmes_classiques/Algorithmes_de_tri/Tri_par_insertion)
 - [tri à bulle](https://fr.wikibooks.org/wiki/Implémentation_d%27algorithmes_classiques/Algorithmes_de_tri/Tri_à_bulles)
 - tri par tas
 - tri rapide
 - ...

Note 2 : Il existe egalement une panoplie d'algorithme de recherche comme 

* la recherche sequentiel
* la recherche dichotomique
* la recherche par sentinelle

Ces algorithmes sont très bien documentés sur internet.
