#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int N = 100;

char** pretvori(char tabela[][N], int m) {
    char** konec = malloc(m * sizeof(char*));

    for (int i = 0; i < m; i++) {
        int len = 0;

        // Calculate the length of each row until '0' is encountered
        while (tabela[i][len] != '\0') {
            len++;
        }

        char* tabelca = malloc((len) * sizeof(char));  // +1 for the null terminator

        // Copy the content from the original array to the new dynamic array
        for (int j = 0; j < len; j++) {
            tabelca[j] = tabela[i][j];
        }
        tabelca[len] = '\0';  // Null-terminate the string

        konec[i] = tabelca;
    }

    return konec;  // Return the array of pointers
}

int main() {
    char charArray[3][4] = {
        {'A', 'B', '0', 'D'},
        {'E', '0', 'G', 'H'},
        {'I', 'J', 'K', '0'}
    };

    char** b = pretvori(charArray, 3);

    for (int i = 0; i < 3; i++) {
        printf("%s\n", b[i]);  // Print the dynamically allocated strings
        free(b[i]);  // Free the dynamically allocated memory
    }

    free(b);  // Free the array of pointers

    return 0;
}
