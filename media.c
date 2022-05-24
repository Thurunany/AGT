#include <stdlib.h>
#include <stdio.h>
#include "agt.h"

/*
    Fazer um programa que solicite três notas ao
    usuário, calcule sua méedia, e informe se o
    aluno foi aprovado ou não.
*/

int main() {
    // Vamos declarar as variáveis necessárias!
    float nota1;
    float nota2;
    float nota3;
    float media;

    // Solicita as notas ao usuário
    print("Por favor, digite as três notas:");

    // Lê as notas
    scan(nota1);
    scan(nota2);
    scan(nota3);

    // Vamos calular a média
    media = (nota1 + nota2 + nota3) / 3.0;

    // O aluno foi aprovado?
    if(media >= 7.0) {
        print("Você foi aprovado com nota ", media, "!");
    } else {
        print("Você tirou ", media, " e infelizmente reprovou.");
    }

    // Concluímos com êxito
    return EXIT_SUCCESS;
}
