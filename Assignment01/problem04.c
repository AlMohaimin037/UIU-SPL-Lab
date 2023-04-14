#include <stdio.h>
#define SIZE 100

int main()
{
    char str[SIZE];
    char * ptr = str;
    int count = 0;
    
    printf("Enter any string: ");
    gets(str);
    
    while((*ptr++) != '\0') count++;
    
    printf("Length of %s = %d\n", str, count);

    return 0;
}
