// Um funcionário tem uma jornada de trabalho de 40 horas semanais. 
// Caso o funcionário trabalhe mais que 40 horas, ele receberá 
// hora extra, cujo valor é o seu valor hora com um acréscimo de 50%. 
// Escreva um algoritmo, em C, que leia o número de horas trabalhas
// em um mês (considere o mês como tendo exatamente 4 semanas) e o
// salário por hora, 
// e escreva o valor total que o funcionário irá receber, contando
// o bônus para as horas extras, caso tenham sido trabalhadas.
#include <stdlib.h>
#include <stdio.h>
#include "agt.h"

// 40 hrs por semana = 160 horas por mês
int main() {
    int horas;
    int salario;
    int extrahoras;
    int extra;

    print("Trabalhou quantas horas este mês?")
    scan(horas);

    print("Qual é o seu salário por hora?")
    scan(salario);

    if(horas <= 160){
        print("O valor total que irá receber é: ", salario * horas);
    } else{
        extrahoras = horas - 160;
        extra = salario * 1.5;
        print("Recebeu bonus! Receberá: ", (salario * 160) + (extrahoras * extra));
    }

  return EXIT_SUCCESS;
}
