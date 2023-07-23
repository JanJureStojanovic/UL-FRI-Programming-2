#include <stdio.h>

//grd program -> enkrat probaj optimizirat :)

int main() {

    for (int i = 1; i < 1000; i++) {
        for(int j = 1; j < 1000; j++) {
            for(int k = 1; k < 1000; k++) {
                if (i*i + j*j == k*k) {
                    if ((i + j + k) == 1000) {
                        printf("%d\n", i*j*k);
                    }
                }
            }
        }
    }       
}
