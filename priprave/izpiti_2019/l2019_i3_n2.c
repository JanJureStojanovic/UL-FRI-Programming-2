#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main() {

	// Stevilo n doloca koliko char-ov bomo dobili
	int n;
	scanf("%d\n", &n);

	// Tabela za nase char-e
	char* t = calloc(n, sizeof(char));
	// Skeniramo nase chare
	for (int i = 0; i < n; i++) {
		scanf("%c", &t[i]);
	}

	// Dobimo visino (dolzino ze imamo)
	int visina = 0;
	int max = 0;
	for (int i = 0; i < n; i++) {
		if (t[i] == 'G') {
			visina++;
		} else {
			visina--;
		}
		if (visina > max) {
			max = visina;
		}
	}

	printf("%d\n", max);

	char** tabela = calloc(max, sizeof(char*));
	for (int i = 0; i < max; i++) {
		tabela[i] = calloc(n, sizeof(char));
	}

	for (int i = 0; i < max; i++) {
		for (int j = 0; j < n; j++) {
			tabela[i][j] = '.';
		}
	}

	int x = 0;
	int y = n - 1;
	for (int i = 0; i < n; i++) {
		if (t[i] == 'G') { 
			tabela[x][y] = '/';
			y--;
		} else {
			tabela[x][y] = '\\';
		}
		x++;
	}

	for (int i = 0; i < max; i++) {
		for (int j = 0; j < n; j++) {
			printf("%c", tabela[i][j]);
		}
		printf("\n");
	}
}	
