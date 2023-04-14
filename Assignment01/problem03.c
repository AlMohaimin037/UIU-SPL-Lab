#include <stdio.h>
#define SIZE 100

int main()
{
    int arr[SIZE], n;
    int * ptr = arr;

    printf("Enter size of an array: ");
    scanf("%d", &n);
    
    printf("Enter %d integers: ", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", ptr);
        ptr++;
    }
    
    ptr = arr;
    
    printf("The elements are: ");
    for(int i =0; i < n; i++)
    {
        printf("%d ", *ptr);
        ptr++;
    }

    return 0;
}
