#include <stdio.h>
#define SIZE 100

int main()
{
    char str[SIZE];
    char * ptr = str;
    int vowel, consonant;
    
    vowel=consonant=0;
    
    printf("Enter any string: ");
    gets(str);
    
    while((*ptr++) != '\0')
    {
        switch(*ptr)
        {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u': vowel++; break;
            default : consonant++;
        }
    }
    
    printf("Number of vowels = %d\nNumber of consonants = %d\n", vowel, consonant);

    return 0;
}
