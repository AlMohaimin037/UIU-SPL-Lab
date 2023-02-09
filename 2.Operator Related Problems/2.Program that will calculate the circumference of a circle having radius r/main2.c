#include<stdio.h>
#define Pi 3.1416

//Program that will calculate the circumference of a circle having radius r
//Area, A = 2 * Pi * r

int main()
{
    float r, area;
    scanf("%f", &r);

    area = 2 * Pi * r;

    printf("Area: %.2f\n",area);

    return 0;
}
