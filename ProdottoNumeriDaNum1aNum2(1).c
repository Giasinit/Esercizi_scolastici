/* Dati in ingresso due numeri interi positivi num1 e num2, con num1 < num2, calcolare il prodotto dei numeri da num1 a num2, estremi compresi. */



#include <stdio.h>

int main(){

	/* Dichiarazione delle variabili */
	int calc, num1, num2;
	
	/* Inizializzazione delle variabili */
	printf("Inserisci primo numero intero positivo: ");
	scanf("%d", &num1);
	
	printf("Inserisci secondo numero intero positivo: ");
	scanf("%d", &num2);
	
	/* Vediamo */

	if (num1<num2) {
		calc=num1;
	
		while(num1<num2){
			num1++;
			calc=calc*num1;
		}
		printf("Risultato= %d", calc);
	} else {
		printf("Hai inserito qualcosa di sbagliato :/");
	}
	
return 0;

}