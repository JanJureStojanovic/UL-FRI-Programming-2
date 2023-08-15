
/*
Ro"cno poganjanje testnih programov (npr. test01.c):

gcc -Dtest test01.c naloga2.c
./a.out

Samodejno testiranje:

export name=naloga2
make test

Testni primeri:

01: primer iz besedila
02..04: ena sama vrstica
05..06: vsaka neprazna vrstica je naslovna
07..10: splo"sni primeri

Datoteke:

test*.c: testni program (prebere testne podatke, pokli"ce va"so funkcijo in izpi"se rezultat)
test*.dat: testni podatki
test*.out: pri"cakovani izhod testnega programa
test*.res: dejanski izhod testnega programa (pri poganjanju z make)
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga2.h"

// Lahko dodate "se kak #include, pomo"zno funkcijo ipd.

//============================================================================

void vstaviH1(Vozlisce* zacetek) {

    Vozlisce* i = zacetek;
    
    while (i != NULL) {
        
        if (i->niz[0] == '\0') {
        
            i = i->naslednje;
        
            if (i->niz[0] != '\0' && (i->naslednje == NULL || i->naslednje->niz[0] == '\0')) {
                char str1[] = "<h1>";
                char* str2 = i->niz;
                char str3[] = "</h1>";
                
                int totalLength = strlen(str1) + strlen(str2) + strlen(str3) + 1; 
                char* combined = (char*)malloc(totalLength);
                
                strcpy(combined, str1); // Copy the first string
                strcat(combined, str2); // Concatenate the second string
                strcat(combined, str3); // Concatenate the third string
            
                i->niz = combined;
            }
        } else {  
            i = i->naslednje;
        }
    }
    
    Vozlisce* j = zacetek;
    
    if (j->niz[0] != '\0') {
        char str1[] = "<h1>";
        char* str2 = j->niz;
        char str3[] = "</h1>";
        
        int totalLength = strlen(str1) + strlen(str2) + strlen(str3) + 1; 
        char* combined = (char*)malloc(totalLength);
        
        strcpy(combined, str1); // Copy the first string
        strcat(combined, str2); // Concatenate the second string
        strcat(combined, str3); // Concatenate the third string
    
        j->niz = combined;
    }
}

//============================================================================

// Vrstici z #ifndef in #endif pustite pri miru!

#ifndef test

int main() {
    // char* word="banana";
    // surround(&word);
    // printf("%s",word);
    // return 0;
}

#endif
