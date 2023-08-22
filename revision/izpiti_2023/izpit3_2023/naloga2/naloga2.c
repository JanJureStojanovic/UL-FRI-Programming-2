
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
 *
 * Javni testni primeri:
 *
 * 01..03: n = 3, d = 1
 * 04..06: d = 1
 * 07..10: splo"sni
 * 01, 04, 07: majhni, ro"cno izdelani primeri
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga2.h"

// po potrebi dopolnite ...

int** zmehcaj(int** slika, int n, int m, int d) {
    
    // Nasa nova tabela, ki jo bomo preurejali
    int** out = calloc((n-2*d),sizeof(int*));
    for (int i = 0; i < n - 2*d; i++) {
    	out[i] = calloc((m-2*d), sizeof(int));
    }
    
    for (int i = 0; i < n-2*d; i++) {
    	for (int j = 0; j < m-2*d; j++) {
    	
    		int val = 0;
    		
    		for (int k = i ; k < i + 2*d + 1; k++) {
				for (int l = j ; l < j + 2*d + 1; l++) {
					 val += slika[k][l];
				}
			}
			val = val / (4*d*d + 4*d + 1);
			out[i][j] = val;
    	}
    }	  
    return out;
   
}

#ifndef test

int main() {
    // "Ce "zelite funkcijo <jeDrevo> testirati brez testnih primerov,
    // dopolnite to funkcijo in prevedite datoteko na obi"cajen na"cin
    // (gcc naloga2.c).
    return 0;
}

#endif
