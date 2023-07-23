#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Fibonacijevo zaporedje

void fib(int a, int b, int konec) {
    printf("%d\n", a);
    if (a > konec) {
        return;
    }
    fib(b, a+b, konec);
}


int main() {

    fib(0, 1, 100000);
}
