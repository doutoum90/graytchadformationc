#include <stdio.h>
#include <stdlib.h>

int main()
{

    float tableau[3];
    float *tabDynamique;
    float *tabDynamiqueInitialise;
    unsigned n;
/*** allocation statique****/
     printf("saisir votre tableau\n");
    unsigned i;
    for (i = 0; i < 3; i++)
    {
        scanf("%f", &tableau[i]);
        // scanf("%f", tableau +i);
        // tableau[i] = i;
    }


/********* allocation dynamique ******/
    for (i = 0; i < 3; i++)
    {
        printf("tableau[%u]=%f \n", i, (*(tableau + i)));
    }

    printf("saisir la taille de votre tableau\n");
    scanf("%u", &n);

    tabDynamique = malloc(n * sizeof(float));
    tabDynamiqueInitialise = calloc(5, n * sizeof(float));

    if (tabDynamique == NULL)
        exit(1);
        printf("saisir votre tableau\n");
    for (i = 0; i < n; i++)
    {
        scanf("%f", &tabDynamique[i]);
    }

    for (i = 0; i < n; i++)
    {
        // printf("tabDynamiqueInitialise[%u]=%f \n", i , tabDynamiqueInitialise[i])
        printf("tabDynamiqueInitialise[%u]=%f \n", i , (*(tabDynamiqueInitialise+ i)));
        printf("tableau[%u]=%f \n", i, (*(tabDynamique + i)));
    }

    // traitement

    printf("saisir de nouveau la taille de votre tableau\n");
    scanf("%u", &n);
    tabDynamique = realloc(tabDynamique, n * sizeof(float));
    printf("saisir votre tableau\n");
    for (i = 0; i < n; i++)
    {
        scanf("%f", &tabDynamique[i]);
    }

    for (i = 0; i < n; i++)
    {
        printf("tableau[%u]=%f \n", i, (*(tabDynamique + i)));
    }

    free(tabDynamique);

    return 0;
}