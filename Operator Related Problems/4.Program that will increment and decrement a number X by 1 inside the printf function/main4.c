#include<stdio.h>

/*Program that will increment and decrement a number X by 1 inside the printf function.
(Use ++ and - - operators)*/

int main()
{
    int X;
    scanf("%d", &X);

    printf("X++: %d\n", X++);

    scanf("%d", &X);

    printf("++X: %d\n",++X);

    scanf("%d", &X);
    printf("X--: %d\n",X--);

    scanf("%d", &X);
    printf("--X: %d\n",--X);

    return 0;
}
