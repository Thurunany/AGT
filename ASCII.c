#include <stdlib.h>
#include <stdio.h>
#include "agt.h"

int main() {
    int i;

    for(i = 32; i <= 126; i = i + 1) {
        // Mostra o caracter na posição i!
        print("O caracter na posição ", i, " é igual a [", (char)i, "]");
    }

    return EXIT_SUCCESS;
}
