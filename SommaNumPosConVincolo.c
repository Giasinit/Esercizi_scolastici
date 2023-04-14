/* Dati in ingresso due numeri >= 0, calcolare la somma dei due numeri e visualizzare il risultato in output. */

#include <stdio.h>

int main(){
	
	/* Dichiarazione della variabili */
	int num1, num2, output;
	
	/* Inizializzazione speciale */
	do{

		printf("Inserisci il primo numero >=0 :\t");
		scanf("%d", &num1);
		
	}while(!(num1>=0));
	do{

		printf("Inserisci il secondo numero >=0 :\t");
		scanf("%d", &num2);
		
	}while(!(num2>=0));
	
	
	output=num1+num2;
	
	printf("%d", output);
	
	
	return 0;	
}
