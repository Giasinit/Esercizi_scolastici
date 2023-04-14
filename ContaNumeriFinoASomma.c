#include <stdio.h>

int main() {
    int somma, value, contatore = 0;
    printf("Inserisci la somma massima: ");
    scanf("%d", &somma);
    printf("Inserisci una serie di numeri positivi, termina con un numero maggiore della somma massima:\n");
    scanf("%d", &value);
    while (value <= somma) {
        contatore++;
        scanf("%d", &value);
    }
    printf("Hai inserito %d numeri\n", contatore);
    return 0;
}
