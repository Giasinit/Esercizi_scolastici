/* Questo programma fa conteggio dei valori dispari di un array con elementi random */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define NUMERO 20

int main(){
    int unArray[NUMERO];
    int min = 7, max = 81, conteggio = 0;

    // Inizializzazione del generatore di numeri casuali
    srand(time(NULL));

	/* Inizializzazione dell'array */
	for(int i=0; i<NUMERO; i++)
	{
		unArray[i]=rand()%(max-(min)+1)+(min);
        /* Conteggio di numeri dispari */
        if(unArray[i]%2==1){
            conteggio++;
        }
    }

    /* output di numeri dispari */
    printf("Il numero di numeri dispari è: %d", conteggio);

    return 0;
}