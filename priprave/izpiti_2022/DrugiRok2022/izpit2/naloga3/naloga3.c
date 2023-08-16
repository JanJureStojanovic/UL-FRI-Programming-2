
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

int** narediVzorec(int** trenutnoPolje, int i, int tv, int n) {

    if (i == n) {
        return trenutnoPolje;
    }
    
    if (n < 1) {
        return NULL;
    }
    
    // Dolocimo sirino in visino polja
    int x = tv*2;
    
    // Alociramo prostor
    int** novaTabela = calloc(x, sizeof(int*));
    for (int j = 0; j < x; j++) {
        novaTabela[j] = calloc(x, sizeof(int));
    }
    
    for (int k = 0; k < tv; k++) {
        for (int l = 0; l < tv; l++) {
            novaTabela[k][l] =  trenutnoPolje[k%tv][l%tv];
        }
    }
    for (int k = 0; k < tv; k++) {
        for (int l = tv; l < x; l++) {
            novaTabela[k][l] =  trenutnoPolje[k%tv][l%tv];
        }
    }
    for (int k = tv; k < x; k++) {
        for (int l = tv; l < x; l++) {
            novaTabela[k][l] = trenutnoPolje[k%tv][l%tv];
        }
    }
    
    int** ret = narediVzorec(novaTabela, i + 1, x, n);
    
    return ret;
}

int main() {
    
    int n, a, b, c, d; // Po visini gremo od a -> c, po sirini pa b -> d ... pravokotnik
    scanf("%d %d %d %d %d", &n, &a, &b, &c, &d);
    
    if (n == 0) {
        printf("1\n");
        printf("*\n");
    } else {
    
        // Naredimo tabelo za n == 1;
        int** trenutnoPolje = calloc(2, sizeof(int*));
        for (int j = 0; j < 2; j++) {
            trenutnoPolje[j] = calloc(2, sizeof(int));
        }
        trenutnoPolje[0][0] = 1;
        trenutnoPolje[0][1] = 1;
        trenutnoPolje[1][1] = 1;
        
        int** vzorec = narediVzorec(trenutnoPolje, 1, 2, n);
        
        printf("%d\n", (int)pow(3, n));
        
        for (int i = a; i < a + c; i++) {
            for (int j = b; j < b + d; j++) {
                if (vzorec[i][j] == 1) {
                    printf("*");
                } else {
                    printf("-");
                }
                
            }
            printf("\n");
        }    
    }
}







