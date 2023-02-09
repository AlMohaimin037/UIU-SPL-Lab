//Program that will decide whether a year is leap year or not.
#include <stdio.h>

int main()
{
    int year;
    scanf("%d", &year);

    (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) ? printf("Yes\n") : printf("No\n");
    return 0;
}
