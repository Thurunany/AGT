#include <stdlib.h>
#include <stdio.h>

/*
    Faça um programa que solicita dez elementos ao usuário,
    e então mostre esses elementos em ordem crescente.
*/

//
// Primeiramente, vamos fazer uma função que encontra a
// posição do maior número em um vetor!
//
int maior(int v[], int tamanho) {
    // Vamos assumir que o PRIMEIRO elemento é o maior!
    int i;
    int m = 0;

    // Agora vamos percorrer o vetor procurando
    for(i = 0; i < tamanho; i++) {
        // O item na posição i é maior que o da posição m?
        if(v[i] > v[m]) {
            // Opa, o maior não era m, era i!
            m = i;
        }
    }

    // Percorremos todo o vetor, sabemos da resposta!
    return m;
}

//
// Vamos agora fazer uma função auxiliar que recebe um
// vetor, DUAS posições nele, e então troque os valores
// das duas posições!
//
void troca(int v[], int i, int j) {
    // Vamos usar um valor temporário!
    int aux = v[i];

    // Agora podemos trocar!
    v[i] = v[j];
    v[j] = aux;
}

//
// Finalmente, podemos juntar as duas funções acima para
// ordenar uma lista!
//
void ordenar(int v[], int tamanho) {
    int i;
    int m;
    
    for(i = tamanho; i > 0; i--) {
        // Estamos trabalhando com o subvetor de 0 até i!
        // Quem é o menor elemento entre 0 e i?
        m = maior(v, i);

        // Agora podemos colocar o m no final do subvetor,
        // e continuar o processo! Usamos i - 1 porque i é
        // o tamanho do vetor, então o último elemento é
        // igual a i - 1
        troca(v, m, i - 1);
    }
}

//
// Uma função auxiliar para imprimir o vetor!
//
void imprime(int v[], int tamanho) {
    int i;
    
    printf("Vetor:");
    for(i = 0; i < tamanho; i++) {
        printf(" %d", v[i]);
    }
    printf("\n");
}

int main() {
    int i;
    int vetor[10];

    // Solicita a entrada!
    printf("Digite dez números:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    // Imprime os dados originais
    imprime(vetor, 10);

    // Ordena e imprime de novo :)
    ordenar(vetor, 10);
    imprime(vetor, 10);

    return EXIT_SUCCESS;

}
