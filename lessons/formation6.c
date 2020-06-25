#include <stdio.h>

int main()
{

    /*     int a = 5;

    int b = 3;

    if (a > b)
    {
        printf("bonjour 1");
    }
    else
    {
        printf("bonjour 2");
    } */

    char maChar = 'I';
    /* 
    if (maChar == 'A' || maChar == 'E' || maChar == 'I' || maChar == 'Y' || maChar == 'O' || maChar == 'U')
    {
        printf("voyelle");
    }
    else
    {
        printf("consonne");
    } */

    switch (maChar)
    {
    case 'A':
    case 'E':
    case 'I':
    case 'Y':
    case 'O':
    case 'U':
    {
        printf("voyelle");
        break;
    }

    default:
    {
        printf("consonne");
        break;
    }
    }

    int a = 9;

    if (a > 8)
    {
        a++;
    }
    else
    {
        a--;
    }

    int ap = 9;

    ap = ap > 8 ? ap+1 : ap-1;

    printf("%d----%d", a, ap);

    return 0;
}