#  Leçon C 4

## Variables  (suite)

### type simple 

 #### type entiers

|	|	| ||
|---|---|---|---|
| type		| taille octet| taille bit|
| char		| 1o	| 8 bits	| 
| short		| 2o	| 16 bits	|
| int		| 4o 	| 32 bits 	|
| long		| 8o	| 64 bits	|

Z =..... -1, 0, 1, ...
N = 0, 1, ....
 ### les intervalles (ddd)
|	|	|
|---|---|
| type		| Intervalle |
| unsigned char		| [0, 2^8[=[0, 256[	|
|  char/ signed char	| [-2^ 7, 2^7[=[-128, 128[	|
| unsigned short		| [0, 2^16[ = [0, 65 536[	|
| short	/ signed short	| [-2^ 15, 2^15[=[-32 768, 32 768[	|
| unsigned int	ou unsigned	| 	[0, 2^32[ = [-4 294 967 296, 4 294 967 296[|
| int/ signed int	| [-2^ 31, 2^31[=[-2 147 483 648, 2 147 483 648[	|
| unsigned long	| [0, 2^64[=[0, 1, 844674407E19[	| 
| long/ signed	|	[-2^ 63 , 2^63[= [-9, 223372037E18, 9, 223372037E18[| 

 #### type réels
|	|	|  |
|---|---|--|
| type		| taille octet| taille bit|
| float 	| 4o	| 32 bits	|
| double	| 8o	| 64 bits	|
|long double| 10o	|	80 bits	|

valeur = (-1)^ s *m^xp

-2, 0510E-5

9, 999999* 10E128

1- **Float ** 4 o = 32bits

*   23 bits pour la mantisse
*   8 bits pour l'exposant
*   1 bit pour le signe (0 positif et 1 négatif)

ici la mantisse varie de [0; 2^23[= [0, 8 388 608[
l'exposant varie de [-2^ 7; 2^7[=[-128, 128[

[-8, 388608*10^ -128; 8, 388608*10^-128[
2- **double** 8o= 64 bits

*   52 bits pour la mantisse
*   11 bits pour l'exposant
*   1 bit pour le signe

ici la mantisse varie de [0; 2^52[=
l'exposant varie de [-2^ 10; 2^10[=[-1024, 1024[

3- **long double**

*   64 bits pour la mantisse
*   15 bits pour l'exposant
*   1 bit pour le signe

## formatage

|	|	|
|---|---|
| type		| formatage|
| unsigned char		| %c ou %d	|
|  char/ signed char	| %c ou %u	|
| unsigned short		| %hu	|
| short	/ signed short	| %hd	|
| unsigned int	ou unsigned	| %u	|
| int/ signed int	| %d ou %i|
| unsigned long	| %lu| 
| long/ signed long	|	%ld ou %li| 
| float 	| %f ou %e	|
| double	|  %lf|
|long double|  %Lf	|
