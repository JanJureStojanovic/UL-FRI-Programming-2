#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {

    int* st = calloc(1000, sizeof(int));
    
    int i = 0;
    
    char x = getchar();
    while(x != ' ') {
        st[i] = x - '0';
        i++;
        x = getchar();
    }
    
    int del;
    scanf("%d", &del);
    
    int prejsnje = 0;
    int currDeljenec;
    int output;
    for (int j = 0; j < i; j++) {
        currDeljenec = st[j] + prejsnje;
        if (currDeljenec == 0) {
            printf("0");
            continue;
        }
        if (currDeljenec < del) {
            currDeljenec *= 10;
            j++;
            currDeljenec += st[j];
        }
        output = currDeljenec/del;
        printf("%d", output);
        prejsnje = (currDeljenec%del)*10;         
    }
    printf("\n");
}
