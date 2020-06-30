# Leçon C 21

## Les structures de données: Les Piles (Stack)

[**Les Piles (Stack)**](https://fr.wikipedia.org/wiki/Pile_(informatique))
LIFO: Last In First Out

``` mermaid
graph LR; 
pt_pile-->E;
B-->A;
C-->B; 
D-->C;
E-->D;
```

Exemple 

* de  domaine d'utilisation: 
  + Compilation
  + Ordonnanceur avec Stratégie LIFO
  + ...
* d'algorithme sur les piles:
  + push (ajout d'un élément en dernière position)
  + pop (suppression du dernier element ajouté)
  + ....

## Lab 2: 

Réalisation d'une pile d'entier.
Implementer les opérations de 

* créer d'une pile vide
* savoir si la pile est vide ou non
* d'empiler un element
* d'afficher les elements de la pile
* de depiler le dernier de la pile si la pile n'est pas vide
