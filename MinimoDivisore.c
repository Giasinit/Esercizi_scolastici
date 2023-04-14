/* Dato in ingresso un numero num intero con num>=2, trovare e visualizzare il più piccolo divisore di num (1 escluso) N.B. NON SI DEVONO VISUALIZZARE TUTTI I DIVISORI DI NUM */

#include <stdio.h>

int main(){

	/* Dichiarazione delle variabili */
	int num, c=2;
	
	/* Inizializzazione delle variabili */
	printf("Inserisci il numero intero che sia maggiore o uguale a 2: ");
	scanf("%d", &num);
	
	/* facimme tuttò */
	while(num%c!=0){
		/* Aggiungiàm */
		c++;
	}
	
	printf("Il piu' piccolo divisore di %d, 1 escluso, e' %d", num, c);
	return 0;
}
