#include <stdio.h>

int main() {
    int capienza;
    float somma = 0;
    printf("Inserisci la capienza dell'array: ");
    scanf("%d", &capienza);
    float temperature[capienza];
    for (int i = 0; i < capienza; i++) {
        printf("Inserisci la temperatura rilevata %d: ", i+1);
        scanf("%f", &temperature[i]);
        somma += temperature[i];
    }
    float media = somma / capienza;
    printf("La temperatura media è: %.2f\n", media);
    return 0;
}

