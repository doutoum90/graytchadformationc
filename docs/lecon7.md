# Leçon C 7
## Les Entrées et sorties et Atelier

Nous allons voir rapidement une fonction d'entrée et une fonction de sortie pour pouvoir communiquer avec les entrées et sorties standard qui sont le clavier et le moniteur (écran).
### entrée
[lien vers la documentation  scanf](https://en.cppreference.com/w/c/io/fscanf)

```c
int b;
printf("Bonjour veuillez saisir un nombre \n");
scanf("%d", &b);
printf(" la valeur saisie est %d \n", b);
```

### sortie
[lien vers la documentation printf](https://en.cppreference.com/w/c/io/fprintf)

```c
int a = 5;
printf("bonjour\n");
printf("bonjour %d %d bonjour\n", a, a);
```
### Lab 
Dans cet atelier nous allons réaliser une calculatrice qui effectue le calcul de solution d'une equation du second dégré.

ax^2+bx+c = 0 où a, b, c sont reels.

delta =b^2-4ac

si delta > 0
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; il existe deux solutions réelles distinctes
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; x1 = (-b - sqrt(delta)) / 2 * a;
	&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; x2 = (-b + sqrt(delta)) / 2 * a;
sinon si delta ==0
	&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; il existe une solution réelle double
	&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; x = -b / 2 * a;
sinon 
	&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Il n'existe pas de solutions réelle.
	