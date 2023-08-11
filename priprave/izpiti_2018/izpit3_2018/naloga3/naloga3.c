#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void opcije(int n, int a, int b, int* nums) {

    nums[n]++;
    
    if (n == 0) {
        return;
    }
        
    opcije(n/a, a, b, nums);
    opcije(n/b, a, b, nums);
}


int main() {

    int a, b, n;
    scanf("%d %d %d", &a, &b, &n);
    
    int* nums = calloc((n+1), sizeof(int));
    
    opcije(n, a, b, nums);
    
    int num = 0;
    
    for (int i = 0; i <= n; i++) {
        if (nums[i] != 0) {
            num++;
        }
    }
    
    printf("%d\n", num);
    
}
