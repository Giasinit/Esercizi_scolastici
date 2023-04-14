/* QUESTO PROGRAMMA CHIEDE AL UTENTE GLI ANNI CHE HA E LO VISUALIZZA IN OUTPUT */

#include <stdio.h>
int main()
{
    
/* Le variabili */
int eta;
/* Richiesta età al utente */
printf("Inserisci la tua età: ");
/* prendiamo i dati dell'utente */
scanf("%d", &eta);  
/* Printiamo gli anni che ha :) */
printf("Hai ben %d anni.\nFantastico! :)", eta);


return 0;
}