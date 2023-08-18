#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct _Vozlisce {
	int podatek;
	struct _Vozlisce* naslednje;
} Vozlisce;

Vozlisce* izloci(Vozlisce* zac, Vozlisce* v) {
	/* Kazalec zac kaze na v, potem lahko samo vrnemo pointer na vozlisce;
	ki je takoj za v, kajti to bo nov zacetek nasega linked-lista */
	if (zac == v) {
		return v->naslednje;
	}

	// Shranimo pointer na zacetek, ker ga boo morali vrniti na koncu
	Vozlisce* i = zac;
	while (i->naslednje != NULL) {
		// Pogledamo, ce je naslednje vozlice v
		if (i->naslednje == v) {
			// Ce je, naj trenutno vozlisce kaze na naslednjega za vozliscem v;
			i->naslednje = v->naslednje;
			return zac;
		}
		i = i->naslednje;
	}
	return zac;
}

Vozlisce* prepisi(int* t) {
    
    int len = 0;
    while (t[len] != 0) {
        len++;
    } 
    
    Vozlisce* z = malloc(1*sizeof(Vozlisce));
    Vozlisce* j = z;
    for (int i = 0; i < len; i++) {
        j->podatek = t[i];
        if (i == len-1) {
            continue;
        }
        Vozlisce* next = malloc(1*sizeof(Vozlisce));
        j->naslednje = next;
        j = next;  
    }
    
   return z;
}

int main() {
    
    int* t = malloc(100*sizeof(int));
    for (int j = 0; j < 100; j++) {
        t[j] = j + 1;
    }

    Vozlisce* j = prepisi(t);
    Vozlisce* i = izloci(j, j->naslednje->naslednje->naslednje);
    
    for (int j = 0; j < 99; j++) {
        if (j != 98) {
            printf("%d -> ", i->podatek);
        } else {
            printf("%d\n", i->podatek);
        }
        i = i->naslednje;
    } 
   
    return 0;

}
