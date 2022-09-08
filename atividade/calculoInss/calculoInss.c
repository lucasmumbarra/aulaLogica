/*Name project: calculoEmprestimo.c
 * Author: Lucas Santos Mumbarra
 * RA: N034JB3
 * Date: 06/09/2022
 * Description: Calculate the INSS discount amount
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

  setlocale(LC_ALL, "Portuguese");

  float salary, discountInssTwenty, discountInssTwentyFive, discountInsThirty, valueInssDiscount, discountedValue;

  discountInssTwenty = 0.20;
  discountInssTwentyFive = 0.25;
  discountInsThirty = 0.30;

  printf("\n");
  printf("|==============================================|\n");
  printf("|=========Calculadora de Desconto INSS=========|\n");
  printf("|==============================================|\n");
  printf("\n");
  printf("\n");

  printf("Digite o valor do salario: ");
  scanf("%f", &salary);

  if(salary <= 600){

    printf("INSS - Insento de desconto!\n");

  } else if (salary <= 1200) {

    valueInssDiscount = salary * discountInssTwenty;
    discountedValue = salary - valueInssDiscount;

    printf("O valor que sera descontado para o INSS sera: R$ %.2f\n\n", valueInssDiscount);
    printf("O valor do salario com desconto sera: R$ %.2f\n\n", discountedValue);

  } else if (salary <= 2000) {

    valueInssDiscount = salary * discountInssTwentyFive;
    discountedValue = salary - valueInssDiscount;

    printf("O valor que sera descontado para o INSS sera: R$ %.2f\n\n", valueInssDiscount);
    printf("O valor do salario com desconto sera: R$ %.2f\n\n", discountedValue);

  } else {

    valueInssDiscount = salary * discountInsThirty;
    discountedValue = salary - valueInssDiscount;

    printf("O valor que sera descontado para o INSS sera: R$ %.2f\n\n", valueInssDiscount);
    printf("O valor do salario com desconto sera: R$ %.2f\n\n", discountedValue);

  }

  printf("\n");
  printf("Processo encerrado!");
  printf("\n");

  system("pause");

  return 0;
}