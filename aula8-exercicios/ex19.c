#include <stdio.h>

int main(){
    int matriz[5][5];
    int i, j;
    int soma = 0;

    printf("Digite os valores para a matriz 5x5:\n");
    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }
    
    int pares = 0;
    int maior = matriz[0][0];
    int menor = matriz[0][0];
    
    printf("\nMatriz informada: \n");
    for (i = 0; i < 5; i++){ 
        for (j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
            if (matriz[i][j] % 2 == 0){
                pares++;
            }
            if (matriz[i][j] > maior){
                maior = matriz[i][j];
            }
            if (matriz[i][j] < menor){
                menor = matriz[i][j];
            }
        }
        printf("\n");
    }
    
    float media = (float)soma / 25;
    
    printf("\nMaior numero: %d", maior);
    printf("\nMenor numero: %d", menor);
    printf("\nQuantidade de pares: %d", pares);
    printf("\nA media: %.2f\n", media);
    
    return 0;
}
    
