/*
INSTITUTO FEDERAL DO MATO GROSSO DO SUL
Tecnologia em Análise e Desenvolvimento de Sistemas
Ana Flávia de Brito Fernandes    |    Matrícula: 2021206476004-4 
ana.fernandes8@estudante.ifms.edu.br
DATA: 21/09/2021
MATÉRIA: Construção de Algoritmos

6 - faça um algoritmo que leia tres valores que reprsentam os lados 
de um triangulo. primeiramente, verifique se os lados podem formar 
um triangulo (a soma de dois lados não pode ser menor que o terceiro
lado). caso possa formar um triangulo, indique se este é 
equilátero, isóceles ou escaleno.
*/

#include <stdio.h>

int main(){
    float lado1;
    float lado2;
    float base;

    printf("DIGITE O PRIMEIRO LADO DO TRIANGULO: ");
    scanf("%f", &lado1);
    printf("DIGITE O SEGUNDO LADO DO TRIANGULO: ");
    scanf("%f", &lado2);
    printf("DIGITE A BASE DO TRIANGULO: ");
    scanf("%f", &base);
    if (lado1 + lado2 < base){
            printf("A SOMA DOS LADOS NAO PODE SER MENOR QUE A BASE!!");}
    else
        if (lado1 == lado2 & lado1 != base){
        printf("TRIANGULO ISOCELES");
        }

        if (lado1 == lado2 & lado1 == base & lado2 == base){
            printf("TRIANGULO EQUILATERO");
        }

        
        if (lado1 != lado2 & lado1 != base & lado2 != base){
            printf("TRIANGULO ESCALENO");
        }
}