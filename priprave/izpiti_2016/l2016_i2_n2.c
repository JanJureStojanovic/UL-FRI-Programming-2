#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main() {
    int p, q, d;
    scanf("%d %d %d", &p, &q, &d);
    
    int** t = malloc(p*sizeof(int*));
    for (int i = 0; i < p; i++) {
        t[i] = malloc(q*sizeof(int));
    }
    
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            scanf("%d", &t[i][j]);
        }
    }
    
    /*
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }
    */
    
    int trenutna = 0;
    int naslednja = 1;
    int razdalja;
    
    while (d > 0 || trenutna != p*q - 1) {
        for (int i = 0; i < p; i++) {
            for (int j = 0; j < q; j++) {
                // Najdemo a
                if (t[i][j] == trenutna) {
                    for (int k = 0; k < p; k++) {
                        for (int l = 0; l < q; l++) {
                            // Najdemo b
                            if (t[k][l] == naslednja) {
                                // Izracunamo razdaljo med a in b
                                razdalja = abs(i - k) + abs(j - l);
                            }
                        }
                    }
                }
            }
        }
        d = d - razdalja;
    }
    
    printf("%d\n", trenutna);
}
