#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool allOnes(int* nums, int n) {
    for (int i = 0; i < n; i++) {
        if (nums[i] != 1) {
            return false;
        }
    }
    return true;
}

    
int rekurzija(int sum, int* nums, int a, int b, int n, int kjeSmo, int stKorakov) {
    
    if (stKorakov >= n) {
        return 0;
    }
    
    if (allOnes(nums, n) == true) {
        return 1;
    }    
    
    nums[kjeSmo] += 1;
    
    int dodatek;
    
    for (int i = a; i <= b; i++) {
        int* numsx = calloc(n, sizeof(int));
        for (int j = 0; j < n; j++) {
            numsx[j] == nums[j];
        }
        
        if (kjeSmo + i < n) {
            dodatek = rekurzija(sum, numsx, a, b, n, kjeSmo + i, stKorakov + 1);
        }
        sum += dodatek;
    }
    
    for (int i = a; i <= b; i++) {
        int* numsx = calloc(n, sizeof(int));
        for (int j = 0; j < n; j++) {
            numsx[j] == nums[j];
        }
        
        if (kjeSmo - i > -1) { 
            dodatek = rekurzija(sum, numsx, a, b, n, kjeSmo - i, stKorakov + 1);
        }
        sum += dodatek;
    }
    return sum;
}

int main() {

    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);
    
    int* nums = calloc(n, sizeof(int));
    
    int odg = rekurzija(0, nums, a, b, n, 0, 0);
    
    printf("%d\n", odg);
    
}
