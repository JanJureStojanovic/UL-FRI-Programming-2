
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "naloga2.h"

Oseba* ustvari(char* ime, int starost) {
    Oseba* os = malloc(sizeof(Oseba));
    os->ime = ime;
    os->starost = starost;
    return os;
}

int __main__() {
    int n = 6;
    Oseba** osebe = malloc(n * sizeof(Oseba*));
    osebe[0] = ustvari("Glorija", 28);
    osebe[1] = ustvari("Enes", 63);
    osebe[2] = ustvari("Cvetka", 28);
    osebe[3] = ustvari("Valerija", 55);
    osebe[4] = ustvari("Predrag", 84);
    osebe[5] = ustvari("Tajda", 54);

    uredi(osebe, n);
    for (int i = 0;  i < n;  i++) {
        printf("%s/%d\n", osebe[i]->ime, osebe[i]->starost);
    }

    for (int i = 0;  i < n;  i++) {
        free(osebe[i]);
    }
    free(osebe);

    exit(0);
    return 0;
}
