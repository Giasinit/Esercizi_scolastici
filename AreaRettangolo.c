/* QUESTO PROGRAMMA CALCOLA L'AREA DI UN RETTANGOLO IN BASE A DUE INPUT */

#include <stdio.h>
int main()
{
int base, altezza, area;
printf("Inserisci la base: ");
scanf("%d", &base);  

printf("Inserisci l'altezza: ");
scanf("%d", &altezza);

area = base * altezza;
printf("l'area è pari a %d", area);


return 0;
}