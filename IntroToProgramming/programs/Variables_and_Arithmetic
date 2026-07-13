#include <stdio.h>

int main(void) {

    /* Variable declaration. In C the type must be stated first.
       int  = whole number  (e.g. 3, -7, 100) - typically 4 bytes/32 bits of memory 
       float = decimal number (e.g. 3.14, -0.5) - typically 4 bytes/32 bits of memory */

    int apples = 5;
    int oranges = 3;

    /* Arithmetic: +  -  *  /  % (remainder) */
    int total = apples + oranges;

    /* %d is a format specifier meaning "print an int here".
       %f is for float, %c for char, %s for string.*/

    printf("Apples: %d\n", apples);
    printf("Oranges: %d\n", oranges);
    printf("Total fruit: %d\n", total);

    /* When both operands are integers, division truncates
       the fractional part.
       This means that 5 / 3 gives 1, NOT 1.666 */

    printf("5 / 3 = %d  (integer division!)\n", 5 / 3);
    printf("5 %% 3 = %d  (remainder)\n", 5 % 3); 
    /* %% is required to print a literal '%' character -
       a single % inside printf's format string is always
       interpreted as the start of a format specifier */

    /* For true division, at least one operand must be float/double */
    printf("5.0 / 3 = %.2f\n", 5.0f / 3);  /* %.2f = format specifier for 2 decimal places */

    return 0;
}
