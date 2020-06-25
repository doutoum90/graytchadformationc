
#include <stdio.h>

int main()
{
    signed char mySignedChar = 'A';

    /**
     * signed char mySignedChar;
     * mySignedChar = 'A';
    */

    unsigned char myUnsignedChar = 'B';

    short mySignedShort = -4;

    unsigned short myUnsignedShort = 4;

    int mySignedint1 = -5000;
    int mySignedint2 = 4309;

    unsigned int myUnsignedint = 400000;

    long mySignedlong = -50000000000;

    unsigned long myUnsignedlong = 40000000;

    // short
    /*     printf("la premiere chaine %c %d %c \n", mySignedChar, mySignedChar, myUnsignedChar);

    // short
    printf("%d %u \n", mySignedShort, myUnsignedShort);

    // int
    printf("%d %i \n", myUnsignedint, mySignedint1);

    // long
    printf("%li %lu \n", mySignedlong, myUnsignedlong);
 */
    /***
    * Type reel
    */

    float myFloatNumber = 500000000000000;
    double myDoubleNumber = 5000000000000000;
    double myDoubleNumber2 = 5000000000;
    long double myLongDoubleNumber = 5000000000000000000;

    // printf("%f %lf %Lf \n", myFloatNumber, myDoubleNumber, myLongDoubleNumber);

    // int arthmetique
    /* int somme = mySignedint1 + mySignedint2;
    int difference = mySignedint1 - mySignedint2;
    int multi = mySignedint1 * mySignedint2;
    int division = mySignedint1 / mySignedint2;
    int modulo = mySignedint1 % mySignedint2;
    printf("%d + %d = %d \n", mySignedint1, mySignedint2, somme);
    printf("%d - %d = %d \n", mySignedint1, mySignedint2, difference);
    printf("%d * %d = %d \n", mySignedint1, mySignedint2, multi);
    printf("%d / %d = %d \n", mySignedint1, mySignedint2, division);
    printf("%d modulo %d = %d \n", mySignedint1, mySignedint2, modulo);

    // double arthmetique

    double sommeReel = myDoubleNumber + myDoubleNumber2;
    double differenceReel = myDoubleNumber - myDoubleNumber2;
    double multiReel = myDoubleNumber * myDoubleNumber2;
    double divisionReel = myDoubleNumber / myDoubleNumber2;
    // double modulo = (double)(myDoubleNumber % myDoubleNumber2);
    printf("%f + %f = %f \n", myDoubleNumber, myDoubleNumber2, sommeReel);
    printf("%f - %f = %f \n", myDoubleNumber, myDoubleNumber2, differenceReel);
    printf("%f * %f = %f \n", myDoubleNumber, myDoubleNumber2, multiReel);
    printf("%f / %f = %f \n", myDoubleNumber, myDoubleNumber2, divisionReel);
    // printf("%lf % %lf = %lf \n", myDoubleNumber, myDoubleNumber2, modulo);

    //  relationnel
    printf("%d > %d = %d \n", mySignedint1, mySignedint2, mySignedint1 > mySignedint2);
    printf("%d >= %d = %d \n", mySignedint1, mySignedint2, mySignedint1 >= mySignedint2);
    printf("%d < %d = %d \n", mySignedint1, mySignedint2, mySignedint1 < mySignedint2);
    printf("%d <= %d = %d \n", mySignedint1, mySignedint2, mySignedint1 <= mySignedint2);
    printf("%d == %d = %d \n", mySignedint1, mySignedint2, mySignedint1 == mySignedint2);
    printf("%d != %d = %d \n", mySignedint1, mySignedint2, mySignedint1 != mySignedint2); */

    unsigned int faux = 0, vrai = 1;
    /***
     * unsigned int faux = 0;
     * unsigned int vrai = 1;
     * 
    */

    printf("%u && %u = %u \n", faux, faux, faux && faux);
    printf("%u && %u = %u \n", faux, vrai, faux && vrai);
    printf("%u && %u = %u \n", vrai, faux <= vrai && faux);
    printf("%u && %u = %u \n", vrai, vrai <= vrai && vrai);

    printf("%u || %u = %u \n", faux, faux, faux || faux);
    printf("%u || %u = %u \n", faux, vrai, faux || vrai);
    printf("%u || %u = %u \n", vrai, faux <= vrai || faux);
    printf("%u || %u = %u \n", vrai, vrai <= vrai || vrai);

    printf("!%u = %u \n", faux, !faux);
    printf("!%u = %u \n", vrai, !vrai);

    /***
 * +
 * _
 * *
 * /
 * %
 */

    int add = 5;
    int soust = 5;
    int mul = 5;
    int div = 5;
    int mod = 5;

    int add2 = 5;
    int soust2 = 5;
    int mul2 = 5;
    int div2 = 5;
    int mod2 = 5;

    add = add + 2; //
    add2 += 2;
    soust = soust - 2; //
    soust2 -= 2;
    mul = mul * 2; //
    mul2 *= 2;
    div = div / 2; //
    div2 /= 2;
    mod = mod % 2; //
    mod2 %= 2;

    printf("%u --- %u\n", add, add2);
    printf("%u --- %u\n", soust, soust2);
    printf("%u --- %u\n", mul, mul2);
    printf("%u --- %u\n", div, div2);
    printf("%u --- %u\n", mod, mod2);

    int a1 = 7;
    int a2 = 7;
    int a3 = 7;

    int b1 = 7;
    int b2 = 7;
    int b3 = 7;

    a1 = a1 + 1; //
    a2++;        //
    a3 += 1;

    b1 = b1 - 1; //
    b2--;        //
    b3 -= 1;

    --b1; // predecrementation
    b1--; // postdecrementation

    ++b1; // preincrementation
    b1++; // postincrementation

    printf("%u --- %u --- %u\n", a1, a1, a3);
    printf("%u --- %u --- %u\n", b1, b1, b3);

    int x;
    unsigned int valeur = ((x = 5), (x + 4) );

    printf("%u\n", valeur);
    /***
     * int x;
     * x = 5
     * unsigned int valeur = x+4
    */
    return 0;
}