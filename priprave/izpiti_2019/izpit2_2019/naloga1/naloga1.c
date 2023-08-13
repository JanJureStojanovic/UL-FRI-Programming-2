#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    
    int r = 0;
    int g = 0;
    int b = 0;
    
    int* odg = calloc(3, sizeof(int));
    
    char* in = calloc(20, sizeof(int));
    scanf("%s", in);
    int stVrstic;
    scanf("%d\n", &stVrstic);
    char* out = calloc(20, sizeof(int));
    scanf("%s", in);
    
    FILE* read = fopen(in, "rb");
    FILE* write = fopen(out, "w");
    
    for (int i = 0; i < stVrstic; i++) {
        int ena = fgetc(read);
        int dva = fgetc(read);
        int tri = fgetc(read);
        
        if (ena != 00 && dva == 00 && tri == 00) {
            odg[0]++;
        }
        if (dva != 00 && ena == 00 && tri == 00) {
            odg[1]++;
        }
        if (tri != 00 && ena == 00 && dva == 00) {
            odg[2]++;
        }
    }
    
    fprintf(write, "%d\n%d\n%d\n", odg[0], odg[1], odg[2]);
}
