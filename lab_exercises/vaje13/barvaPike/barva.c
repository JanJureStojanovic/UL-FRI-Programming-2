#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) { 
    
    // Command line arguments    
    FILE* input = fopen(argv[1], "rb");  
    int vrstica = atoi(argv[2]);
    int stolpec = atoi(argv[3]);
    
    /*
    The header specifies the image type (P6 for binary PPM), width, height, and the maximum color value. 
    The header is written as plain text.
    */
    
    char* string = malloc (10*sizeof(char));
    fgets(string, 10, input); // Preberemo P6 in new line char
    int width, height;
    fscanf(input, "%d %d", &width, &height); // Preberemo sirino in visino slike
    int maxCV;
    fscanf(input, "%d", &maxCV); // Preberemo se maximum color value
    
    // Prostor za vsebino datoteke
    unsigned char** binary = malloc(height*sizeof(unsigned char*));
    for (int i = 0; i < height; i++) {
        binary[i] = malloc((3*width)*sizeof(unsigned char));
    }
    
    unsigned char pixel;
    pixel = fgetc(input);
    
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width*3; j++) {
            pixel = fgetc(input);
            binary[i][j] = pixel;
        }
    }
    
    /*
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width*3; j++) {
            printf("%d ", binary[i][j]);
        }
        printf("\n");
    }
    */
    
    printf("%d %d %d\n", binary[vrstica][stolpec], binary[vrstica][stolpec + 1], binary[vrstica][stolpec + 2]);
    //printf("vrstica: %d, stolpec: %d\n", vrstica, stolpec);
}











