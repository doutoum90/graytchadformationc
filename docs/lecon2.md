# Langage C 2

## objectifs

Maitrise des basiques du langage et quelques notions avancées du langage.

## réalisation 
- equation du second dégré
- une mini calculatrice

## Installation des outils
- IDE et compilateur
- Un outils en ligne [onlinegdb](https://www.onlinegdb.com/online_c_compiler)
- un outil tout en un comme [dev c++](https://sourceforge.net/projects/orwelldevcpp/) ou [codeblocks](https://sourceforge.net/projects/codeblocks/)

## un projet github
[mon compte github](https://github.com/doutoum90)
plus de details dans les README



## exemple de structure d'un programme c

structure de programme c
```c
[ directives au préprocesseur]  
[ déclarations de variables Globale] 
[ fonctions secondaires]

main()
{
// déclarations de variables internes
// instructions
}
```

exemple de projet c.
```c
#include <stdio.h>
#define N 5
int somme(int a, int b){
	return a + b;
}

void main()  {  
	// déclarations de variables internes
	int a = 5;
	int b;
	b=4;
	int c;
	// instructions
	c = somme(a,b);
	printf("la somme de %d et % d est %d", a,b,c);
	printf("la variable globale est %d", N);
}
```

