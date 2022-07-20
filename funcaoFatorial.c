#include <stdlib.h>
#include <stdio.h>

int fatorial(int numero){
    int i = 1;
    int resultado = 1;

    while(i<numero){
        i = i + 1;
        resultado = resultado * i;

        printf("Fatorial(%d) = %d\n", i, resultado);
    }
    return resultado;
}

int main(){
    int num;
    scanf("%d", &num);
    printf("O fatorial de [%d], é [%d]\n", num, fatorial(num));
    return EXIT_SUCCESS;
}
