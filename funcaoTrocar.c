#include <stdio.h>
#include <stdlib.h>

void troca(int *num1, int *num2){
    int aux = *num1;
    *num1 = *num2;
    *num2 = aux;
}


int main(){
    int a,b,resultado;
    scanf("%d", &a);    
    scanf("%d", &b);
    printf("a = %d, b = %d\n", a, b);
    troca(&a, &b);
    printf("a = %d, b = %d\n", a, b);
    return EXIT_SUCCESS;
}
