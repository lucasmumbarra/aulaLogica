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
  printf("|=======Calculadora de Linha de Crédito=======|\n");
  printf("|=============================================|\n");
  printf("\n");
  printf("\n");

  printf("Digite o seu salário: ");
  scanf("%f", &salaryCustomer);
  printf("\n");

  printf("Digite o valor do empréstimo: ");
  scanf("%f", &loanRequested);
  printf("\n");

  loan = salaryCustomer + (salaryCustomer * 0.30);
  grossAmount = salaryCustomer + loanRequested;

  if (grossAmount <= loan) {
    printf("Parabêns seu empréstimo foi aprovado!\n");
    printf("Aproveite o máximo possivel!\n");
  } else {
    printf("Ops! Seu empréstimo não foi concedido!\n");
    printf("O valor solicitado ultrapassou 30%% do seu salário!\n");
  }

  printf("\n");
  printf("Processo encerrado!");
  printf("\n");

  system("pause");

  return 0;
}
