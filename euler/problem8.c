#include <stdio.h>

int main() {

    //za belezenje produkta
    long long product;
    long long maxProduct = 0;
    
    //array za vsa stevila
    int nums[1000];
    int a;
    
    for (int i = 0; i < 1000; i++) {
        a = getchar();
        if (a >= 48 || a <= 57) { 
            nums[i] = a - 48;
        } else {
            i--;
            continue;
        }
    }
    
    printf("\n");
    
    for (int k = 0; k < 1000; k++) {
        printf("%d", nums[k]);
        if ((k + 1) % 50 == 0) {
            printf("\n");
        }
    }
    
    printf("\n");
    
    for (int j = 0; j <= 987; j++) {
        product = 1;
        
        //zmnozimo  13 zaporednih stevil, imamo 987 trinajstk ... 
        for (int k = j; k < j + 13; k++) {
            product *= nums[k];
        }
        
        if (product >= maxProduct) {
            maxProduct = product;
        }
    }
    
    printf("%lld\n", maxProduct);
}

