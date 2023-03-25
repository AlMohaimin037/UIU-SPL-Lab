#include <stdio.h>

int main()
{
    int n, i, j, num;
    
    scanf("%d", &n);
    
    for(i=1; i<=n; i++)
    {
        num=1;
        for(j=1; j<=n-i; j++)
        {
            printf(" ");
        }
        
        for(j=1; j<=2*i-1; j++)
        {
            if(i%2==0)
            {
                if(j==1 || j==2*i-1)
                {
                    printf("#");
                }
                else
                {
                    printf(" ");
                }
            }
            else if(i%2!=0 && i==n)
            {
                printf("%d", num);
                num++;
            }
            else if(j==1 || j==2*i-1)
            {
                printf("%d", num);
                num++;
            }
            else
            {
                printf(" ");
            }
        }
        
        printf("\n");
    }
    return 0;
}
