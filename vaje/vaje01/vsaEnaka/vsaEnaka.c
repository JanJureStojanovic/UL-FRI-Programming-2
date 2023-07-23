#include <stdio.h>
#include <stdbool.h>

int main() {

    int n;
    scanf("%d\n", &n);
    int a;
    scanf("%d\n", &a);
    bool vsi = true;
    
    for (int i = 0; i < n - 1; i++) {
        int b;
        scanf("%d\n", &b);
        if (a != b) {
            vsi = false;
            printf("%d", 0);
            break;
        }
    }
    
    if (vsi == true) {
        printf("%d", 1);
    }
}
