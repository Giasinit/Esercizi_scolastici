#include <stdio.h>

int main() {
    int num, divisore, conto; // Inizializziamo il divisore a num - 1
    printf("Inserisci un numero intero: \n");
    scanf("%d", &num);
    
    if(num < 2) {
        printf("Errore: deve essere un numero maggiore o uguale a 2. \n");
    } else {
        divisore = num - 1;
        while(num%divisore != 0) { // Continua a decrementare divisore finché non trovi un divisore
            divisore--;
            conto=num/divisore;
            printf("%d", divisore);
        }
        printf("Il piu' piccolo divisore di %d e' %d.\n", num, conto);
    }
    return 0;
}