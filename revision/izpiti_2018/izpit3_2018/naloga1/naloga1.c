#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {

    int n;
    scanf("%d ", &n);
    
    char* niz = calloc(n, sizeof(int));
    
    for (int i = 0; i < n; i++) {
        niz[i] = getchar();
    }
    
    for (int i = 1; i < n - 1; i++) {
        if(niz[i] == '_' && niz[i + 1] >= 97 && niz[i + 1] <= 122) {
            niz[i + 1] -= 32;
        }
    }
    
    if (niz[0] >= 97 && niz[0] <= 122) {
       niz[0] -= 32; 
    }
    
    for (int i = 0; i < n; i++) {
        printf("%c", niz[i]);
    }
}

