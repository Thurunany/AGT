#include <stdlib.h>
#include <stdio.h>
#include "agt.h"

int main() {
    int n;
    int i = 0;
    int menor = 0;
    int maior = 0;
    int numeros;

    print("Quantos números você vai digitar?");
    scan(numeros);

    print("Por favor, digite ", numeros, " números:");

    while(i < numeros) {
        scan(n);
        if(i == 0 || n > maior) {
            maior = n;
        }
        if(i == 0 || n < menor) {
            menor = n;
        }
        // Respeitamos uma INVARIANTE: sempre que chegamos nessa linha,
        // as variáveis "maior" e "menor" contém respectivamente o maior
        // e o menor número já visto, independente de quantos foram :)
        i = i + 1;
    }

    print("Diferença do maior pro menor: ", maior - menor);

    return EXIT_SUCCESS;
}
