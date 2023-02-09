/*Program that will evaluate simple expressions of the form-

<number1>   <operator>   <number2>

; where operators are (+, - , *, /)

And if the operator is “/”, then check if <number2> nonzero or not.
*/

#include <stdio.h>

int main()
{
    float num1, num2;
    char op;
    scanf("%f %c %f", &num1, &op, &num2);
    switch(op)
    {
        case '+' : printf("Addition: %f\n", num1 + num2); break;
        case '-' : printf("Subtraction: %f\n", num1 - num2); break;
        case '*' : printf("Multiplication: %f\n", num1 * num2); break;
        case '/' : (num2 == 0) ? printf("Division: Zero as divisor is not valid!\n") : printf("Division: %f\n", num1 / num2); break;
    }
    return 0;
}
