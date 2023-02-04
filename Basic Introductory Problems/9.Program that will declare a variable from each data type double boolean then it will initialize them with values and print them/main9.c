#include<stdio.h>
#include<stdbool.h>
/*stdbool.h is used for boolean values.A boolean variable is declared with the bool keyword and can only take the values true or false*/

/*Program that will declare a variable from each data type: double, boolean. Then it will
initialize them with values and print them.*/

int main()
{
    double d;
    bool b;

    d = 3.140000e+00;
    b = true;

    printf("The double value: %e\nThe boolean value: %d\n\n",d,b);//%e for exponential value

    d = 1.618039;
    b = false;

    printf("The double value: %lf\nThe boolean value: %d\n\n",d,b);

    return 0;
}
