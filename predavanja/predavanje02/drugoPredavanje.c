/*
[Deklaracije: tipov, funkcij in spremenljivk]

1. Spremenljivke:
    sprejemljivi nacini:
    
    int n;
    int m, k, l;
    char c;
    
    int n = 0; <--- spremenljivke skupaj z deklaracijo se inicializiramo
    int m = 5;
    char c = 'A';
    
2. Funkcije: kor pri javi (tip, ime, parametri (skupaj s tipi))
    primer definicije funkicje:
    int times2(int n) <--- deklaracija (prototip) funkcije
    {               |
        n = n*2;    |
        return n;   |> definicja funkcije
    }               |
    
    (to funkcijo lahko isto uporabimo v javi (mora biti v nekem classu))
    ---> stil pisanja naj ostaja konstanten ...
    
    alternativa: (star stil, se opušča ...)
    int times2(n)
        int n;
    }
        n = n*2;
        return n;
    }   
    
    ---> privet rezultat funckije je int (ce slucajno ne navedemo tipa) 

Primeri:

#include <stdio.h> //vrstni red deklaracij je pomemben! (v javi ni)

int k = 7;

int timesK (int n) {
    n = n*k;
    return n;
}

int main() {
    int m;
    scanf("%d", &m);
    printf("%d\n", timesK(m));
}

#include <stdio.h> //alternativa (le vcasih rabimo ...)

int k = 7; //<--- globalna spremenljivka

int timesK (int n); //zgoraj omenjen 'prototip' ... sedaj je lahko funkcija definirana spodaj

int main() {
    int m; //<--- lokalna spremenljivka
    scanf("%d", &m);
    printf("%d\n", timesK(m)); //scanf, printf sta tudi imeni (imeni funkcij, ki sta 'nekje' definirani)
    return 0;
}

int timesK (int n) {
    return n*k;
}

kdaj to rabimo:
int g(...);
int f ...) { ... g(3) ... }
int g(...) { ... f(5) ... }

#include <stdio.h>

int f() {
    for (int i = 0; i < 10; i++) {
        if (i > 0) {
            int i = 50;
            printf("%d\n", i);
        }
    }
}

int main() {

    return 0;
}

[Stavki v C-ju] (zelo podovno kot java) 

1. Kontrolni stavki: for, while, do-whie, if, switch...case...default, break, continue, goto, 

int collatz(int n) {
    if (n % 2 == 0) {
        return n/2;
    } else {
        return 3*n + 1;
    }
}

int collatzLength(int n) {
    int i = 1;
    while (n != 1) {
        n = collatz(n);
        i++;
    }
    return i;
}

alternativa (z goto stavkom):

int collatz(int n) {
    if (n % 2 == 0) {
        n = n/2;
        goto exit;
    }
    n = 3*n + 1;
    exit: return n;
}

int collatzLength(int n) {
    int i = 1;
    loop: if (n == 1) goto exit;
    n = collatz(n);
    i++;
    goto loop;
    exit: return i;
}

alternativa (rekurzija):

int collatz(int n) {
    if (n % 2 == 0) {
        return n/2;
    } else {
        return 3*n + 1;
    }
}

int collatzLength(int n) {
    if (n == 1) {
        return 1;
    } else {
        int noviN = collatz(n);
        int novaDolzina = collatzLength(n);
        return 1 + novaDolzina;
    }   
}

se lepse:

...

int collatzLength(int n) {
    if (n == 1) return 1;
    else return 1 + collatzLength(collatz(n));
}

domaca naloga: 
I.
for 
    for 
        for     
            for 
                print(...);

II.
z goto

III.
z rekurzijo



