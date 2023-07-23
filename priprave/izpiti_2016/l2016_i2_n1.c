#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    int* stevke = calloc(10, sizeof(int));
       
    int x;
    
    while (a > 0) {
        x = a % 10;
        a /= 10;
        stevke[x]++;
    }
    
    while (b > 0) {
        x = b % 10;
        b /= 10;
        stevke[x]++;
    }
    
    int rez = 0;
    
    for (int  i = 0; i < 10; i++) {
        if (stevke[i] != 0) {
            rez++;
        }
    }
    
    printf("%d\n", rez);
}
