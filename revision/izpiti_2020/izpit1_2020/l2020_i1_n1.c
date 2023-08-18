#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) {

	// Naredimo dva pointerja na vhodno datoteko
	// Enega bomo rabili zaradi iskanja dolzine, drugega pa za prepisovanje vrstic
	FILE* vhodnaDatoteka1 = fopen(argv[1], "r");
	FILE* vhodnaDatoteka2 = fopen(argv[1], "r");

	// Parameter len bo drzal dolzino vhodne datoteke
	int len = 0;
	// String vrstica bo sproti hranil vrstice vhodne datoteke
	char vrstica[1024];

	// Dokler nismo na NULL stejemo vrstice
	while(fgets(vrstica, 1023, vhodnaDatoteka1) != NULL) {
		len++;
	}

	// Naredimo tabelo stringov -> copy vhodne datoteke
	char** txt = malloc(len*sizeof(char*));
	for (int i = 0; i < len; i++) {
		// Damo prostora za vrstico dolgo 1024 charov (lahko tudi manj)
		txt[i] = calloc(1024, sizeof(char));
	}

	// V zgorno tabelo kopiramo vse vrstice
	int j = 0;
	while(fgets(vrstica, 1023, vhodnaDatoteka2) != NULL) {
		strcpy(txt[j], vrstica);
		j++;
	}

	// Ker nimamo testov, naredimo naso lastno izhodno datoteko v katero bomo prepisali vhod
	char* izhod = "rez.txt";
	FILE* izhodnaDatoteka = fopen(izhod, "w");

	// Gremo po nasi tabeli od konca proti zacetku (obrnemo vrstni red)
	for (int i = len; i > 0; i--) { 
		// Vrstice pisemo v izhodno datoteko
		fprintf(izhodnaDatoteka, "%s", txt[i - 1]);
	}
		
	// Zapremo vse datoteke ... 
	fclose(izhodnaDatoteka);
	fclose(vhodnaDatoteka1);
	fclose(vhodnaDatoteka2);

	// Free-jamo naso tabelo
	for (int k = 0; k < len; k++) {
		free(txt[k]);
	}

	free(txt);

	// Je to sploh potrebno ?
	return 0;

}
