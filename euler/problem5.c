#include <stdio.h>
#include <stdbool.h>

bool isDevisable(int n) {
    if (n % 20 == 0 && n % 19 == 0 && n % 18 == 0 && n % 17 == 0 && n % 16 == 0 && n % 14 == 0 && n % 13 == 0 && n % 12 == 0 && n % 11 == 0) {
        return true;
    }
    return false;
}

int main() {

    int i = 20;
    
    while (isDevisable(i) == false) {
        i++;
    }
    
    printf("%d\n", i);
}
