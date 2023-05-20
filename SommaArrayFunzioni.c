#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void inizializzaArray(int a[], int n);
void stampaArray(int a[], int n);
void sommaArray(int num1[], int num2[], int num3[], int n);

int main() {
    int n;

    printf("Inserisci la lunghezza degli array: ");
    scanf("%d", &n);

    int num1[n], num2[n], num3[n];

    srand(time(NULL));
    inizializzaArray(num1, n);
    inizializzaArray(num2, n);

    printf("\nArray 1: ");
    stampaArray(num1, n);
    printf("\nArray 2: ");
    stampaArray(num2, n);

    sommaArray(num1, num2, num3, n);

    printf("\nArray somma: ");
    stampaArray(num3, n);

    return 0;
}

void inizializzaArray(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        a[i] = rand() % 21 - 10;
    }
}

void stampaArray(int a[], int n) {
    int i;
    printf("[");
    for (i = 0; i < n; i++) {
        printf("%d", a[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("]");
}

void sommaArray(int num1[], int num2[], int num3[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        num3[i] = num1[i] + num2[i];
    }
}