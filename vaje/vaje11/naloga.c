#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "naloga.h"

int vsotaI(Vozlisce* zacetek) {
    // Tu bomo shranili vsoto po vseh vozliscih
    int vsota = 0;

    // Iteriramo lahko, ce zacetek ni enak NULL (drugace ostane vsota 0)
    if (zacetek != NULL) {
        // Uvedemo pointer, ki ga bomo premikali naprej po vozliscih
        // Uvedemo novega, ker nocemo spreminiti prvotnga
        Vozlisce* i = zacetek;
        while(i != NULL) {
            // Pristejemo vsoto
            vsota += i->podatek;
            // Gremo na naslednje vozlisce
            i = i->naslednje;
        }
    }
    return vsota;
}

int vsotaR(Vozlisce* zacetek) {
    // izhodni pogoj, smo na NULL, torej je konec vozlisc
    if (zacetek == NULL) {
        return 0;
    }

    // Dodamo trenutno vrednost in gremo na naslednje vozlisce (ponavljamo dokler ne kazemo na null)
    return zacetek->podatek + vsotaR(zacetek->naslednje);
}

Vozlisce* vstaviUrejenoI(Vozlisce* zacetek, int element) {
    // Ustvarimo novo vozlisce, ki ga bomo vstavljali nekam znotraj linked lista
    Vozlisce* novo = malloc(sizeof(Vozlisce));
    // Dodamo vrednost podatka
    novo->podatek = element;

    // Novo vozlisce dodamo na zacetek
    if(zacetek == NULL || element <= zacetek->podatek) {
        // novo -> zacetek/NULL
        novo->naslednje = zacetek;
        // zactek se je na novem vozliscu
        zacetek = novo;
        return zacetek;
    }

    // Novo vozlisce dodamo nekam na sredino ali pa na konec linked list-a
    Vozlisce* p = zacetek;
    while(p->naslednje != NULL && p->naslednje->podatek < element) {
        p = p->naslednje;
    }

    // p kaze na vozlisce, ki bo v obogatenem seznamu predhodnik dodanega vozlisca
    // novo postavimo pred naslednje od p
    novo->naslednje = p->naslednje;
    // Za naslednje od p nastavimo novo 
    p->naslednje = novo;
    return zacetek;
}

Vozlisce* vstaviUrejenoR(Vozlisce* zacetek, int element) {
    // Dodajanje v prazen setnam oz. element < vozlisce->podatek
    if(zacetek == NULL || element <= zacetek->podatek) {
        // Naredimo nov objekt oz. novo vozlisce
        Vozlisce* novo = malloc(sizeof(Vozlisce*));
        // Dodamo atribute objekta
        novo->podatek = element;
        novo->naslednje = zacetek;
        return novo;
    }
    
    // Novo vozlisce dodamo nekam na sredino ali pa na konec seznama
    // Premikamo se naprej po vozliscih dokler ne izpolnjujemo pogoja
    Vozlisce* noviRep = vstaviUrejenoR(zacetek->naslednje, element);
    // Zacetni parameter kaze na novi rep seznama (vsi naslednji se ze zaradi rekurzije uredijo sproti)
    zacetek->naslednje = noviRep;
    // Vrnemo pointer na zacetek seznama
    return zacetek;
}

#ifndef test

int main() {
    // koda za ro"cno testiranje (po "zelji)

    return 0;
}

#endif
