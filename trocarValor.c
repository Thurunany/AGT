#include <stdlib.h>
#include <stdio.h>

void troca(int *a, int *b) {
  int aux = *a;
  *a = *b;
  *b = aux;
}

int main() {
  
    int x = 42;
    int y = 51;
  
    printf("Antes: [%d, %d]\n", x, y);
    troca(&x, &y);
    printf("Depois: [%d, %d]\n", x, y);

    return EXIT_SUCCESS;
}
