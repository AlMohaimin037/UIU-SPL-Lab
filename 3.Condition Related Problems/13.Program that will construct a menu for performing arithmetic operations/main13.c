/*Program that will construct a menu for performing arithmetic operations. The user will give two real numbers (a, b) on which the arithmetic operations will be performed and an integer number (1 <= Choice <= 4) as a choice. Choice-1, 2, 3, 4 are for performing addition, subtraction, multiplication, division respectively.

If Choice-4 is selected, again the program will ask for another choice (1 <= Case <=2), where Case-1, 2 evaluate quotient and reminder respectively.
*/
#include <stdio.h>

int main()
{
    float a, b;
    int choice;
    scanf("%f %f", &a, &b);
    scanf("%d", &choice);
    int add = a + b;
    int subtrac = a - b;
    int product = a * b;
    int division = a / b;
    int remainder = (int)a % (int)b;
    switch(choice)
    {
        case 1 : printf("Addition: %d\n", add); break;
        case 2 : printf("Subtraction: %d\n", subtrac); break;
        case 3 : printf("Multiplication: %d\n", product); break;
        case 4 : scanf("%d", &choice);
                 switch(choice)
                 {
                     case 1 : printf("Quotient: %d\n", division); break;
                     case 2 : printf("Remainder: %d\n", remainder); break;
                 }
                 break;
    }
    return 0;
}
