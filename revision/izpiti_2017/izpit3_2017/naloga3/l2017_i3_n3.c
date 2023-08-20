#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {

    char filename[21];
    scanf("%s", filename);

    FILE *file = fopen(filename, "rb");

    char P6[3];
    int width, height, max_color;
    fscanf(file, "%2s %d %d %d\n", P6, &width, &height, &max_color);

    unsigned char* colors = malloc(3*width*height*sizeof(unsigned char));

    fread(colors, sizeof(unsigned char), 3*width*height, file);
    
    int stRazlicnih = 0;
    
    for (int a = 3; a < 3 * width * height; a += 3) {

        bool enakost = false;

        for (int b = a - 3; b >= 0; b -= 3) {
            
            if (colors[b] == colors[a] && colors[b + 1] == colors[a + 1] && colors[b + 2] == colors[a + 2]) {
 
                enakost = true;
                break;
            }
        }
    
        if (enakost == false) {
            stRazlicnih++;
        }
    }
    
    int curMax = 0;
    int counter;
    
    for (int i = 0; i < 3*width*height; i += 3) {
        counter = 0;
        for (int j = 0; j < 3*width*height; j += 3) {
            if (colors[i] == colors[j] && colors[i + 1] == colors[j + 1] && colors[i + 2] == colors[j + 2]) {
                counter++;
            }
        }
        if (counter > curMax) {
            curMax = counter;
        }
    }
    
    
    printf("%d\n", stRazlicnih + 1); // Plus ena, ker stejemo zraven se prvi element
    printf("%d\n", curMax);
    
    return 0;
}
