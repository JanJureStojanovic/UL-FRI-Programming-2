#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int return_price(int v, int n, int* volume, int* price, int x, int l) {

    // Smo pregledali vse predmete ...
    if (x == n) {
        return 0;
    }

    // Predmet ne vzamemo
    int a = return_price(v, n, volume, price, x + 1, l);

    // Predmet vzamemo
    if (volume[x] <= v && (l - (volume[x] % 2)) >= 0) { // Preverimo ce imamo dovolj prostora v nahrbtniku
        int b = price[x] + return_price(v - volume[x], n, volume, price, x + 1, l - (volume[x] % 2));
        if (b > a) {
            a = b;
        }
    } 

    return a;

}

int main() {

    // Skeniramo parametre
	int v, n, l;
	scanf("%d", &v);   
    scanf("%d", &n);
    scanf("%d", &l);

    // Deklariramo tabele
    int* volume = malloc(sizeof(int) * n);
    int* price = malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++) {
    	scanf("%d", &volume[i]);
    }
    
    for (int i = 0; i < n; i++) {
    	scanf("%d", &price[i]);
    }

    printf("%d\n", return_price(v, n, volume, price, 0, l));
  
    free(volume);
    free(price);
}