/* Questo programma converte le temperature mediante funzione */

#include <stdio.h>

float conversioneTemperatura(float tempCelsius, char sistema);

int main(){
    char sistemaConv;
    float gradi;

    printf("Dimmi una temperatura in gradi Celsius: ");
    scanf("%f", &gradi);

    printf("\nDimmi in che sistema lo convertiamo?\nF: Fahrenheit\nK: Kelvin\n");
    scanf(" %c", &sistemaConv);

    if( ((sistemaConv == 'K') || (sistemaConv == 'k') || (sistemaConv == 'F') || (sistemaConv == 'f')) ){
        float risulato = conversioneTemperatura(gradi, sistemaConv);
        printf("La temperatura convertita e': %f °%c", risulato, sistemaConv);
    } else {
        printf("Qualcosa è andato storto :/, riesegui");
    }
}

float conversioneTemperatura(float tempCelsius, char sistema){
    if(sistema=='K' || sistema=='k'){
        tempCelsius += 273.15;
    } else { /* è logico che qui ci sarà solo il Fahrenheit*/
        tempCelsius = (tempCelsius * 9/5) + 32;
    }
    return tempCelsius;
}