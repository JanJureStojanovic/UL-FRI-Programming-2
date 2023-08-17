#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// Funkcija ki sesteje stevke stevila
int f(int n) {

	// Return parameter
	int num = 0;

	while (n > 0) {
		num += (n % 10);
		n /= 10;
	}

	return num;
}

int main() {

	// Nasi parametri
	int p, q, k;
	scanf("%d %d %d", &p, &q, &k);

	// Stevilo, ki ga manjsamo
	int st = p * q;

	// While loop, v katerem izvajamo operacijo
	// Ko je st < 10, se sam naprej ponavlja, sicer pa se v k-ti iteraciji racunanje konca
	for (int i = 0; i < k; i++) {
		st = f(st);
	}

	printf("%d\n", st);
}