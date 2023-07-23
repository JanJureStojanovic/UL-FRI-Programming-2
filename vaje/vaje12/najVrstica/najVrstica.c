#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) {

	// Int za belezenje dolzine vrstic
    int n = 0;
	// Int za belezenje najdaljse vrstice
    int naj = 0;

    // Nas string
    char vrstica[1024];
    // Najdaljsi string
    char najVrstica[1024];

    // Odpremo input file (nek .txt file)
    // Odpremo ga kot read only, z "r"
    FILE * filePtr = fopen(argv[1], "r");

    // n predstavlja maksimalno stevilo char-ov, ki bodo prebrani
    // Beremo do konca file-a, new-line char-a ali pa do n-1 char-ov
    while(fgets(vrstica, 1023, filePtr) != NULL){

        // Zabelezimo dolzino vrstice
        n = strlen(vrstica);

        // Preverimo ce gre za najdaljso vrstico
        if (n > naj){
            naj = n; 
            // Ce je najdaljsa vrstica jo shranimo v ta string
            strcpy(najVrstica, vrstica);
        }

        // Stevec dolzine vrstic damo spet na 0
        n = 0;
    }

    // Izpisemo najdaljso vrstico
    printf("%s", najVrstica);
    // Zapremo file
    fclose(filePtr);

    return 0;
}