/* Dato in ingresso un carattere che indica la nazionalità di una persona, comunicare un saluto nella sua lingua. */

#include <stdio.h>

int main() {
	
	/* Dichiarazione della variabile */
	char nazionalita;
	
	/* Inizializzazione della variabile */
	printf("Da quale paese provieni?\nScegli la lettera che corrisponde alla tua nazionalita \nI = italiano \nE = inglese \nF = francese\n\nAttento alla MAIUSCOLA\n");
	scanf("%c", &nazionalita);

	/* Controllo della lingua */
	if (nazionalita == 'I') {
		/* Ramo del vero; Sappiamo che è Italiano */
		printf("\nCiao!");
	} else {
		/* Ramo del falso; Sappiamo che non è Italiano */
		if (nazionalita == 'E') {
		/* Ramo del vero; Sappiamo che è British */
			printf("\nHi!");
		} else {
			/* Ramo del Falso; Sappiamo che non è British, Magari è Francese */
			if (nazionalita == 'F') {
				printf("\nSalut!");
			} else {
				/* Ramo del falso, Avrà sbagliato a digitare la maiuscola.. */
				printf("\nCarattere non valido.\n");
				printf("Spero tu abbia sbagliato a digitare :D\nRiesegui il programma\n\n\nAh si.. ATTENTO ALLE MAIUSCOLE\n\nTi Aspetto.");
			}
		} 
	}
	
	return 0;
}
