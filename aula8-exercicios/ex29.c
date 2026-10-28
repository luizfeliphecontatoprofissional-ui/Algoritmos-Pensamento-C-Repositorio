#include <stdio.h>

int maior_elemento(int matriz[4][4]) {
    int maior = matriz[0][0];
    
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            if (matriz[i][j] > maior){
                maior = matriz[i][j];
            }
        }
    }
    return maior;
}
int main(){
    int matriz[4][4];
    int i, j;
    
    for (i = 0; i < 4; i++){
        for (j = 0; j < 4; j++){
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("\nO maior elemento armazenado foi: %d", maior_elemento(matriz));

    return 0;
}
