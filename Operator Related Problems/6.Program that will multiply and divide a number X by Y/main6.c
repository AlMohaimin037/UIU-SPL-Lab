#include<stdio.h>

/*Program that will multiply and divide a number X by Y. (Use *= and /= operators)*/

int main()
{
    int X, Y;
    scanf("%d %d", &X, &Y);

    printf("Multiplication: %d\n", X *= Y);

    scanf("%d %d", &X, &Y);
    printf("Division: %d\n", X /= Y);

    return 0;
}
