
/*
 * Prevajanje in zagon testnega programa testXY.c:
 *
 * gcc -D=test testXY.c naloga2.c
 * ./a.out
 *
 * Zagon testne skripte ("sele potem, ko ste prepri"cani, da program deluje!):
 *
 * export name=naloga2
 * make test
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga2.h"

// po potrebi dopolnite ...

void izlociDuplikate(Vozlisce* zacetek) {
    
    if (zacetek == NULL) {
        return;
    }

    Vozlisce* i = zacetek;
    Vozlisce* j;

    // Gremo po vseh vozliscih
    while(i != NULL)  {

        j = i;

        while(j->naslednje != NULL) {

            if (i->p == j->naslednje->p) {
                j->naslednje = j->naslednje->naslednje;
                continue;
            } 
            j = j->naslednje;
        }
        i = i->naslednje;
    }
    return;
}

//=============================================================================

#ifndef test

int main() {
    // "Ce "zelite funkcijo izlociSkupne testirati brez testnih primerov,
    // dopolnite to funkcijo in prevedite datoteko na obi"cajen na"cin
    // (gcc naloga2.c).
    return 0;
}

#endif
