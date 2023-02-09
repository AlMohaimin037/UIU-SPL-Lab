#include<stdio.h>
#include<math.h>

/*Program that will evaluate the equation
2 * (cos^2)x - sqrt(3)(sin(x)) + sin(x / 2)1
; where 1<= x <=180 [No checking needed]
*/

int main()
{
    int x;
    scanf("%d", &x);

    float rad_x = x * (3.14159 / 180.0);// Convert degree to radian

    float sin_value = sin(rad_x);
    float sin_value1 = sin(rad_x / 2);
    float cos_value = cos(rad_x);
    float equation = (2 * cos_value * cos_value) - (sqrt(3) * sin_value) + sin_value1;
    printf("%f", equation);
    return 0;
}
