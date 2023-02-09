#include<stdio.h>

/*Program that will declare a variable from each data type: unsigned int, unsigned long int,
unsigned long long int, unsigned short int. Then it will initialize them with values and print
them.
*/

int main()
{
    unsigned int a;
    unsigned long int b;
    unsigned long long int c;
    unsigned short int d;

    a = 4294967295;
    b = 4294967295;
    c = 18446744073709551615;
    d = 65535;

    printf("The unsigned int value: %u\nThe unsigned long int value: %lu\nThe unsigned long long int value: %llu\nThe unsigned short int value: %hu\n\n", a, b, c, d);

    a = 0;
    b = 0;
    c = 0;
    d = 0;

    printf("The unsigned int value: %u\nThe unsigned long int value: %lu\nThe unsigned long long int value: %llu\nThe unsigned short int value: %hu\n\n", a, b, c, d);
    return 0;
}
