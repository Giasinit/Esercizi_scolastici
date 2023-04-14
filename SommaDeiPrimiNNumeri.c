/* Questo esercizio è stato creato nel giorno in cui ero assente dalla lezione di laboratorio. (19/11/22) */

/* Questo programma legge un numero e calcola la somma di tutti numeri compresi tra 1 e il numero letto */

#include <stdio.h>

int main() {

	/* Dichiarazione delle variabili */
	float number, tot;
	
	/* Inizializzazione delle variabili */
	printf("Inserisci un numero: ");
	scanf("%f", &number);
	
	/* Vediamo cosa so fare */
	tot=number;
	while(number>0){
	tot=tot+(number-1);
	number--;
	}
	
	printf("\nIl totale è pari a %f", tot);

}
