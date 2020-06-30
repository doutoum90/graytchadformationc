# Leçon C 16

## Les structures : definition de son type

### Les structures

``` c
struct maSuperStruct
{
    int nomEntier;
    double nombreReel;
};
struct maSuperStruct maPremiereStructure;
struct maSuperStruct maSecondeStructureInitialise={5,2.5};
// maSecondeStructureInitialise.nomEntier ->5
// maSecondeStructureInitialise.nombreReel ->2.5
struct maSuperStruct * pt_structure=NULL;
pt_structure = &maSecondeStructureInitialise;

// pt_structure->nomEntier ->5
// pt_structure->nombreReel ->2.5
```

``` c
typedef struct maSuperStruct
{
    int nomEntier;
    double nombreReel;
}MonType;
MonType maPremiereStructure;
MonType maSecondeStructureInitialise={5,2.5};
// maSecondeStructureInitialise.nomEntier ->5
// maSecondeStructureInitialise.nombreReel ->2.5
struct maSuperStruct * pt_structure=NULL;
pt_structure = &maSecondeStructureInitialise;
// pt_structure->nomEntier ->5
// pt_structure->nombreReel ->2.5
```

### Les énumérations

``` c
enum Temperature
{
    FRAIS, 
    MOYEN, 
    CHAUD
};

enum Temperature tempTchad = CHAUD;
```

``` c
typedef enum Temperature
{
    FRAIS, 
    MOYEN, 
    CHAUD
} Temperature;

Temperature tempTchad = CHAUD;
```

### Les unions

``` c
union type { 
int entier; 
double flottant; 
void *pointeur; 
char lettre; 
};
```
