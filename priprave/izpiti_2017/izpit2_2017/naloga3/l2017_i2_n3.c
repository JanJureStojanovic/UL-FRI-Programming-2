#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool test(char* niz) {
    
    int len = strlen(niz);
    
    if (len%2 == 1) {
        return false;
    }
    
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len - 1; j++) {
        
            if (niz[j] == '(' && niz[j+1] == ')') {
                
                char* noviNiz = calloc(1000, sizeof(char));
                
                int ix = 0;
                
                for (int k = 0; k <= len; k++) {
                    if (k == j || k == j + 1) {
                        continue;
                    }
                    
                    noviNiz[ix] = niz[k];
                    ix++;
                }
                //printf("%s %s\n", niz, noviNiz);
                strcpy(niz, noviNiz);  
            }
            
            if (niz[j] == '[' && niz[j+1] == ']') {
                
                char* noviNiz = calloc(1000, sizeof(char));
                
                int ix = 0;
                
                for (int k = 0; k <= len; k++) {
                    if (k == j || k == j + 1) {
                        continue;
                    }
                    
                    noviNiz[ix] = niz[k];
                    ix++;
                }
                //printf("%s %s\n", niz, noviNiz);
                strcpy(niz, noviNiz);  
            }
            
            if (niz[j] == '{' && niz[j+1] == '}') {
                
                char* noviNiz = calloc(1000, sizeof(char));
                
                int ix = 0;
                
                for (int k = 0; k <= len; k++) {
                    if (k == j || k == j + 1) {
                        continue;
                    }
                    
                    noviNiz[ix] = niz[k];
                    ix++;
                }
                //printf("%s %s\n", niz, noviNiz);
                strcpy(niz, noviNiz);  
            }
        }
    }
    
    if (strlen(niz) == 0) {
        return true;
    }
    return false;

}


int main() {

    int n;
    scanf("%d", &n);
    
    char** nizi = malloc(n*sizeof(char*));
    
    for (int i = 0; i < n; i++) {
        nizi[i] = malloc(1001*sizeof(char));
    }
    
    for (int i = 0; i < n; i++) {
        scanf("%s", nizi[i]);
    }
    
    int num = 0;
    
    for (int i = 0; i < n; i++) {
        if (test(nizi[i]) == true) {
            num++;
        }
    }
    
    printf("%d\n", num);
    
    for (int i = 0; i < n; i++) {
        free(nizi[i]);
    }
    free(nizi);
    
}
