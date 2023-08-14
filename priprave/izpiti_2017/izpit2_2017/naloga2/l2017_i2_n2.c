#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include <math.h>

int poww(int a, int b) {

    if (b == 0) {
        return 1;
    }
    
    if (b == 1) {
        return a;
    }
    
    int result = 1;
    for (int i = 0; i < b; i++) {
        result *= a;
    }
    return result;
}

int main() {

    int** mesh = calloc(8, sizeof(int*));
    for (int i = 0; i < 8; i++) {
        mesh[i] = calloc(8, sizeof(int));
    }
    
    int n;
    scanf("%d", &n);
    
    int* moves = malloc(n*sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &moves[i]);
    }
    
    int x = 7;
    int y = 7;
    
    mesh[x][y] = 1;
    
    for (int i = 0; i < n; i++) {
    
        int move = moves[i];
        
        if (move == 0) {
            if (y - 1 >= 0) { // Pogledam ce se lahko premaknem levo
                y -= 1;
            }
        }
        
        if (move == 1) {
            if (x - 1 >= 0) { // Pogledam ce se lahko premaknem gor
                x -= 1;
            }
        
        }
        
        if (move == 2) {
            if (y + 1 < 8) { // Pogledam ce se lahko premaknem dol
                y += 1;
            }
        }
        
        if (move == 3) {
            if (x + 1 < 8) { // Pogledam ce se lahko premaknem levo
                x += 1;
            }
        }
        
        mesh[x][y] = 1;   
    }
    /*
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            printf("%d ", mesh[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    */
    
    long long sum = 0;
    int potenca = 0;
    for (int i = 7; i >= 0; i--) {
        for (int j = 7; j >= 0; j--) {
            if (mesh[i][j] == 1) {
               double result = pow(2.0, (double)potenca);
               sum += (long long)result;
            }
            potenca += 1;
        }
    }
    
    printf("%lld\n", sum);
    
               
    
      
}










