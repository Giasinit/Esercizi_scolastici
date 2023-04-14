/* Dato in ingresso un numero intero, dire se questo è pari o dispari. */

#include <stdio.h>

int main() {

  /* Dichiarazione delle variabili */
  int number;

  /* Numero in input */
  printf("Inserisci il numero: ");
  scanf("%d", & number);

/* Verifica che il numero sia pari, altrimenti dispari */
  if ((number % 2) == 0) {
	/* Blocco del vero */
    printf("Il numero e' pari");
  } else {
	/* Blocco del falso */
    printf("Il numero e' dispari");
  }

  return 0;
}
