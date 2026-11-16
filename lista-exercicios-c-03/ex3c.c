#include <stdio.h>

float Amplitude(float temperaturas[5]){
    float maiorT = temperaturas[0];
    float menorT = temperaturas[0];
    
    for (int i = 0; i < 5; i++){
        if (temperaturas[i] > maiorT){
            maiorT = temperaturas[i];
        }
        
        if (temperaturas[i] < menorT) {
            menorT = temperaturas[i];
        }
    }
    
    return maiorT - menorT;
}


int main(){
    float graus[5];
    
    for (int i = 0; i < 5; i++){
        printf("Digite a %d temperatura: ", i + 1);
        scanf("%f", &graus[i]);
    }
    
    printf("A amplitude termica foi: %.2f C", Amplitude(graus));
    return 0;
}
