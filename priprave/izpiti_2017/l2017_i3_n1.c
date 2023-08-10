#include <stdio.h>

int main() {

    int x;
    char end;
    scanf("%d", &x);
    scanf("%c", &end);
    
    int y;

    while (end != '\n') {
        scanf("%d", &y);
        if (x*y < 0) {
            printf("%d\n", x); 
        }
        x = y;
        scanf("%c", &end);
    }
    printf("%d\n", x);
    
    return 0;
}
