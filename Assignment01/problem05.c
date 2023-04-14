#include <stdio.h>

int main()
{
    int a, b;
    int * ptr1 = &a, *ptr2 = &b;
    
    printf("Enter two integer numbers: ");
    scanf("%d %d", ptr1, ptr2);
    
    printf("\nBefore swapping the numbers are: %d %d\n", *ptr1, *ptr2);
    
    *ptr1 = *ptr1 + *ptr2;
    *ptr2 = *ptr1 -*ptr2;
    *ptr1 = *ptr1 - *ptr2;
    
    printf("\nAfter swaping the nummbers are: %d %d\n", *ptr1, *ptr2);

    return 0;
}
