#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main() {
    
    // Prostor za niz
    char* niz = calloc(100000, sizeof(char));
    
    int i = 0;
    char x = getchar();
    while(x != '\n') {
        niz[i] = x; // Zapolnimo niz
        i++;
        x = getchar();
    }
    
    int finalSum = 0;
    int st = 0;
    
    for (int j = 0; j < i; j++) {
        st = 0;
        if((j == 0 && ('0' <= niz[j] && niz[j] <= '9')) || (niz[j - 1] == ' ' && ('0' <= niz[j] && niz[j] <= '9'))) {
            
            while(niz[j] != ' ' || niz[j] != '\n') {
                if ('0' > niz[j] || niz[j] > '9') {
                    break;
                }
                st *= 10;
                st += niz[j] - '0';
                j++;
            }
        }
        
        finalSum += st;
    }

    printf("%d\n", finalSum);
}



