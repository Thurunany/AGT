#include <stdlib.h>
#include <stdio.h>
#include "agt.h"

int main() {
    int primo;
    print("Escreva um número e descobriremos se é primo ou não!");
    scan(primo);

    int i, resultado = 0;
    
    for (i = 2; i <= primo / 2; i++) {
        if (primo % i == 0) {
        resultado++;
        }
    }
    
    if (resultado == 0){
        print(primo, " é um número primo");
    }else{
        print(primo, " não é um número primo");
    }
    return EXIT_SUCCESS;
}