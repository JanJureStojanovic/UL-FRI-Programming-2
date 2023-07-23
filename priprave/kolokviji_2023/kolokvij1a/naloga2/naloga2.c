
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
 * Javni testni primeri (po te"zavnosti):
 * -- 02, 03, 04: en sam vhodni niz;
 * -- 05, 06, 07: vsi vhodni nizi so enako dolgi;
 * -- 01, 08, 09, 10: splo"sni primeri.
 *
 * Javni testni primeri (po na"cinu priprave):
 * -- 01: primer iz besedila;
 * -- 01, 02, 05: ro"cno ustvarjeni;
 * -- ostali: samodejno generirani.
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// po potrebi dopolnite ...

//=============================================================================

char** poStolpcih(char** nizi, int stVhodnih, int* stIzhodnih) {
    
    // Najdemo dolzino najdaljsega niza
    int maxLen = -1;
    for (int i = 0; i < stVhodnih; i++) {
        int len = strlen(nizi[i]);
        if (len > maxLen) {
            maxLen = len;
        }
    }

    // St. izhodnih datotek je nekao najdaljsemu nizu
    *stIzhodnih = maxLen;

    // Ustvarimo izhodno tabelo nizov
    // Najprej stevilo novih nizov, ki je enaka dolzini najdaljsega niza in tabele nizi
    char** tabela = calloc(maxLen + 1, sizeof(char*));
    // Nato pa se max dolzina novih nizov, ki je enaka stevilu vhodnih datotek + 1 (saj mora biti na koncu '\0')
    for (int i = 0; i < maxLen + 1; i++) {
        tabela[i] = calloc(stVhodnih + 1, sizeof(char));
    }

    // Premikamo se po vseh besedah
    for (int i = 0; i < maxLen + 1; i++) {
        // Indeks
        int counter = 0;
        // Premik po starih nizih
        for (int j = 0; j < stVhodnih; j++) {
            if (strlen(nizi[j]) > i) {
                tabela[i][counter] = nizi[j][i];
                counter++;
            }
        }
    }

    return tabela;
}

//=============================================================================

#ifndef test

int main() {
    // "Ce "zelite funkcijo poStolpcih testirati brez testnih primerov,
    // dopolnite to funkcijo in prevedite datoteko na obi"cajen na"cin
    // (gcc naloga2.c).
    return 0;
}

#endif
