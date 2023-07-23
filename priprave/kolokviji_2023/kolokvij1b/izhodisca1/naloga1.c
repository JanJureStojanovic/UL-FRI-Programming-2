
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// po potrebi dopolnite ...

int main() {
    int n;
    scanf("%d", &n);

    int x[n];
    int y[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &x[i]);
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &y[i]);
    }

    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += (x[i] - y[i])*(x[i] - y[i]);
    }

    printf("%d\n", sum);
}
