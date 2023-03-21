#include <stdio.h>

int main()
{
    int n;
    
    scanf("%d", &n);
    
    for(int i=1; i<=n; i++)
    {
        // First Space
        for(int j=i; j<n; j++)
        {
            printf(" ");
        }
        
        // Pattern
        for(int j=1; j<=(2*i-1); j++)
        {
            if(i==1 || i==n)
            {
                printf("%d", j);
            }
            else
            {
                if(j==1 || j==(2*i-1))
                {
                    printf("#");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        
        printf("\n");
    }
    return 0;
}
