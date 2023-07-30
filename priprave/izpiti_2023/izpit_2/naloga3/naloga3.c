
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
    
    // Vozlisca namenjena stetju sirine in visine
    Vozlisce* a = start;
    Vozlisce* b = start;
    
    // Prestejemo visino
    int w = 0;
    while (a != NULL) {
        w++;
        a = a-> desno;
    }
    
    // Prestejemo dolzino
    int h = 0;
    while (b != NULL) {
        h++;
        b = b -> dol;
    }
    
    // Naredimo tabelo, ki bo hranila nase vrednosti in shranimo njeno dolzino
    int* vrednosti = (h > w) ? malloc(w*sizeof(int)) : malloc(h*sizeof(int));
    int dolzina = (h > w) ? w : h;
    
    // Najdemo vrenosti -> dva for loop-a, stalno preverjamo njuno legitimnost
    Vozlisce* premikDol = start; // Vozlisce namenjeno premiku dol
    for (int i = 0; i < dolzina; i++) {
        
        // Vozlisce namenjeno premikanju desno, da dobimo diagonalo
        Vozlisce* premikDesno = premikDol;
        
        for (int j = 0; j < w - 1; j++) {
            premikDesno = premikDesno->desno; // Premiki desno do vrednosti
        }
        // Dodamo vrenost
        vrednosti[i] = premikDesno->vsebina;
        // Premaknemo se dol
        premikDol = premikDol->dol; 
        // Ce ne moramo vec dol, smo koncali (imamo vse vrednosti)
        if (premikDol == NULL) {
            break;
        }
        
        // Premikali se bomo eno manj desno
        w = w - 1;
        if (w == 0) { // Ce ne moramo vec levo (po diagonali) smo koncali -> imamo vse vrednosti
            break;
        }
    }
    
    Vozlisce* trenutno = malloc(sizeof(Vozlisce));
    Vozlisce* out = trenutno; // Pointer na nas nov povezan seznam vozlisc
    int sum = 0; // Sum counter
    // Izdelava nasega povezanega seznama
    for (int i = 0; i < dolzina; i++) {
        sum += vrednosti[i];
        Vozlisce* naslednje = malloc(sizeof(Vozlisce));
        
        trenutno->vsebina = vrednosti[i];
        
        // Na koncu ne dodamo pointerja naprej, mora ostati null, zato ni premika
        if (i != dolzina-1) {
            trenutno->desno = naslednje;
        } else {
            break; // Ne dodamo pointerja -> smo zakljucili
        }
        trenutno = trenutno->desno;
    }
    
    *vsota = sum; // Nastavimo da pointer vsota kaze na presteto vsoto
    return out; // Return value je pointer na nas nov povzean seznam vozlisc
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
