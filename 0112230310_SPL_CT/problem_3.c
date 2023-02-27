#include <stdio.h>
#include <math.h>

int main()
{
    long long num, originalNum, rev = 0;
    int i, digits;

    scanf("%lld", &num);

    originalNum = num;

    digits = (num == 0) ? 1 : ((int) log10(num)) + 1;

    while(num != 0)
    {
        rev = (rev * 10) + (num % 10);
        num /= 10;
    }

    (originalNum == rev)
        ? printf("# of digits: %d Palindrome\n", digits)
        : printf("# of digits: %d Not Palindrome\n", digits);

    return 0;
}
