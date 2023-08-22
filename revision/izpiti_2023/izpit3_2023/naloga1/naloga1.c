
/*
 * Zagon testne skripte ("sele potem, ko ste prepri"cani, da program deluje!):
 *
 * export name=naloga1
 * make test
 *
 * Javni testni primeri:
 *
 * 01: iz besedila naloge
 * 02..04: a = b > 0
 * 05..07: a > b > 0
 * 01, 08..10: ni dodatnih omejitev glede a in b
 * 02, 04, 06, 08, 10: vsak bajt je bodisi 0 bodisi 1
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// po potrebi dopolnite ...

int main(int argc, char** argv) {
   
    FILE* ena = fopen(argv[1], "rb");
    FILE* dva = fopen(argv[2], "rb");
    FILE* out = fopen(argv[3], "wb");
    
    int len1 = 0;
    int a; 
    while(a = fgetc(ena) != EOF) {
    	len1++;
    }
   
	int len2 = 0;
	int b; 
	while(b = fgetc(dva) != EOF) {
		len2++;
	}
	
	// Ustvarimo tabelo potrebne dolzine
    int* t1 = malloc(len1*sizeof(int));
    
    // Ustvarimo tabelo potrebne dolzine
    int* t2 = malloc(len2*sizeof(int));

	rewind(ena);
	rewind(dva);
	
	int y;
	// Indeks za pisanje elementov v naso tabelo
    int i = 0;
    // Prepisemo elemente vhodne datoteke v naso tabelo
    while((y = fgetc(ena)) != EOF) {
        t1[i] = y;
        i++;
    }
    
    int x;
	// Indeks za pisanje elementov v naso tabelo
    int j = 0;
    // Prepisemo elemente vhodne datoteke v naso tabelo
    while((x = fgetc(dva)) != EOF) {
        t2[j] = x;
        j++;
    }

    int l1 = 0;
    int l2 = 0;
    
    bool izpisEna = false;
    bool izpisDva = false;
    
    if (len1 < len2) {
    	izpisDva = true;
    	l1 = len1;
    	l2 = len2;
   } else {
   		izpisEna = true;
   		l1 = len2;
   		l2 = len1;
   }
   
   for (int i = 0; i < l1; i++) {
   		if (t1[i] < t2[i]) {
   			fputc(t2[i], out);
   		} else {
   			fputc(t1[i], out);
   		}
   }
   
   for (int i = l1; i < l2; i++) {
   		if (izpisEna == true) {
   			fputc(t1[i], out);
   		} else {
   			fputc(t2[i], out);
   		}
   }
   
   fclose(ena);
   fclose(dva);
   fclose(out);
   		
  	return 0;	

}








