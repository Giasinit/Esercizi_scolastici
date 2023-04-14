/* Leggere da tastiera una serie di numeri inseriti dall'utente. */

#include <stdio.h>

int main(){
	
	/* Dichiarazione della variabili */
	float num, tot;
	int i=0;
	
	/* Inizializzazione speciale */
	do{

		printf("Inserisci un numero:\t");
		scanf("%f", &num);
		i++;
		tot=tot+num;
		
	}while(!(num==0));
	printf("i numeri postivi sono %d, mentre quelli negativi sono %d", pos, neg);
	
	
	return 0;	
}
