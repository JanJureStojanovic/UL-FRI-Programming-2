#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main() {
    // St. nivojev nasega drevesa
    int n;
    scanf("%d", &n);
    int stEl = (1 << n) - 1;
    
    int* nums = malloc(stEl*sizeof(int));
    
    int* izpis = calloc(stEl, sizeof(int));
    
    for (int i = 0; i < stEl; i++) {
        scanf("%d", &nums[i]);
    }
    
    // Prvo stevilo bo vedno enako prvemu prebranemu stevilu;
    izpis[0] = nums[0]
    
    // Sprememba
    
}



