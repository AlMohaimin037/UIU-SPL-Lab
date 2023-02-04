#include<stdio.h>
#include<math.h>

/*Program that will take calculate the roots of a quadratic equation (a*x^2 + b*x + c = 0) from
the formula, -
root1 = -b + sqrt(b^2 - 4*a*c)
root2 = -b - sqrt(b^2 - 4*a*c)
*/

int main()
{
    float a, b, c, pr1;
    scanf("%f %f %f", &a, &b, &c);
    pr1 = b*b -4 * a * c;

    if(pr1 > 0 && a != 0)
    {
        double root1, root2;
        root1 = (- b + sqrt(pr1)) / (2 * a);
        root2 = (- b - sqrt(pr1)) / (2 * a);

        printf("%.2lf\t%.2lf", root1, root2);
    }
    else
    {
        printf("Imaginary\n");
    }
    return 0;
}
