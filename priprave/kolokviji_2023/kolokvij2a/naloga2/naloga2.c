
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

Vozlisce* rek(Vozlisce* prejsnji, Vozlisce* trenutni) {
    if (trenutni->naslednje = NULL) {
        trenutni->naslednje = prejsnji;
        return trenutni;
    } 
    rek(trenutni, trenutni->naslednje);

}

void izlociSkupne(Vozlisce* a, Vozlisce* b, Vozlisce** noviA, Vozlisce** noviB) {

    *noviA = rek(a, a->naslednje);

/*
    Vozlisce* i = a;
    // Vozlisce* j = b;

    // Kjer so ujemanja v podatkih, damo podatek na -7
    while(i != NULL) {
        Vozlisce* j = b;
        while(j != NULL) {
            if (i->podatek == j->podatek) {
                i->podatek = -7;
                j->podatek = -7;
            }
            j = j->naslednje;
        }
        i = i->naslednje;
    }

    bool na = false;
    bool nb = false;

    // Premikamo se po vozliscih a, nocemo zaceti na -7
    while(a->podatek == -7 && a->naslednje != NULL) {
        a = a->naslednje;
    }
    Vozlisce* x = a;
    if (x->podatek != -7) {
      Vozlisce* y = x->naslednje;
        while(y != NULL) {
            if (y->podatek == -7) {
                y = y->naslednje;
                x->naslednje = y;
            } else {
                x = x->naslednje;
                y = y->naslednje;
            }
        }  
    } else {
        na = true;
    }
    

    // Premikamo se po vozliscih b, nocemo zaceti na -7
    while(b->podatek == -7 && b->naslednje != NULL) {
        b = b->naslednje;
    }
    x = b;
    if (x->podatek != -7) {
        Vozlisce* y = x->naslednje;
        while(y != NULL) {
            if (y->podatek == -7) {
                y = y->naslednje;
                x->naslednje = y;
            } else {
                x = x->naslednje;
                y = y->naslednje;
            }
        }  
    } else {
        nb = true;
    }

    *noviA = a;
    *noviB = b;

    if (na == true) {
        *noviA = NULL;
    }
    if (nb == true) {
        *noviB = NULL;
    }
*/
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
