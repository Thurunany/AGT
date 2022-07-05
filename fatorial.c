#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

// Escreva um programa em C em duas partes, com uma função int fatorial(int n) que retorne o fatororial de n, e uma função main() que solicite ao usuário um número e, chamando a função, informe o fatorial desse número.

// Apenas lembrando, o fatorial de n é a multiplicação de todos os números entre 1 e n, então, por exemplo, o fatorial de 5 é igual a 1 * 2 * 3 * 4 * 5, ou seja, 120.

int fatorial(int n){
    int i = 1;
    int resultado = 1;

    while(i<n){
        i = i + 1;
        resultado = resultado * i;

        printf("Fatorial(%d) = %d\n", i, resultado);
    }
    return resultado;
}


int main(){
    int n;
    printf("Digite um número:\n");
    scanf("%d", &n);

    printf("O fatorial de [%d] é [%d]!\n", n, fatorial(n));

    return EXIT_SUCCESS;
}