#include <stdio.h>

int reverse(int n) {
    int revNum = 0;
    while (n != 0) {
        revNum *= 10;
        revNum += n % 10;
        n /= 10;
    }
    return revNum;
}

int main() {
    
    int x = 0;
    
    for (int i = 999; i > 99; i--) {
        for (int j = 999; j > 99; j--) {
            if (reverse(j*i) == j*i) {
                if ((i*j) >= x) {
                    x = i*j;
                }
            }
        }
    }
    printf("%d\n", x);
}
