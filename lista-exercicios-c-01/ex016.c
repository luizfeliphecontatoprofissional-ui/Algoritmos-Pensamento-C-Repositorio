#include <stdio.h>

int main() {
    int valor, n100, n50, n20, n10, resto;

    printf("Digite o valor para saque: R$ ");
    scanf("%d", &valor);

    n100 = valor / 100;
    resto = valor % 100;

    n50 = resto / 50;
    resto = resto % 50;

    n20 = resto / 20;
    resto = resto % 20;

    n10 = resto / 10;
    resto = resto % 10;

    printf("\nNotas fornecidas:\n");
    printf("Notas de R$ 100: %d\n", n100);
    printf("Notas de R$ 50:  %d\n", n50);
    printf("Notas de R$ 20:  %d\n", n20);
    printf("Notas de R$ 10:  %d\n", n10);

    if (resto > 0) {
        printf("Sobrou R$ %d nao sacavel com as notas disponiveis.\n", resto);
    }

    return 0;
}
