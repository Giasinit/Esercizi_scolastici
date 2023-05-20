#include <stdio.h>

int max(int n1, int n2);

int main() {
    int a, b, c, d, e;

    printf("Inserisci il primo numero: ");
    scanf("%d", &a);
    printf("Inserisci il secondo numero: ");
    scanf("%d", &b);
    printf("Inserisci il terzo numero: ");
    scanf("%d", &c);
    printf("Inserisci il quarto numero: ");
    scanf("%d", &d);
	printf("Inserisci il quinto numero: ");
    scanf("%d", &e);

    int massimo = max(max(max(max(a,b),c),d),e);

    // Output del risultato
    printf("Il massimo tra %d, %d, %d , %d e %d è %d", a, b, c, d, e, massimo);

    return 0;
}


int max(int n1, int n2) {
	int n=n2;
	if(n1>n2){
		n=n1;
	}
    return n;
}
