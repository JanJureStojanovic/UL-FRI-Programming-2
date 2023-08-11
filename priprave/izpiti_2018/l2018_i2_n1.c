#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {

    int n;
    scanf("%d ", &n);
    
    char* niz = malloc(n*sizeof(char));
    for (int i = 0; i < n; i++) {
        niz[i] = getchar();
    }
    
    /*
    for (int i = 0; i < n; i++) {
        printf("%c", niz[i]);
    }
    printf("\n");
    */
    
    int del = -1;
    
    int prviPlus = 0;
    bool najdenPrviPlus = false;
    
    int zadnjiPlus = 0;
    
    for (int i = 0; i < n; i++) {
        if (niz[i] == '+') {
            del++;
            zadnjiPlus = i;
        }
        if (niz[i] == '+' && najdenPrviPlus == false) {
            prviPlus = i;
            najdenPrviPlus = true;
        }
    }
    
    int sum = 0;
    
    for (int i = prviPlus; i < zadnjiPlus; i++) {
        sum++;

    }
    
    int rez = sum/del;
    printf("%d\n", rez);
}
    
