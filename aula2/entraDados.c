#include <stdio.h>
#include <stdlib.h>

int main () {

    int idade;
    float altura;
    double salario;
    char sexo;

    printf("Digite a idade:");
    scanf("%d", &idade);
    printf("Digite a altura:");
    scanf("%.2f", &altura);
    printf("Digite o salario:");
    scanf("%lf", &salario);

    fflush(stdin);

    printf("Digite o sexo:");
    scanf("%c", &sexo);

    printf("Idade %d altura %f salario %1f sexo %c", idade, altura, salario, sexo);

    return 0;
}