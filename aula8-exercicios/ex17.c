#include <stdio.h>

int main(){
    int matriz[3][3];
    int i, j;
    
    printf("Digite os valores para a matriz 3x3:\n");
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    int maior = matriz[0][0];
    printf("\nMatriz informada: \n");
    for (i = 0; i < 3; i++){ 
        for (j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
            if (matriz[i][j] > maior){
                maior = matriz[i][j];
            }
        }
        printf("\n");
    }
    
    printf("O maior numero: %d", maior);
    
    return 0;
}
