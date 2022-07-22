#include <stdlib.h>
#include <stdio.h>

void transformar(int vetor1[], int vetor2[]){
    int i;
    int aux;
    for(i = 0; i < 10; i++) {
        vetor2[9 - i] = vetor1[i];
    }
}

int main(){
    int i;
    int vetor1[10];
    int vetor2[10];
    printf("Digite 10 numeros: \n");
    for(i=0; i<10; i++){
        scanf("%d", &vetor1[i]);
    }
    transformar(vetor1, vetor2);
    printf("Este é o segundo vetor: \n");
    for(i = 0; i < 10; i++) {
        printf(" %d", vetor2[i]);
    }
    printf("\n");
    return EXIT_SUCCESS;
}