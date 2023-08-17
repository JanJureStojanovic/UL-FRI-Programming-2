
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
    Vozlisce* seznam = zgradi((int[]) {938, 265, 284, 454, 897, 440, 547, 87, 220, 662, 833, 170, 321, 131, 222, 738, 414, 46, 499, 882, 128, 803, 509, 80, 842, 540, 210, 646, 667, 682, 973, 549, 175, 435, 259, 167, 753, 941, 10, 422, 298, 687, 386, 634, 149, 260, 148, 934, 537, 568, 792, 540, 82, 570, 43, 666, 809, 694, 376, 593, 468, 566, 695, 524, 721, 23, 800, 110, 292, 701, 883, 172, 657, 8, 519, 55, 765, 79, 353, 141, 510, 538, 487, 330, 632, 475, 792, 188, 842, 235, 1, 913, 857, 875, 304, 882, 279, 119, 793, 738, 522, 879, 29, 465, 584, 614, 929, 73, 464, 414, 256, 319, 223, 808, 415, 915, 29, 424, 758, 193, 336, 533, 770, 545, 635, 261, 276, 561, 590, 819, 570, 130, 915, 679, 911, 265, 84, 614, 61, 87, 766, 868, 378, 250, 98, 123, 784, 75, 937, 656, 101, 818, 626, 582, 457, 634, 129, 297, 857, 114, 795, 756, 167, 398, 963, 328, 511, 815, 154, 101, 255, 986, 210, 191, 865, 701, 871, 493, 852, 62, 586, 499, 514, 913, 740, 206, 41, 598, 456, 121, 789, 369, 863, 982, 906, 582, 151, 373, 294, 652, 328, 306, 857, 188, 609, 73, 571, 256, 523, 634, 487, 308, 502, 62, 676, -1});
    obdelaj(seznam);

    exit(0);
    return 0;
}
