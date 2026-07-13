#include <stdio.h>

int main(void) {

    int age;

    /* printf without \n so the cursor stays on the same line */
    printf("Enter your age: ");

    /* scanf() reads input from the user.
       &age means "store the result at the memory address of age".
       The & is the "address-of" operator - we'll revisit this with pointers. */
  
    scanf("%d", &age);

    /* if / else if / else - only one branch runs */
    if (age < 0) {
        printf("That's not a valid age.\n");
    } else if (age < 13) {
        printf("You are a child.\n");
    } else if (age < 18) {
        printf("You are a teenager.\n");
    } else if (age < 65) {
        printf("You are an adult.\n");
    } else {
        printf("You are a senior.\n");
    }

    /* Comparison operators: == != < > <= >= */
    /* WARNING: = is assignment, == is comparison. */

    return 0;
}
