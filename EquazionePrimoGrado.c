/* Dati in ingresso i coefficienti a e b di una equazione di primo grado (a*x + b = 0) risolvere l'equazione */

#include <stdio.h>

int main(){

	/* Dichiarazione delle variabili */
	float a, b, x;
	
	/* Inizializzazione delle variabili */
	printf("Inserisci valore 'a':\n");
	scanf("%f", &a);

	printf("Inserisci valore 'b':\n");
	scanf("%f", &b);
	
	/* vediamo l'equazione */
	if((a==0)&&(b==0)) {
		printf("L'equazione e' indeterminata.");
	} else {
		if((a==0)&&(b!=0)) {
				printf("L'equazione e' impossibile.");
		} else {
				x = -b/a;
				printf("La soluzione dell'equazione e' %f", x);
		}
	}

return 0;
}
