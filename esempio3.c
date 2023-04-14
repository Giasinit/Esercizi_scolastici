#include <stdio.h>

int main(){
  int num;
  int i = 2;
  printf("Inserisci un numero intero maggiore di 2: ");
  scanf("%d",&num);
  
  while(num % i != 0)
  {
    i++;
  }
  
  printf("Il piu' piccolo divisore di %d e' %d\n",num, i);
  
  return 0;
}