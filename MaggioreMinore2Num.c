/* Dati in ingresso due numeri, comunicare in output qual è il maggiore e qual è il minore. */

#include <stdio.h>

int main(){
	
/* Dichiarazione delle variabili */
float num1, num2;

/* Inizializzazione delle variabili */
printf("Inserire il primo numero\n");
scanf("%f", &num1);

printf("Inserire il secondo numero\n");	
scanf("%f", &num2);	
	
/* vediamo chi è maggiore */

if (num1 > num2) {
	printf("\"Maggiore: %f\"\n\"Minore: %f\"", num1, num2);
} else {
	printf("\"Maggiore: %f\"\n\"Minore: %f\"", num2, num1);
}

return 0;
}
