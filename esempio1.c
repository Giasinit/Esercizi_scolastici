#include <stdio.h>

int main()
{
	int num, divisore = 2, trovato = 0;
	
	printf("Inserisci un numero intero maggiore o uguale a 2: ");
	scanf("%d", &num);
	
	while ((divisore < num) && (trovato == 0)) {
		if (num % divisore == 0) {
			trovato = 1;
			printf("Il più piccolo divisore di %d e' %d\n", num, divisore);
		}
		divisore++;
	}
	
	return 0;
}