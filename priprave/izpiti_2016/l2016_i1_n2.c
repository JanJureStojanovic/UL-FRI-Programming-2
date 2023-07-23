#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main() {

	// Preberemo stevilo kvadratov
	int n;
	scanf("%d", &n);

	// Ustvarimo nas kordinatni sistem z calloc (da imamo povsod 0)
	int** kordinatni = calloc(201, sizeof(int*));
	for (int i = 0; i < 201; i++) {
		kordinatni[i] = calloc(201, sizeof(int));
	}

	// Specifikacije kvadratov
	int x;
	int y;
	int l;

	// Zapisemo vsak kvadrat v nas kordinatni sistem (n-kratna iteracija)
	for (int i = 0; i < n; i++) {

		// Preberemo podatke o kvadratu
		scanf("%d %d %d", &x, &y, &l);

		// Namesto -100 do 100, imamo od 0 do 200, zato +100
		x += 100;
		y += 100;

		// Pristevamo koliko kvadratov je pokrilo doloceno kordinato
		for (int j = 0; j < l; j++) {
			for (int k = 0; k < l; k++) {
				kordinatni[x + j][y + k] += 1;
			}
		}
	}

	// Prestejemo prekrivanja (to delamo do n)
	for (int st = 1; st <= n; st++) { 
		int izhod = 0;
		for (int j = 0; j < 201; j++) {
			for (int k = 0; k < 201; k++) {
				if (kordinatni[j][k] == st) {
					izhod++;
				}
			}
		}
		// Sproti izpisujemo 
		printf("%d\n", izhod);
	}
}