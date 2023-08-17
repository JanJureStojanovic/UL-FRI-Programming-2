
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
 * -- 02, 03: dol"zina vsakega vhodnega niza je enaka ciljnaDolzina;
 * -- 04, 05, 06, 07: dol"zina vsakega vhodnega niza je enaka 1;
 * -- 01, 08, 09, 10: splo"sni primeri.
 *
 * Javni testni primeri (po na"cinu priprave):
 * -- 01: primer iz besedila;
 * -- 01, 02, 04: ro"cno ustvarjeni;
 * -- ostali: samodejno generirani.
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// po potrebi dopolnite ...

//=============================================================================

char** naSredino(char** nizi, int ciljnaDolzina) {
    
    int stNizov = 0;
    int i = 0;
    while (nizi[i] != 0) {
        stNizov++;
        i++;
    }

    // Ustvarimo izhodno tabelo
    char** tabela = calloc(stNizov + 1, sizeof(char*));
    for (int i = 0; i < stNizov; i++) {
        tabela[i] = calloc(ciljnaDolzina, sizeof(char));
    }

    // Najprej povsod nastimamo pikice
    for (int i = 0; i < stNizov; i++) {
        for (int j = 0; j < ciljnaDolzina; j++) {
            tabela[i][j] = '.';
        }
    }

    // Gremo cez vsako besedo posebaj
    for (int i = 0; i < stNizov; i++) { 
        int f = 0;
        for (int k = (ciljnaDolzina - strlen(nizi[i]))/2; k < (ciljnaDolzina - strlen(nizi[i]))/2 + strlen(nizi[i]); k++) {
            tabela[i][k] = nizi[i][f];
            f++;
        }
    }
    return tabela;
}

//=============================================================================

#ifndef test

char* NIZI[] = {
    "Danes",
    "je",
    "kolokvij",
    "pri_P2!",
};

int main() {
    
    char** rezultat = naSredino(NIZI, 9);
    

    for (int i = 0; i < 4; i++) {
        printf("%s\n", rezultat[i]);
        free(rezultat[i]);
    }
    free(rezultat);

    return 0;
}

#endif
