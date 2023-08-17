#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

long rek(int n, int k) {
    if (n == 0) {
        return 1;
    }
    if (n < 0 || k == 0) {
        return 0;
    }
    long zNajSumandom = rek(n - k, k); 
    long brezNajSumanda = rek(n, k - 1);

    return zNajSumandom + brezNajSumanda;
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
        
    printf("%ld\n", rek(n, k));
}
