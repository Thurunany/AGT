#include <stdlib.h>
#include <stdio.h>

int square(int num){
    int resultado;
    resultado = num * num;
    return resultado;
}

int main(){
    int quadrado, num;
    scanf("%d", &num);
    quadrado = square(num);
    printf("%d\n", quadrado);
    return EXIT_SUCCESS;
}
