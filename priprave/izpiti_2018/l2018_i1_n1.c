#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {

    int n;
    scanf("%d", &n);
    
    int* nums = malloc(n*sizeof(int));
    for (int i = 0 ; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    int out = 0;
    bool ok = true;
    for (int i = 0; i < n; i++) {
        ok = true;
        for (int j = i; j < n; j++) {
            if (nums[i] < nums[j]) {
                ok = false;
            }
        }
        if (ok == true) {
            out++;
        }
        
    }
    
    printf("%d\n", out);
}
