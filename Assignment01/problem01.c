/**
  * C program to add two number using pointers
  */


#include <stdio.h>

int main()
{
    float num1, num2, sum;
    float *ptr1, *ptr2;
    
    ptr1 = &num1; // ptr1 stores the address of num1
    ptr2 = &num2; // ptr2 stores the address of num2
    
    printf("Enter any two numbers: ");
    scanf("%f %f", ptr1, ptr2);
    
    sum = *ptr1 + *ptr2;
    
    printf("Sum = %.2f\n", sum);
    
    return 0;
}
