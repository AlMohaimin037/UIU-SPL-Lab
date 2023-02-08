//Program that will decide whether a number is even or odd.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    scanf("%d", &x);
    switch(abs(x) % 2)
    {
        case 0 : printf("Even\n");
        break;
        case 1 : printf("Odd\n");
        break;
    }
    return 0;
}
