#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int nacini(int n, int k, int i) {
    if (k < 0) { // Dobili smo dvojko in nimamo vec enk
        return 0;
    }
        
    if (i == n) {
        return 1;
    }
    
    int a = nacini(n, k - 1, i + 1); // Damo 2e
    int b = nacini(n, k + 1, i + 1); // Damo 1e
    
    return a + b;
}
int main() {

    int n, k;
    scanf("%d %d", &n, &k);
    
    int rez = nacini(n, k, 0);
    printf("%d\n", rez);
}
