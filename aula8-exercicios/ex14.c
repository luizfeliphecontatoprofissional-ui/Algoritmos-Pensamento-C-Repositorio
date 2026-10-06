#include <stdio.h>

int main(){
    int num[10];

    for (int i = 0; i < 10; i++){
        printf("Informe a posicao %d: ", i);
        scanf("%d", &num[i]);
    }
    
    int maior = num[0], posmaior = 0;
    
    for (int i = 1; i < 10; i++){
        if (num[i] > maior) {
            maior = num[i];
            posmaior = i;
        }
        
    }
    
    printf("\nO maior valor: %d, na posicao %d", maior, posmaior);
    
    return 0;
}
