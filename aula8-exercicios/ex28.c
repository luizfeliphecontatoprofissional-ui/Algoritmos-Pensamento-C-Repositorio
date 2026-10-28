#include <stdio.h>

int soma_diagonal(int matriz[3][3]) {
    int soma = 0;
    for (int i = 0; i < 3; i++){
        soma += matriz[i][i];
    }
    return soma;
}
int main(){
    int matriz[3][3];
    int i, j;
    
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("\nA Soma da diagonal da matriz foi: %d", soma_diagonal(matriz));

    return 0;
}
