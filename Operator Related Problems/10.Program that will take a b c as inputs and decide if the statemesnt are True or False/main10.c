#include<stdio.h>
#include<stdbool.h>
/*Program that will take a, b & c as inputs and decide if the statements are True (1) of False
(0)
a) (a + b) <= 80
b) ! (a + c)
c) a != 0
*/

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    bool A = (a + b) <= 80 ? true : false;
    printf("%d\n",A);

    bool B = !(a + c) ? true : false;
    printf("%d\n",B);

    bool C = a != 0 ? true : false;
    printf("%d\n",C);

    return 0;
}
