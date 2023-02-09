/*Program that will check whether a triangle is valid or not, when the three angles (angle
value should be such that, 0 < value < 180) of the triangle are entered through the keyboard.
[Hint: A triangle is valid if the sum of all the three angles is equal to 180 degrees.]
*/
#include <stdio.h>

int main()
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    if((x > 0 && x < 180) &&(y > 0 && y < 180) && (z > 0 && y < 180))
    {
        (x + y + z == 180) ? printf("Yes\n") : printf("No\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}
