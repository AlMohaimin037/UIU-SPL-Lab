#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    // Upper part
    for(int i=1; i<=n; i++)
    {
        //Number patern
        for(int j=1; j<=i; j++)
        {
            printf("%d", j+1);
        }

        //Star pattern
        for(int j=n-1; j>=i; j--)
        {

            printf("*");
        }
        printf("\n");
    }

    for(int i=1; i<=n-1; i++)
    {
        //Number pattern
        for(int j=1; j<n-i+1; j++)
        {
            printf("%d", j+1);
        }

        // Hash pattern
        for(int j=1; j<=i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
