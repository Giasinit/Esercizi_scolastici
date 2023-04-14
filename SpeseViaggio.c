/* SPESE DI VIAGGIO, Il programma fornisce in output il costo per persona del viaggio. */

#include <stdio.h>

int main() {
  /* Initial */
  float cost, litri, autostrada, people, onepeople;

  /* Costo Benzina */
  printf("Prezzo del carburante: ");
  scanf("%f", & cost);

  /* Litri Consumati */
  printf("Litri Consumati: ");
  scanf("%f", & litri);

  /* Costo Autostrada */
  printf("Costo Autostrada: ");
  scanf("%f", & autostrada);

  /* Numero di persone */
  printf("Numero di persone: ");
  scanf("%f", & people);

  /* Formula costo per persona */
  onepeople = (cost * litri + autostrada) / people;

  /* Output con il printf */
  printf("Prezzo del carburante: %f euro/litro\nLitri consumati: %f litri\nCosto dell'autostrada: %f euro\nCosto per persona: %f euro", cost, litri, autostrada, onepeople);

  return 0;
}
