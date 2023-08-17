
#include <stdio.h>
#include <stdlib.h>

#include "naloga.h"

int vsota(int* zac, int* kon) {
    
    int sum = 0;
    
    for (int* i = zac; i <= kon; i++) {
        sum += *i;
    }
    
    /*
    
    Alternativa: while loop ...
    
    while (zac <= kon) {
        sum += *zac;
        zac++;
    }
    
    */
    
    return sum;
}

void indeksInKazalec(int* t, int* indeks, int** kazalec) {
    
    if (*indeks == -1) {
        *indeks = *kazalec - t; // kamor kaze kazalec kazalec - zacetek tabele ...
    } else {
        *kazalec = t + *indeks; // kazalec kazelec kaze na tabelo, kamor je podano z indeksom
    }
}

void frekvenceCrk(char* niz, int** frekvence) {
    
    int* charTable = (int*)calloc(26, sizeof(int));
    char* p = niz;
    int indeks;
    
    while (*p != '\0') { // '\0' predstavlja NULL
        char znak = *p;
        if ((znak >= 'A' && znak <= 'Z') || (znak >= 'a' && znak <= 'z')) { // preverimo ce gre za crko
			// 'A' in 'a' gre v 0; 'B' in 'b' gre v 1 ...
			// 'A' - 'A' = 0; 'A' - 'B' = 1
			if (znak >= 'A' && znak <= 'Z') {
			    indeks = znak - 'A';
			} else {
			    indeks = znak - 'a';
			}
			charTable[indeks]++;
			
			/*
			
			Altrnativa:
			
			int indeks = (znak >= 'a') ? (znak - 'a') : (znak - 'A');
			charTable[indeks]++;
			
			*/
		}
		p++; // premaknemo se naprej po nizu
    }
    *frekvence = charTable; // nastavimo pointer frekvence na zacetek tabele
}

#ifndef test

int main() {
    
    return 0;
}

#endif
