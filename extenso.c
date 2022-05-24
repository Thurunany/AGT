#include <stdlib.h>
#include <stdio.h>
#include "agt.h"

/*
    Escreva um programa que lê um número entre um
    e cinco e o imprime por extenso.
*/

int main() {
    int numero;

    print("Digite um número entre 1 e 5:");
    scan(numero);

    switch(numero) {
        case 1: {
            print("Um!");
        } break;
        case 2: {
            print("Dois!");
        } break;
        case 3: {
            print("Três!");
        } break;
        case 4: {
            print("Quatro!");
        } break;
        case 5: {
            print("Cinco!");
        } break;
        default: {
            print("Oops, número inválido!");
        } break;
    }

    return EXIT_SUCCESS;
}
