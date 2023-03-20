#include <stdio.h>

int main()
{
    int n;
    
    scanf("%d", &n);
    
    for(int i=1; i<=(2*n-1); i++)
    {
        // First Space
        if(i%2 != 0)
        {
            for(int j=1; j<=n-i; j++)
            {
                printf(" ");
            }
        }
        
        // Pattern
        for(int j=1; j<=i; j++)
        {
            if(i==1 || i==(2*n-1))
            {
                printf("%d", j);
            }
            else if(i%2==0)
            {
                printf(" ");
            }
            else if(i%2!=0)
            {
                if(j==1 || j==i)
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
