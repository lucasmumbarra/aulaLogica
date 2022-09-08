/*Name project: calculoEmprestimo.c
 * Author: Lucas Santos Mumbarra
 * RA: N034JB3
 * Date: 06/09/2022
 * Description: Calculate the resale value of the product
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

  setlocale(LC_ALL, "Portuguese");

  float valueProduct, profitFortyFive, profitThirty, resaleValue;

  profitFortyFive = 0.45;
  profitThirty = 0.30;

  printf("\n");
  printf("|=============================================|\n");
  printf("|=======Calculadora de Valor de Revenda=======|\n");
  printf("|=============================================|\n");
  printf("\n");
  printf("\n");

  printf("Digite o valor da compra do produto: ");
  scanf("%f", &valueProduct);

  if (valueProduct <= 20) {
    resaleValue = valueProduct + (valueProduct * profitFortyFive);

    printf("O valor de revenda do seu produto sera de 45%%: %.2f", resaleValue);
  } else {
    resaleValue = valueProduct + (valueProduct * profitThirty);

    printf("O valor de revenda do seu produto sera de 30%%: %.2f", resaleValue);
  }

  printf("\n");
  printf("Processo encerrado!");
  printf("\n");

  system("pause");

  return 0;
}