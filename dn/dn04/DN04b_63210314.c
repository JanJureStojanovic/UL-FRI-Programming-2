#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main() {

    // n in m paramtra
    
    int n, m; 
    scanf("%d %d\n", &n, &m);
    
    // array of n integers
    
    int* tabela = (int*)malloc(n*sizeof(int));
    int a;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        tabela[i] = a;
    }
    
    
    int x = tabela[0];
    int st = 0; // result counter
    int i = 0; // index for our while loop
    
    
    while (x < m/2) {
        x = tabela[i];
        for (int j = i + 1; j < n; j++) {
            if (tabela[i] + tabela[j] == m) {
                st++;
            }
            if (tabela[i] + tabela[j] > m) {
                break;
            }
        }
        i++;
    }
    
    printf("%d\n", st);  
    free(tabela);
}

