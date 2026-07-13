#include <stdio.h>
#include <stdlib.h>  /* malloc, free, exit */

/* Swap two integers using pointers.
   Without pointers this CANNOT work - we would only be changing the local variables */
void swap(int *a, int *b) {
    int tmp = *a;  /* dereference: read the value at address a */
    *a = *b;  /* write the value of *b to address a */
    *b = tmp;
}

int main(void) {

    /* & = "address of". p stores the memory address of x. */
    int x = 10;
    int *p = &x;

    printf("x = %d\n", x);
    printf("address of x = %p\n", (void*)p);
    printf("value via pointer = %d\n", *p);  /* * = dereference */

    *p = 99;   /* changes x through the pointer */
    printf("x is now %d\n", x);

    /* === swap func demo === */
    int a = 5, b = 20;
    swap(&a, &b);
    printf("After swap: a=%d b=%d\n", a, b);

    /* === dynamic memory allocation ===
       malloc(n) asks the OS for n bytes at runtime.
       Returns a void* (generic pointer) or NULL on failure.
       You MUST free() every malloc() or you will have a memory leak. */
    int n = 4;
    int *arr = malloc(n * sizeof(int));   /* sizeof(int) is usually 4 bytes */
    /* Here we created an array that stores 4 integers */
    if (arr == NULL) {
        fprintf(stderr, "malloc failed\n");
        exit(1);
    }

    /* Pointer arithmetic: arr+i points to the i-th element 
       This means that arr[i] is the same as *(arr+i) */
    for (int i = 0; i < n; i++) {
        arr[i] = i * i;
    }
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    free(arr);  /* ALWAYS free dynamically allocated memory */
    arr = NULL;  /* null the pointer after freeing - not necessary but a good habit */

    return 0;
}
