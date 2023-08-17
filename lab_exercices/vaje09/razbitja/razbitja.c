#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void 

int main() {

	// Dobimo st. elementov
	int n;
	scanf("%d", &n);

	// Skupna vsota elementov
	int sum = 0;

	// Mnozica z n-monogo elementi, zraven sestejemo skupno vsoto elementov
	int* array = malloc(n*sizeof(int));
	for (int i = 0; i < n; i++) {
		scanf("%d", &array[i]);
		sum += array[i];
	}




}