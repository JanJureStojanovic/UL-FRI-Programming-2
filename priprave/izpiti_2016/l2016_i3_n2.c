#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main() {
        
    // Allociramo dovolj prostora za stevili
    int* a = calloc(10000, sizeof(int));
    int* b = calloc(10000, sizeof(int));
        
    // Shranimo stevilo a
    int i = 0;
    char x = getchar();
    while(x != '\n') {
        a[i] = x - '0';
        i++;
        x = getchar();
    }
    i--;
    
    // Shranimo stevilo b
    int j = 0;
    char y = getchar();
    while(y != '\n') {
        b[j] = y - '0';
        j++;
        y = getchar();
    }
    j--;
    
    // Prostor kjer bo shranjena vsota
    int* c = calloc(10000, sizeof(int));
    
    // Allociramo dovolj prostora za stevili
    int* aa = calloc(10000, sizeof(int));
    int* bb = calloc(10000, sizeof(int));
    
    for (int k = 9999; k >= 0; k--) {
        aa[k] = a[i];
        i--;
        if (i < 0) {
            break;
        }
    }
    
    for (int k = 9999; k >= 0; k--) {
        bb[k] = b[j];
        j--;
        if (j < 0) {
            break;
        }
    }
    
    int dodatek = 0;
    for (int i = 9999; i >= 0; i--) {
        c[i] = (aa[i] + bb[i] + dodatek) % 10;
        dodatek = (aa[i] + bb[i] + dodatek)/10;
    }
    
    bool najdenoPrvo = false;
    for (int i = 0; i < 10000; i++) {
        if (c[i] != 0) {
            najdenoPrvo = true;
        }
        if (najdenoPrvo == true) {
            printf("%d", c[i]);
        }
    }
    printf("\n");
 
    
    
}

