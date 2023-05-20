#include <stdio.h>

int mcd(int n, int m);

int main() {
    int a, b, c, d;

    // Input dei 4 numeri interi e positivi
    printf("Inserisci il primo numero: ");
    scanf("%d", &a);
    printf("Inserisci il secondo numero: ");
    scanf("%d", &b);
    printf("Inserisci il terzo numero: ");
    scanf("%d", &c);
    printf("Inserisci il quarto numero: ");
    scanf("%d", &d);

    // Calcolo del MCD utilizzando la regola MCD(a, b, c, d) = MCD(MCD(MCD(a, b), c), d)
    int mcd_ab = mcd(a, b);
    int mcd_abc = mcd(mcd_ab, c);
    int mcd_abcd = mcd(mcd_abc, d);

    // Output del risultato
    printf("Il MCD di %d, %d, %d e %d è %d", a, b, c, d, mcd_abcd);

    return 0;
}

// Funzione per calcolare il MCD tra due numeri utilizzando l'algoritmo di Euclide
int mcd(int n, int m) {
    while (n != m) {
        if (n > m) {
            n = n - m;
        } else {
            m = m - n;
        }
    }
    return n;
}
