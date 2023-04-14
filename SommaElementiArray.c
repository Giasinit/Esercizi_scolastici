#include <stdio.h>

int main() {
    int array[10];
    int i, somma = 0;

    printf("Inserisci 10 numeri interi:\n");

    for (i = 0; i < 10; i++) {
        scanf("%d", &array[i]);
        somma += array[i];
    }

    printf("Gli elementi dell'array sono:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    printf("\nLa somma degli elementi dell'array e': %d\n", somma);

    return 0;
}
