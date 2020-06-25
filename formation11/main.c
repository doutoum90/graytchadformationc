#include <stdio.h>

void affecter(double *ptValeur, double a)
{
    *ptValeur = a;
}

int main()
{

    double a, valeur = 10;

    printf("Bonjour veuilez saisir\n");
    printf("a\n");

    scanf("%lf", &a);

    printf("%lf\n", valeur);
    affecter(&valeur, a);

    printf("%lf\n", valeur);

    int a = 5;

    int *pt_a = &a;

    printf("adresse de %d est %p\n", a, &a);

    printf("%p --- %d --- %p", pt_a, (*pt_a), (&pt_a));

    return 0;
}

//  x^2 − 2x − 2 => delta =0