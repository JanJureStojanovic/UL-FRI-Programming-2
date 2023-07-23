
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

void izpis(int* t, int n) {
    for (int i = 0; i < n; i++) {
        if (i != 0) {
            printf("+");
        }
        printf(t[i]);
    }
}

int sum(int* t, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += t[i];
    }
    return sum;
}

void rek(int n, int a, int b, int* t, int i) {



}

int main() {
    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);

    // Vse mozne velikosti nasih tabel (stevilo elementov)
    for(int i = a; i <= b; i++) {
        // Tabela velikosti od a do b
        int* t = malloc(i*sizeof(int))
        // Dolocimo vrednosti v tabeli: a = 3, n = 5, tabela = [1, 1, 3]
        for (int j = 0; j < i - 1; j++) {
            t[j] = 1;
        }
        t[i - 1] = n - i + 1; 
        rek(t)
    }
}
