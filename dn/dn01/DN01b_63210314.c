#include <stdio.h>
#include <stdbool.h>

int main() {

    int a = getchar();
    int numLength = 0; 
    int stEnk = 0;
    bool initiated = false;
    //counting the length of the binary number ---> getting the log2
    while (a == '0' || a == '1') { 
        if (a == '1') {
            initiated = true;
            stEnk++;
        }
        if (initiated == true) {
            numLength++;
        }
        a = getchar();
    }
    
    //ce imamo samo eno 1-ko, potem je dolzina binarnega st. njegova log2 vrednost
    if (stEnk == 1) {
        numLength--;
    }
    
    //obrnemo stevilo, da ga lazje outputamo s putchar()   
    int j = 0;
    while (numLength != 0) {
        j *= 10;
        j += numLength % 10;
        numLength /= 10;
    }
    
    //output
    int i;
    while (j != 0) {
        i = j % 10;
        j /= 10;
        putchar(i + '0');
    }
    
    putchar('\n');
}

