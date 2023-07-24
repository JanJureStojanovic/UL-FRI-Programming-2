#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main() {

	char* znaki = calloc(1000, sizeof(char));

	char c;
	int i = 0;
	while((c = getc(stdin)) != '\n') {
		znaki[i] = c;
		i++;
	}

	
}