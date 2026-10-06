#include <stdio.h>

int main(){
    int num[5];
    int qtd_par = 0;
    
    for (int i = 0; i < 5; i++){
        printf("Informe o %d numero: ", i + 1);
        scanf("%d", &num[i]);
    }
    
    for (int i = 0; i < 5; i++){
        if (num[i] % 2 == 0){
            printf("\nO numero %d e par", num[i]);
            qtd_par++;
        }
    }
    
    if (qtd_par == 0){
        printf("\nNenhum numero par encontrado");
    }
    
    return 0;
}
