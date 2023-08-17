#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void izpisiVsoto(int* cleni, int stClenov) {
    for (int i = 0; i < stClenov; i++) {
        if (i != 0) printf(" + ");
        printf("%d", cleni[i]);
    }
    printf("\n");
    return;
}


long nacini (int ciljnaVsota, int najSumand, int* cleni, int stClenov) {
    // Smo na ciljni vsoti -> rekurzija se je zakljucila
    if (ciljnaVsota == 0) {
        izpisiVsoto(cleni, stClenov);
        return 1;
    }
    // Presegli smo ciljno vsoto ali sumand je enak 0, torej nic vec ne prispeva nasi vsoti -> smo zakljucili (neuspesno)
    if (ciljnaVsota < 0 || najSumand == 0) {
        return 0;
    }

    cleni[stClenov] = najSumand;  

    long zNajSumandom = nacini(ciljnaVsota - najSumand, najSumand, cleni, stClenov + 1); 

    long brezNajSumanda = nacini(ciljnaVsota, najSumand - 1, cleni, stClenov);
    
    return zNajSumandom + brezNajSumanda;
}

int main () {

    int ciljnaVsota;  
    int najSumand;
    scanf("%d", &ciljnaVsota);
    scanf("%d", &najSumand);

    int* cleni = malloc(sizeof(int) * ciljnaVsota);
    long rezultat = nacini(ciljnaVsota, najSumand, cleni, 0);

    return 0;
}

