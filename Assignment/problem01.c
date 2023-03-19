#include <stdio.h>

int main()
{
    int n, palindrome=0, prime=0, div5_not2=0;
    
    scanf("%d", &n);
    
    int arr[n];
    
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        
        //Palindrome Count
        {
            int temp = arr[i], reversedTemp=0;
            
            while(temp!=0)
            {
                reversedTemp = (reversedTemp*10) + (temp%10);
                temp /= 10;
            }
        
            if(reversedTemp == arr[i])
            {
                palindrome++;
            }
        }
        
        //Prime Count
        {
            int isPrime = 1;
            
            for(int j=2; j<arr[i]/2; j++)
            {
                
                if(arr[i]%j==0)
                {
                    isPrime = 0;
                    break;
                }
                
            }
            
            if(isPrime == 1 && arr[i]!= 0 && arr[i]!=1)
            {
                prime++;
            }
        }
        
        //Divisible by 5 but not divisible by 2
        {
            if((arr[i]%5==0) && (arr[i]%2!=0))
            {
                div5_not2++;
            }
        }
    }
    
    printf("Count of palindrome numbers: %d\n", palindrome);
    printf("Count of prime numbers: %d\n", prime);
    printf("Count of numbers divisible by 5 but not divisible by 2: %d\n", div5_not2);
    return 0;
}
