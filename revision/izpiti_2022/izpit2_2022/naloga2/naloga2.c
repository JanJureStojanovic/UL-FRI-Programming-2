
/*
Ro"cno poganjanje testnih programov (npr. test01.c):

gcc -Dtest test01.c naloga2.c
./a.out

Samodejno testiranje:

export name=naloga2
make test

Testni primeri:

test01: primer iz besedila
test02..test04: celoten seznam tvori cikel (acikli"cni del je prazen)
test05..test10: splo"sni primeri

.c: testni program (prebere testne podatke, pokli"ce va"so funkcijo in izpi"se rezultat)
.dat: testni podatki
.out: pri"cakovani izhod
.res: izhod va"sega programa (pri poganjanju z make)
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga2.h"

// Lahko dodate "se kak #include, pomo"zno funkcijo ipd.

//============================================================================

int dolzinaCikla(Vozlisce* zacetek) {
    
    Vozlisce* i = zacetek;
    
    for (int a = 0; a < 1000; a++) {
        Vozlisce* k = i;
        k = k->naslednje;
        for (int b = 0; b < 1000; b++) {
            if (k == i) {
                return b + 1;
            }
            k = k->naslednje;
        }
        i = i->naslednje;
    }
    return 0;         
}

//============================================================================

// Vrstici z #ifndef in #endif pustite pri miru!

#ifndef test

int main() {
    // Tole dopolnite, "ce "zelite funkcijo preveriti s svojimi lastnimi
    // testnimi primeri.
    return 0;
}

#endif
