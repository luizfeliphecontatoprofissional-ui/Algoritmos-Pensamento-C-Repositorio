#include <stdio.h>

int main(){
    float tempo[15];
    float melhor_tempo_atual;
    int superou_recorde = 0;
    
    for (int i = 0; i < 15; i++){
        printf("Preencha o tempo do kart na %d volta: ", i + 1);
        scanf("%f", &tempo[i]);
    }
    
    melhor_tempo_atual = tempo[0];
    
    for (int i = 1; i < 15; i++){
        if (melhor_tempo_atual > tempo[i]){
            melhor_tempo_atual = tempo[i];
            superou_recorde++;
        }
    }
    
    printf("\nO melhor tempo dele foi %.2f e ele superou o recorde %d vezes", melhor_tempo_atual, superou_recorde);

    return 0;
}
