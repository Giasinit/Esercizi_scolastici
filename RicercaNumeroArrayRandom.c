#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int array[20];
    int i, num, posizione;

    // Inizializza il generatore di numeri casuali
    srand(time(NULL));

    // Inizializza l'array con numeri casuali compresi fra -25 e +40
    for (i = 0; i < 20; i++) {
        array[i] = rand() % 66 - 25;
    }

    // Chiede in ingresso un numero compreso fra -25 e +40
    do {
        printf("Inserisci un numero compreso fra -25 e +40: ");
        scanf("%d", &num);
    } while (num < -25 || num > 40);

    // Cerca la posizione della prima occorrenza del numero nell'array
    posizione = -1;
    for (i = 0; i < 20; i++) {
        if (array[i] == num) {
            posizione = i;
            break;
        }
    }

    // Visualizza la posizione della prima occorrenza del numero nell'array
    if (posizione == -1) {
        printf("Il numero non e' presente nell'array.\n");
    } else {
        printf("Il numero e' presente nella posizione %d dell'array.\n", posizione);
    }

    return 0;
}
