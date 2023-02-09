/*Program that will read from the console a random positive nonzero number and determine if it is a power of 2.
*/
#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    if(x > 0 && x< (1.0 / 0.0))
    {
        ((x & (x - 1)) == 0) ? printf("Yes\n") : printf("No\n");//Bitwise operator and binary mathmatics
    }
    else
    {
        printf("Enter a positive nonzero number\n");
    }

    return 0;
}
