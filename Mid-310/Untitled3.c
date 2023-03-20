#
#include <stdio.h>

int main()
{
    int money;
    scanf("%d", &money);

    int temp =money, reversedTemp=0;;

    while(temp != 0)
    {
        reversedTemp = (reversedTemp*10) + (temp %10);
        temp /= 10;
    }
    if((reversedTemp == money) && (reversedTemp%5==0)){
        printf("Sadik: Happy\n");
        printf("Sadik's Father: Happy\n");
    }
    else if((reversedTemp == money) && (reversedTemp%5!=0))
    {
        printf("Sadik: Happy\n");
        printf("Sadik's Father: Not Happy\n");
    }
    else if((reversedTemp != money) && (reversedTemp%5!=0))
    {
        printf("Sadik: Not Happy\n");
        printf("Sadik's Father: Not Happy\n");
    }
    else if((reversedTemp != money) && (reversedTemp%5==0))
    {
        printf("Sadik: Not Happy\n");
        printf("Sadik's Father: Happy\n");
    }
    return 0;
}
