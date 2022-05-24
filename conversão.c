#include <stdlib.h>
#include <stdio.h>
#include <stdio_ext.h>
#include "agt.h"

int main() {
    float temperatura;
    char unidade;

    print("Digite a temperatura:");
    scan(temperatura);

    // Precisamos limpar o buffer!
    __fpurge(stdin); // <-- No Linux!
    // fflush(stdin); // <-- No Windows!

    print("Você digitou em (c)elsius ou (f)ahrenheit?");
    scan(unidade);

    switch(unidade) {
        case 'c': {
            print("A temperatura em Fahrenheit é ", temperatura * 9.0 / 5.0 + 32);
        } break;
        case 'f': {
            print("A temperatura em Celius é ", (temperatura - 32) * 5.0 / 9.0);
        } break;
        default: {
            print("Você digitou algo inválido!");
        } break;
    }

    return EXIT_SUCCESS;
}
