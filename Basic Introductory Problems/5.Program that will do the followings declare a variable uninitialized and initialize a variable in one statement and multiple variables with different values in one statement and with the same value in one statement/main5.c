#include<stdio.h>

/*Program that will do the followings:
a) Declare a variable uninitialized
b) Declare and initialize a variable in one statement
c) Declare and initialize multiple variables with different values in one statement
d) Declare and initialize multiple variables with the same value in one statement
*/

int main()
{
    int a;
    int b = 10;
    int c = 5, d= 9, e = 7;
    float ab = 3.14, aa = 3.14, ac = 3.14;

    printf("Value of a: %d\n");
    printf("Value of b: %d\nValue of c: %d\nValue of d: %d\nValue of e: %d\nValue of ab: %f\nValue of aa: %f\nValue of ac: %f\n",b,c,d,e,ab,aa,ac);
    return 0;
}
