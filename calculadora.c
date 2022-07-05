#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

// Escreva um programa em C em duas partes, uma função int digito(int n) que retorna o dígito mais significativo de um número, e uma função main() que solicite um número ao usuário e informe o dígito mais significativo desse número utilizando uma chamada à função definida.

// Exemplo: no número 816, o dígito mais significante é 8.

// Dica: você pode isolar os dígitos de um número usando a divisão inteira e o resto de uma divisão.

int digito(int n){
    while(n>=10){
        n/= 10;
    }
    return n;
}


int main(){
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);

    printf("O digito mais significativo é: %d\n", digito(n));   
    return EXIT_SUCCESS;
}