#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "functions.h"

int main(){
  int opcao;
  do{
    printf("\t\t\t\#--------------------------------------------------------------#\n");
    printf("\t\t\t\|-------------------- CALCULO DE MATRIZES: --------------------|\t\t\n");
    printf("\t\t\t|Escolha uma das opções abaixo:                                |\n", setlocale(LC_ALL,""));
    printf("\t\t\t|1-Soma de duas matrizes.                                      |\n");
    printf("\t\t\t|2-Determinante de uma matriz e matriz singular.               |\n");
    printf("\t\t\t|3-Multiplicação de duas matrizes.                             |\n", setlocale(LC_ALL,""));
    printf("\t\t\t|4-Solução de um sistema linear.                               |\n", setlocale(LC_ALL,""));
    printf("\t\t\t|--------------------------------------------------------------|\n");
    printf("\t\t\t\#--------------------------------------------------------------#\n");
    scanf("%d", &opcao);
    printf("\n");

    system("CLS");

    if(opcao < 1 || opcao > 4){
        printf("\t\t\tOpção inválida, escolha novamente.\n\n", setlocale(LC_ALL,""));
    }
    if(opcao == 1){
      soma();
    }
    if(opcao == 2){
    determinante_matriz();
    }
    if(opcao == 3){
      multiplicacao();
    }
    if(opcao == 4){
      sistemaLinear();
      }

  }while(opcao < 1 || opcao > 4);

return 0;
}
