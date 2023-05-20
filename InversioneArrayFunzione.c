#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void init_array(int arr[], int dim);
void print_array(int arr[], int dim);
void reverse_array(int arr[], int dim);

int main() {
    int dim;

    printf("Inserisci la dimensione dell'array: ");
    scanf("%d", &dim);

    int arr[dim];

    srand(time(NULL));  // inizializzazione del generatore di numeri casuali

    init_array(arr, dim);

    printf("Array originale: ");
    print_array(arr, dim);

    reverse_array(arr, dim);

    printf("Array invertito: ");
    print_array(arr, dim);

    return 0;
}

void init_array(int arr[], int dim) {
    int i;
    for (i = 0; i < dim; i++) {
        arr[i] = rand() % 20 + 1;
    }
}

void print_array(int arr[], int dim) {
    int i;
    printf("[");
    for (i = 0; i < dim; i++) {
        printf("%d", arr[i]);
        if (i < dim - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}

void reverse_array(int arr[], int dim) {
    int i, temp;
    for (i = 0; i < dim / 2; i++) {
        // scambio l'elemento i-esimo con l'elemento (dim - i - 1)-esimo
        temp = arr[i];
        arr[i] = arr[dim - i - 1];
        arr[dim - i - 1] = temp;
    }
}