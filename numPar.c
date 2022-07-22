#include <stdlib.h>
#include <stdio.h>

int pares(int v[10]){
    int i;
    int pares = 0;
    for(i=0; i<10; i++){
        if(v[i] % 2 == 0){
            pares++;
        }else{

        }
    }
    return pares;
}

int main(){
    int vetor[10] = {1,2,3,4,5,6,7,8,9,10};

    printf("Tem %d pares nesta lista.\n", pares(vetor));
    return EXIT_SUCCESS;
}