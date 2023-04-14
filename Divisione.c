/* Dati in ingresso due numeri con la virgola, effettuare la divisione tra di essi verificando che il denominatore non sia uguale a 0. */

#include <stdio.h>

int main(){
	
	
/* Dichiarazione delle variabili */	
float one, two, check;

/* inizializzazione delle variabili */	
printf("Indica il primo numero:\n");
scanf("%f", &one);

printf("Indica il secondo numero:\n");
scanf("%f", &two);

/* Proviamo a fare la divisione */
if (two != 0) {
	check=one/two;
	printf("Il denominatore non e' pari zero\nanche se non e' stato richiesto il risultato e' %f", check);
} else { 
	printf("Mi dispiace, il secondo numero e' pari a ZERO, ti ricordo che e' impossibile dividere un numero per 0."); 
}
	
	
	
}
