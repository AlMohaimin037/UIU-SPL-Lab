#include<stdio.h>
#include<stdbool.h>
/*Program that will take a, b & c as inputs and decide if the statements are True (1) of False
(0)
1) (a + b) <= 80 && b >= 0
2) (a − b) == 0 || c != 0
3) a != b || (b < a) && c > 0
*/

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    bool A = (a + b) <= 80 && b >= 0 ? true : false;
    printf("%d\n",A);

    bool B = (a - b) == 0 || c != 0 ? true : false;
    printf("%d\n",B);

    bool C = a != b || (b < a) && c > 0 ? true : false;
    printf("%d\n",C);

    return 0;
}
