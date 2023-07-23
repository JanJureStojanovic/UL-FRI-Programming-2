#include <stdio.h>
       
int largestPrimeFactor(long n) {       
    long i = 2;
    while (n > 1) {
        if (n % i == 0) {
            n /= i;
        } else {
            i += 1;
        }
    }
    return i;
}

int main() {
    int x = largestPrimeFactor(600851475143);
    printf("%d\n", x);
}
