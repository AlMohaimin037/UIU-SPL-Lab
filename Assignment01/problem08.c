#include <stdio.h>
#define SIZE 100

void printArr(int * arr, int size);

int main()
{
    int arr[SIZE], n;
    int * left = arr;
    printf("Enter size of an array: ");
    scanf("%d", &n);
    
    int * right = &arr[n-1];
    
    printf("Enter %d integers: ", n);
    while(left <= right)
    {
        scanf("%d", left);
        left++;
    }
    printf("\nArray before reverse: ");
    printArr(arr, n);
    
    left = arr;
    
    while(left < right)
    {
        *left ^= *right;
        *right ^= *left;
        *left ^= *right;
        
        left++;
        right--;
    }
    
    printf("\nArray after reverse: ");
    printArr(arr, n);
    return 0;
}

void printArr(int * arr, int size)
{
    int * arrEnd = (arr + size - 1);

    while(arr <= arrEnd)
    {
        printf("%d ", *arr);
        arr++;
    }
}
