#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int dolzina_podzaporedja(int* nums, int x, int y, int n) { 

	// Pregledali smo vse clene zaporedja, ce so morebitni deljitelji
	if (y == n) {
		return 0;
	}

	int a;
	int b;
	int c;

	// Gremo samo na naslednji clen v tabeli in iscemo njegovo podzaporedje
	// Tako bomo preverili podzaporedja z vsemi moznimi zacetnimi cleni
	a = dolzina_podzaporedja(nums, x + 1, y + 1, n);

	// Najdemo indeks deljitelja
	while((nums[x] % nums[y]) != 0 && y < n) {
		y++;
	}

	// Deljitelja vzamemo v podzaporedje
	b = 1 + dolzina_podzaporedja(nums, y, y + 1, n);
	// Deljitelja ne vzamemo v podzaporedje
	c = dolzina_podzaporedja(nums, x, y + 1, n);

	// Preverimo katero podzaporedje je najvecje in ga vrnimo
	if (a > b) {
		if (a > c) {
			return a;
		}
		return c;
	}
	return b;
}

int len(int* nums, int n, int deljenec, int i) {
    
    if (i == n) {
        return 0;
    }
    
    int a, b;
    
    for (int j = i; j < n; j++) {
        if (deljenec % nums[i] == 0) {
            a = 1 + len(nums, n, nums[i], i + 1); // vzamemo stevilo in zamenjamo deljenca
            b = len(nums, n, deljenec, i + 1); // ne vzamemo stevila in pustimo isti deljenec;
            break;
        }
    } 
    
    if (a > b) {
        return a;
    }
    return b;  
}


int main() {

	// Stevilo clenov zaporedja
	int n;
	scanf("%d\n", &n);

	// Array, ki hrani zaporedje
	int* nums = malloc(n*sizeof(int));

	// Shranimo stevila v array
	for (int i = 0; i < n; i++) {
		scanf("%d", &nums[i]);
	}

	// Array uredimo po velikosti od najvecjega do najmanjsega
	int temp;
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			if (nums[i] < nums[j]) {
				temp = nums[i];
				nums[i] = nums[j];
				nums[j] = temp;
			}
		}
	}

	// Izpisemo dolzino najdaljsega podzaporedja
	printf("%d\n", dolzina_podzaporedja(nums, 0, 1, n) + 1);
	printf("%d\n", len(nums, n, nums[0], 0) + 1);
}
