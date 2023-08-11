#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int sDiff(int* nums, int sum1, int sum2, int n, int i) {
    if (i == n) {
        return abs(sum1 - sum2);
    }
    
    int a = sDiff(nums, sum1 - nums[i], sum2 + nums[i], n, i + 1);
    int b = sDiff(nums, sum1, sum2, n, i + 1);
    
    if (a < b) {
        return a;
    }
    return b;
}

int main() {
    
    int n;
    scanf("%d", &n);
    
    int sum1 = 0;
    int sum2 = 0;
    
    int* nums = malloc(n*sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        sum1 += nums[i];
    }
    
    int diff = sDiff(nums, sum1, sum2, n, 0);
    
    printf("%d\n", diff);
}
