
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
.outB: pri"cakovani izhod za 0.6 to"cke (poljubna permutacija vrstic je tudi v redu)
.outC: pri"cakovani izhod za 0.3 to"cke (poljubna permutacija vrstic je tudi v redu)
.res: izhod va"sega programa (pri poganjanju z make)
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

// Lahko dodate "se kak #include, pomo"zno funkcijo ipd.

#define MAX_LEN 100

void komb(char* znaki, int stZnakov, char* niz, int dolzinaNiza, int i, int j) {
    
    if (j == n) { // Nismo vec na seznamu znakov
        return;
    }
    
    if (i == dolzinaNiza) { // Smo napolnili niz, preverimo ce ga lahko izpisemo
        if (nizJeVredu(niz, dolzinaNiza) == true) {
            izpis(niz, dolzinaNiza);
            return;
        }
    }

}


int main(){

    int n;
    scanf("%d", &n);
    
    getchar();
    
    char* znaki = malloc(n*sizeof(char));
    for (int i = 0; i < n; i ++) {
        znaki[i] = getchar();
    }
    
    int len;
    scanf("%d", &len);
    
    char* niz = calloc(len, sizeof(char));
    
    komb(znaki, n, niz, len, 0, 0);
}
