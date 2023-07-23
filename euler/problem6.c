#include <stdio.h>

/*

Sum of n consecutive numbers: (n*(n + 1))/2

Sum of n consecutive squares: (n*(n + 1)*(2*n + 1))/2

*/

int main() {
    
    int x = (100*101*201)/6;
    int y = ((100*101)/2)*((100*101)/2);
    
    int z = y - x;
    
    printf("%d\n", z);
}
