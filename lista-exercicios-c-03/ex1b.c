#include <stdio.h>

int main(){
    float temperatura[24];
    float critica;
    int sequencia_atual = 0;
    int maior_sequencia = 0;
    
    for (int i = 0; i < 24; i++){
        printf("Informe a %d temperatura: ", i + 1);
        scanf("%f", &temperatura[i]);
    }
    
    printf("Digite a temperatura critica: ");
    scanf("%f", &critica);
    
    for (int i = 0; i < 24; i++){
        if (temperatura[i] > critica){
            sequencia_atual++;
        } else {
            sequencia_atual = 0;
        }
        
        if (sequencia_atual > maior_sequencia){
            maior_sequencia = sequencia_atual;
        }
    }
    
    printf("\nA maior sequencia em que a temperatura ficou acima do valor critico: %d", maior_sequencia);
    
    return 0;
}
