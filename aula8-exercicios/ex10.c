#include <stdio.h>

int main(){
    int num[10];

    for (int i = 0; i < 10; i++){
        printf("Informe o %d numero: ", i + 1);
        scanf("%d", &num[i]);
    }
    
    int maior = num[0];
    
    for (int i = 1; i < 10; i++){
        if (num[i] > maior){
            maior = num[i];
        }
    }
    
    printf("\nO maior numero: %d", maior);
    
    return 0;
}
