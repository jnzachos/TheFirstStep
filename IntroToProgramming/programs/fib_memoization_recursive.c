#include <stdio.h>
#include <string.h>  /* memset */

#define MAX 100

/* MEMOIZATION = recursion + a cache.
   Key insight: if we already computed fib(k), don't recompute it -
   look it up in a table. This turns O(2^n) into O(n). */

long long memo[MAX];  /* memo[i] = fib(i), or -1 if not yet computed */

long long fib_memo(int n) {
    if (n <= 1) return n;

    /* If we've already solved this subproblem, return the stored answer.
       This is the only change from naive recursion. */
    if (memo[n] != -1) return memo[n];

    /* First time we see this n: compute it, store it, then return it. */
    memo[n] = fib_memo(n - 1) + fib_memo(n - 2);
    return memo[n];
}

int main(void) {
    /* Initialize the memo table with -1 ("not computed yet") */
    for (int i = 0; i < MAX; i++) {
      memo[i] = -1; 
    }  /* or memset(memo, -1, sizeof(memo)); instead of the loop*/

    for (int n = 0; n <= 50; n++) {
        printf("fib(%2d) = %lld\n", n, fib_memo(n));
    }

    return 0;
}
