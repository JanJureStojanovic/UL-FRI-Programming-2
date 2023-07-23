/*

3. Kazalci in tabele

int i, int* pi;
i = *pi; <--- dereferenciranje
pi = &i; <--- referenciranje (določanje vrednosti kazalca, kazalec kaže na to spremenljivko)

Alternativa: uporabimo dve funkciji ...
void *malloc(size_t, size); <--- nekje v polnilniku (na kopici) nam priskrbi blok določene velikosti == dodeljevanje
void free(void *pointer); <--- ko ne potrebujemo več zgornjega bloka prostora ... == sprostimo prostor

int ih, int* pih;                   (h -> heap)
pih = (int*)malloc(sizeof(int));    sizeof(int) = 4 <--- 4 bytes, (int*) = typecast
*pih = 77; <--- na kopici je 77
ih = 13; <--- na skladu je 13
free(pih);

Primer prekomerne porabe pomnilnika (če ni uporabljen free ...):

int f(int n) {
    int *p = (int*)malloc(sizeof(int));
    *p = 77;
    n = *p + n;
    free(p);
    return n;
}

int main() {
    
    for (int i = 0; i < 100000000; i++) {
        printf("%d\n", f(i));
    }
}

---> TABELE
oboje deluje:

int a[100];
for (int i = 0; i < 100; i++) b
    a[i] = i * 2;
}

int primes[10] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29}

int* p;
p = &primes[0] <--- dodelimo na naslov prvega int-a


*/
