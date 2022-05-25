#include <stdlib.h>
#include <stdio.h>
#include <stdio_ext.h>
#include "agt.h"

int main() {
    float maca, morango, straw, apple, pagar, desconto;
    print("Quantos kg de morangos e macas deseja comprar?")
    scan(morango);
    scan(maca);

    if(morango <= 5){
        straw = morango * 2.5;
    } else{
        straw = morango * 2.2;
    }

    if (maca <= 5){
        apple = maca * 1.80;
    } else {
        apple = maca * 1.50;
    }

    pagar = apple + straw;
    
    if ((morango + maca) > 8 || pagar > 25 ){
        desconto = pagar * 0.9; 
        print("Pagará com desconto! Será: ", desconto);
    } else{
        print("Pagará sem desconto, será: ", pagar);
    } 

    return EXIT_SUCCESS;
}