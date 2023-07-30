
/*
 * Prevajanje in zagon testnega programa testXY.c:
 *
 * gcc -D=test testXY.c naloga3.c
 * ./a.out
 *
 * Zagon testne skripte ("sele potem, ko ste prepri"cani, da program deluje!):
 *
 * export name=naloga3
 * make test
 *
 * Testni primeri:
 * 02, 03: h = 1
 * 04, 05, 06: preverjajo samo vsoto
 * 01, 07--10: splo"sni
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga3.h"

// po potrebi dopolnite ...

Vozlisce* diagonala(Vozlisce* start, int* vsota) {
    
    
    Vozlisce* a = start;
    Vozlisce* b = start;
    
    int w = 0;
    while (a != NULL) {
        w++;
        a = a-> desno;
    }
    
    int h = 0;
    while (b != NULL) {
        h++;
        b = b -> dol;
    }
    
    int* vrednosti = (h > w) ? malloc(w*sizeof(int)) : malloc(h*sizeof(int));
    int dolzina = (h > w) ? w : h;
    
    Vozlisce* premikDol = start;
    for (int i = 0; i < dolzina; i++) {
        Vozlisce* premikDesno = premikDol;
        
        for (int j = 0; j < w - 1; j++) {
            premikDesno = premikDesno->desno;
        }
        // Dodamo vrenost
        vrednosti[i] = premikDesno->vsebina;
        // Premaknemo se dol
        premikDol = premikDol->dol; 
        
        if (premikDol == NULL) {
            break;
        }
        
        // Premikali se bomo eno manj desno
        w = w - 1;
        if (w == 0) { // Smo konec
            break;
        }
    }
    
    Vozlisce* trenutno = malloc(sizeof(Vozlisce));
    Vozlisce* out = trenutno;
    int sum = 0;
    for (int i = 0; i < dolzina; i++) {
        sum += vrednosti[i];
        Vozlisce* naslednje = malloc(sizeof(Vozlisce));
        
        trenutno->vsebina = vrednosti[i];
        
        
        if (i != dolzina-1) {
            trenutno->desno = naslednje;
        } else {
            break;
        }
        trenutno = trenutno->desno;
    }
    
    *vsota = sum;
    return out;
}
        

//=============================================================================

#ifndef test

int main() {
    // "Ce "zelite funkcijo <diagonala> testirati brez testnih primerov,
    // dopolnite to funkcijo in prevedite datoteko na obi"cajen na"cin
    // (gcc naloga3.c).
    return 0;
}

#endif
