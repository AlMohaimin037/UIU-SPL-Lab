#include<stdio.h>

/*Program that will take two numbers X and Y as inputs, then calculate and print the values
of their addition, subtraction, multiplication, division (quotient and reminder). */

int main()
{
    float X, Y;
    scanf("%f %f", &X, &Y);

    printf("Addition: %.1f\nSubtraction: %.1f\nMultiplication: %.1f\nQuotient: %d\nRemainder: %d\n", X + Y, X - Y, X * Y, (int)X / (int)Y, (int)X % (int)Y);
    return 0;
}
