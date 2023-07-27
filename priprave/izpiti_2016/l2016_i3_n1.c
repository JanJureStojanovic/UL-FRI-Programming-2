#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool prastevilo(int n) {
    int stDel = 0;
    for (int i = 2; i < n; i++) {
        if (n%i == 0) {
            stDel++;
        }
    }
    if (stDel == 0)  {
        return true;
    }
    return false;
}

int main() {
    
    int n, k;
    scanf("%d %d", &n, &k);
    
    bool najdenKti = false;
    
    int kandidat = n;
    int stNajdenih = 0;
    while(najdenKti == false) {
        kandidat += 1;
        if (prastevilo(kandidat)) {
            stNajdenih++;
        }
        if (stNajdenih == k) {
            najdenKti = true;
        }
    }
    printf("%d\n", kandidat);
}

