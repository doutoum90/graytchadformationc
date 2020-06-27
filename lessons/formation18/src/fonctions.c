#include <stdio.h>
void afficherMessage(const char *chaine)
{
    printf("%s", chaine);
}

unsigned factoriel(unsigned n)
{
    unsigned i, fact = 1;
    for (i = 1; i <= n; i++)
    {
        // fact = fact*i;
        fact *= i;
    }
    return fact;
}

//
unsigned factorielRec(unsigned n)
{
    if(n==0 || n==1)
        return 1;
    return n * factorielRec(n - 1);
}

unsigned fib(unsigned n){
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    return fib(n-1) + fib(n-2);
}


unsigned sommeNpremier(unsigned n){
    if(n==0)
        return 0;
    return n + sommeNpremier(n-1);
}