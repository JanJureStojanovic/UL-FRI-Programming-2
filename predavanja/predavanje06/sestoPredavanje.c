/*

1.)

int a[100];
for (int i = 0; i < 100; i++) {
    a[i] = i;
}

2.)
int a[100];
int *p = &a[0];
for (int i = 0; i < 100; i++) {
    p[i] = i;
}
for (int i = 0; i < 100; i++) {
    *p = i;
    p++;
}

[2D TABELE]

V pomnilniku bodo elementi spet en za drugim:

int a[3][4]; ---> Kako to zgleda? [0,0][0,1][0,2][1,0][1,2][1,3][2,0][2,1][2,2][2,3]

for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
        a[i][j] = 10*i + j;
    }
}

// pregled tabele:
int* p= &a[0][0];
for (int k = 0; k < 12; k++) {
    printf("%d\n", p);
    p++;
}

Altrnativa:

int b[3][4][5];
Dostop do b[i][j][k]? bbb + i*(4*5) + j*5 + k;

Funkcija, ki ji kot parameter podamo tabelo: (opcije)
int f(int* pa);
int f(int pa[10]); <--- najbolj pomembna varianta
int f(int pa[]);

D2 Tabele:

int ff(int paa[3][4]);
int ff(int paa[][4]);

POSILJANJE NASLOVA > POSILJANJE TABELE 

int a[10];
int n = 5;

int f(int m; int t[10]){ // pass by reference
    m = 2*m;
    t[3] = 3*m;
    return m;
}

f(n, a); <--- f(n, &a[0]);

Moral of the story: Ne posljemo tabele ampak pointer na ze obstojeco tabelo, zato, ce naredimo kakrsne koli spremembne na tej tabeli v podani funkciji, se bodo spremembe poznale nahhhgh originalni tabeli

int f(int *pa; int len);

STRINGI IMAJO DOGOVOR: String se razteza do prvega null znaka ---> s[zadnji znak] = '\0'

3D Tabele:

pp = (int**)malloc(3*sizeof(int*));
for (int i = 0; i < 3; i++) {
    pp[i] = (int*)malloc(4*sizeof(int));
}

Kazalci so inicializirani, vrednosti tabele pa prazne ...

...

Pomemben vrstni red! (od desne proti levi sproscamo)

for (int j = 0; j < 3; j++) {
    free(pp[j]);
}
free(pp);

Kako do elementa z indeksom i,j?

pp je tipa int** (kazalec na kazalec na int)
pp[i] je tipa int* (kazalec na int)

Torej lahko naredimo: 
int** pp;
int* ppi = &pp[i]
int ppij = ppi[j]

lahko pa samo pp[i][j] (smo tipa int)

v javi je new ekvivalent za malloc

Končno, trojna tabela: uporabimo

int*** p;



