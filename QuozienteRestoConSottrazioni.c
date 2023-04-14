/* Dati in ingresso due numeri interi dividendo e divisore, calcolare il quoziente e il resto della divisione intera tra dividendo e divisore */

#include <stdio.h>

int main(){

	/* Dichiarazione delle variabili */
	int dividendo, divisore, i;
	
	/* Inizializzazione delle variabili */
	printf("Inserisci il Dividendo: ");
	scanf("%d", &dividendo);
	
	printf("Inserisci il Divisore: ");
	scanf("%d", &divisore);

	/* Calcoli */
	i=0;
	while(dividendo>=divisore){
		i++;
		dividendo=dividendo-divisore;
	}
	printf("Quoziente: %d, resto: %d", i, dividendo);
	return 0;
}
