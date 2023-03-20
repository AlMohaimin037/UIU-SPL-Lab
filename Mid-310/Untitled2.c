#include <stdio.h>

int main()
{
    int n, flag = 1;
    scanf("%d", &n);
    int arr[n][n];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i=0;i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i][j] != 0)
            {
                flag = 0;
                break;
            }
        }
    }

    if(flag==1)
    {
        printf("Lower triangular matrix\n");
    }
    else
    {
        printf("Not Lower Triangular Matrix\n");
    }
    return 0;
}
