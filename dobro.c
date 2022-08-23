#include <stdio.h> 
#include <stdlib.h>

int main(){
// 1) FUP que leia um numero inteiro e mostre o dobro.
    int numero;
    printf("Digite um número.\n");
    scanf("%d", &numero);
    printf("O dobro de %d é %d.\n", numero, 2*numero);
  return EXIT_SUCCESS;
}
