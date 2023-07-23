#include <stdio.h>

int main() {

    int n;
    scanf("%d\n", &n);
    int m;
    scanf("%d\n", &m);
    
    int st = 0;
    
    for (int i = n; i <= m; i++) {
        int x = 0;
        //gremo po podanemu intervalu in gledamo vsa stevila
        for (int j = 1; j < i; j++) {
            for (int k = 1; k < i; k++) {
                if (j*j + k*k == i*i) {
                    x++;
                }
            }
        }
        
        if (x > 0) {
            st++;
       }
    }
    
    printf("%d\n", st);












}
