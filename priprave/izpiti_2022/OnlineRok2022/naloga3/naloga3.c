
/*
Ro"cno testiranje (npr. za primer test01.in):

gcc naloga3.c
./a.out < test01.in

Samodejno testiranje:

export name=naloga3
make test

Testni primeri:

test01: primer iz besedila
test02..test08: "se nekaj dodatnih testov

.in: testni vhod
.outA: pri"cakovani izhod (poljubna permutacija vrstic je tudi v redu)
.outB: pri"cakovani izhod za 0.3 to"cke (poljubna permutacija vrstic je tudi v redu)
.res: izhod va"sega programa (pri poganjanju z make)
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void izpis(char* niz, int n) {
    for (int j = 0; j < n; j++) {
        printf("%c", niz[j]);
    }
    printf("\n");
}

bool okStZnakov(int* t, int x) {
    for (int j = 0; j < x; j++) {
        if (t[j] > 3) {
            return false;
        }
    }
    return true;
}

void okPermutacije(char* znaki, char* niz, int* uporabljeniZnaki, int d, int n, int i) {
// i nam pove kje se nahajamo na nizu (katero crko bomo zapisali na niz dolzine n)
    
    // Smo zapolnili niz, lahko ga izpisemo;
    if (i == n) {
        if (okStZnakov(uporabljeniZnaki, d) == true) {
            izpis(niz, n);
            free(niz);
            free(uporabljeniZnaki);
            return;
        }
    }
    
    if (okStZnakov(uporabljeniZnaki, d) == false) {
        free(niz);
        free(uporabljeniZnaki);
        return;
    }
    
    // Na i-to mesto damo vsak znak in gremo naprej
    for (int l = 0; l < d; l++) {
        // Prekopiramo uporabljene znake
        int* noviUporabljeniZnaki = calloc(d, sizeof(char));
        for (int k = 0; k < d; k++) {
            noviUporabljeniZnaki[k] = uporabljeniZnaki[k];
        }
        
        // Prekopiramo niz
        char* noviNiz = calloc(n, sizeof(char));
        strcpy(noviNiz, niz);
        
        noviNiz[i] = znaki[l];
        noviUporabljeniZnaki[l]++;
        
        okPermutacije(znaki, noviNiz, noviUporabljeniZnaki, d, n, i + 1);
    }
}

int main() {

    int d;
    scanf("%d ", &d);
    
    char* znaki = calloc(d, sizeof(char));
    for (int i = 0; i < d; i++) {
        znaki[i] = getchar();
    }
    
    int n;
    scanf(" %d", &n);
    
    char* niz = calloc(n, sizeof(char));
    int* uporabljeniZnaki = calloc(d, sizeof(int));
    
    okPermutacije(znaki, niz, uporabljeniZnaki, d, n, 0);
  
}
