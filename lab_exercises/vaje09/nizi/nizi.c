#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>



void rek(char* znaki, char* niz, int n, int i, int stEl) {
    
    if (stEl == n) {
        printf("%s\n", niz);
        return;
    }
    
    if (i == strlen(znaki)) {
        return;
    }
    
    for (int j = 0; j < strlen(znaki); j++) {
        char* novNiz = calloc(n, sizeof(char));
        for (int k = 0; k < n; k++) {
            novNiz[k] = niz[k];
        }
        novNiz[i] = znaki[j];
        rek(znaki, novNiz, n, i + 1, stEl + 1);
    }
    
    

}

int main() {

	// Dolzina najdaljsega niza
	int n; 

	// Interval nasih char-ov
	char a, b;
	scanf("%d %c %c", &n, &a, &b);
    
    // Naredimo tabelo nasih elementov (crk)
	int array_size = b - a + 1;
	char* znaki = calloc(array_size, sizeof(char));
	
    for (int i = 0; i < array_size; i++) {
        znaki[i] = a + i;  
    }
    
    for (int i = 1; i <= n; i++) {
        char* niz = calloc(i, sizeof(char));
        rek(znaki, niz, i, 0, 0);
    }

	return 0;

}
