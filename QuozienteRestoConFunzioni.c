#include <stdio.h>

int calcolaQuoziente(int dividendo, int divisore);
int calcolaResto(int dividendo, int divisore);
int main() {
  int numero1, numero2, quozientz, resto;
  printf("Inserisci un numer 2\n");
  scanf("%d", & numero1);
  scanf("%d", & numero2);
  quozientz = calcolaQuoziente(numero1, numero2);
  resto = calcolaResto(numero1, numero2);
  printf("%d", quozientz);
  printf("\n%d", resto);
  return 0;
}

int calcolaQuoziente(int dividendo, int divisore) {
  int quoziente = 0;
  int resto = dividendo;
  while (divisore <= resto) {

    resto = resto - divisore;
    quoziente++;
  }
  return quoziente;
}
int calcolaResto(int dividendo, int divisore) {
  int resto = dividendo;
  while (divisore <= resto) {

    resto = resto - divisore;
  }
  return resto;

}