#include<stdio.h>

/*Program that will increment and decrement a number X by Y. (Use += and -= operators)*/

int main()
{
    int X, Y;
    scanf("%d %d", &X, &Y);

    printf("Incremented Value: %d\n", X += Y);

    scanf("%d %d", &X, &Y);
    printf("Decremented Value: %d\n", X -= Y);

    return 0;
}
