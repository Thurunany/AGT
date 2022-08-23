#include <stdio.h> 
#include <stdlib.h>

int main(){
  // 3) FUP que leia a idade e mostre maior de idade e menor de idade.
    int idade;
    printf("Qual a sua idade?\n");
    scanf("%d", &idade);
    if(idade < 18){
        printf("Você é menor de idade!\n");
    } else{
        printf("Você é maior de idade!\n");
  return EXIT_SUCCESS;
}
