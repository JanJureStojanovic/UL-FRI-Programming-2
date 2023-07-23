/*

[Resitev iz discorda]

#include<stdio.h>

int integ(int c) {
    int a = 0;
    while (c >= '0' && c <= '9') {
        a = a*10 + (c - '0');
        c = getchar();
    }
    return a;
}

void izpis(int vsota) {
    if(vsota != 0) {
        izpis(vsota/10);
        putchar((vsota%10)+'0');
    }
}

int main() {
    int vsota = 0;
    int berem = getchar();
    while (berem >= '0' && berem <= '9' || berem == '-') {
        if (berem == '-') {
            vsota -= integ(getchar());
        }
        if (berem >= '0' && berem <= '9') {
            vsota += integ(berem);
        }
        berem = getchar();
    }

    if (vsota < 0) {
        putchar('-');
        vsota =- vsota;
    }
    izpis(vsota);
    putchar('\n');
    return 0;
}

*/

#include <stdio.h>

int main() {

    int x = 0;
    int y = 0;
    int neg = 1;
    
    int a = getchar();
    
    while (a >= '0' && a <= '9' || a == '-') {
        if (a == '-') {
            neg *= -1;
            a = getchar();
        }
        x = x*10 + (a - '0');
        a = getchar();
    }
    
    x *= neg;
    neg = 1;
    
    int b = getchar();
    
    while (b >= '0' && b <= '9' || b == '-') {
        if (b == '-') {
            neg *= -1;
            b = getchar();
        }
        y = y*10 + (b - '0');
        b = getchar();
    }
    
    y *= neg;
    
    //printf("%d\n", x);
    //printf("%d\n", y);
    
    int vsota = x + y;
    
    if (vsota < 0) {
        putchar('-');
        vsota *= -1;
    }
    
    int j = 0;
    while (vsota != 0) {
        j *= 10;
        j += vsota % 10;
        vsota /= 10;
    }
    
    int i;
    while (j != 0) {
        i = j % 10;
        j /= 10;
        putchar(i + '0');
    }
    
    putchar('\n');
}
            
    
