#include <stdio.h>

/* A function prototype tells the compiler the function exists
   before we define it below main(). */
int add(int a, int b);
int factorial(int n);
void greet(char name[]); /* void = returns nothing */

int main(void) {

    printf("3 + 4 = %d\n", add(3, 4));
    printf("5! = %d\n", factorial(5));
    greet("Alice");

    return 0;
}

/* Function definition.
   Parameters are local copies - changing them inside
   does not affect the caller's variables. */
int add(int a, int b) {
    return a + b; /* sends a value back to the caller */
}

/* Recursion: a function that calls itself.
   Every recursive function needs a BASE CASE to stop. */
int factorial(int n) {
    if (n < 0) return -1; /* negative number was entered */
    if (n <= 1) return 1; /* base case */
    return n * factorial(n - 1); /* recursive case */
}

void greet(char name[]) {
    printf("Hello, %s!\n", name);
    /* no return statement needed for void functions */
}
