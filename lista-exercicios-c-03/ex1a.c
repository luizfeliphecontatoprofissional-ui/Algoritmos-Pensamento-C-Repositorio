#include <stdio.h>

int main(){
    int vendas[12], total = 0;
    float media;
    
    for (int i = 0; i < 12; i++){
        printf("Digite o numero %d: ", i+1);
        scanf("%d", &vendas[i]);
        total += vendas[i];
    }
    
    media = (float) total / 12;
    
    printf("\nA Media: %.2f\n", media);
    
    for (int i = 0; i < 12; i++){
        if (vendas[i] > media) {
            printf("Mes %d ficou acima da media!\n", i + 1);
        }
        
    }
    
    return 0;
}
