/*
INSTITUTO FEDERAL DO MATO GROSSO DO SUL
Tecnologia em Análise e Desenvolvimento de Sistemas
Ana Flávia de Brito Fernandes    |    Matrícula: 2021206476004-4 
ana.fernandes8@estudante.ifms.edu.br
DATA: 21/09/2021
MATÉRIA: Construção de Algoritmos

2 - faça um algoritmo que leia um numero inteiro e diga se este é 
positivo, negativo ou zero. utilize a sequencia de comandos se 
encadeados
*/
#include <stdio.h>

int main(){
    int numero;

    printf("digite o numero: ");
    scanf("%d", &numero);
    if(numero == 0)
        printf("numero igual a zero");
    else if(numero >0)
        printf("numero positivo");
    else
        printf("numero negativo"); 
}