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
    
    int value1, value2, value3;

    // Read groups of three hexadecimal values from the file
    while (fscanf(read, "%x %x %x", &value1, &value2, &value3) == 3) {
        printf("Values: %d %d %d\n", value1, value2, value3);
    }
}
