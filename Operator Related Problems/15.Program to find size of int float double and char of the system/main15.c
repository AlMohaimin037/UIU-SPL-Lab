//Program to find size of int, float, double and char of the system.

#include<stdio.h>

int main()
{
    int a;
    float b;
    double c;
    char ch;

    printf("Size of int in byte(s) = %d\nSize of float in byte(s) = %d\nSize of double in byte(s) = %d\nSize of char in byte(s) = %d\n", sizeof(a), sizeof(b), sizeof(c), sizeof(ch));
    return 0;
}
