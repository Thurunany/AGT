#include <stdlib.h>
#include <stdio.h>

// Escreva um programa, em C, em duas partes: uma função float calcula(int o, float x, float y), que se comporta de acordo:

//     Se o for 0, retorne a soma de x e y
//     Se o for 1, retorne a subtração de x e y
//     Se o for 2, retorne a multiplicação de x e y
//     Se o for 3, retorne a divisão de x e y
//     Caso contrário, retorne 0

// ...e uma função main(), que receberá três valores (um inteiro e dois floats) do usuário, e informará o resultado da chamada da função calcula() com esses valores ao usuário.

float calcula(int o, float x, float y){
    switch (o){
        case 0:{
            return x + y;
        } break;
        case 1:{
            return x - y;
        } break;
        case 2:{
            return x * y;
        } break;
        case 3:{
            return x / y;
        } break;
        default: {
            return 0;
        }break;
    }
}



int main(){

    int opcao;
    float valor1;
    float valor2;

    printf("Digite uma opção (0 - soma, 1 - subtrai, 2 - multiplica, 3 - divide): ");
    scanf("%d", &opcao);
    printf("Digite dois números:\n");
    scanf("%f", &valor1);
    scanf("%f", &valor2);

    printf("O resultado é [%f]!\n", calcula(opcao, valor1, valor2));



    return EXIT_SUCCESS;

}
