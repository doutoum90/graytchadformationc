
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

    int mySignedint = -5000;

    unsigned int myUnsignedint = 400000;

    long mySignedlong = -50000000000;

    unsigned long myUnsignedlong = 40000000;

    // short
    printf("la premiere chaine %c %d % c\n", mySignedChar, mySignedChar, myUnsignedChar);

    // short
    printf("%d %u \n", mySignedShort, myUnsignedShort);

    // int
    printf("%d %i \n", myUnsignedint, mySignedint);

    // long
    printf("%li %lu \n", mySignedlong, myUnsignedlong);

    /***
    * Type reel
    */

    float myFloatNumber = 500000000000000;
    double myDoubleNumber = 5000000000000000;
    long double myLongDoubleNumber = 5000000000000000000;

    printf("%f %lf %Lf \n", myFloatNumber, myDoubleNumber, myLongDoubleNumber);

    return 0;
}