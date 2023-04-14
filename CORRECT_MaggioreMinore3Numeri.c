/* Dati in input 3 numeri, determinare e mostrare in output il maggiore e il minore. */

#include <stdio.h>

int main(){
	
/* Dichiarazione delle variabili */
float first, second, third, min, max;

/* Inizializzazione delle variabili */
printf("Inserire il primo numero\n");
scanf("%f", &first);

printf("Inserire il secondo numero\n");	
scanf("%f", &second);

printf("Inserire il terzo numero\n");	
scanf("%f", &third);	

	
/* vediamo chi è maggiore */

if(first>second){
	max= first;
	min= second;
} else {
	max= second;
	min= first;
}

if (third>max) {
	max= third;	
} else {
	if(third<min){
	min=third;	
	}
}

printf("\"Maggiore: %f\"\n\"Minore: %f\"", max, min);

return 0;
}
