# include <stdio.h>
# include <stdlib.h>
# include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    float peso,altura,imc;

    printf("Digite seu peso:\n");
    scanf("%f",&peso);
    printf("Digite sua altura:\n");
    scanf("%f",&altura);
    imc = (peso/(altura*altura));
    printf("Seu peso é %.2f sua altura é %.2f e seu imc é %.2f\n", peso,altura,imc);

    if(imc <= 22) {
        printf("Peso Ideal\n");
    }

    if((imc > 22) && (imc <27)) {
        printf("Sobrepeso I\n");
    }

    if((imc > 27) && (imc <30)) {
        printf("Sobrepeso II\n");
    }

    if(imc >30) {
        printf("Obesidade morbida");
    }

    return 0;

}
