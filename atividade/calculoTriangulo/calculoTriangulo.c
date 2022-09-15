/*Name project: calculoEmprestimo.c
 * Author: Lucas Santos Mumbarra
 * RA: N034JB3
 * Date: 09/09/2022
 * Description: Calculate and find the shape of the triangle
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

  setlocale(LC_ALL, "Portuguese");

  float a, b, c;

  printf("\n");
  printf("|===========================================================|\n");
  printf("|=========Calcular e descobrir a forma do triângulo=========|\n");
  printf("|===========================================================|\n");
  printf("\n");
  printf("\n");

  printf("Digite o valor de a: ");
  scanf("%f", &a);

  printf("Digite o valor de b: ");
  scanf("%f", &b);

  printf("Digite o valor de c: ");
  scanf("%f", &c);

  if (a > b+c){

    printf("Não formam triângulo algum!\n");

  } else if ((a == b) && (a == c)) {

    printf("Triângulo Equilátero!\n");

  } else if ((a == b) || (b == c) || (a == c)) {,

    printf("Triângulo Isósceles!\n");

  } else {

    printf("Triângulo Escaleno!\n");

  }

  printf("\n");
  printf("Processo encerrado!");
  printf("\n");

  system("pause");

  return 0;
}
