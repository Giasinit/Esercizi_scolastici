/* Questo programma calcola il fattoriale */

#include <stdio.h>

int main() {
  // Legge il valore di n dall'input
  int n;
  printf("Inserisci il valore di n: ");
  scanf("%d", &n);

  // Inizializza la variabile risultato a 1
  int risultato = 1;

  // Calcola il fattoriale di n utilizzando un ciclo for
  for (int i = 1; i <= n; i++) {
    risultato = risultato * i;
  }

  // Stampa il risultato
  printf("%d! = %d\n", n, risultato);

  return 0;
}
