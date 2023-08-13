#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga2.h"


Vozlisce* obrni(Vozlisce* zacetek) {
    
    Vozlisce* i = zacetek;
    
    Vozlisce* prejsnje = NULL;
    
    Vozlisce* novo;

    
    while (i != NULL) {
        
        novo = malloc(1*sizeof(Vozlisce));
        
        novo->podatek = i->podatek;
        
        novo->naslednje = prejsnje;
        
        prejsnje = novo;
        
        i = i->naslednje;
                 
    }
    
    return novo;  

}


int main() {

    return 0;

}


