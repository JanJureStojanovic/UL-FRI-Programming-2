
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga2.h"

Vozlisce* zgradi(int* t) {
    if (*t <= 0) {
        return NULL;
    }
    Vozlisce* v = malloc(sizeof(Vozlisce));
    v->podatek = *t;
    v->naslednje = zgradi(t + 1);
    return v;
}

void izpisi(Vozlisce* zacetek) {
    printf("[");
    for (Vozlisce* p = zacetek;  p != NULL;  p = p->naslednje) {
        if (p != zacetek) {
            printf(", ");
        }
        printf("%d", p->podatek);
    }
    printf("]\n");
}

void pocisti(Vozlisce* zacetek) {
    if (zacetek != NULL) {
        pocisti(zacetek->naslednje);
        free(zacetek);
    }
}

void obdelaj(Vozlisce* seznam) {
    izpisi(seznam);
    seznam = obrni(seznam);
    izpisi(seznam);
    pocisti(seznam);
}

int __main__() {
    Vozlisce* seznam = zgradi((int[]) {59, 328, 210, 44, 388, 681, 222, 188, 181, 980, 195, 748, 384, 462, 758, 979, 528, 638, 923, 740, 413, 606, 835, 79, 851, 373, 690, 858, 735, 538, 681, 777, 781, 942, 413, 6, 682, 121, 387, 900, 470, 53, -1});
    obdelaj(seznam);

    exit(0);
    return 0;
}
