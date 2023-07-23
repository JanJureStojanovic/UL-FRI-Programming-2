#include <stdio.h>

int main() {

    int n;
    scanf("%d\n", &n);
    
    int drugoNaj = 0;
    int naj = 0;
    
    for (int i = 0; i < n; i++) {
        
        int x;
        scanf("%d\n", &x);
        
        if (x >= naj) {
            drugoNaj = naj;
            naj = x;
        } else if (x > drugoNaj) {
            drugoNaj = x;
        } 
        
    }
    printf("%d\n", drugoNaj);
}
