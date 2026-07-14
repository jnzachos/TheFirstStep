#include <stdio.h>

/* Fibonacci: F(0)=0, F(1)=1, F(n) = F(n-1) + F(n-2)
   This is the "natural" recursive definition — clean and readable,
   but catastrophically slow for large n. */

long long fib_recursive(int n) {
    /* Base cases: stop the recursion */
    if (n == 0) return 0;
    if (n == 1) return 1;

    /* Recursive case: two sub-calls per call.
       The call tree is a binary tree of depth n.
       fib(5) calls fib(4) and fib(3).
       fib(4) calls fib(3) and fib(2).
       fib(3) is computed twice - this duplication grows
       exponentially. */
    return fib_recursive(n - 1) + fib_recursive(n - 2);
}

/* Helper: count how many calls are made (for demonstration) */
long long call_count = 0;

long long fib_counting(int n) {
    call_count++;
    if (n <= 1) return n;
    return fib_counting(n - 1) + fib_counting(n - 2);
}

int main(void) {
    printf("fib(10) = %lld\n", fib_recursive(10));
    printf("fib(20) = %lld\n", fib_recursive(20));

    /* Show how the call count explodes */
    for (int n = 5; n <= 35; n += 5) {
        call_count = 0;
        fib_counting(n);
        printf("fib(%2d): %lld calls\n", n, call_count);
    }
  
    return 0;
}
