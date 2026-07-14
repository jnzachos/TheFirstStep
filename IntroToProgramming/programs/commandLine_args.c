#include <stdio.h>
#include <stdlib.h>  /* atoi(), atof() */

/* argc = argument count - how many arguments (always >= 1)
   argv = argument vector - array of strings (char*) - so argv is a char**

   argv[0] is ALWAYS the program name itself.
   argv[1] is the first argument the user typed, etc.

   Example run:
     ./myprogram hello 42 3.14
     argc = 4
     argv = { "./myprogram", "hello", "42", "3.14" } */

int main(int argc, char *argv[]) {

    printf("total arguments = %d\n", argc);
    printf("program name = %s\n\n", argv[0]);

    /* Loop over every argument the user actually passed
       (skip argv[0] which is the program name) */
    for (int i = 1; i < argc; i++) {
        printf("argv[%d] = \"%s\"\n", i, argv[i]);
    }

    /* argv values are always strings, even if the user typed a number.
       To use them as numbers you must convert them:
         atoi() -> string to int (literally ascii to int)
         atof() -> string to double (literally ascii to floating-point) */
    if (argc >= 4) {
        int a = atoi(argv[2]);
        float b = atof(argv[3]);
        printf("sum = %.2f\n", a + b);
    }

    /* Always guard against missing arguments before accessing argv[i]!
       Accessing argv[argc] or beyond is undefined behavior. */
    if (argc <= 3) {
        printf("\nTip: try running as: ./args hello 42 3.14\n");
    }

    return 0;
}
