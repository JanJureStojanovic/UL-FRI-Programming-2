/*
 * Va"sa re"sitev druge naloge --- datoteko dopolnite in jo oddajte na spletno u"cilnico!
 *
 * Your solution to task 2 --- complete the file and submit it to U"cilnica!
 *
 * V naslednjo vrstico vpi"site va"so vpisno "stevilko / Enter your student ID number in the next line:
 *
 */

#include "naloga2.h"

Vozlisce* vstaviUrejeno(Vozlisce* zacetek, int element) {
    
    if (zacetek == NULL) {
        Vozlisce* novo = malloc(1*sizeof(Vozlisce));
        novo->podatek = element;
        return novo;
    }
    
    if (zacetek->n == NULL) {
        if (element < zacetek->podatek) {
            Vozlisce* novo = malloc(1*sizeof(Vozlisce));
            novo->podatek = element;
            novo->n = zacetek;
            return novo;
        } else {
            Vozlisce* novo = malloc(1*sizeof(Vozlisce));
            novo->podatek = element;
            zacetek->n = novo;
            return zacetek;
        }
    }
    
    // Naredimo novo vozlsice, ki ga bomo vstavili v seznam
    Vozlisce* novo = malloc(1*sizeof(Vozlisce));
    novo->podatek = element;
    
    Vozlisce* i = zacetek;
    Vozlisce* j = zacetek;
    Vozlisce* k = zacetek;
    
    Vozlisce* prejsnje = zacetek;
    
    while(i != NULL) {
        if (element < i->podatek) {
            novo->n = i;
            prejsnje->n = novo;
            break;
        } else {
            prejsnje = i;
            i = i->n;
        }
        
        if (i == NULL) {
            prejsnje->n = novo;
        }
        
    }

    while(j != NULL) {
        j->nn = NULL;
        j = j->n;
    } 
    
    while(k->n != NULL) {
        k->nn = k->n->n;
        k = k->n;
    }   
    
    
    return zacetek;
    
    
}

int main() {
    // po "zelji dodajte kodo za ro"cno testiranje ...
    // add manual testing code if desired ...
    return 0;
}
