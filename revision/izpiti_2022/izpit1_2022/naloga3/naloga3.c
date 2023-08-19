
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

bool nizJeVredu(char* niz, int dolzinaNiza) {

    bool velikaCrka = false;
    bool malaCrka = false;
    bool stevilo = false;
    
    for (int i = 0; i < dolzinaNiza; i++) {
        if ('A' <= niz[i] && niz[i] <= 'Z') {
            velikaCrka = true;
        }
        if ('a' <= niz[i] && niz[i] <= 'z') {
            malaCrka = true;
        }
        if ('0' <= niz[i] && niz[i] <= '9') {
            stevilo = true;
        }
    } 
    return (stevilo && malaCrka && velikaCrka);   
}

void izpis(char* niz, int dolzinaNiza) {

     for (int i = 0; i < dolzinaNiza; i++) {
        printf("%c", niz[i]);
    }
    printf("\n");
}

void komb(char* znaki, int stZnakov, char* niz, int dolzinaNiza, int i) {

    // Smo napolnili niz, preverimo ce ga lahko izpisemo
    if (i == dolzinaNiza) { 
        if (nizJeVredu(niz, dolzinaNiza) == true) {
            izpis(niz, dolzinaNiza);
            return;
        }
        free(niz);
    }
    
    // Naredimo vse permutacije
    for (int p = 0; p < stZnakov; p++) {
        
        // Nov niz, ga prekopiramo
        char* novNiz = malloc(dolzinaNiza*sizeof(char));
        for (int l = 0; l < dolzinaNiza; l++) {
            novNiz[l] = niz[l];
        }
        
        novNiz[i] = znaki[p];
        
        // Niz zapolnimo z eno izmed crk in se pomaknemo naprej 
        komb(znaki, stZnakov, novNiz, dolzinaNiza, i + 1);
        
        free(novNiz);
    }
}


int main() {
    
    char znaki[50];
    int n, len;
    scanf("%d %s %d", &n, znaki, &len);
    
    char* niz = calloc(len, sizeof(char));

    komb(znaki, n, niz, len, 0);
    
    free(znaki);
    free(niz);
}




