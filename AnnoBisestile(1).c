/* Dato in ingresso un anno, verificare se è bisestile. */

#include <stdio.h>

int main (){
	
	/* Dichiarazione della variabile */
	int year;
	
	/* Inizializzazione della variabile */
	printf("Scrivi un anno:\n");
	scanf("%d", &year);
	
	/* Verifichiamo se l'anno è bisestile */
	
	if ((year % 400 == 0)||((year % 4 == 0) && (year % 100 != 0))) {
		printf("%d e' bisestile.", year);
	} else {
		printf("%d non e' bisestile.", year);
	}
	
	
	
	return 0;	
} 


