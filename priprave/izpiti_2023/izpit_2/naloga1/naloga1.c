
/*
 * Zagon testne skripte ("sele potem, ko ste prepri"cani, da program deluje!):
 *
 * export name=naloga1
 * make test
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// po potrebi dopolnite ...

int main(int argc, char** argv) {
    
    FILE* in = fopen(argv[1], "rb");
    FILE* p = fopen(argv[1], "rb");
    FILE* out = fopen(argv[2], "wb");
    
    int c;
    int n = 0;
    while((c = fgetc(in)) != EOF) {
    	n++;
    }
    
    int* znaki = malloc(n*sizeof(int));
    
    int s;
    int i = 0;
    while((s = fgetc(p)) != EOF) {
    	znaki[i] = s;
    	i++;
    }
    
    int prejsnji = -66767;
    
    for (int i = 0; i < n; i++) {
    	if (znaki[i] != prejsnji) {
    		fputc(znaki[i], out);
    	}
    	prejsnji = znaki[i];
    }
    
    fclose(in);
    fclose(p);
    fclose(out);

    return 0;
}
