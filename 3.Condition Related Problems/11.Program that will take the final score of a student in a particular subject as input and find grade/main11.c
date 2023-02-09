/*Program that will take the final score of a student in a particular subject as input and find his/her grade.
*/

#include <stdio.h>

int main()
{
    float mark;
    scanf("%f", &mark);
    if(mark >= 90 && mark <= 100)
        printf("Grade: A\n");
    else if(mark >= 86 && mark <= 89)
        printf("Grade: A-\n");
    else if(mark >= 82 && mark <= 85)
        printf("Grade: B+\n");
    else if(mark >= 78 && mark <= 81)
        printf("Grade: B\n");
    else if(mark >= 74 && mark <= 77)
        printf("Grade: B-\n");
    else if(mark >= 70 && mark <= 73)
        printf("Grade: C+\n");
    else if(mark >= 66 && mark <= 69)
        printf("Grade: C\n");
    else if(mark >= 62 && mark <= 65)
        printf("Grade: C-\n");
    else if(mark >= 58 && mark <= 61)
        printf("Grade: D+\n");
    else if(mark >= 55 && mark <= 57)
        printf("Grade: D\n");
    else
        printf("Grade: F\n");
    return 0;
}
