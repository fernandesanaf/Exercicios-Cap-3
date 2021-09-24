/*
INSTITUTO FEDERAL DO MATO GROSSO DO SUL
Tecnologia em Análise e Desenvolvimento de Sistemas
Ana Flávia de Brito Fernandes    |    Matrícula: 2021206476004-4 
ana.fernandes8@estudante.ifms.edu.br
DATA: 21/09/2021
MATÉRIA: Construção de Algoritmos

7 - dado um ano d.c, indique se este é um ano bissexto ou não. 
considere que para o ano ser bissexto basta que seja divisivel 
por 400. caso contrário este precisará ser divisivel por 4 e 
não ser divisivel por 100.
*/

#include <stdio.h>

int main(){
    int ano;

    printf("DIGITE O ANO D.C QUE SEJA SABER SE E BISSEXTO: ");
    scanf("%d", &ano);

    if (ano %4==0 && (ano%100!=0 || ano%400==0)) 
    {
        printf("ANO BISSEXTO \n");
    }
    else
        printf("ANO NAO BISSEXTO \n");
}