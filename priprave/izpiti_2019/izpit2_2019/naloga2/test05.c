
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
    osebe[0] = ustvari("Bojan", 30);
    osebe[1] = ustvari("Andrej", 25);
    osebe[2] = ustvari("Branko", 40);
    osebe[3] = ustvari("Cene", 15);
    osebe[4] = ustvari("Bojana", 20);
    osebe[5] = ustvari("Ana", 20);

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
