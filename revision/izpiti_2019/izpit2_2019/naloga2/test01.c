
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
    int n = 5;
    Oseba** osebe = malloc(n * sizeof(Oseba*));
    osebe[0] = ustvari("Friderika", 98);
    osebe[1] = ustvari("Angela", 35);
    osebe[2] = ustvari("Kiara", 28);
    osebe[3] = ustvari("Savo", 87);
    osebe[4] = ustvari("Haris", 52);

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
