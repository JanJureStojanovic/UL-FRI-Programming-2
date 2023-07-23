
/*

Prevajanje in poganjanje skupaj z datoteko test01.c:

gcc -D=test test01.c naloga2.c
./a.out


*/

#include <stdio.h>

#include "naloga2.h"

void zamenjaj(int** a, int** b) {
    int* x = *a;
    int* y = *b;
    
    *a = y;
    *b = x;
}

void uredi(int** a, int** b, int** c) {
    int min;
    int mid;
    int max;
    
    int x = **a;
    int y = **b;
    int z = **c;
    
    if (x >= y && x >= z) {
        max = x;
        if (y >= z) {
            mid = y;
            min = z;
        } else {
            mid = z;
            min = y;
        }
    } else if (y >= x && y >= z) {
        max = y;
        if (x >= z) {
            mid = x;
            min = z;
        } else {
            mid = z;
            min = x;
        }
    } else {
        max = z;
        if (x >= y) {
            mid = x;
            min = y;
        } else {
            mid = y;
            min = x;
        }
    }
    
    **a = min;
    **b = mid;
    **c = max; 
}

#ifndef test

int main() {
    // koda za ro"cno testiranje (po "zelji)
    return 0;
}

#endif
