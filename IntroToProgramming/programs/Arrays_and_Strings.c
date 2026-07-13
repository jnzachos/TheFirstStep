#include <stdio.h>
#include <string.h>   /* gives us strlen(), strcmp(), strcpy() */

int main(void) {

    /* Array: a fixed-size collection of the same type.
       Indices start at 0, NOT 1. */
    int scores[5] = {90, 85, 78, 92, 88};  /* This array stores 5 integers */

    /* Loop over array using its length.
       Accessing scores[5] is undefined behavior */
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += scores[i];
    }
    printf("Average: %.2f\n", (float)sum / 5);

    /* A string in C is just a char array ending with '\0' (null terminator).
       "hello" is stored as: h e l l o \0  (6 bytes) */
    char greeting[20] = "hello";

    printf("Length: %lu\n", strlen(greeting));   /* doesn't count \0 */

    /* String comparison - NEVER use == for strings in C
       strcmp returns 0 if equal. */
    char other[] = "hello";
    if (strcmp(greeting, other) == 0) {
        printf("The strings are equal.\n");
    }

    /* Modify a char directly - strings are mutable in C */
    greeting[0] = 'H';
    printf("%s\n", greeting);   /* prints: Hello */

    return 0;
}
