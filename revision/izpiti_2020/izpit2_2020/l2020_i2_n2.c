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
	Vozlisce* zacetek = zac;
	while (zac->naslednje != NULL) {
		// Pogledamo, ce je naslednje vozlice v
		if (zac->naslednje == v) {
			// Ce je, naj trenutno vozlisce kaze na naslednjega za vozliscem v;
			zac->naslednje = v->naslednje;
			return zacetek;
		}
		zac = zac->naslednje;
	}
	return zacetek;
}

int main() {

	return 0;
}