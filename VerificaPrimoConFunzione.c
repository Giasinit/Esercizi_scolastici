/* Questo programma verifica se un numero è pari attraverso una funzione */

#include <stdio.h>
#define volte 3

int isPrimo(int numero);

/* Non è stato richiesto, ma voglio comunque provare :D */
int main(){
    int numeroDalUtente[volte];
    
    for(int i=0; i<volte; i++){
        printf("Inserisci un numero: ");
        scanf("%d", &numeroDalUtente[i]);
    
        if(isPrimo(numeroDalUtente[i])==1) {
            printf("Il numero e' primo\n");
        } else { 
            printf("Il numero NON e' primo\n");
        }
    }

    return 0;
}


int isPrimo(int numero){
    for(int i=2; i<=numero/2; i++) {
        if(numero%i == 0) {
            return 0;
        }
    }
    return 1;
}
