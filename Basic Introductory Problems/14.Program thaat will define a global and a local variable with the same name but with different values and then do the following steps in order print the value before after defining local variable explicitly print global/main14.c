#include<stdio.h>

/*Program that will define a global and a local variable with the same name but with different
values, and then do the following steps in order
A. Print the value of the variable before defining the local variable
B. Print the value of the variable after defining the local variable
C. Explicitly print the value of the variable as global
*/

int a = 10;

int main()
{
    printf("Global: %d\n",a);//Print the value of the variable before defining the local variable

    int a = 20;
    printf("Local: %d\n",a);//Print the value of the variable after defining the local variable

    {
        extern int a;
        printf("Global: %d\n",a);//Explicitly print the value of the variable as global
    }
    return 0;
}
