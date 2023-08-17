#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

#define MAX_LENGTH 1000000

int main (){

    char* in = calloc(20, sizeof(char));
    char* out = calloc(20, sizeof(char));
    char* znak = calloc(2, sizeof(char));
    
    scanf("%s", in);
    scanf("%s", out);
    scanf("%s", znak);
    
    FILE* read = fopen(in, "r");
    FILE* write = fopen(out, "w");
    
    char* vrstica = calloc(1001, sizeof(char));
    char* outVrstica = calloc(1001, sizeof(char));;
    
    // Sprehod po vseh vrsticah
    while(fgets(vrstica, 1001, read) != NULL) {
        for (int i = 0; i < 1001; i++) {
            if (vrstica[i] == znak[0]) {
                strcpy(outVrstica, vrstica);
                break;
            }
        }    
    }
    
    fputs(outVrstica, write);
    
    fclose(read);
    fclose(write);


}
