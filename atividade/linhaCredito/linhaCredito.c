/*Name project: calculoEmprestimo.c
 * Author: Lucas Santos Mumbarra
 * RA: N034JB3
 * Date: 09/09/2022
 * Description: Calculate employee loan
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

  setlocale(LC_ALL, "Portuguese");

  float salaryCustomer, loanRequested, loan, grossAmount;

  printf("\n");
  printf("|=============================================|\n");
  printf("|=======Calculadora de Linha de Credito=======|\n");
  printf("|=============================================|\n");
  printf("\n");
  printf("\n");

  printf("Digite o seu salario: ");
  scanf("%f", &salaryCustomer);
  printf("\n");

  printf("Digite o valor do emprestimo: ");
  scanf("%f", &loanRequested);
  printf("\n");

  loan = salaryCustomer + (salaryCustomer * 0.30);
  grossAmount = salaryCustomer + loanRequested;

  if (grossAmount <= loan) {
    printf("Parabens seu emprestimo foi aprovado!\n");
    printf("Aproveite o maximo possivel!\n");
  } else {
    printf("Ops! Seu emprestimo nao foi concedido!\n");
    printf("O valor solicitado ultrapassou 30%% do seu salario!\n");
  }
  
  printf("\n");
  printf("Processo encerrado!");
  printf("\n");

  system("pause");

  return 0;
}