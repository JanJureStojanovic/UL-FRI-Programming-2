#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main() {
    
    int n;
    scanf("%d\n", &n);
    
    // ker je n <= 1000, ne bomo delali malloc ...
    // shranimo obe zaporedji v dva array-a
    
    int zapEna[n];
    int zapDva[n];
    
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        zapEna[i] = x;
    }
    
    for (int j = 0; j < n; j++) {
        int y;
        scanf("%d", &y);
        zapDva[j] = y;
    }
    
    /*
    for (int k = 0; k < n; k++) {
        printf("%d %d\n", zapEna[k], zapDva[k]);
    }
    */
    
    // nasa resitev programa
    
    int kandidat;
    
    // exit option
    
    bool ujemanje;
    
    // gremo cez vse mozne dolzine k-ja (torej [0, n - 1])
    
    for (int m = 0; m < n; m++) {
        int a = 0; // zacnemo preverjati povsem na levi strani
        int b = n - 1 - m; // zacnemo preverjati iz desne (ampak se vseeno od leve proti desni)
        int stEnakih = 0; // za stetje ujemanja clenov
        
        while (b < n) {
            if (zapEna[b] == zapDva[a]) { // primerjava zaporedij
                stEnakih++;
            }
            b++;
            a++;
        }
        
        if (stEnakih == m + 1) { // ujemanje zaporedji 
            ujemanje = true;
        }
        
        if (ujemanje == true) { // zapustimo loop takoj ko najdemo (saj iscemo najmanjsega)
            kandidat = n - 1 - m;
            break;
        }
    }
    
    // output
    
    printf("%d\n", kandidat);              
}























