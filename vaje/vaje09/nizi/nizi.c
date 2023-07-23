#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void izpis(int n, int x, char* niz) { 

}

void iteracija(int x, int n, int a, int b, char* niz) {

}

int main() {

	// Dolzina najdaljsega niza
	int n; 

	// Interval nasih char-ov
	char a, b;
	scanf("%d %c %c", &n, &a, &b);

	// Array elementov
	char* niz = calloc(n + 1, sizeof(char));

	// Na zadnjem mestu oznacimo konec array-a
	niz[n] = '\0';

	// Klicemo funkcijo - izpis nizov
	iteracija(n, 0, a, b, niz);

	// Konec nasega programa, dodamo return ...
	return 0;

}