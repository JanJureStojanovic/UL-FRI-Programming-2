
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
 * 04, 05, 06: mesto = 0
 * 01, 07--10: splo"sni
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga3.h"

// po potrebi dopolnite ...

Vozlisce* vstaviStolpec(Vozlisce* start, int mesto, int vsebina){
    
    Vozlisce* i = start;
    
    Vozlisce* leviStolpec;
    
    if (mesto != 0) {
    
        for (int j = 0; j < mesto-1; j++) {
            i = i->desno;
        }
        leviStolpec=i;
        
        // Ce imamo samo eno vrstico
        if (leviStolpec->dol == NULL) {
            Vozlisce* novo = malloc(1*sizeof(Vozlisce));
            novo->vsebina = vsebina;
            novo->desno = leviStolpec->desno;
            leviStolpec->desno = novo;
            novo->dol = NULL;
            return start;
        }  
        
        Vozlisce* trenutno = malloc(1*sizeof(Vozlisce));
        while(leviStolpec != NULL) {
            Vozlisce* spodnje = malloc(1*sizeof(Vozlisce));
            // Nastavimo vrednosti novih vozlisc
            trenutno->vsebina = vsebina;
            vsebina++;
            trenutno->desno = leviStolpec->desno;
            // Popravimo levo vozlisce
            leviStolpec->desno = trenutno;
            
            // Prestavimo se dol na spodnje vozslice na levem stolpcu
            leviStolpec = leviStolpec->dol;
            
            // Nastavimo se pointer dol in se prestavimo dol 
            trenutno->dol = spodnje;
            trenutno = trenutno->dol;
            
        }
        return start;
    }
    
    // Tukej Dela
    if (mesto == 0 ) {
        Vozlisce* j = start;
        Vozlisce* trenutno = malloc(1*sizeof(Vozlisce));
        Vozlisce* out = trenutno;
        while(j != NULL) {
            // Naredimo spodnje vozlisce
            Vozlisce* spodnje = malloc(1*sizeof(Vozlisce));
            // Nastavimo vrednosti novih vozlisc
            trenutno->vsebina = vsebina;
            vsebina++;
            trenutno->desno = j;
            
            // Prestavimo se dol na spodnje vozslice na levem stolpcu
            j = j->dol;
            if (j != NULL) {
                // Nastavimo se pointer dol in se prestavimo dol 
            trenutno->dol = spodnje;
            trenutno = trenutno->dol;
            }
            
        }
        return out;
    }
    return i;
    
    /*        
    KO NADALJUJES NALOGO, PREMISLI KAJ BO Z 'LEVISTOLPEC' CE JE MESTO == 0
    PREMISLI KAKO BI PREVERIL ALI JE MESTO 0, NE DA BI PREMIKAL VSE SKUPAJ
    KDAJ JE TREBA IMETI 'LEVISTOLPEC'
    ZAKAJ TO S 'SPODNJE' NE DELUJE?        
    */
}

//=============================================================================

#ifndef test

int main() {
    // "Ce "zelite funkcijo <vstaviStolpec> testirati brez testnih primerov,
    // dopolnite to funkcijo in prevedite datoteko na obi"cajen na"cin
    // (gcc naloga3.c).
    return 0;
}

#endif
