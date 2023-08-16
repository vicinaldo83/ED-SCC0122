/*ListaPonteiro.c*/

#include <stdio.h>

int main() {
    int size = 5,
        arr[] = {1, 2, 3, 4, 5},
        *m;
        
    int i;
    for (m=arr, i = 0; i < size; i++, m++) {
        printf("Valor: %d - Ponteiro: %p\n", *m, m);
    }

    return 0;
}