#include <stdio.h>

int main(void) {

    /* === for Loop === 
       Best when you know how many times to repeat.
       Structure: for (init; condition; update) */
  
    printf("=== for loop ===\n");
    for (int i = 0; i < 5; i++) {   /* i++ means i = i + 1 */
        printf("  i = %d\n", i); 
    }

    /* === while loop ===
       Best when you repeat until a condition changes.
       Checks condition BEFORE each iteration. */
  
    printf("=== while loop ===\n");
    int n = 1;
    while (n <= 16) {
        printf("  %d\n", n);
        n *= 2;   /* n *= 2 means n = n * 2 */
    }

    /* === do-while loop ===
       Like while, but runs the body AT LEAST ONCE,
       then checks the condition. */
    printf("=== do-while loop ===\n");
    int x = 100;
    do {
        printf("  x = %d\n", x);
        x -= 30;
    } while (x > 0);

    return 0;
}
