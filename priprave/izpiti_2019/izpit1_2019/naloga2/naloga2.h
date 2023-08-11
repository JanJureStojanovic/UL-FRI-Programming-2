
typedef struct Vozlisce Vozlisce;

struct Vozlisce {
    int podatek;
    Vozlisce* naslednje;
};

Vozlisce* obrni(Vozlisce* zacetek);
