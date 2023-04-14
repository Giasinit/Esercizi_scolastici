/*  algoritmo di Euclide per il calcolo del massimo comune divisore (MCD) e del minimo comune multiplo (mcm) */

#include <stdio.h>

int main(){

	/* Dichiarazione delle variabili */
	int a, b, t, mcd, mcm, num1, num2;
	
	/* Inizializzazione delle variabili */
	printf("Inserisci il primo numero: ");
	scanf("%d", &num1);
	
	printf("Inserisci il secondo numero: ");
	scanf("%d", &num2);
	
	/* Vediamo di capire */
	/* usiamo un metodo */
	a = num1;
	b = num2;

	while (b != 0) {
		t = b;
		b = a%b;
		a = t;
	}
	mcd = a;
	mcm = (num1*num2)/mcd;
	num1=mcd;
	
	printf("il MCD e' %d\n", num1);
	printf("Il mcm e' %d\n", mcm);
	return 0;
}
