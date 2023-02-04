#include<stdio.h>

/*Program that will declare a variable from each data type: long int, long long int, long double,
short int. Then it will initialize them with values and print them.*/

int main()
{
    long int a;
    long long int b;
    long double c;
    short int d;

    a = 2147483647;
    b = 9223372036854775807;
    c = 1.1E+4932;
    d = 32767;

    printf("The long int value: %ld\nThe long long int value: %lld\nThe long double value: %LE\nThe short int value: %hi\n\n",a,b,c,d);

    a = -2147483648;
    b = -92233720368547758;
    c = 3.4E-4932;
    d = -32768;

    printf("The long int value: %ld\nThe long long int value: %lld\nThe long double value: %LE\nThe short int value: %hi\n\n",a,b,c,d);

    return 0;

}
