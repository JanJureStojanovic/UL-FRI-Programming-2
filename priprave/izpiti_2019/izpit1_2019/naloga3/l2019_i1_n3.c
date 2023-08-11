#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main() {

	int n;
	scanf("%d", &n);

	int a = 1;
	int b = 1;
	int c = 1;

	for (int i = n; i > 0; i--) {
		a *= i;
	}

	for (int i = n/2 + 1; i > 0; i--) {
		b *= i;
	}

	for (int i = n/2; i > 0; i--) {
		c *= i;
	}

	printf("%d\n", a/(c*b));
}