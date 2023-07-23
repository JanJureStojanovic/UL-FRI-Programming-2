#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main() {
    
    // Dimenzije tabele in dolzina
    int p, q, d;
    scanf("%d %d %d", &p, &q, &d);
    
    // Ustvarimo tabelo
    int** t = malloc(p*sizeof(int*));
    for (int i = 0; i < p; i++) {
        t[i] = malloc(q*sizeof(int));
    }
    
    // Shranimo stevilke v tabelo
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
    
    int x1;
    int y1;
    
    int x2;
    int y2;
    
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            if (t[i][j] == 0) {
                x1 = i;
                y1 = j;
            }
        }
    }    
    
    int raz;
    
    int kjerSmo = 0;
    int naslednja = 1;
    
    while (d >= 0 && naslednja <= (p*q - 1)) {
        for (int i = 0; i < p; i++) {
            for (int j = 0; j < q; j++) {
                if (t[i][j] == naslednja) {
                    x2 = i;
                    y2 = j;
                }
            }
        } 
        
        // Razdalja med tockama
        raz = abs(x2 - x1) + abs(y2 - y1);
        // Odstejemo razdaljo od goriva
        d -= raz;
        
        if (d >= 0) {
            kjerSmo += 1;
        }
        
        // Naslednja tocka kamor gremo
        naslednja += 1;
        
        x1 = x2;
        y1 = y2;
    }
    
    printf("%d\n", kjerSmo);
}

