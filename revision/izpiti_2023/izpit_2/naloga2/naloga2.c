
/*
 * Zagon testne skripte ("sele potem, ko ste prepri"cani, da program deluje!):
 *
 * export name=naloga2
 * make test
 *
 * Testni primeri:
 * 02--06: a = 1, b = n
 * 01, 07--10: splo"sni
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// po potrebi dopolnite ...
void specRek(char* niz, int n) {
	for(int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i != 0) {
				if (j == i) {
					printf("|");
				}
			}
			printf("%c", niz[j]);
		}
		if (i != n-1) {
			printf("\n");
		}
		
	}
	return;

}

void izpis(char* niz, int* enke, int dolzinaNiza) {
	for (int i = 0; i < dolzinaNiza - 1; i++) {
		printf("%c", niz[i]);
		if (enke[i] == 1) {
			printf("|");
		}
	}
	printf("%c", niz[dolzinaNiza-1]);
	return;
}

int stEnk(int* enke, int n) {
	int stEnk = 0;
	for(int i = 0; i < n; i++) {
		if(enke[i] == 1) {
			stEnk++;
		}
	}
	return stEnk;
}

void rek(char* niz, int* enke, int a, int dolzinaNiza, int i) {
	if (i == dolzinaNiza) {
		return;
	}
	
	if (stEnk(enke, dolzinaNiza - 1) == a) {
		izpis(niz, enke, dolzinaNiza);
		printf("\n");
		return;
	}
	

	
	int* enkeX = malloc((dolzinaNiza-1)*sizeof(int));
	
	for(int j = 0; j < dolzinaNiza-1; j++) {
		enkeX[j] = enke[j];
	}
	
	enke[i] = 1;
	
	rek(niz, enke, a, dolzinaNiza, i+1);
	rek(niz, enkeX, a, dolzinaNiza, i+1);
}

int main() {

    char* niz = calloc(15, sizeof(char));
    scanf("%s", niz);
    int n = strlen(niz);
    
    int a, b;
    scanf("%d %d", &a, &b);
    
    for (int i = a; i < b; i++) {
    	int* enke = calloc(n-1, sizeof(int));
    	
    	if (i == 1) {
    		specRek(niz, n);
    		printf("\n");
    	} else {
    		rek(niz, enke, i, n, 0);
	    }
    }
    if (a != 1) {
        int* enke = calloc(n-1, sizeof(int));
        rek(niz, enke, a-1, n, 0);
    }
}
