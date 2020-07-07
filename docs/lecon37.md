# Leçon C 37

## Les pipes (tubes)

il serve à communiquer des processus entre eux
Deux processus communiquent:

* l'un écrit dans le tube il s'appelle l'**entrée**
* l'autre lit dans le tube, il s'appelle la **sortie** 

> NB: La communication est unidirectionnelle. Donc pour communiquer dans les deux sens il faut deux pipes.

``` c
/**
creation du pipe, retourne 

* 0 si la création du pipe a reussi
* autre valeur sinon
* desc[0]: sortie  
* desc[1]: l'entrée

*/
int pipe(int desc[2]);
/**
écrire dans un pipe

prend en parametre:

* l'entree: desc[0]

*/
ssize_t write(int entree, const void *elementAEcrire, size_t nombreOctetsAEcrire);

/**
lire la sortie du pipe
*/
ssize_t read(int sortieTube, void *elementALire, size_t nombreOctetsALire);

/**
fermer un pipe (d'entrée ou de sortie)
*/
int close(int desc);
```

> NB: Le pipe doit venir avant le fork
