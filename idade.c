#include <stdlib.h>
#include <stdio.h>
#include "agt.h"

/*
    Fazer um programa que solicite ao usuário sua
    idade, e informe se o usuário é maior de idade
    ou não.
*/

int main() {
    // Declaramos nossas variáveis
    int idade;

    // Solicita a entrada
    print("Por favor, diga sua idade:");

    // Lê a idade do teclado
    scan(idade);

    // Nosso usuário é maior de idade?
    if(idade >= 18) {
        if(idade < 100) {
            print("Parabéns, você é maior de idade!");
        } else {
            print("Você já é um ancião!");
        }
    } else {
        print("Você ainda não pode beber!");
    }

    // Termina com sucesso
    return EXIT_SUCCESS;
}
