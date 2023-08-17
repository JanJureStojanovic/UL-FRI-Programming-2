#include <stdio.h>
#include <stdbool.h>

#include <limits.h>
#define MEJA 10e17L

unsigned long long int invert(unsigned long long int num) {

    unsigned long long int inverted = 0;
    
    while(num > 0) {
        inverted *= 10;
        inverted += num % 10;
        num /= 10;
    }
    
    return inverted;
}

bool palindrom(unsigned long long int stevilo) {
	return (invert(stevilo) == stevilo);
}

bool jeLychrelovo(unsigned long long int stevilo, int stI) {
    
	for(int i = 0; i < stI && stevilo < 2*MEJA; i++) {
	    stevilo += invert(stevilo);
	    if (palindrom(stevilo) == true) {
	        return false;
	    }
	}
	return true;
}

int main() {

	int stI;
	int spMeja;
	int zgMeja;
	scanf("%d %d %d", &stI, &spMeja, &zgMeja);
 	int stL = 0;
 	
	for (unsigned long long int i = spMeja; i <= zgMeja; i++) {
		if (jeLychrelovo(i, stI)) {
			stL++;
		}
	}

	printf("%d\n", stL);
}


