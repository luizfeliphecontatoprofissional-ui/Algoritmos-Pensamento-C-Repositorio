#include <stdio.h>

int main(){
    int matriz[3][3];
    int i, j, k, l;
    int tem_repetido = 0;
    
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
        }
        printf("\n");
    }
    
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            for (k = 0; k < 3; k++){
                for (l = 0; l < 3; l++){
                    if (!(i == k && j == l) && matriz[i][j] == matriz[k][l]) {
                        tem_repetido = 1;
                    }
                }
            }
        }
    }

    if (tem_repetido) {
        printf("Ha elementos repetidos na matriz!\n");
    } else {
        printf("Nao ha elementos repetidos.\n");
    }
    
    return 0;
}
    
