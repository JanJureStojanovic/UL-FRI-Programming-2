#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool samiX(char* niz) {
    for(int i = 0; i < strlen(niz); i++) {
        if (niz[i] != 'x') {
            return false;
        }
    }
    return true;
}

int main() {

    int n;
    scanf("%d\n", &n);
    
    char** nizi = calloc(n, sizeof(char*));
    
    for (int i = 0; i < n; i++) {
        nizi[i] = calloc(1000, sizeof(char));
    }
    
    // Sprejememo vse besede
    for (int i = 0; i < n; i++) {
        char x = getchar();
        int j = 0; 
        while(x != '\n') {
            nizi[i][j] = x;
            j++;
            x = getchar();
        }
    }
    
    int stDobrih = 0;
    
    // Pregledamo vse nize
    for (int i = 0; i < n; i++) {
        
        // Izberemo i-ti niz
        char* niz = nizi[i];
            
        for (int j = 0; j < strlen(niz); j++) {
            // Dve zaporedni damo v x
            if (niz[j] == '(' && niz[j+1] == ')') {
                niz[j] = 'x';
                niz[j+1] = 'x';
                continue;
            }
            if (niz[j] == '[' && niz[j+1] == ']') {
                niz[j] = 'x';
                niz[j+1] = 'x';
                continue;
            }
            if (niz[j] == '{' && niz[j+1] == '}') {
                niz[j] = 'x';
                niz[j+1] = 'x';
                continue;
            }
        }
        
        for (int o = 0; o < strlen(niz); o++) {
            for (int j = 0; j < strlen(niz); j++) {
                if (niz[j] == '(' && niz[j+1] == 'x') {
                    for (int k = 3; k < strlen(niz); k += 2) {
                        if (niz[j + k] == ')') {
                            niz[j] = 'x';
                            niz[j + k] = 'x';
                        }
                    }    
                }
                if (niz[j] == '[' && niz[j+1] == 'x') {
                    for (int k = 3; k < strlen(niz); k += 2) {
                        if (niz[j + k] == ']') {
                            niz[j] = 'x';
                            niz[j + k] = 'x';
                        }
                    }
                }
                if (niz[j] == '{' && niz[j+1] == 'x') {
                    for (int k = 3; k < strlen(niz); k += 2) {
                        if (niz[j + k] == '}') {
                            niz[j] = 'x';
                            niz[j + k] = 'x';
                        }
                    }
                }
            }
        }
        if (samiX(niz) == true) {
            stDobrih++;
         }
    }
    printf("%d\n", stDobrih);
}
