#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct _Vozlisce {
    int podatek;
    struct _Vozlisce* naslednje;
} Vozlisce;

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
    
    Vozlisce* out = prepisi(t);
    
    for (int i = 0; i < 100; i++) {
        if (i != 99) {
            printf("%d -> ", out->podatek);
        } else {
            printf("%d\n", out->podatek);
        }
        out = out->naslednje;
    } 
    
    return 0;

}
