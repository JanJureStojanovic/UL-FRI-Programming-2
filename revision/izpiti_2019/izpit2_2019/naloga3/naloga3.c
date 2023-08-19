#include <stdio.h>
#include <stdlib.h>

void izpis(int* t, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d", t[i]);
    }
    printf("\n");
}

/*
spremenljivka koraki hrani vse korake, ki smo jih naredili do sedaj, spremenljivka tabela hrani lastnosti labirinta in je ne spreminjamo, visina in sirina nam povesta velikost labirinta in nas cilj, i hrani stevilo korakov, x in y hranita kje smo trenutno v labirintu, j bomo uporabljali za branje po tabeli

*/
void rek(int* koraki, int** tabela, int visina, int sirina, int i, int x, int y, int j) {

    // Preverimo ce smo kdaj naredili en korak nazaj (nazaj na isto polje kjer smo bili prej)
    for (int q = 0; q < i - 1; q++) {
        if (koraki[q] == 2 && koraki[q+1] == 0) { // -> <-
            return;
        }
        if (koraki[q] == 0 && koraki[q+1] == 2) { // <- ->
            return;
        }
        if (koraki[q] == 1 && koraki[q+1] == 3) { // gor, dol
            return;
        }
        if (koraki[q] == 3 && koraki[q+1] == 1) { // dol, gor
            return;
        }
    }
    
    // Smo nasli pot do desnega spodnjega prostora
    if (x == sirina && y == visina) {
        izpis(koraki, i);
        return;
    }
    
    // Naredili smo toliko korakov, kolikor je vseh polj, morali bi najti pot skozi labirint
    if (i == sirina*visina) { 
        return;
    }
    
    // Preberemo stranice labirinta, in nadaljujemo kamor lahko
    for (int z = 0; z < 4; z++) {
        
        // Najdemo odprto stranico
        if (tabela[j][z] == 0) {
            
            // Tabela, ki bo hranila korake za nov rek. primer (kopiramo prejsnjo pot)
            int* noviKoraki = calloc(sirina*visina, sizeof(int));
            for (int m = 0; m < sirina*visina; m++) {
                noviKoraki[m] = koraki[m];
            }
            
            noviKoraki[i] = z;
            
            if (z == 0) {
                rek(noviKoraki, tabela, visina, sirina, i + 1, x - 1, y, j - 1);
            }
            
            if (z == 1) {
                rek(noviKoraki, tabela, visina, sirina, i + 1, x, y - 1, j - 3);
            }
            
            if (z == 2) {
                rek(noviKoraki, tabela, visina, sirina, i + 1, x + 1, y, j + 1);
            }
            
            if (z == 3) {
                rek(noviKoraki, tabela, visina, sirina, i + 1, x, y + 1, j + 3);
            }
        }
    }
}

int main() {
    
    int m, n;
    scanf("%d %d\n", &m, &n);
    
    int** tabela = malloc(n*m*sizeof(int*));
    for (int i = 0; i < n*m; i++) {
        tabela[i] = malloc(4*sizeof(int));
    }
    
    //getchar();
    
    for (int i = 0; i < m*n; i++) {
        for (int j = 0; j < 4; j++) {
            int x = getchar();
            tabela[i][j] = x - '0';
        }
        getchar();
    }
    
    // Ce je 1 -> stena, ce je 0 -> ni stene;
    
    int* koraki = calloc(n*m, sizeof(int));
    
    rek(koraki, tabela, m, n, 0, 1, 1, 0);
        
    return 0;
}
