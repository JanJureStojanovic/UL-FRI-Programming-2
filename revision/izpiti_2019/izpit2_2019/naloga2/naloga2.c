#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga2.h"

void uredi(Oseba** osebe, int n) {

    for (int j = 0; j < n - 1; j++) {
    
        for (int i = 0; i < n-1; i++) {
                
            if (strcmp(osebe[i]->ime, osebe[i + 1]->ime) > 0) {
                Oseba* temp = calloc(1, sizeof(Oseba));
                temp->ime = osebe[i]->ime;
                temp->starost = osebe[i]->starost;
                osebe[i] = osebe[i + 1];
                osebe[i + 1] = temp;
            }
                    
        }
    }
}

int main() {
    return 0;
}
