#include<stdio.h>

/*Program that will take two numbers (a, b) as inputs and compute the value of the equation
– (Without using math.h)*/
//X = (3.31 * a^2 + 2.01 * b3) / (7.16 * b^2 + 2.01 * a^3)

int main()
{
    float a, b, equation;
    scanf("%f %f", &a, &b);

    equation = (3.31 * (a * a) + 2.01 * (b * b * b)) / (7.16 * (b * b) + 2.01 * (a * a * a));

    printf("X = %f", equation);

    return 0;
}
