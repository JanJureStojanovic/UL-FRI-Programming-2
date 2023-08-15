
/*
Ro"cno testiranje (npr. za primer test01.bin):

gcc naloga1.c
./a.out test01.bin

Samodejno testiranje:

export name=naloga1
make test

Testni primeri:

test01: primer iz besedila
test02: datoteka z bajtom 00000000
test03: datoteka z bajtom 10110111
test04..test06: samodejno izdelani, zgolj bajti 00000000 in 00000001
test07..test10: samodejno izdelani, splo"sni

.bin: testni vhod
.out: pri"cakovani izhod
.res: izhod va"sega programa (pri poganjanju z make)
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Lahko dodate "se kak #include, pomo"zno funkcijo ipd.

#include <stdio.h>

int count_bits(unsigned char byte) {
    int count = 0;
    while (byte > 0) {
        count += byte & 1;
        byte >>= 1;
    }
    return count;
}

int main(int argc, char *argv[]) {
    
    FILE *file = fopen(argv[1], "rb");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    int totalBits = 0;
    unsigned char byte;
    while (fread(&byte, 1, 1, file) == 1) {
        totalBits += count_bits(byte);
    }

    fclose(file);

    printf("%d\n", totalBits);

    return 0;
}
