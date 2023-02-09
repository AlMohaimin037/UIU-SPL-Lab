#include<stdio.h>

/*Program that will take three integer numbers from keyboard but assign only the first and last
inputs to variables and skip any assignment of the middle one.
*/

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    printf("First Value = %d, Last Value = %d\n", a, c);
    return 0;
}
