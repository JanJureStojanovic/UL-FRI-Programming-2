
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// po potrebi dopolnite ...

int main(int argc, char** argv) {
    
    FILE* in = fopen(argv[1], "r");
    FILE* p = fopen(argv[1], "r");
    FILE* out = fopen(argv[2], "w");

    int n = 0;

    char c;
    while((c = fgetc(in)) != EOF) {
        n++;
    }

    char* znaki = calloc(n, sizeof(char));

    int i = 0;
    
    char s;
    while((s = fgetc(p)) != EOF) {
        znaki[i] = s;
        i++;
    }

    for (int i = 0; i < n; i++) {
        if (znaki[i] == '"') {
            if(znaki[i + 1] == 'C') {
                fputc(znaki[i + 1], out);
                i++;
            }
            else if(znaki[i + 1] == 'c') {
                fputc(znaki[i + 1], out);
                i++;
            }
            else if(znaki[i + 1] == 'S') {
                fputc(znaki[i + 1], out);
                i++;
            }
            else if(znaki[i + 1] == 's') {
                fputc(znaki[i + 1], out);
                i++;
            }
            else if(znaki[i + 1] == 'Z') {
                fputc(znaki[i + 1], out);
                i++;
            }
            else if(znaki[i + 1] == 'z') {
                fputc(znaki[i + 1], out);
                i++;
            }
            else {
                fputc(znaki[i], out);
            }
        } else {
            fputc(znaki[i], out);
        }
    }

    fclose(in);
    fclose(p);
    fclose(out);
}
