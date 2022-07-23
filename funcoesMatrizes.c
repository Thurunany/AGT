#include <stdio.h>
#include <stdlib.h>

void soma(int matriz1[3][3], int matriz2[3][3], int matrizResultado[3][3], int tamanho){
    int linha, col;
    for(linha=0; linha<tamanho; linha++){
        for(col=0; col<tamanho; col++)
        {
            /* Cij = Aij + Bij */
            matrizResultado[linha][col] = matriz1[linha][col] + matriz2[linha][col];
        }
    }
    printf("\nSoma de matrizes A+B = \n");
    for(linha=0; linha<tamanho; linha++)
    {
        for(col=0; col<tamanho; col++)
        {
            printf("%d ", matrizResultado[linha][col]);
        }
        printf("\n");
    }

}

void valores(int matriz[3][3], int tamanho){
    int linha, col;
    printf("\nInsira os elementos das matrizes= \n");
    for(linha=0; linha<tamanho; linha++)
    {
        for(col=0; col<tamanho; col++)
        {
            scanf("%d", &matriz[linha][col]);
        }
    }
}

int main(){
    int A[3][3];
    int B[3][3];    
    int C[3][3];

    valores(A, 3);
    valores(B, 3);
    soma(A, B, C, 3);
    return EXIT_SUCCESS;
}
