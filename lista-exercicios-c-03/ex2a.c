#include <stdio.h>

int main(){
    int assentos[8][10];
    
    for (int i = 0; i < 8; i++){
        int livres = 0;
        for (int j = 0; j < 10; j++){
            printf("Fileira %d, Poltrona %d\n", i + 1, j + 1);
            printf("Digite 0 para livre ou 1 para ocupado: ");
            scanf("%d", &assentos[i][j]);
            if (assentos[i][j] == 0){
                livres++;
            }
        }
        
        printf("\nFileira %d: %d lugares livres\n", i + 1, livres);
    }
    
    return 0;
}
