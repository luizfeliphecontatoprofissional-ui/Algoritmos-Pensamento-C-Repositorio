#include <stdio.h>

int main(){
    int matriz[4][4];
    int i, j;
    int soma = 0;
    
    printf("Digite os valores para a matriz 4x4:\n");
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }
    
    printf("\nMatriz informada: \n");
    for (i = 0; i < 4; i++){ 
        for (j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
        
    }
    
    printf("\nA soma: %d", soma);
    return 0;
}
