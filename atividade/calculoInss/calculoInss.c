/*Name project: calculoEmprestimo.c
 * Author: Lucas Santos Mumbarra
 * RA: N034JB3
 * Date: 09/09/2022
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

  printf("Digite o valor do salário: ");
  scanf("%f", &salary);

  if(salary <= 600){

    printf("INSS - Isento de desconto!\n");

  } else if (salary <= 1200) {

    valueInssDiscount = salary * discountInssTwenty;
    discountedValue = salary - valueInssDiscount;

    printf("O valor que será descontado para o INSS será: R$ %.2f\n\n", valueInssDiscount);
    printf("O valor do salário com desconto será: R$ %.2f\n\n", discountedValue);

  } else if (salary <= 2000) {

    valueInssDiscount = salary * discountInssTwentyFive;
    discountedValue = salary - valueInssDiscount;

    printf("O valor que será descontado para o INSS será: R$ %.2f\n\n", valueInssDiscount);
    printf("O valor do salário com desconto será: R$ %.2f\n\n", discountedValue);

  } else {

    valueInssDiscount = salary * discountInsThirty;
    discountedValue = salary - valueInssDiscount;

    printf("O valor que será descontado para o INSS será: R$ %.2f\n\n", valueInssDiscount);
    printf("O valor do salário com desconto sera: R$ %.2f\n\n", discountedValue);

  }

  printf("\n");
  printf("Processo encerrado!");
  printf("\n");

  system("pause");

  return 0;
}
