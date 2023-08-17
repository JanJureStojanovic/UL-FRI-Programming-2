
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// po potrebi dopolnite ...

int main(int argc, char** argv) {

    // Vhodna in izhodna datoteka
    FILE* in = fopen(argv[1], "r");
    FILE* out = fopen(argv[2], "w");

    // Skenirana vrstica in vrstica v katero bomo kopirali preurejeno vrstico
    char* vrstica = calloc(100005, sizeof(char));
    char* novaVrsica = calloc(100005, sizeof(char));

    // Gremo cez vse vrstice
    while(fgets(vrstica, 100001, in) != NULL) {
        // Dolzina stringa
        int n = strlen(vrstica);
        // Ne kopiramo dokler nismo na prvi crki - spustimo vse presledke na zacetku
        bool prvaCrka = false;
        // Indeks za zacetek novaVrstica string-a
        int j = 0;
        for (int i = 0; i <= n; i++) {
            if (vrstica[i] != ' ') {
                prvaCrka = true;
            }
            // Gremo od zacetka (zato imamo j)
            if (prvaCrka == true) {
                novaVrsica[j] = vrstica[i];
                j++;
            }
        }
        // Nov zacetek
        prvaCrka = false;
        // Vpisemo preurejeno vrstico
        fprintf(out, "%s", novaVrsica);
    }

    // Formalnosti
    free(vrstica);
    free(novaVrsica);
    fclose(in);
    fclose(out);
}
