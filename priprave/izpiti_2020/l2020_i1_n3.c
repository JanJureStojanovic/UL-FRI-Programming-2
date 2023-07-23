#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Funkcija namenjena korektnem izpisu podmnozie
void izpisPodmn(int podmn[], int n) {
	printf("{");
	// Prvi element, ki ga izpisemo tretiramo drugace kot ostale
	bool prvi = true;
	for (int i = 0; i < n; i++) {
		// Izpisemo elemente, ki niso enaki 0
		if (podmn[i] != 0) { 
			if (prvi == true) { 
				printf("%d", podmn[i]);
				prvi = false;
			} else {
				printf(", %d", podmn[i]);
			}
		}
		
	}
	printf("}");
}

// Funkcija, ki sestavi vse mozne podmnozice
void podmnozice(int* nums, int* podmn, int n, int m) {

	// Ce je m == n, smo prisli do konca tabele nums in smo zakljucili 
	if (m == n) {
		// Izpisemo podmnozico, ki je prisla do konca in zakljucimo funkcijo
		izpisPodmn(podmn, n);
		// Gremo se v new line
		printf("\n");
		return;
	}

	// Inicializiramo novo tabelo, za podmnozico, v katero kopiramo podmnozico podmn
	// Nato pa se dodamo element
	int* dodanElTab = calloc(n, sizeof(int));
	for (int i = 0; i < n; i++) {
		dodanElTab[i] = podmn[i];
	}

	// Dodamo m-ti element
	dodanElTab[m] = nums[m];

	// Nadaljujemo z isto podmnozico -> nismo dodali elementa
	podmnozice(nums, podmn, n, m + 1);
	//Nadaljujemo z novo podmnozico, v katero smo dodali element
	podmnozice(nums, dodanElTab, n, m + 1);

	//return;
}

int main() {

	// Stevilo elementov array-a
	int n;
	scanf("%d", &n);

	// Array more biti pointer, ker ga kasneje uporabimo v funkciji
	int* nums = malloc(n*sizeof(int));

	for (int i = 0; i < n; i++) {
		scanf("%d", &nums[i]);
	}
	
	// Uvedemo se eno tabelo velikosti n, ki bo hranila vse mozne podmnozice
	int* podmn = calloc(n, sizeof(int));

	// Izvedemo izpis
	podmnozice(nums, podmn, n, 0);
}
