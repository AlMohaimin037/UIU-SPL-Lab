#include<stdio.h>

/*
Program that will evaluate the following equations -
X = a – b / 3 + c * 2 – 1
Y = a – ( b / ( 3 + c ) * 2) - 1
Z = a – ( ( b / 3) + c * 2) - 1
*/

int main()
{
    int a, b, c, X, Y, Z;
    scanf("%d %d %d", &a, &b, &c);

    X = a - b / 3 + c * 2 - 1;
    Y = a - (b / (3 + c) * 2) - 1;
    Z = a - ((b / 3) + c * 2) - 1;

    printf("X = %d\nY = %d\nZ = %d\n", X, Y, Z);

    return 0;
}
