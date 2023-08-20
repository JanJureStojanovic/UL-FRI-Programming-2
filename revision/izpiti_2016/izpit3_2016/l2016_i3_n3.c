#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool allDiff(int* nums, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && nums[i] == nums[j]) {
                return false;
            }
        }
    }
    return true;
}

void izpis(int* nums, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d", nums[i]);
        if (i != n - 1) {
            printf("->");
        }
    }
    printf("\n");
    return;
}

    
int rek(int* nums, int n, int a, int b, int i, int j) {
    
    if (i < 0 || i >= n) { // Skočimo dol iz kamnov
        return 0;
    }

    if (j == n) {
    izpis(nums, n);
        if (allDiff(nums, n) == true) {
            izpis(nums, n);
            return 0;
        } else {
            
            return 0;
        }
    }
    
    
    
    int c, d;
    
    for (int p = a; p <= b; p++) {
    
        // Dodajamo in odstevamo p;
        int* noviNums1 = calloc(n, sizeof(int));
        int* noviNums2 = calloc(n, sizeof(int));
        
        for (int l = 0; l < n; l++) {
            noviNums1[l] = nums[l];
            noviNums2[l] = nums[l];
        }
        
        noviNums1[j] = i - p;
        noviNums2[j] = i + p;
        
        c = c + rek(noviNums1, n, a, b, i - p, j + 1);
        d = d + rek(noviNums1, n, a, b, i + p, j + 1);
    }
    
    return a + b;
    
}

int main() {

    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);
    
    int* nums = calloc(n, sizeof(int));
    nums[0] = 0;
    int odg = rek(nums, n, a, b, 0, 1);
    
    printf("%d\n", odg);
    
}
