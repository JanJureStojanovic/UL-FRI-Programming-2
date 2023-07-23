#include <stdio.h>

//needs optimization!

int isPrime(int n) {
    for (int i = 3; i < n; i++) {
        if (n % i == 0) {
            return 1;
        }
    }
    return 0;
}

int main() {
    
    long sum = 2;
    
    for(int i = 3; i < 2000000; i += 2) {
        printf("%d\n", i);
        if (isPrime(i) == 0 ) {
            sum += i;
        }
    }
    
    printf("%ld\n", sum);
     
}
