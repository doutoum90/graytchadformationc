# Leçon C 6

## Les Structures conditionnels

### 1 - Si, si-sinon, si-sinonsi-sinon, si-sinonsi-...sinon

``` c
if ( expression ) {
	instruction
}
```

si condition1 

	execute une liste d'instruction

sinon condtion2

	execute 

ou 

``` c
if ( expression-1 ) 
	instruction-1
else if ( expression-2 ) 
	instruction-2
...
else if ( expression-n ) 
	instruction-n;
else
	instruction-n+1
```

ou encore

``` c
if ( expression-1 ) {
	bloc d'instruction-1
}
else if ( expression-2 ) {
	bloc d'instruction-2
}
...
else if ( expression-n ) {
	bloc d'instruction-n;
}
else{
	bloc d'instruction-n+1
}
```

### 2- switch - case - break -default - default

``` c
switch ( expression ) {
	case constante-1:{
		liste d’instructions 1
		break;  
	}
	case constante-2:{
		liste d’instructions 2 
		break;
	}
	...

	case constante-n:  {
		liste d’instructions n
		 break;
	}
	default: {
		liste d’instructions ∞ 
		break;
	}
}
```

### 3 IX- L’opérateur conditionnel ternaire

m = condition ? valeur1 : valeur2; 
