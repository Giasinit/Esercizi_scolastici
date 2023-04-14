#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int array[20];
    int i, somma;

    // Inizializza il generatore di numeri casuali
    srand(time(NULL));

    // Inizializza l'array con numeri casuali compresi fra -50 e +50
    for (i = 0; i < 20; i++) {
        array[i] = rand() % 101 - 50;
    }

    // Calcola la somma dei soli elementi positivi dell'array
    somma = 0;
    for (i = 0; i < 20; i++) {
        if (array[i] > 0) {
            somma += array[i];
        }
    }

    // Visualizza il contenuto dell'array e la somma calcolata
    printf("Contenuto dell'array:\n");
    for (i = 0; i < 20; i++) {
        printf("%d ", array[i]);
    }
    printf("\nSomma dei soli elementi positivi: %d\n", somma);

    return 0;
}
