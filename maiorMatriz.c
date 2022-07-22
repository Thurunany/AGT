#include <stdlib.h>
#include <stdio.h>
int maiores(int matriz[4][4], int n){
    int maiores = 0;
    int i, j;
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++){
            if(matriz[i][j] > n){
                maiores++;
            }
        }
    }
    return maiores;
}

int main(){
    int i, j, numero = 0;
    int matriz[4][4];
    printf("Digite sua matriz: \n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Qual número deseja compara?\n");
    scanf("%d", &numero);

    printf("Existem %d numeros maiores que %d nesta matriz! \n", maiores(matriz, numero), numero);

    return EXIT_SUCCESS;
}