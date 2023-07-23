#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    if (n == 1) {
        return false;
    }
    if (n == 2) {
        return true;
    }
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            //nasli smo se enega deljitelja
            return false;
        }
    }
    return true;
}
        
int main() {
    
    int x = 0;
    int y = 1;
    
    while (x <= 10000) {
        if (isPrime(y)) {
            x++;
            printf("[%d.] %d\n", x, y);
        }
        y++;
    }
}




