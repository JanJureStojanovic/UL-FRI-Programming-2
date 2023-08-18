#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {

    char filename[21];
    scanf("%20s", filename);

    FILE *file = fopen(filename, "rb");

    char P6[3];
    int width, height, max_color;
    fscanf(file, "%2s %d %d %d", P6, &width, &height, &max_color);

    unsigned char* colors = malloc (3*width*height*sizeof(unsigned char));
    fread(colors, sizeof(unsigned char), 3*width*height, file);
    
    int stRazlicnih = 0;
    
    for (int i = 3; i < 3 * width * height; i += 3) {
        
        bool prvic = true;

        for (int j = i - 3; j >= 0; j -= 3) {
            
            if (colors[j] == colors[i] &&
                colors[j + 1] == colors[i + 1] &&
                colors[j + 2] == colors[i + 2]) {
                
                prvic = false;
                break;
            }
        }
        printf("\n");
    
        if (prvic == true) {
            stRazlicnih++;
        }
    }

    
    printf("%d\n", stRazlicnih + 1);

    return 0;
}
