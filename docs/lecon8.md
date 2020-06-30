# Leçon C 8

## Les Structures itératifs

### 1 - Boucle while

```c 
while ( expression ) 
	instruction;

``` 

ou 
```c 
while ( expression ) {
	liste d'instructions;
}
```

### 2 - do-while

``` c
do{
	instruction;
	}
while ( expression );
```

``` c
do{
	liste d'instruction;
}
while ( expression );
```

### 3 - for

``` c
for ( intialisation ; condition ; incrementation) 
	instruction;
```

ou 

``` c
for ( intialisation ; condition ; incrementation) {
	instruction;
}
```

exemple:
appliquer les trois types de boucles pour calculer le factoriel d'un entier:

n!=n*(n-1)*(n-2)....*2*1
0!=1
1!=1
2!=2*1=2
3!=3*2*1=1*2*3=6
4!=4*3!=24

compilation d'un programme c:

``` 
```console
foo@bar:~$ gcc nomfichier.c -> a.out
foo@bar:~$ gcc nomfichier.c -o nomobjet ->nomobjet
```
