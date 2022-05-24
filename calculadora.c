#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include "agt.h"

int main() {
    int a, b, op;

    print("Me diga dois números!");
    scan(a);
    scan(b); 
    print("Qual operação deseja realizar?  1.Adição, 2.Subtração, 3.Divisão, 4.Multiplicação");
    scan(op);
    while(op < 1 | op > 4){
        print("Número errado! Escreva dnv! Qual operação deseja realizar?  1.Adição, 2.Subtração, 3.Divisão, 4.Multiplicação");  
        scan(op); 
    }
    
    switch(op){
        case 1: {
            print("A soma é: ", a + b);
        }break;
        case 2: {
            print("A subtração é: ", a - b);
        }break;
        case 3: {
            print("A divisão é: ", a / b);
        }break;
        case 4: {
            print("A multiplicação é: ", a * b);
        }break;
    }

  return EXIT_SUCCESS;
}