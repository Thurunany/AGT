#include <stdio.h>
#include <stdlib.h>
int main(){
    int A[3][3];
    int B[3][3];    
    int C[3][3];
    int linha, col;
    printf("Coloque os valores da matriz A: \n");
     
    for(linha=0; linha<3; linha++)
    {
        for(col=0; col<3; col++)
        {
            scanf("%d", &A[linha][col]);
        }
    }

    printf("Coloque os valores da matriz B: \n");
    for(linha=0; linha<3; linha++)
    {
        for(col=0; col<3; col++)
        {
            scanf("%d", &B[linha][col]);
        }
    }

     for(linha=0; linha<3; linha++)
    {
        for(col=0; col<3; col++)
        {
            /* Cij = Aij + Bij */
            C[linha][col] = A[linha][col] + B[linha][col];
        }
    }

    printf("\nSum of matrices A+B = \n");
    for(linha=0; linha<3; linha++)
    {
        for(col=0; col<3; col++)
        {
            printf("%d ", C[linha][col]);
        }
        printf("\n");
    }

    return EXIT_SUCCESS;
}
