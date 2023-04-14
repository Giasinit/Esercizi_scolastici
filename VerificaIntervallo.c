/* Dato in ingresso un numero, dire se è compreso o no nell'intervallo [1, 10] */

#include <stdio.h>


int main() {
	
	/* Dichiarazione della variabile */
	float number;
	
	/* Inizializzazione della variabile*/
	printf("Inserisci un numero:\n");
	scanf("%f", &number);
	
	/* Vediamo se è compreso */
	if ((number>0)&&(number<11)) {
		/* è compreso :D */
		printf("Il numero %f e' compreso nell'intervallo [1, 10]", number);
	} else {
		/* Non è compreso :( */
		printf("Il numero %f NON e' compreso nell'intervallo [1, 10]", number);	
	}
	
	
return 0;	
}
