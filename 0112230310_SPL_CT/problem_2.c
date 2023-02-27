#include <stdio.h>

int main()
{
    int i, j;
    int n;

    scanf("%d", &n);

    printf("\n");
    // 1st outer loop
    for(i=1; i<=n; i++)
    {
        //1st inner loop
        for(j=1; j<=i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    //2nd outer loop
    for(i=1; i<=n-1; i++)
    {
        //1st inner loop
        for(j=1; j<=n-i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
