
/*
 * Zagon testne skripte ("sele potem, ko ste prepri"cani, da program deluje!):
 *
 * export name=naloga2
 * make test
 *
 * Testni primeri:
 * 02--06: a = 1, b = n
 * 01, 07--10: splo"sni
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// po potrebi dopolnite ...
void izpis(int* t, int dolzina) {
    for(int i = 0; i < dolzina; i++) {
        if (t[i] < t[i - 1]) {
            return;
        }
    }
    for (int j = 0; j < dolzina; j++) {
        if (j != 0) {
            printf("+");
        }
        printf("%d", t[j]);
    }
    printf("\n");
    return;
}

int vsota(int* t, int dolzina) {
    int sum = 0;
    for (int i = 0; i < dolzina; i++) {
        sum += t[i];
    }
    return sum  ;
}

void rek(int* t, int n, int dolzina, int x) {
    if (vsota(t, dolzina) == n) {
        izpis(t, dolzina);
        return;
    }
    
    if (x == dolzina) {
        return;
    }
    
    int* tt = malloc(dolzina*sizeof(int));
    for (int j = 0; j < dolzina; j++) {
        tt[j] = t[j];
    }
    
    t[x];
    tt[x]++;
    rek(t, n, dolzina, x + 1);
    rek(tt, n, dolzina, x);   
}

int main() {
    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);

    // Vse mozne velikosti nasih tabel (stevilo elementov)
    for(int i = a; i <= b; i++) {
        // Tabela velikosti od a do b
        int* t = malloc(i*sizeof(int));
        
        for (int j = 0; j < i; j++) {
            t[j] = 1;
        }
        
        rek(t, n, i, 0);
        
    }
}
