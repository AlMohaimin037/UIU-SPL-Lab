/**
  * C program to find the maximum number between two numbers using a pointer
  */


#include <stdio.h>

int main()
{
    float num1, num2;
    float *ptr1, *ptr2, **maxPtr;
    
    ptr1 = &num1; // ptr1 stores the address of num1
    ptr2 = &num2; // ptr2 stores the address of num2
    
    printf("Enter any two numbers: ");
    scanf("%f %f", ptr1, ptr2);
    
    if(*ptr1 < *ptr2)
    {
        maxPtr = &ptr2;
    }
    else
    {
        maxPtr = &ptr2;
    }
    
    printf("Maximum = %.2f\n", **maxPtr);
    
    return 0;
}
