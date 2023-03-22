#include <stdio.h>
#include <math.h>

#define BASE 2

int main()
{
    long long binary, decimal=0, tempBinary;
    int N=0, count_1=0;
    
    scanf("%lld", &binary);
    
    tempBinary = binary;
    
    while(tempBinary != 0)
    {
        if(tempBinary%10 == 1)
        {
            decimal += pow(BASE, N);
            count_1++;
        }
        
        N++;
        
        tempBinary /= 10;
    }
    
    printf("%lld|%d\n", decimal, count_1);
    
    return 0;
}
