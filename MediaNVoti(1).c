#include <stdio.h>

int main(){
    int voto, somma = 0, contatore = 0;
    float media;
    do{
        printf("Inserisci un voto (0 per terminare): ");
        scanf("%d", &voto);
        if(voto > 0 && voto <= 10){
            somma += voto;
            contatore++;
        }else if(voto != 0){
            printf("Voto non valido.\n");
        }
    }while(voto != 0);

    media = somma / contatore;
    printf("La media dei voti inseriti è %f\n", media);

    return 0;
}
