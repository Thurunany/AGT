#include <stdio.h> 
#include <stdlib.h>

int main(){
  // 2) FUP que lê 2 inteiros e mostre: a)soma b)subtração c)divisão inteira d)resto da divisão.
    int a, b, escolha;
    printf("Digite dois números.\n");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("Escolha: 1-soma, 2-subtração 3-divisão inteira 4-resto da divisão. \n");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        printf("A soma é: %d \n", a + b);
        break;
    case 2:
        printf("A subtração é: %d \n", a - b);
        break;
    case 3:
        printf("A divisão inteira é: %d\n", a / b);
        break;
    case 4:
        printf("O resto da divisão é: %d\n", a % b);
        break;
    default:
        break;
    }
  return EXIT_SUCCESS;
}
