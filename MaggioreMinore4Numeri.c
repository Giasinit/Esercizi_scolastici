/* Dati in input 3 numeri, determinare e mostrare in output il maggiore e il minore. */

#include <stdio.h>

int main(){
	
/* Dichiarazione delle variabili */
float first, second, third;

/* Inizializzazione delle variabili */
printf("Inserire il primo numero\n");
scanf("%f", &first);

printf("Inserire il secondo numero\n");	
scanf("%f", &second);

printf("Inserire il terzo numero\n");	
scanf("%f", &third);	

	
/* vediamo chi è maggiore */

if (first > second) {
	if(first > third) {
	printf("\"Maggiore: %f\"\n", first);
	} else {
	printf("\"Maggiore: %f\"\n", third);
	}
} else {
	if(second>first) {
		if(second>third){
		printf("\"Maggiore: %f\"\n", second);
		} else {
		printf("\"Maggiore: %f\"\n", third);
		}
	} else { 
	printf("\"Maggiore: %f\"\n", first);
	}
}


/* vediamo chi è minore */

if (first < second) {
	if(first < third) {
	printf("\"Minore: %f\"\n", first);
	} else {
	printf("\"Minore: %f\"\n", third);
	}
} else {
	if(second<first) {
		if(second<third){
		printf("\"Minore: %f\"\n", second);
		} else {
		printf("\"Minore: %f\"\n", third);
		}
	} else { 
	printf("\"Minore: %f\"\n", first);
	}
}

return 0;
}
