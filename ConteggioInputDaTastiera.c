/* Leggere da tastiera una serie di numeri inseriti dall'utente. */

#include <stdio.h>

int main(){
	
	/* Dichiarazione della variabili */
	float num;
	int pos=0, neg=0;
	
	/* Inizializzazione speciale */
	do{

		printf("Inserisci un numero:\t");
		scanf("%f", &num);
		if(num>0){
			pos++;
		} else if (num<0) {
			neg++;
		} 
		
	}while(!(num==0));
	printf("i numeri postivi sono %d, mentre quelli negativi sono %d", pos, neg);
	
	
	return 0;	
}
