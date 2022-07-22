#include <stdlib.h>
#include <stdio.h>

int fact(int n){
    int i = 1;
    int resultado = 1;

    while(i<n){
        i = i + 1;
        resultado = resultado * i;

        printf("Fatorial(%d): %d\n", i, resultado);
    }
    return resultado;
}


int main(){
    int fatorial;
    printf("Escreva seu numero: \n");
    scanf("%d", &fatorial);

    printf("O fatorial é %d\n",fact(fatorial));
    return EXIT_SUCCESS;
}