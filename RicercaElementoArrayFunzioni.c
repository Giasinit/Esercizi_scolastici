/* Ricerca di un elemento in un array */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// dichiarazione prototipo della funzione
int ricercaElemento(int num[], int n, int elem);

int main() {
    int n; // capienza dell'array
    int elem; // elemento da cercare
    int trovato; // risultato della ricerca
    int i; // indice di scorrimento dell'array

    // input della capienza dell'array
    do {
        printf("Inserisci la capienza dell'array (positiva): ");
        scanf("%d", &n);
    } while (n <= 0);

    // dichiarazione e inizializzazione dell'array con numeri casuali tra +5 e +20
    int num[n];
    srand(time(NULL));
    for (i = 0; i < n; i++) {
        num[i] = rand() % 16 + 5;
    }

    // output dell'array
    printf("Array generato con numeri casuali tra +5 e +20:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", num[i]);
    }
    printf("\n");

    // input dell'elemento da cercare
    printf("Inserisci l'elemento da cercare: ");
    scanf("%d", &elem);

    // ricerca dell'elemento nell'array
    trovato = ricercaElemento(num, n, elem);

    // output del risultato della ricerca
    if (trovato == -1) {
        printf("L'elemento %d non e' presente nell'array.\n", elem);
    } else {
        printf("L'elemento %d e' presente nell'array all'indice %d.\n", elem, trovato);
    }

    return 0;
}

// definizione della funzione di ricerca dell'elemento nell'array
int ricercaElemento(int num[], int n, int elem) {
    int i; // indice di scorrimento dell'array

    for (i = 0; i < n; i++) {
        if (num[i] == elem) { // elemento trovato
            return i;
        }
    }
    return -1; // elemento non trovato
}