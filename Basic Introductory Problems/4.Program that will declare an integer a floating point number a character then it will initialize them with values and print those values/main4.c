#include<stdio.h>

/*Program that will declare an integer, a floating point number, a character. Then it will
initialize them with values and print those values.
*/
int main()
{
    int num1;
    float num2;
    char ch;

    num1 = 5;
    num2 = 3.141593;
    ch = 'a';

    printf("The integer value: %d\nThe floating point value: %f\nThe character value: %c\n",num1,num2,ch);

    num1 = 100;
    num2 = 1.618000;
    ch = 'z';

    printf("\nThe integer value: %d\nThe floating point value: %f\nThe character value: %c\n",num1,num2,ch);
    return 0;
}
