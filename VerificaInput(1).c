/* Dato in ingresso un numero compreso fra -100 e 100 (estremi inclusi), calcolarne il doppio e visualizzare in output il risultato. */

#include <stdio.h>

int main(){
	
	/* Dichiarazione della variabili */
	int num, output;
	
	/* Inizializzazione speciale */
	do{

		printf("Inserisci un numero compreso tra -100 e 100:\t");
		scanf("%d", &num);
		
	}while(num<=-100 || num >=100);
	
	
	output=num*2;
	
	printf("%d", output);
	
	
	return 0;	
}
