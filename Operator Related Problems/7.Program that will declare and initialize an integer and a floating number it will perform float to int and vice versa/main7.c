#include<stdio.h>

/*Program that will declare and initialize an integer and a floating point number. Then it will
perform floating to integer and integer to floating conversions using
(a) Assignment operation
(b) Type casting
*/

int main()
{
    int num1, temp1;
    float num2, temp2;
    scanf("%d %f", &num1, &num2);

    temp1 = num2;
    temp2 = num1;
    printf("Assignment: %f assigned to an int produces %d\nAssignment: %d assigned to a float produces %f\n", num2, temp1, num1, temp2);

    printf("Type Casting: (float) %d produces %f\nType Casting: (int) %f produces %d\n", num1, (float)num1, num2, (int)num2);

    return 0;
}
