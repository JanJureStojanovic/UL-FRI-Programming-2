#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void izpis(int* nums, int n) {
    printf("{");
    for (int i = 0; i < n; i++) {
        if (nums[i] != 0) {
            printf("%d", nums[i]);
            if (i != n - 1) {
                printf(", ");
            }
        }
        
    }
    printf("}\n");
}

void podmnozice(int* mnozica, int sumMn, int* podmnozica, int sumPodmn, int i, int n) {
    
    if (i == n) {
        return;
    }
    
    if (sumPodmn > sumMn) {
        return;
    }
    
    if (sumPodmn == sumMn) {
        izpis(podmnozica, n);
        return;
    }
    
    int* novaPodmnozica = calloc(n, sizeof(int));
    for (int j = 0; j < n; j++) {
        novaPodmnozica[j] = podmnozica[j];
    }
    
    novaPodmnozica[i] = mnozica[i];
    
    // Vzmamemo element v pdomnozico
    podmnozice(mnozica, sumMn - mnozica[i], novaPodmnozica, sumPodmn + mnozica[i], i + 1, n);
    
    // Ne vzamemo elementa v podmnozico
    podmnozice(mnozica, sumMn, podmnozica, sumPodmn, i + 1, n);
}

int main() {

	// Dobimo st. elementov
	int n;
	scanf("%d", &n);

	// Skupna vsota elementov
	int sum = 0;

	// Mnozica z n-monogo elementi, zraven sestejemo skupno vsoto elementov
	int* array = calloc(n, sizeof(int));
	for (int i = 0; i < n; i++) {
		scanf("%d", &array[i]);
		sum += array[i];
	}
	int* podmn = calloc(n, sizeof(int));
	
	podmnozice(array, sum, podmn, 0, 0, n);
}








