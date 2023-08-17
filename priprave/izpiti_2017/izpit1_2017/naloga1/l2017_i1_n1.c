#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    
    // Prostor za niz
    char* niz = calloc(100001, sizeof(char));
    
    int i = 0;
    char x = getchar();
    while(x != '\n') {
        niz[i] = x; // Zapolnimo niz
        i++;
        x = getchar();
    }
    
    int finalSum = 0;
    int st = 0;
    bool pripisi;
    
    for (int j = 0; j < i; j++) {
    
        pripisi = true;
        st = 0;
        
        if(j == 0 && ('0' < niz[j] && niz[j] <= '9')) {
            st = niz[j] - '0';
            j++;
            while((niz[j] != ' ' && niz[j] != '\n') && ('0' <= niz[j] && niz[j] <= '9')) {
                st *= 10;
                st += niz[j] - '0';
                j++;
            }
            finalSum += st;
            continue;
        } 
        
        if (niz[j - 1] == ' ' && ('0' < niz[j] && niz[j] <= '9')) {
            st = niz[j] - '0';
            j++;
            while((niz[j] != ' ' && niz[j] != '\n') && ('0' <= niz[j] && niz[j] <= '9')) {
                st *= 10;
                st += niz[j] - '0';
                j++;
            }  
            finalSum += st;
            continue;
        }     
    }
    printf("%d\n", finalSum);
    free(niz);
    return 0;
}



