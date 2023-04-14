#include <stdio.h>
#define SIZE 100

int main()
{
    int arr[SIZE], n;
    int * ptr = arr;
    int sum = 0;
    printf("Enter size of an array: ");
    scanf("%d", &n);
    
    printf("Enter %d integers:\n", n);
    for(int i = 0; i < n; i++)
    {
        printf("Element %d - ", i+1);
        scanf("%d", ptr);
        ptr++;
    }
    
    ptr = arr;
    
    for(int i =0; i < n; i++)
    {
        sum = sum + *ptr;
        ptr++;
    }
    
    printf("\nSum of all elements is: %d\n", sum);
    
    return 0;
}
