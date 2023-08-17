
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
    osebe[0] = ustvari("Josipa", 84);
    osebe[1] = ustvari("Blanka", 83);
    osebe[2] = ustvari("Kenan", 95);
    osebe[3] = ustvari("Matija", 19);
    osebe[4] = ustvari("Apolonija", 15);
    osebe[5] = ustvari("Greta", 21);
    osebe[6] = ustvari("Tom", 63);
    osebe[7] = ustvari("Urh", 83);
    osebe[8] = ustvari("Ian", 36);
    osebe[9] = ustvari("Cirila", 80);
    osebe[10] = ustvari("Hasan", 40);
    osebe[11] = ustvari("Senad", 96);
    osebe[12] = ustvari("Nemanja", 68);
    osebe[13] = ustvari("Erazem", 94);
    osebe[14] = ustvari("Feliks", 83);

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
