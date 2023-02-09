/*Program that will take two numbers X & Y as inputs and decide whether X is greater than/less than/equal to Y.
*/
#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    if(x > y)
        printf("%d is greater than %d\n", x, y);
    else if(x < y)
        printf("%d is less than %d\n", x, y);
    else
        printf("%d is equal to %d\n", x, y);
    return 0;
}
