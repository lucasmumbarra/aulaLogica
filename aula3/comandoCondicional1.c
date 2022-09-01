#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero");
    scanf("%d", &num);

    if( num < 0 )
        printf("numero digitado eh negativo!");

    return 0;
}
