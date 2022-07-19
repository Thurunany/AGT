#include <stdlib.h>
#include <stdio.h>

/*
    Escreva uma função que recebe um vetor de 10 elementos,

*/
void inverte(int vetor[], int n) {
    // Percorre o vetor, invertendo a posição dos
    // seus valores
    int i;
    int aux;

    for(i = 0; i < n / 2; i++) {
        // O valor auxiliar recebe o elemento i
        aux = vetor[i];
        
        // Agora trocamos os valores!
        vetor[i] = vetor[9 - i];
        vetor[9 - i] = aux;
    }
}

int main() {
    int i;

    // Declara um vetor de dez elementos!
    int v[10] = {
        42, 51, 66, 72, 13, 55, 80, 37, 10, 03
    };

    // Vamos mostrar todos os elementos do vetor!
    printf("Vetor (antes):");
    for(i = 0; i < 10; i++) {
        printf(" %d", v[i]);
    }
    printf("\n");

    // Chama a função para inverter!
    inverte(v, 10);

    // Vamos mostrar os elementos novamente
    printf("Vetor (atualizado):");
    for(i = 0; i < 10; i++) {
        printf(" %d", v[i]);
    }
    printf("\n");

    return EXIT_SUCCESS;
}
