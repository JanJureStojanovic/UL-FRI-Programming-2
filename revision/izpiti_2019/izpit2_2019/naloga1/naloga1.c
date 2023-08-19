#include <stdio.h>
#include <stdlib.h>

int main() {

    char input_filename[21];
    int n;
    char output_filename[21];

    scanf("%s", input_filename);
    scanf("%d", &n);
    scanf("%s", output_filename);
    
    FILE* input = fopen(input_filename, "rb");
    FILE* output = fopen(output_filename, "w");
    
    unsigned char* bajti = malloc(n*3*sizeof(unsigned char));
    fread(bajti, sizeof(unsigned char), n*3, input);
    
    int r = 0;
    int g = 0;
    int b = 0;
    
    for (int i = 0; i < n*3; i += 3) {
        if (bajti[i] != 0 && bajti[i+1] == 0 && bajti[i+2] == 0) {
            r++;
        }
        if (bajti[i] == 0 && bajti[i+1] != 0 && bajti[i+2] == 0) {
            g++;
        }
        if (bajti[i] == 0 && bajti[i+1] == 0 && bajti[i+2] != 0) {
            b++;
        }
    }
    
    fprintf(output, "%d\n%d\n%d\n", r, g, b);

    
    return 0;
}


