/*Program that will read from the console a random number and check if it is a nonzero positive number. If the check is yes, it will determine if the number is a power of 2.

If the check fails the program will check for two more cases. If the number is zero, the program will print “Zero is not a valid input”. Else it will print “Negative input is not valid”.
*/
#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    if(x > 0 && x < (1.0 / 0.0))
    {
        ((x & (x - 1)) == 0) ? printf("Yes\n") : printf("No\n");
    }
    else if(x == 0)
    {
        printf("Zero is not a valid input\n");
    }
    else
    {
        printf("Negative input is not valid\n");
    }
    return 0;
}
