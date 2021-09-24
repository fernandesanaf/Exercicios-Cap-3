/*
INSTITUTO FEDERAL DO MATO GROSSO DO SUL
Tecnologia em Análise e Desenvolvimento de Sistemas
Ana Flávia de Brito Fernandes    |    Matrícula: 2021206476004-4 
ana.fernandes8@estudante.ifms.edu.br
DATA: 21/09/2021
MATÉRIA: Construção de Algoritmos

3 - faça um algoritmo que datermine se um dado numero é par ou impar
 (utilize o operador resto: <dividendo>resto:<divisor>, que 
 retorna o resto da divisão inteiro de <dividendo>/<divisor>)
*/
#include <stdio.h>

int main(){
    int numero;

    printf("digite o numero: ");
    scanf("%d", &numero); 
    if ((numero % 2)== 0)
        printf("o numero par");
    else
        printf("o numero impar");
};