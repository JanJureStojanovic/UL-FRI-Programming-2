#include <stdio.h>
#include <math.h>

void print_prefixed_order(int *tree, int index, int size) {
    
    if (index >= size) {
        return;
    }

    printf("%d", tree[index]);

    int left_child = 2 * index + 1;
    int right_child = 2 * index + 2;

    print_prefixed_order(tree, left_child, size); // Nadaljujemo po levi strani
    print_prefixed_order(tree, right_child, size); // Nadaljujemo po desni strani
    
    // Ker vsakic najprej nadaljujemo po levi strani bo najprej izpisana leva stranica
}

int main() {

    int k;
    scanf("%d", &k);

    int num_elements = pow(2, k) - 1;
    int tree[num_elements];

    for (int i = 0; i < num_elements; i++) {
        scanf("%d", &tree[i]);
    }

    print_prefixed_order(tree, 0, num_elements);
    printf("\n");

    return 0;
}

