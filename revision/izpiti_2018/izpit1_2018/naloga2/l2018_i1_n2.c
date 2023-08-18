#include <stdio.h>
#include <stdlib.h>

#include "naloga2.h"

uchar* preberi(char* imeDat, int* sirina, int* visina, int* stBajtov) {

    FILE* input = fopen(imeDat, "rb");
    
    char P6[3];
    int width, height, max_color;
    fscanf(input, "%2s %d %d %d", P6, &width, &height, &max_color);
    
    *visina = height;  // Update the value pointed to by visina
    *sirina = width;   // Update the value pointed to by sirina
    
    fgetc(input);
    
    unsigned char* colors = malloc(3 * width * height * sizeof(uchar));
    fread(colors, sizeof(unsigned char), 3 * width * height, input);
    
    *stBajtov = 3 * width * height;
    
    fclose(input);  // Don't forget to close the file
    
    return colors;
}

int sivina(uchar* pike, int sirina, int visina, int vrstica, int stolpec) {
    
    int ix = (vrstica*sirina*3) + stolpec*3;
    
    int sivko = (pike[ix] + pike[ix + 1] + pike[ix + 2])/3;
    
    return sivko;
}

int main() {
    
    return 0;
    
}
