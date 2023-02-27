#include <stdio.h>

int main()
{
    int yearExp, yearExp_Field;
    float preSalary, newSalary;
    scanf("%d %d %f", &yearExp, &yearExp_Field, &preSalary);


    if(yearExp >=4 && yearExp_Field >=2)
    {
        newSalary = preSalary + (preSalary * 0.1);
        newSalary = newSalary + (newSalary * 0.2);
        printf("%.2f tk", newSalary);
    }
    else if(yearExp<4 && yearExp_Field>=2)
    {
        newSalary = preSalary + (preSalary * .2);
        printf("%.2f tk", newSalary);
    }
    else if(yearExp >=4 && yearExp_Field <2)
    {
        newSalary = preSalary + (preSalary * .1);
        printf("%.2f tk", newSalary);
    }
    else if((yearExp > 0 && yearExp <4) && (yearExp_Field > 0 && yearExp_Field < 2))
    {
        newSalary = preSalary;
        printf("%.2f tk", newSalary);
    }
    else if(yearExp == 0 && yearExp_Field == 0)
    {
        printf("You are not suitable for the job");
    }

    return 0;
}
