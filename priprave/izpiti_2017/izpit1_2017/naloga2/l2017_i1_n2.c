#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {

    int n, k, t;
    scanf("%d %d %d", &n, &k, &t);
    
    int** tabela = calloc(n, sizeof(int*));
    for (int i = 0; i < n; i++) {
        tabela[i] = calloc(k, sizeof(int));
    }
    
    int st =  1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            tabela[i][j] = st;
            st++;
        }
    }
    
    int* nums = calloc(t, sizeof(int));
    for (int i = 0; i < t; i++) {
        scanf("%d", &nums[i]);
        nums[i]++;
    }
    
    int x = 0;
    
    for (int i = 0; i < t; i++) {
        // Najdemo stevilo
        for (int j = 0; j < n; j++) {
            for (int l = 0; l < k; l++) {
                if (tabela[j][l] == nums[i]) {
                    tabela[j][l] = 0; // Nastavimo ga na nič
                    
                    for (int a = l; a < k; a++) {
                        if (tabela[j][a] != 0) {
                            x++;
                        }
                    }               
                }              
            }
        }   
    }
    
    printf("%d\n", x);
     
}
