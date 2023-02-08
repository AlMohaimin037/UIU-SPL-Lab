//Program that will decide whether a number is positive or not.
#include <stdio.h>


int main()
{
    double x;
    scanf("%lf", &x);
    if(x >= 0.00 && x < (1.0 / 0.0))
        printf("Positive\n");
    else
        printf("Negative\n");
    return 0;
}
