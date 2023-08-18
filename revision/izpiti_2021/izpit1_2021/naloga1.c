#include <stdio.h>
#include <stdlib.h>

int main() {

    char file_path[101];
    
    scanf("%100s", file_path);

    FILE *file = fopen(file_path, "rb");
    if (file == NULL) {
        printf("File not found\n");
        return 1;
    }

    long long_value;
    short short_value;

    if (fread(&long_value, sizeof(long), 1, file) == 1) {
        printf("1\n"); // It's a long
    } else {
        printf("0\n"); // It's a short
    }

    fclose(file);
    return 0;
}
