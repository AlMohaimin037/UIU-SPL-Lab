#include<stdio.h>

/*Program that will receive the values of an integer, a floating point number, a character from
the keyboard and print those values.
*/

int main()
{
    int a;
    float b;
    char ch;

    scanf("%d %f %c", &a, &b, &ch);

    printf("The integer value: %d\nThe floating point value: %f\nThe character value: %c\n",a,b,ch);

    return 0;
}
