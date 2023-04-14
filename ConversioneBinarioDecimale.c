/* Dato in ingresso un numero binario, convertire tale numero in decimale. Supporre che il numero inserito dall'utente sia composto delle sole cifre 0 e 1. */

#include <stdio.h>
#include <math.h>

int main(){

	/* Dichiarazione delle variabili */
	int num, resto, potenza, calcoli;
	
	/* Inizializzazione delle variabili */
	printf("Inserisci il numero binario: ");
	scanf("%d", &num);
	
	calcoli=0;
	resto=0;
	potenza=0;
	while(num>0){
		resto=num%10;
		num=num/10;
		calcoli=calcoli+(resto*pow(2,potenza));
		potenza++;
	}
	printf("%d", calcoli);

	return 0;
}
