#include <stdio.h>
#include <stdlib.h>

// Função para achar numeor pares e impares

int dividir(int numero){
    return(numero & 1);
}

int main(){
    int num;
    scanf("%d", &num);
    if(dividir(num)){
        printf("Numero é impar\n");
    }else{
        printf("Numero é par\n");
    }

    return EXIT_SUCCESS;
}
