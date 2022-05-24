#include <stdlib.h>
#include <stdio.h>
#include "agt.h"

/*
    Fazer um programa, em C, que solicite ao usuário
    dois números, e, em seguida, apresente a soma e
    a multiplicação deles.
*/

int main() {
    // Vamos declarar nossas variáveis!
    int a;
    int b;
    int soma;
    int multiplicacao;

    // Solicita os dados ao usuário!
    print("Digite dois números:");

    // Lê os dados do terminal!
    scan(a); // Lê um valor e salva em a
    scan(b); // Lê um valor e salva em b

    // Faz as operações!
    soma = a + b;
    multiplicacao = a * b;

    // Informa o resultado ao usuário
    print("A soma de ", a, " e ", b, " é ", soma);
    print("A multiplicação de ", a, " e ", b, " é ", multiplicacao);

    // Termina com sucesso
    return EXIT_SUCCESS;
}
