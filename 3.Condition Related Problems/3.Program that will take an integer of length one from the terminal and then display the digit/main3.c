/*Program that will take an integer of length one from the terminal and then display the digit
in English.*/
#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    switch(x)
    {
        case 0 : printf("zero\n");
        break;
        case 1 : printf("one\n");
        break;
        case 2 : printf("two\n");
        break;
        case 3 : printf("three\n");
        break;
        case 4 : printf("four\n");
        break;
        case 5 : printf("five\n");
        break;
        case 6 : printf("six\n");
        break;
        case 7 : printf("seven\n");
        break;
        case 8 : printf("eight\n");
        break;
        case 9 : printf("nine\n");
        break;
        default : printf("Please enter only 0 to 9 digits\n");
    }
    return 0;
}
