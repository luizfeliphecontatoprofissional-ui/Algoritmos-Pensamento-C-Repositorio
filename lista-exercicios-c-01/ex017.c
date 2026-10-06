#include <stdio.h>

int main() {
    float media, frequencia;

    printf("Digite a frequencia (em %%): ");
    scanf("%f", &frequencia);

    printf("Digite a media: ");
    scanf("%f", &media);

    if (frequencia < 75.0) {
        printf("Resultado: Reprovado por frequencia\n");
    } else {
        if (media >= 7.0) {
            printf("Resultado: Aprovado\n");
        } else if (media >= 5.0) {
            printf("Resultado: Exame\n");
        } else {
            printf("Resultado: Reprovado por nota\n");
        }
    }

    return 0;
}
