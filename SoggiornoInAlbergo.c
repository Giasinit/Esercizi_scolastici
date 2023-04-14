/* Questo programma calcola il prezzo del soggiorno in un albergo */

#include <stdio.h>

int main() {
	
/* Dichiarazione delle variabili */
char period, type, correct; 
int days;
float price;

/* Inizializzazione delle variabili */
printf("Seleziona il Periodo:\n'A' = Alta stagione\n'B' = Bassa stagione\n");
scanf("%c", &period);

printf("Seleziona il tipo di camera:\n'S' = singola\n'D' = doppia\n'T' = tripla\n");
scanf(" %c", &type);

printf("Numero di giorni di Pernottamento\n");
scanf("%d", &days);


/* Vediamo i prezzi :D */

if (period == 'A') {

	if(type == 'S') { 
		price=50; 
	} else if (type == 'D') { 
		price=90; 
	} else if (type == 'T') {
		price=140; 
	} else { 
		correct='n'; 
		printf("Hai sbagliato a selezionare tipo"); 
	}
	
} else if (period == 'B') {

	if(type == 'S') { 
		price=40; 
	} else if (type == 'D') { 
		price=75; 
	} else if (type == 'T') { 
		price=110; 
	} else { 
		correct='n'; 
		printf("Hai sbagliato a selezionare tipo");  
	}
		
} else {
	correct='n'; 
	printf("Hai sbagliato a selezionare periodo e/o tipo/giorni");
}


if (correct != 'n') { 
	price= price*days;

	if(days>7){
		price = price-(price*0.05);
	}

	printf("Il prezzo del soggiorno e' di EURO %f", price);

}

return 0;
}
