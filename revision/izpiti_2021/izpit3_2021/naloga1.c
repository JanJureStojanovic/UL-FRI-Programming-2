#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char* argv[]) {

    FILE* input = fopen(argv[1], "r");
    FILE* output = fopen(argv[2], "w");
  
    int counter;
  
    int len = 0; 
    while (fscanf(input, "%d", &counter) != EOF) {
        len++;
    }
    
    rewind(input);
    
    int stevila[len];
    
    int i = 0;
    while (fscanf(input, "%d", &counter) != EOF) {
        stevila[i] = counter;
        i++;
    }
    
    int j = 0;
    while (j < len) {
        fprintf(output, "%d\n", stevila[j]);
        j += stevila[j];
    }
}
