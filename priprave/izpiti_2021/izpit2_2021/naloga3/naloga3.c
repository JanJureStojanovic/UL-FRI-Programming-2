
/*
Ro"cno testiranje (npr. za primer test01.in):

gcc naloga3.c
./a.out < test01.in

Samodejno testiranje:

export name=naloga3
make test

Testni primeri:

test01: primer iz besedila
test01..test05: primeri z n <= 12
test06..test15: primeri z n > 12

.in: testni vhod
.out: pri"cakovani izhod
.res: izhod va"sega programa (pri poganjanju z make)
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

// Lahko dodate "se kak #include, pomo"zno funkcijo ipd.

int main() {
    
    int n, a, b, c, d; // Po visini gremo od a -> c, po sirini pa b -> d ... pravokotnik
    scanf("%d %d %d %d %d", &n, &a, &b, &c, &d);
    
    int len = 1 << n;
    
    int** vzorec = calloc(len, sizeof(int*));
    for (int i = 0; i < len; i++) {
        vzorec[i] = calloc(len, sizeof(int));
    }
    
    for (int i = 0; i < len; i += 2) {
        
        for (int j = i; j < len; j += 2) {
            vzorec[i][j] = 1;   
            vzorec[i][j + 1] = 1;
            vzorec[i + 1][j + 1] = 1; 
        }
    }
    
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len; j++) {
            printf("%d ", vzorec[i][j]); 
        }
        printf("\n");  
    }    
}







