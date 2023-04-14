#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int array[20];
    int i;

    // Inizializza il generatore di numeri casuali
    srand(time(NULL));

    // Inizializza l'array con numeri casuali compresi fra 0 e 10
    for (i = 0; i < 20; i++) {
        array[i] = rand() % 11 - 0;
    }

    // Visualizza il contenuto dell'array
    printf("Contenuto dell'array:\n");
    for (i = 0; i < 20; i++) {
        printf("%d ", array[i]);
    }
   
    return 0;
}
