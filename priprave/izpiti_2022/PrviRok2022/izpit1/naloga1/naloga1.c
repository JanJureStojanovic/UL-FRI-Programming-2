
/*
Ro"cno poganjanje testnih programov (npr. test01.c):

gcc -Dtest test01.c naloga1.c
./a.out

Samodejno testiranje:

export name=naloga1
make test

Testni primeri:

test01: primer iz besedila
test02..test08: ro"cno izdelani kratki testi
test09..test11: samodejno izdelani, tip Exxx_Exxx_Exxx_...
test12..test14: samodejno izdelani, vsakemu E-ju sledi "stevilo iz [100, 999]
test15..test17: samodejno izdelani, splo"sni

.c: testni program (prebere testne podatke, pokli"ce va"so funkcijo in izpi"se rezultat)
.dat: testni podatki
.out: pri"cakovani izhod
.res: izhod va"sega programa (pri poganjanju z make)
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

#include "naloga1.h"

// Lahko dodate "se kak #include, pomo"zno funkcijo ipd.

//============================================================================

int sestEj(char* niz) {

    int sum = 0;
    int st;

    int len = strlen(niz);
   
    for (int i = 0; i < len; i++) {
    
        if (niz[i] == 'E') { // Potencialen zactek nasega stevila
        
            if ('0' < niz[i+1] && niz[i+1] <= '9') {
                i++;
                st = niz[i] - '0';
                i++;
                while('0' <= niz[i] && niz[i] <= '9') {
                    st *= 10; // Povecamo
                    st += niz[i] - '0'; // Pristejemo
                    i++; // Premaknemo
                }
                if (niz[i] == '_') {
                    sum += st;
                } 
            }
        }
        st = 0;
    }
    
    return sum;
}

#ifndef test

int main() {
    return 0;
}

#endif
