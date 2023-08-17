#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

/*

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

*/

int rekk(int n) {
    
    if (n == 0) {
        return 1;
    }
    
    int sum = 0;
    
    for (int i = 0; i < n; i++) {
        sum += rekk(i)*rekk(n-1-i);
    }
    
    return sum;
        

}

int main() {

    int n;
    scanf("%d", &n);
    
    int odg = rekk(n/2);
    
    printf("%d\n", odg);

}
