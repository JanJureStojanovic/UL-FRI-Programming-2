#include <stdio.h>

int main() {

    int a, b;
    scanf("%d %d", &a, &b);
    
    int c = (a + b) % 10;
    
    printf("%d\n", c);
    
    return 0;
}
