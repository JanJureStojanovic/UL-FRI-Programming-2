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

    printf("%d\n", width*height);
    printf("%d\n", stRazlicnih + 1);

    return 0;
}
