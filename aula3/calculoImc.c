# include <stdio.h>
# include <stdlib.h>

int main () {
    float peso,altura,imc;

    printf("Digite seu peso:\n");
    scanf("%.2f", &peso);

    printf("Digite sua altura:\n");
    scanf("%.2f", &altura);

    printf ("Altura: %.2f",altura);

    imc = (peso/altura)*altura;

    printf ("imc %.2f",imc);

    return 0;
}
