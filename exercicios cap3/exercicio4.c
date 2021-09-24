/*
INSTITUTO FEDERAL DO MATO GROSSO DO SUL
Tecnologia em Análise e Desenvolvimento de Sistemas
Ana Flávia de Brito Fernandes    |    Matrícula: 2021206476004-4 
ana.fernandes8@estudante.ifms.edu.br
DATA: 21/09/2021
MATÉRIA: Construção de Algoritmos

4 - faça um algoritmo que simule uma calculadora com quatro operaçoes
 basicas. o algoritmo deve solicitar ao usuario a entrada de dois
  operandos e da operação a ser executada, na forma de um menu. 
  dependendo da opção escolhida, deve executadar a operação 
  solicitada e escrito seu resultado. Utilize uma variavel 
  caractere para armazenar a operação e utilize o comando caso 
  para escolher a operação a ser executada a partir do operador
*/
#include <stdio.h>

int main(){
  
  float numero1;
  float numero2;
  float resultado;
  char operacao;

  printf("DIGITE O PRIMEIRO NUMERO: ");
  scanf("%f", &numero1);
  printf("DIGITE O SEGUNDO NUMERO: ");
  scanf("%f", &numero2);
// eu acho mais bonito o menu primeiro :)

  printf("\n\n|**************MENU**************|\n");
  printf("|(+) para SOMA*******************|\n");
  printf("|(-) PARA SUBTRACAO**************|\n");
  printf("|(/) PARA DIVISAO****************|\n");
  printf("|(*) PARA MULTIPLICACAO**********|\n");
  printf("|********************************|\n");
  printf("|*ESCOLHA A OPERACAO QUE DESEJA:*|\n");
  printf("  ");
  getchar();
  operacao = getchar();

  switch(operacao){
    case '+' : resultado = numero1 + numero2; break;
    case '-' : resultado = numero1 - numero2; break;
    case '*' : resultado = numero1 * numero2; break;
    case '/' : if (numero2 == 0){
      printf("nao e possivel dividir por 0 \n");
      return -1;
    }
    resultado = numero1 / numero2; break;
    default : printf("Invalida! \n");
    return 0;
  }
  printf("RESULTADO: %f", resultado); 
}