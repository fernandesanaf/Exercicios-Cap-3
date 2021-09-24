/*
INSTITUTO FEDERAL DO MATO GROSSO DO SUL
Tecnologia em Análise e Desenvolvimento de Sistemas
Ana Flávia de Brito Fernandes    |    Matrícula: 2021206476004-4 
ana.fernandes8@estudante.ifms.edu.br
DATA: 21/09/2021
MATÉRIA: Construção de Algoritmos

5 - faça um algoritmo que leia as respostas de três questões de 
multipla escolha (a, b, c, d). em seguida, leia o gabarito dessas 
respostas, ou seja, as respostas corretas. Depois, compare as 
respostas dadas com as do gabarito e indique quantas respostas 
estão corretas
*/
#include <stdio.h>

int main(){
    char questao1;
    char questao2;
    char questao3;
    char gabarito1;
    char gabarito2;
    char gabarito3;

    printf("COLOQUE A SUA RESPOSTA DA QUESTAO 1:");
    //
    scanf("%c",&questao1);
    //questao1 = getchar();
    printf("COLOQUE A SUA RESPOSTA DA QUESTAO 2:");
    scanf("%c%c",&questao2);
    //questao2 = getchar();
    printf("COLOQUE A SUA RESPOSTA DA QUESTAO 3:");
    scanf("%c%c",&questao3);
    
    
    printf("COLOQUE A SUA RESPOSTA DA QUESTAO 1 DO GABARITO:");
    scanf("%c",&gabarito1);
    //gabarito1 = getchar();
    printf("COLOQUE A SUA RESPOSTA DA QUESTAO 2 DO GABARITO:");
    //
    scanf("%c%c",&gabarito2);
    //gabarito2 = getchar();
    printf("COLOQUE A SUA RESPOSTA DA QUESTAO 3 DO GABARITO:");
    scanf("%c%c",&gabarito3);
    

    if (questao1 == gabarito1 ){
        printf("QUESTAO 1 ESTA CERTA! ");
        }   
    else{
        printf("QUESTAO 1 ESTA ERRADA! "); 
        }
    if (questao2 == gabarito2){
        printf("QUESTAO 2 ESTA CERTA! ");
        }
    else{
        printf("QUESTAO 2 ESTA ERRADA! ");
        }
    if (questao3 == gabarito3){
        printf("QUESTAO 3 ESTA CERTA! ");
        }      
    else{
        printf("QUESTAO 3 ESTA ERRADA! ");
        }
}