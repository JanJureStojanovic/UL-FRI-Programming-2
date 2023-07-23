#include <stdio.h>
#include <stdbool.h>

int vsotaDeljiteljev(int n) {
    int sum = 1;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    
    int n;
    scanf("%d", &n);
    int prijatelj = vsotaDeljiteljev(n);
    
    if (n == vsotaDeljiteljev(prijatelj)) {
        printf("%d\n", prijatelj);
    } else {
        printf("NIMA\n");
    }

}
