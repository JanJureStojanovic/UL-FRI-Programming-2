
/*
 * Zagon testne skripte ("sele potem, ko ste prepri"cani, da program deluje!):
 *
 * export name=naloga1
 * make test
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// po potrebi dopolnite ...

int main(int argc, char** argv) {

    // Odpremo vse potrebne datoteke ... 
    FILE *in = fopen(argv[1], "rb");
    FILE* p = fopen(argv[1], "rb");
    FILE *out = fopen(argv[2], "wb");
    
    
    // Counter za velikost tabele
    int n = 0;
    
    // Counter dokler ne pridemo do enf of file ...
    int x;

    // Ugotovimo, koliko je elementov oz. koliko bo dolga nasa tabela
    while((x = fgetc(in)) != EOF) {  
        n++;
    }
    
    // Ustvarimo tabelo potrebne dolzine
    int* t = malloc(n*sizeof(int));

    // Scanner intov za vhodno datoteko
    int y;

    // Indeks za pisanje elementov v naso tabelo
    int i = 0;

    // Prepisemo elemente vhodne datoteke v naso tabelo
    while((y = fgetc(p)) != EOF) {
        t[i] = y;
        i++;
    }

    // Preverimo, ce imamo iskano zaporedje elementov
    for (int i = 0; i < n; i++) {
        // Ce imamo nase zaporedje elementov, vpisemo samo drugega
        if (t[i] == 27 && t[i+1] == 201) {
            fputc(t[i + 1], out);
            // In se pomaknemo se za eno mesto naprej (zato da drugega ne vpisemo dvakrat)
            i++;
        } else {
            // Ce ne gre za zaporedje elementov vpisemo le prvega
            // (Drugega bomo takoj za prvim, ce slucajno ne bo slo za iskano zaporedje)
            fputc(t[i], out);
        }
    }

    // Zapremo vse datoteke
    fclose(in);
    fclose(p);
    fclose(out);

    return 0;
}
