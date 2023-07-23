#include <stdio.h>
#include <stdbool.h>

int main() {
    
    int n;
    scanf("%d\n", &n);
    
    int najPodzaporedje = 0;
    int podzaporedje = 0;
    int najvecji = -1000000;
    
    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        
        if(podzaporedje < 0) {
			podzaporedje = 0;
		}
		
		podzaporedje += num; 
		
		if(podzaporedje >= najPodzaporedje) {
			najPodzaporedje  = podzaporedje;
		}
		
		if (num > najvecji) {
		    najvecji = num;
		}
    }
    
    if (najPodzaporedje == 0) {
        printf("%d\n", najvecji);
    } else {
        printf("%d\n", najPodzaporedje);
    }
}


