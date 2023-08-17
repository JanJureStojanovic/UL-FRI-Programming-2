#include <stdio.h>
#include <stdlib.h>

int main (int argc, char** argv){

    FILE* input = fopen(argv[1], "rb");
    FILE* output = fopen(argv[2], "wb");
    
    char* temp = malloc (10 * sizeof(char));
    int width, height, maxCV;

    fgets(temp, 10, input); // Preberemo P5 in /n
    fscanf(input, "%d %d", &width, &height); // Preberemo sirino in visino slike
    fscanf(input, "%d\n", &maxCV); // Preberemo se maximum color value
    
    unsigned char* colors = malloc (3*width*height*sizeof(unsigned char));
    fread(colors, sizeof(unsigned char), 3*width*height, input);

    unsigned char* grays = malloc (width*height*sizeof(unsigned char));
    
    int colorIndex = 0; // index of the component of the current pixel 
    int grayIndex = 0;

    for (int j=0; j<height*width; j++){
        grays[grayIndex]=((30*colors[colorIndex] + 59*colors[colorIndex+1] + 11*colors[colorIndex+2])/100);
        colorIndex+=3;
        grayIndex++;
    }

    fprintf(output, "P5\n");
    fprintf(output, "%d %d\n", width, height);
    fprintf(output, "255\n");
    fwrite(grays, sizeof(unsigned char), width*height, output);

    fclose(input);
    fclose(output);
}
