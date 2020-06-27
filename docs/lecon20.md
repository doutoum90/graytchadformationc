# Leçon C 20
## Les structures de données

[**Les tableaux**](https://fr.wikipedia.org/wiki/Tableau_(structure_de_données))

[**Les Piles (Stack)**](https://fr.wikipedia.org/wiki/Pile_(informatique))
LIFO: Last In First Out
```mermaid
graph LR; 
pt_pile-->E
B-->A;
C-->B; 
D-->C; 
E-->D;
```

Exemple 
* de  domaine d'utilisation: 
	* Compilation
	* Ordonnanceur avec Stratégie LIFO
	* ...
* d'algorithme sur les piles:
	* push (ajout d'un élément en dernière position)
	* pop (suppression du dernier element ajouté)
	* ....

[**Les Files (Queue) à sens unique**](https://fr.wikipedia.org/wiki/File_(structure_de_données))

FIFO: First In First Out
```mermaid
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
	* Ordonnanceur avec Stratégie FIFO
	* ...
* d'algorithme sur les files:
	* enqueue( ajout d'un élément en dernière position)
	* dequeue (suppression du premier element ajouté)
	* ....

**Les Files (Queue) à double sens **
```mermaid
graph LR; 
pt_debut-->A
A-->B; B-->A;
B-->C; C-->B;
C-->D; D-->C;
D-->E;E-->D;
pt_fin -->E;
```

**Les arbres (Trees)**

```mermaid
graph TD; 
pt_debut-->A
A-->B; A-->C;A-->D;
B-->E; B-->F; C-->G; C-->H
F-->I;
```
Exemple 
* de  domaine d'utilisation: 
	* Répresentation des Fichier
	* ...


[**Les arbres binaires (Binary Trees )**](https://fr.wikipedia.org/wiki/Arbre_binaire)

```mermaid
graph TD; 
pt_debut-->A
A-->B; A-->C;
B-->D; B-->E; C-->F; C-->G;
F-->H; F-->I; G-->O
```

Exemple 
* de  domaine d'utilisation: 
	* Recherche opérationnelle
	* ...
* d'algorithme sur les arbres binaires:
	* parcours prefixés
	* parcours infixés
	* parcours prefixés
	* ....

[**Les graphes (graphs)**](https://fr.wikipedia.org/wiki/Théorie_des_graphes)
Il existe
* Les graphes orientés
* Les graphes non-orientés
```mermaid
graph TD
A --> B;
A --> C;
B --> D;
C --> D;
```
exemple 
* de  domaine d'utilisation: 
	* réseau routier (maps)
	* réseau internet
	* ...
* d'algorithme sur les graphes:
	* [postier chinois](https://fr.wikipedia.org/wiki/Problème_du_postier_chinois), 
	* parcours Euleriens
	* ....


### Type d'objet
possibilité de créer plusieurs elements du Type en question.

### Objet.
Possibilité de créer un seul objet du type defini.
