#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {

    int n, k, t;
    scanf("%d %d %d", &n, &k, &t);
    
    int** tabela = calloc(n, sizeof(int*));
    for (int i = 0; i < k; i++) {
        tabela[i] = calloc(k, sizeof(int));
    }
    
    int st =  1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            tabela[i][j] = st;
            st++;
        }
    }
    
    /*
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            printf("%d ", tabela[i][j]);
        }
        printf("\n");
    }
    */
    
    int* nums = calloc(t, sizeof(int));
    for (int i = 0; i < t; i++) {
        scanf("%d", &nums[i]);
        nums[i] += 1;
    }
    
    int x = 0;
    
    for (int i = 0; i < t; i++) {
    
        int num  = nums[i];
        
        // Najdemo stevilo
        for (int j = 0; j < n; j++) {
            for (int l = 0; l < k; l++) {
                
                if (tabela[j][l] == num) {
                    tabela[j][l] = 0; // Nastavimo ga na nič
                    
                    for (int a = l + 1; a < k; a++) {
                        if (tabela[j][a] != 0 && a < k) {
                            x++;
                        }
                    }                
                }
            }
        }   
    }
    
    printf("%d\n", x);
    
    /*
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            printf("%d ", tabela[i][j]);
        }
        printf("\n");
    }
    */
    
    
}
