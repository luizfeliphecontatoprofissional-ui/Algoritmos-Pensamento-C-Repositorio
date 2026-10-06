#include <stdio.h>

int main(){
    int num[10], num2[10];

    for (int i = 0; i < 10; i++){
        printf("Informe a posicao %d: ", i);
        scanf("%d", &num[i]);
    }
    
    for (int i = 0; i < 10; i++){
        num2[i] = num[i] * 2;
        printf("\nO dobro: %d", num2[i]);
    }

    return 0;
}
