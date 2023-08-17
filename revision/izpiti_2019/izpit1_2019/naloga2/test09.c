
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
    Vozlisce* seznam = zgradi((int[]) {345, 752, 966, 285, 223, 694, 410, 65, 278, 374, 688, 833, 262, 837, 363, 15, 761, 312, 902, 248, 654, 524, 575, 287, 299, 391, 365, 380, 61, 429, 241, 975, 967, 249, 737, 630, 375, 284, 496, 289, 97, 667, 688, 551, 597, 356, 688, 941, 956, 544, 928, 930, 55, 943, 298, 393, 954, 310, 427, 667, 219, 689, 116, 512, 23, 253, 952, 534, 583, 64, 885, 790, 990, 593, 582, 594, 895, 114, 7, 332, 537, 468, 644, 750, 194, 917, 231, 243, 78, 327, 305, 194, 757, 516, 402, 35, 616, -1});
    obdelaj(seznam);

    exit(0);
    return 0;
}
