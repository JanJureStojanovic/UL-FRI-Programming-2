
/*
 * Zagon testne skripte ("sele potem, ko ste prepri"cani, da program deluje!):
 *
 * export name=naloga3
 * make test
 *
 * Javni testni primeri:
 *
 * 01: iz besedila naloge
 * 02..04: znaki v nizu so padajo"ce urejeni
 * 01, 05..10: splo"sni
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>



int maxZnak(char* niz) {
	// We return the index of max ASCII char
	int max = 0;
	int ix = 0;
	for (int i = 0; i < strlen(niz); i++) {
		if (niz[i] > max) {
			ix = i;
			max = niz[i];
		}
	}
	return ix;
}

void rek(char* niz, int kjeSmo, int maxDolzina) {

	if (kjeSmo >= maxDolzina) {
		return;
	}
	
	//*****************************************
	for (int j = 0; j < strlen(niz); j++) {
		printf("%c", (niz[j]));
		if (j == strlen(niz)-1) {
			printf("\n");
		}
	}
	
	int max = maxZnak(niz);
	
	for (int j = 0; j < max; j++) {
		printf("%c", (niz[j]));
		if (j == max-1) {
			printf("\n");
		}
	}
	
	if (kjeSmo != maxDolzina - 1) {
		printf("%c\n", niz[max]);
	}
	
	/*
	for (int j = max + 1; j < strlen(niz); j++) {
		printf("%c", (niz[j]));
		if (j == strlen(niz)-1) {
			printf("\n");
		}
	}*/
	//*****************************************
	
	char* noviNiz = calloc(200, sizeof(char));
	strcpy(noviNiz, niz);
	noviNiz = noviNiz + max + 1;
	
	rek(noviNiz, kjeSmo + max + 1, maxDolzina);
}

int main() {
    
    char niz[200];
    scanf("%s", niz);
    
    rek(niz, 0, strlen(niz));
    
    return 0;
}
