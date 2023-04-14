/* Questo programma verifica se un numero è pari attraverso una funzione */

#include <stdio.h>
#define volte 3

int isPari(int numero);

int main(){
    int numeroDalUtente[volte];
    
    /* Si, abbastanza complicato XD */
    for(int i=0; i<volte; i++){
        printf("Inserisci un numero: ");
        scanf("%d", &numeroDalUtente[i]);
    
        if(isPari(numeroDalUtente[i])==1) {
            printf("Il numero e' pari\n");
        } else { 
            printf("Il numero e' dispari\n");
        }
    }

    return 0;
}


int isPari(int numero){
    /* Ho scelto questo sistema per differenziarmi dalla massa :D */
    if (numero%2==0){
        return 1;
    } else {
        return 0;
    }
}