
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
    int n = 15;
    Oseba** osebe = malloc(n * sizeof(Oseba*));
    osebe[0] = ustvari("Milena", 46);
    osebe[1] = ustvari("Anej", 6);
    osebe[2] = ustvari("Valter", 98);
    osebe[3] = ustvari("Edina", 95);
    osebe[4] = ustvari("Zlata", 28);
    osebe[5] = ustvari("Darija", 72);
    osebe[6] = ustvari("Neva", 38);
    osebe[7] = ustvari("Karel", 8);
    osebe[8] = ustvari("Lian", 24);
    osebe[9] = ustvari("Robi", 88);
    osebe[10] = ustvari("Tai", 94);
    osebe[11] = ustvari("Jovan", 85);
    osebe[12] = ustvari("Stanka", 10);
    osebe[13] = ustvari("Husein", 57);
    osebe[14] = ustvari("Gaia", 27);

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
