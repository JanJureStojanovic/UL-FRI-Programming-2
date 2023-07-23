#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d\n", &n);
    
    int zap[n];
    
    bool permutacija = true;
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &zap[i]);
    }
    
    for (int j = 0; j < n; j++) {
        for (int k = j + 1; k < n; k++) {
            if (zap[j] == zap[k]) {
                permutacija = false;
                break;
            }
        }       
    }
    
    if (permutacija == false) {
        printf("NE\n");
    } else {
        printf("DA\n");
    }
}
