#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int return_price(int v, int n, int* volume, int* price, int x) {
	// Konec tabele (zmanjkalo je predmetov) - zakljucimo funkcijo
	if (n == x) {
		return 0;
	}

	/*	Imamo dve opciji: predmet dodamo in predmeta ne dodamo ...
	Na koncu lahko primerjamo kaj se je bolj splacalo, torej ce smo oz. nismo
	dodali predmeta */

	// 1. Predmeta ne dodamo - samo premaknemo x za 1 (gremo na naslednji predmet) 
	// Tako pridemo tudi do najslabse moznosti: cena = 0 in st. predmetov = 0
	int a = return_price(v, n, volume, price, x + 1);

	// 2. Predmet dodamo
	// Nujno moramo preveriti ce imamo prostor za se en predmet
	if (volume[x] <= v) {
		int b = price[x] + return_price(v - volume[x], n, volume, price, x + 1);

		// Zaradi deklaracije b znotraj if-a, je tako lazje, lahko bi tudi zunaj primerjal velikost ...
		if (b > a) {
			a = b;
		}
	} 

	return a;
}

int main() {
	int v, n;
	scanf("%d", &v);
    scanf("%d", &n);

    int* volume = malloc(sizeof(int) * n);
    int* price = malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++) {
    	scanf("%d", &volume[i]);
    }
    
    for (int i = 0; i < n; i++) {
    	scanf("%d", &price[i]);
    }

    printf("%d", return_price(v, n, volume, price, 0));
  
    free(volume);
    free(price);
}
