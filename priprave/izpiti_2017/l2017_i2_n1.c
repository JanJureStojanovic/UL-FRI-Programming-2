#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    
    int* num = calloc(1001, sizeof(int));
    
    char x = getchar();
    int i = 0;
    
    while(x != ' ') {
        num[i] = x - '0';
        i++;
        x = getchar();
    }

    int n;
    scanf("%d", &n);
    
    int l = i;
    
    while(i >= 1) {
        num[i] = num[i-1];
        i--;
    }
    num[i] = 0;
    
    /*
    for (int i = 0; i <= l; i++) {
        printf("%d", num[i]);
    }   
    */
    
    // Imamo vse nastimano, gremo mnoziti
    int dodatek = 0;
    int j = l;
    while(j >= 0) {
        int x = (num[j]*n)%10;
        int y = (num[j]*n)/10;
        num[j] = (x + dodatek)%10;
        dodatek = y + (x + dodatek)/10;
        j--;
    }
    
    for (int i = 0; i <= l; i++) {
        if (i == 0 && num[i] == 0) {
            continue;
        } else {
            printf("%d", num[i]);
        }
    }
    printf("\n");
     
}
