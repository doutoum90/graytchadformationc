# Leçon C 22

## Les structures de données: [Les Files (Queue)](https://fr.wikipedia.org/wiki/File_(structure_de_données))

FIFO: First In First Out

``` mermaid
graph LR; 
pt_debut-->A
A-->B;
B-->C;
C-->D;
D-->E;
pt_fin -->E;
```

Exemple 

* de  domaine d'utilisation: 
  + Ordonnanceur avec Stratégie FIFO
  + ...
* d'algorithme sur les files:
  + enqueue( ajout d'un élément en dernière position)
  + dequeue (suppression du premier element ajouté)
  + ....

## Lab 3: 

Réalisation d'une file de réel.
Implementer les opérations de 

* créer d'une file vide
* savoir si la file est vide ou non
* d'enfiler un element
* d'afficher les elements de la file
* de defiler le premier élement de la file si elle n'est pas vide
* tester les operations ci-haut sur deux files .
