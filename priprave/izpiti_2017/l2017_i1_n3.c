#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void print(int* num1, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d", num1[i]);
    }
    printf("\n");
}

bool presegamo(int* num1, int* num2, int n) {
    for (int i = 0; i < n; i++) {
        if (num1[i] > num2[i]) {
            return true;
        }
    }
    return false;
}

void izpis(int* num1, int*num2, int i, int n) {
    if (i == n) {
        print(num1, n);
        return;
    }
    if (presegamo(num1, num2, n) == true) {
        return;
    } 
    
    
    
    int* newNum1 = malloc(n*sizeof(int));
    
    for (int l = 0; l < n; l++) {
        newNum1[l] = num1[l];
    }
    num1[i] += 1;
    
    izpis(num1, num2, i, n);
    izpis(newNum1, num2, i+1, n);
    
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
