#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "naloga.h"

int steviloZnakov(char* niz, char znak) {
    // popravite / dopolnite ...
	int stPojavitev = 0;
	while (*niz != '\0') {
		if (*niz == znak) {
		stPojavitev++;
		}
	niz++;	
	}
    return stPojavitev;
}

char* kopirajDoZnaka(char* niz, char znak) {
    // popravite / dopolnite ...
	char* kazalec = niz;
	while (*kazalec != znak && *kazalec != '\0') {
		kazalec++;
	}
	char* niz2 = (char*)malloc((kazalec - niz + 1) * sizeof(char));
	int a = 0;
	while (*niz != znak && *niz != '\0') {
		niz2[a] = *niz;
		a++;
		niz++;
	}
	niz2[a] = '\0';
    return niz2;
}

char** razcleni(char* niz, char locilo, int* stOdsekov) {
    // popravite / dopolnite ...
	*stOdsekov = steviloZnakov(niz, locilo) + 1;
	char** niz2 = (char**)malloc((*stOdsekov * sizeof(char*)));
	int a = 0;

	while (*niz != '\0') {
		niz2[a] = kopirajDoZnaka(niz, locilo);
		while (*niz != locilo && *niz != '\0') {
			niz++;
		}
		niz++;
		a++;
		
	}

    return niz2;
}

#ifndef test

int main() {
    // koda za ro"cno testiranje (po "zelji)

    return 0;
}

#endif
