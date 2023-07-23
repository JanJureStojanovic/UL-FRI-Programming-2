#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// Vsako ime je niz najvec 100 znakov
#define MAX_DOLZINA_IMENA 100

/*

Resitev iz Google Drive-a:

int min(int stDatotek, int* blok) {
	int min = INT_MAX;
	int minIndex;
	
	for (int i = 0; i < stDatotek; i++) {
		if (blok[i] < min && blok[i] != -1) {
			min = blok[i];
			minIndex = i;
		}	
	}
	
	return minIndex;	
}

*/

// Moja resitev

int main () {
	
	// Stevilo datotek, ki jih bomo sprejeli
	int stDatotek;
	scanf("%d", &stDatotek);
	
	// Na mesto tega pointerja bomo hranili ime datotek, ki jih dobimo kot input naloge
	char* imeDatoteke = malloc((MAX_DOLZINA_IMENA + 1) * sizeof(char));
	
	// Vsi vhodi, ki jih prejmemo -> datoteke iz katerih bomo brali
	// Gre za enodimenzionalno tabelo vhodnih datotek
	FILE** vhodi = calloc(stDatotek, sizeof(FILE*));
	
	// Odpremo vse datoteke, in jih damo v tabelo vhodi
	for (int i = 0; i < stDatotek; i++) {
		// scanf("%s", ...) uporabimo za scan-anje stringov do whitespace-a oz. new line-a
		scanf("%s", imeDatoteke);
		vhodi[i] = fopen(imeDatoteke, "r");
	}

	// Pripravimo se izhodno datoteko
	scanf("%s", imeDatoteke);
    FILE* izhodnaDatoteka = fopen(imeDatoteke, "w");
	
	// Array, ki bo hranil zaporedje nasih stevil
	int* array = malloc(1000000*sizeof(int));

	// Ime izhoda, ki ga prav tako odpremo (odpremo z "w", ker bomo v njega pisali)
	scanf("%s", imeDatoteke);
	FILE* izhod = fopen(imeDatoteke, "w");
	
	// Vsa stevila damo v en arra, hranimo j za kasneje
	int j = 0;
	for (int i = 0; i < stDatotek; i++) {
		char stevilo[10];
		int st;
		while(fgets(stevilo, 20, vhodi[i]) != NULL) {
			st = atoi(stevilo);
			array[j] = st;
			j++;
		}
	}

	int temp;
	for (int i = 0; i < j; i++) {
		for (int l = i+1; l < j; l++) {
			if (array[i] > array[l]) {
				temp = array[i];
				array[i] = array[l];
				array[l] = temp;
			}
		}
	}

	int m = 0;
	while(array[m] != 0) {
		fprintf(izhodnaDatoteka, "%d\n", array[m]);
		m++;
	}

}


/*

Resitev iz Google Drive-a:

	// Stevilo blokov v int-ih je enako stevilu datotek, iz katerih beremo
	int* blok = malloc(stDatotek * sizeof(int));
	int stKoncanih = 0;
	
	for (int i = 0; i < stDatotek; i++) {
		int st = fscanf(vhodi[i], "%d", &blok[i]);
		if (st < 1) {
			blok[i] = -1;
			stKoncanih++;
		}
	}
	
	while (stKoncanih < stDatotek) {
		int minimum = min(stDatotek, blok);
		
		fprintf(izhod, "%d\n", blok[minimum]);
		
		if (fscanf(vhodi[minimum], "%d", &blok[minimum]) < 1) {
			blok[minimum] = -1;
			stKoncanih++;
		}	
	}
	
	
	// Zapremo vse datoteke
	for (int i = 0; i < stDatotek; i++) {
		fclose(vhodi[i]);
	}
	
	// Zapremo izhod
	fclose(izhod);
	free(vhodi);
	free(imeDatoteke );
	free(blok);
	
	return 0;
}

*/
