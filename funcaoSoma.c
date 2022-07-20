#include <stdlib.h>
#include <stdio.h>

int soma(int num1, int num2){
    int num3;
    num3 = num1 + num2;
    return num3;
}

int main(){
    
    int total, a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    total = soma(a, b);
    printf("%d\n", total);
    
    return EXIT_SUCCESS;
}
