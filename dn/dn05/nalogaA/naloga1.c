
/*

Prevajanje in poganjanje skupaj z datoteko test01.c:

gcc -D=test test01.c naloga1.c
./a.out

*/

#include <stdio.h>
#include <stdlib.h>

#include "naloga1.h"

int* poisci(int* t, int* dolzina, int** konec) {
    // *dolzina = len. zap.
    // ** konec = kazalec na zadnji element
    // return: kazalec na zacetek
    
    // pointerja na element na katerega kaze pointer t
    int* p = t;
    int* l = t;
    
    int len = 1; // ne stejemo el. na katerega kaze t
    int kon = *t;
    int zac = *t;
    
    // iskanje zacetka
    while (zac != 0) {
        l--;
        zac = *l;
        len++;
    }
    
    // iskanje konca
    while (kon != 0) {
        p++;
        kon = *p;
        len++;
    }
    
    // odstejemo 2, ker dvakrat stejemo se 0 ...
    len -= 2;
    
    // nastavimo pointerje na pravo vrednost/naslov
    *dolzina = len;
    *konec = p - 1;
    
    // vrnemo pointer na prvi element zaporedja
    return l + 1; 
}

#ifndef test

int main() {
    return 0;
}

#endif
