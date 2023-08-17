#include <stdio.h>
#include <stdlib.h>

void rek() {

}

int main() {
    
    int m, n;
    scanf("%d %d", &m, &n);
    
    int tabela[m][n];
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d ", &tabela[i][j]);
        }
    }
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", tabela[i][j]);
            printf(" ");
        }
        printf("\n");
    } 
}
