#include <stdio.h>

int main(){
    int matriz[3][3];
    int i, j;
    int soma_diagonal = 0;
    
    printf("Digite os valores para a matriz 3x3:\n");
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("\nMatriz informada: \n");
    for (i = 0; i < 3; i++){ 
        for (j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
            if (i == j){
                soma_diagonal += matriz[i][j];
            }
        }
        printf("\n");
    }
    
    printf("\nA soma da diagonal principal: %d", soma_diagonal);
    
    return 0;
}
