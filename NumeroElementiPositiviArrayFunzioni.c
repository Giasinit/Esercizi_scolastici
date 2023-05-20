#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int calcolaNumeroElementiPositivi(int valori[], int n);


int main(){

	/* Dichiarazione */
	srand(time(NULL));
	int cap, max=+15, min=-15;
	
	/* Inserimento capienza da parte dell'utente */
	do{
		printf("Inserisci la capienza che deve essere maggiore di 0: ");
		scanf("%d", &cap);
	
	}while(!(cap>0)); /* La capienza deve essere maggiore di 0, altrimenti il programma non prosegue */
	
	int num[cap];

	inizializzazioneArray(num, min, max, cap);
	
	int elementiPostivi = calcolaNumeroElementiPositivi(int num[], int cap);
	
	return 0;
}


int calcolaNumeroElementiPositivi(int valori[], int n){
	int somma=0;
	
	for(int i=0; i<n; i++){
		if(valori[i]>0){
			somma++;
		}
	}
	
	return somma;
}

void inizializzazioneArray(int valori[], int min, int max, int n){
	
	for(int i=0; i<n; i++){
		valori[i]= rand()%(max-(min)+1)+(min);
	}
}
