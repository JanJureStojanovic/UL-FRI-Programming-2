#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
 
    int* odg = calloc(3, sizeof(int));
    
    char* in = calloc(20, sizeof(int));
    scanf("%s", in);
    
    int stVrstic;
    scanf("%d\n", &stVrstic);
    
    char* out = calloc(20, sizeof(int));
    scanf("%s", in);
    
    FILE* read = fopen(in, "r");
    FILE* write = fopen(out, "w");
    
    unsigned char byte1;

    while (fread(&byte1, 1, 1, read) == 1) {
        printf("The numerical value of myChar is: %u\n", byte1);
    }

    fclose(read);
}
