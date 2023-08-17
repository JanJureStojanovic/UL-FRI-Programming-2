
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// po potrebi dopolnite ...

int main() {
    
    int n;
    scanf("%d", &n);

    int zap[n];
    int vsota = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &zap[i]);
        vsota += zap[i];
    }
    bool p = true;
    for (int i = 0; i < (n/2); i++) {
        if (zap[i] != zap[n-1-i]) {
            p = false;
            break;
        }
    }

    if (p == true) {
        printf("DA\n");
    } else {
        printf("NE\n");
    }

    printf("%d\n", vsota);
}
