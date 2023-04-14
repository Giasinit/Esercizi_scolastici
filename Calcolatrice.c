/* Dati in input due numeri e il simbolo di un'operazione fra le quattro possibili (addizione, sottrazione, moltiplicazione e divisione), visualizzare il risultato. */

#include <stdio.h>

int main() {

/* Dichiarazione delle variabili */
float one, two, result;
char math;

/* Inizializzazione delle variabili */
printf("indicare il primo numero\n");
scanf("%f", &one);

printf("indicare il secondo numero\n");
scanf("%f", &two);

printf("indicare il simbolo della operazione\n");
scanf(" %c", &math);

/* Svolgiamo l'operazione */
if (math == '+'){
	result=one+two;
} else if (math == '-') {
	result=one-two;
} else if (math == '/') {
	result=one/two;
} else if (math == '*') {
	result=one*two;
} else {
	printf("Hai inserito qualcosa di sbagliato :/\nRiprova!");
	/* Qua terminiamo il programma */
	return 0;
}

printf("Il risultato e' %f", result);

return 0;
}

