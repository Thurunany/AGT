#include <stdlib.h>
#include <stdio.h>

/*
    Faça um programa que solicita dez elementos ao usuário,
    e então mostre esses elementos em ordem decrescente.
*/

// achar o menor numero
int menor(int v[], int tamanho){
    int i;
    int m=0;
    for (i=0; i < tamanho; i++){
        if (v[i] < v[m]){
            m = i;
        }
    }
    return m;
}

//Função para substituir os numeros

void substituir(int v[], int menor, int numero){
    int aux = v[menor];

    v[menor] = v[numero];
    v[numero] = aux;

}


//Função para ordernar
void ordernar(int v[], int tamanho){
    int i, m;

    for(i=tamanho; i > 0; i--){
        m = menor(v, i);
        substituir(v, m, i - 1);
    }


}


// Função para imprimir o vetor
void imprime(int v[], int tamanho){
    int i;

    printf("Vetor: ");
    for(i=0; i < tamanho; i++ ){
        printf(" %d", v[i]);
    }
    printf("\n");
}


int main(){
    int vetor[10];
    int i;
    for(i=0; i < 10; i++){
        scanf("%d", &vetor[i]);
    }
    imprime(vetor, 10);
    ordernar(vetor, 10);
    imprime(vetor, 10);


    return EXIT_SUCCESS;
}
