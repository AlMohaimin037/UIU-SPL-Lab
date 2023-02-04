#include<stdio.h>

/*Program that will take two numbers as inputs and print the maximum value. (Using
conditional operator - ?*/

int main()
{
    int x, y, max;
    scanf("%d %d", &x, &y);

    max = x > y ? x : y;
    printf("Max: %d\n",max);

    return 0;
}
