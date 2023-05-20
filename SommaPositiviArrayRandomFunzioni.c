#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void inizializzazioneArray(int num[], int min, int max, int cap);
void visualizzazioneArray(int num[], int cap);
int sommaVettoriPositivi(int num[], int cap);

int main(){
	
	/* Dichiarazione */
	srand(time(NULL));
	int cap=20, qualcosa[cap];
	
	/* Inizializzazione */
	inizializzazioneArray(qualcosa, -50, +50, cap);
	
	int somma = sommaVettoriPositivi(qualcosa, cap);
	
	/* Visualizzazione */
	visualizzazioneArray(qualcosa, cap);
	
	printf("La somma dei vettori positivi è: %d", somma);
	
	
	
	return 0;
}


void inizializzazioneArray(int num[], int min, int max, int cap){
	
	for(int i=0; i<cap; i++){
		num[i]= rand()%(max-(min)+1)+(min);
	}
}

void visualizzazioneArray(int num[], int cap){
	
	for(int i=0; i<cap; i++){
		printf("%d\n", num[i]);
	}
}

int sommaVettoriPositivi(int num[], int cap){
	int somma=0;
	for(int i=0; i<cap; i++){
		if(num[i]>0){
			somma=somma+num[i];
		}
	}
	return somma;
}
