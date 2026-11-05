#include <stdio.h>

void ler_matriz(int matriz[5][5]) {
    printf("--- Leitura da Matriz 5x5 ---\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void exibir_matriz(int matriz[5][5]) {
    printf("\n--- Matriz 5x5 ---\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int somar_elementos(int matriz[5][5]) {
    int soma = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            soma += matriz[i][j];
        }
    }
    return soma;
}

int maior_valor(int matriz[5][5]) {
    int maior = matriz[0][0];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }
    return maior;
}

float calcular_media(int matriz[5][5]) {
    int soma = somar_elementos(matriz);
    float media = (float)soma / (5 * 5);
    return media;
}

int main() {
    int matriz[5][5];
    
    ler_matriz(matriz);
    exibir_matriz(matriz);
    
    printf("\nSoma de todos os elementos: %d\n", somar_elementos(matriz));
    printf("Maior valor armazenado: %d\n", maior_valor(matriz));
    printf("Média dos elementos: %.2f\n", calcular_media(matriz));
    
    return 0;
}
