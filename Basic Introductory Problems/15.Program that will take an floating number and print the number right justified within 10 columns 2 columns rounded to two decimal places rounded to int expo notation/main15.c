#include<stdio.h>
#include<math.h>

/*Program that will take an floating point number as input from the keyboard and use printf
function to perform the followings:
(a) Print the number right justified after 10 columns
(b) Print the number to be right justified to 2 columns (Assuming the input has more
than 2 digits)
(c) Print the number rounded to two decimal places
(d) Print the number rounded to integer (without using conversion or type casting)
(e) Prints the number in exponential notation/scientific notation
*/

int main()
{
    float num1;
    scanf("%f", &num1);


    printf("Val:  \t%f\nVal:%2f\nVal:%.2f\nVal:%.0f\nVal:%e\n", num1, num1, num1, floor(num1), num1);//%.0f for floor format specifier.%d will give 0.

    return 0;
}
