/* QUESTO PROGRAMMA CALCOLA L'AREA DI UN RETTANGOLO IN BASE A DUE INPUT */

#include <stdio.h>
int main()
{
/* Indicazioni delle variabili, P.S. sono numeri interi :D */    
int base, altezza, area;

/* La base del rettangolo */
printf("Inserisci la base: ");
scanf("%d", &base);  

/* L'altezza del rettangolo */
printf("Inserisci l'altezza: ");
scanf("%d", &altezza);

/* La formula */
area = base * altezza;

/* Print del risultato (senza unità di misura) */
printf("l'area è pari a %d", area);


return 0;
}