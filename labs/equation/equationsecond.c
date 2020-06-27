#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, delta, x0, x1, x2;

    printf("Bonjour veuilez saisir\n");
    printf("a\n");

    scanf("%lf", &a);
    printf("b\n");
    scanf("%lf", &b);
    printf("c\n");
    scanf("%lf", &c);

    // printf("a = %lf b = %lf c = %lf", a, b, c);

    delta = b * b - 4 * a * c;

    printf("%lf", delta);
    if (delta > 0)
    {
        x1 = (-b - sqrt(delta)) / 2 * a;
        x2 = (-b + sqrt(delta)) / 2 * a;
        printf("il existe deux solutions réelles distinctes, %lf, %lf", x1, x2);
    }
    else if (delta == 0)
    {
        x0 = -b / 2 * a;
        printf("il existe une solution réelle double %lf", x0);
    }
    else
    {
        printf("pas de solutions réelle");
    }

    return 1;
}

// 2x^2-x1-6 => delta >0
// x^2 − 2x − 2 => delta =0
// x² + 1 => delta <0