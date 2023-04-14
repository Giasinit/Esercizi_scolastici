#include <stdio.h>

int main() {
    int b, e, potenza = 1;
    printf("Inserisci la base: ");
    scanf("%d", &b);
    printf("Inserisci l'esponente: ");
    scanf("%d", &e);
    for (int i = 1; i <= e; i++) {
        potenza *= b;
    }
    printf("%d^%d = %d\n", b, e, potenza);
    return 0;
}
