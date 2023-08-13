#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void print(int* num1, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d", num1[i]);
    }
    printf("\n");
}

bool prevecMinus(int* manjse, int* vecje, int n) {
    for (int i = 0; i < n; i++) {
        if (manjse[i] > vecje[i]) { // Nasli smo kje smo z manjsim vecji 
            return true;
        }
    }
    return false;
}

void izpis(int* manjse, int* vecje, int i, int n) {
    
    if (i == n) {
        print(vecje, n);
        return;
    }
    
    if (prevecMinus(manjse, vecje, n) == true) {
        return;
    } 
    
    int* novoVecje = malloc(n*sizeof(int));
    
    for (int l = 0; l < n; l++) {
        novoVecje[l] = vecje[l];
    }
    vecje[i] -= 1;
    
    izpis(manjse, vecje, i, n);
    izpis(manjse, novoVecje, i+1, n);
    
}

int main() {

    int n;
    scanf("%d", &n);
    
    int** pairs = malloc(n*sizeof(int*));
    for (int i = 0; i < n; i++) {
        pairs[i] = malloc(n*sizeof(int));
        scanf("%d %d", &pairs[i][0], &pairs[i][1]);
    }
    
    /*
    for (int i = 0; i < n; i++) {
        printf("%d %d\n", pairs[i][0], pairs[i][1]);
    }
    */
    
    int* num1 = malloc(n*sizeof(int));
    int* num2 = malloc(n*sizeof(int));
    
    for(int i = 0; i < n; i++) {
        num1[i] = pairs[i][0];
        num2[i] = pairs[i][1];
    }

    izpis(num1, num2, 0, n);
}
