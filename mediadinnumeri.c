/* Questo  programma calcola la media dei numeri da 1 a n */

#include <stdio.h>

int main(){

	/* Dichiarazione delle variabili */
	int num, i, calc;
	float media;
	i=0;
	calc=0;
	
	/* Inizializzazione delle variabili */
	printf("Inserisci un numero intero e positivo: ");
	scanf("%d", &num);

	/* Calcoli */
	while(i<num){
		i++;
		calc=calc+i;
	}
	media=(float)calc/num;
	printf("La media %f", media);

	return 0;

}
