#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Funkcija, ki preveri ce smo bili na vseh moznih kamnih
bool noZeros(int* nums, int len) {
    for (int i = 0; i < len; i++) {
        if (nums[i] == 0) {
            return false;
        }
    }
    return true;
}

void izpis(int* nums, int len) {
    for (int i = 0; i < len; i++) {
        if (i != 0) {
            printf("->");
        }
        for (int j = 0; j < len; j++) {
            if (nums[j] == i + 1) {
                printf("%d", j);
                continue;
            }
        }
    }
}
    
int rekurzija(int sum, int* nums, int a, int b, int len, int kjeSmo, int vr) {
    // Bili smo na vseh moznih kamnih, v dolocenih korakih, izpisemo korake in pristejemo
    if (noZeros(nums, len) == true && vr == len) {
        izpis(nums, len);
        printf("\n");
        return 1;
    }
    
    // Naredili smo vec korakov kot jih imamo na voljo, vrnemo 0
    if (vr > len) {
        return 0;
    }
    
    // Na ideks oz. kjer smo, napisemo vrsni red (kdaj smo sem prisli)
    nums[kjeSmo] = vr;
    
    int c = 0;
    int d = 0;
    
    // Naredimo vse mozne korake cez vse kamne
    for (int i = a; i <= b; i++) {
    
        // Novo tabelo za v rekurzijo
        int* numsx = calloc(len, sizeof(int));
        // Kopiramo originalno
        for (int i = 0; i < len; i++) {
            numsx[i] = nums[i];
        }
        
        if (kjeSmo + i < len) {
            numsx[kjeSmo + i] = vr + 1;
            c = rekurzija(sum, numsx, a, b, len, kjeSmo + i, vr + 1);
        }
        
        if (kjeSmo - i > -1) {
            numsx[kjeSmo - i] = vr + 1;
            d = rekurzija(sum, numsx, a, b, len, kjeSmo - i, vr + 1);
        }
     }   
     
     /*
     KO NADALJUJES S TO NALOGO PROBAJ:
     BREZ IZPISOVANJA ELEMENTOV PO VRSTI, SAMO PREVERIS CE SI BIL NA VSEH INDEKSIH
     IZPISES VSOTO (ALTERNATIVE)
     VOID FUNKCIJA S POINTERJEM?     
     */
       
     return c + d; 

        
}

int main() {

    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);
    
    int* nums = calloc(n, sizeof(int));
    
    int odg = rekurzija(0, nums, a, b, n, 0, 1);
    
    printf("%d\n", odg);
    
}
