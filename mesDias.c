#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include "agt.h"

int main() {
    int mes;

    print("Escolha um dos 12 meses do ano.");
    scan(mes);
    while(mes < 1 | mes > 12){
        print("Este mês não existe! Escolha um valido!");  
        scan(mes); 
    }

    switch(mes){
        case 2: {
            print("Este mês tem 28 dias");
        } break;
        case 4:
        case 6:
        case 9:
        case 11: {
            print("Este mês tem 30 dias");
        } break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: {
            print("Este mês tem 31 dias");
        } break;
    }



    return EXIT_SUCCESS;
}