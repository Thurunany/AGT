#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int vetor[10] = {1,2,3,4,5,6,7,8,9,10};
    int i;
    double somatoria = 0;

    for(i=0; i<10; i++){
        somatoria += pow((vetor[i]-vetor[19-i]), 2);
    }

    printf("%f", somatoria);
    return EXIT_SUCCESS;
}
