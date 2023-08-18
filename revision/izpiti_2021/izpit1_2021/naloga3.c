#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

void izpis(char* plusMinus, int* permutacija, int n, int i) {
    
    if (i == n - 1) {
        
        for(int k = 0; k < n - 1; k++) {
            printf("%d%c", permutacija[k], plusMinus[k]);
        }
        printf("%d\n", permutacija[n-1]);
        return;    
    }
    
    char* novPlusMinus = malloc((n-1)*sizeof(char));
    strcpy(novPlusMinus, plusMinus);
    
    novPlusMinus[i] = '-';
    plusMinus[i] = '+';
    
    izpis(plusMinus, permutacija, n, i + 1);
    izpis(novPlusMinus, permutacija, n, i + 1);
}

void permutacije(int* permutacija, int n, int i) {
    
    if (i == n) {
        char* plusMinus = malloc((n-1)*sizeof(char));
        izpis(plusMinus, permutacija, n, 0);
        return;
    }
    
    for (int j = 0; j <= 9; j++) {
        int* novaPerm = malloc(n*sizeof(int));
        for (int l = 0; l < n; l++) {
            novaPerm[l] = permutacija[l];
        }
        novaPerm[i] = j;
        
        permutacije(novaPerm, n, i + 1);
    }
}

int main() {

    int n;
    scanf("%d", &n);
    
    if (n == 0) {
        printf("0\n");
    } else {
    
        int* permutacija = malloc(n*sizeof(int));    
        
        permutacije(permutacija, n, 0);
    }
}
