#include <stdlib.h>
#include <stdio.h>
#include <stdio_ext.h>
#include "agt.h"

int main() {
    int km, l, consumo;
    print("Quantos km foram corridos?");
    scan(km);
    print("Quantos litros foram consumidos?");
    scan(l);

    consumo = (km / l);
    if(consumo < 8){
        print("VENDA O CARRO!");
    } else
    if(consumo >= 8, consumo <=14) {
        print("Carro economico!");
    } else
    if (consumo > 14){
        print("Carro super econômico!");
    }


    return EXIT_SUCCESS;
}