#include <stdio.h>

int main() {

    int a = 1;
    int b = 2;
    int c = 0;
    int sum = 2;
    
    while (c <= 4000000) {
        c = a + b; 
        a = b;
        b = c;
        
        if (c % 2 == 0) {
            sum += c;
        }
    }
    
    printf("%d\n", sum);
}
