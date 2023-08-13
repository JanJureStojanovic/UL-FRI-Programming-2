#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int rek(int n, int trenutnaVisina) {

    if (trenutnaVisina > n) { // Smo previsoko, da bi se pravocasno vrnili
        return 0;
    }
    
    if (trenutnaVisina < 0 || n < 0) { // Smo pod zacetno nadmorsko visino ali pa smo sli predalec
        return 0;
    }
    
    if (n == 0 && trenutnaVisina == 0) { // Smo na koncu in na nadmorski visini 0
        return 1;
    }
    
    int a = rek(n - 1, trenutnaVisina + 1);
    int b = rek(n - 1, trenutnaVisina - 1);
    
    return a + b;

}

int main() {

    int n;
    scanf("%d", &n);
    
    int odg = rek(n, 0);
    
    printf("%d\n", odg);

}
