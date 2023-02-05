/*Program that will take a floating point number X as input and evaluate A,B,C where-
A = Value when X is rounded up to the nearest integer
B = Value when X is rounded down to the nearest integer
C = Absolute value of X
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>// stdlib.h for abs() function

int main()
{
    float X;
    scanf("%f", &X);
    printf("A = %d, B = %d, C = %.1f\n", (int)ceil(fabs(X)), (int)floor(fabs(X)), fabs(X));// fabs for float absolute value

    return 0;
}
