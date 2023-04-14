/* Leggere da tastiera una serie di numeri positivi inseriti dall'utente. */

#include <stdio.h>

int main(){
	float number, max=0;
	char letter;

	do{
		/* Inseriamo il nostro numero */
		printf("Inserisci un numero: ");
		scanf("%f", &number);
	
		/* Verifichiamo se l'utente vuole continuare */
		printf("\nPerfetto, vuoi continuare? digita 'S' altrimenti 'N' :");
		scanf(" %c", &letter);
	
	
		if(number>0){  /* Verifichiamo se il numero è positivo */
			if (number>max){  /* Verifichiamo se il numero è maggiore al massimo precedente */
				max=number;
			}
		}
	
	} while((letter!='N') && (letter!='n') );
	
	printf("\nIl valore massimo inserito e' %f", max);

	return 0;
}
