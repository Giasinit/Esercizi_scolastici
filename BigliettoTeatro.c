/* Programma in C che calcola e visualizza l'importo da pagare per l'ingresso a un teatro sapendo che dal prezzo di ingresso di 12 euro vengono applicati degli sconti */

#include <stdio.h>

int main(){
	
/* Dichiarazione delle variabili */	
int years, much;
float discount, howdiscount;

/* Inizializzazione delle variabili */
printf("Quanti anni hai?\n");
scanf("%d", &years);

/* Vediamo di fare i calcoli */
/* Analizziamo se l'utente ha meno di ANNI 10 */
if(years<11){
	/* L'utente ha meno di 10 anni, quindi ha diritto ad uno sconto del 100% */
	much=100;
} else {
	/* L'utente ha età maggiore a 10 anni, quindi ipotizziamo che non abbia sconti */
	much=0;
	if(years<17){
		/* L'utente ha età minore di 16 e maggiore di 10, quindi ha diritto a 20% di sconto, nelle varie variabili vengono indicate le varie espressioni per calcolare lo sconto */
		much=20;
		howdiscount=0.2*12;
		discount=12-(0.2*12);
	}
	if(years>74){
		/* L'utente ha età maggiore di 75, quindi ha diritto a 50% di sconto, nelle varie variabili vengono indicate le varie espressioni per calcolare lo sconto */
		much=50;
		howdiscount=0.5*12;
		discount=12-(0.5*12);
	}
}

/* Vediamo l'output in caso l'utente non abbia il biglietto gratis(100% di sconto) */
if(much!=100){
	/* l'utente ha meno di 100% di sconto, ora vediamo se ha qualche sconto */
	if (much!=0) {
		/* L'utente ha uno sconto :)*/
		printf("e' stato applicato uno sconto del %d PERCENTO \nquindi hai uno sconto di EURO %f e quindi pagherai EURO %f", much, howdiscount, discount);
	} else {
		/* Mi sa che non ha sconti :( */
		printf("Nessuno sconto applicato\nCi dispiace :(");
	}
} else {
	/* L'utente a quanto pare ha meno di 10 anni, quindi in questo caso ha il biglietto gratis.. che fortuna :D */
	printf("Entri gratis!");	
}

return 0;
}
