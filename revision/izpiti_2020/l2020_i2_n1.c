#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

//void odstraniDuplikate(FILE* vhod, FILE* izhod)


int main(int argc, char* argv[]) {

	// Vhodna datoteka
	FILE* vhodnaDatoteka = fopen(argv[1], "r");

	// Izhodna datoteka
	FILE* izhodnaDatoteka = fopen("brezDupl.txt", "w");

	// Inicializiramo tabelo charov-ki bodo drzali nas vhod
	char vrstica[1024];

	// Ugotovimo dolzino vrstice
	int n = strlen(fgets(vrstica, 1023, vhodnaDatoteka));

	char prejsnji = '0';
	char trenutni;

	// Prepisemo
	for (int i = 0; i < n; i++) {
		trenutni = vrstica[i];
		if((trenutni >= 'a' && trenutni<='z')||(trenutni >= 'A' && trenutni<='Z')) {
			if (trenutni != prejsnji) {
				fprintf(izhodnaDatoteka, "%c", trenutni);
				prejsnji = trenutni;
			}
		} else {
			fprintf(izhodnaDatoteka, "%c", trenutni);
		}
	}
}