#include <stdio.h>   /* Include the standard I/O library.
                       This gives us printf(). */

/* Every C program must have a main() function.
   It is the entry point, where execution begins.
   It returns an int to tell the OS if it succeeded. */
int main(void) {

    /* printf() prints text to the terminal.
       \n is an escape sequence meaning "newline". */
    printf("Hello, World!\n");

    /* Returning 0 means "success" to the operating system. */
    return 0;
}
