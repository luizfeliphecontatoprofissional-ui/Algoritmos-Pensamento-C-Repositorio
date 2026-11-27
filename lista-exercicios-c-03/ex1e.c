#include <stdio.h>

int main(){
    int notas[10];
    int frequencia[5] = {0};
    int maior_frequencia = 0;
    int nota_mais_frequente;
    
    for (int i = 0; i < 10; i++){
        do {
            printf("Digite a %d nota: ", i + 1);
            scanf("%d", &notas[i]);
        } while (notas[i] > 5 || notas[i] < 1);
    }
    
    for (int i = 0; i < 10; i++){
        frequencia[notas[i] - 1]++;
    }
    
    for (int i = 0; i < 5; i++){
        if (frequencia[i] > maior_frequencia){
            maior_frequencia = frequencia[i];
            nota_mais_frequente = i + 1;
        }
    }
    
    printf("\nA nota mais frequente foi: %d", nota_mais_frequente);
    printf("\nA frequencia dessa nota foi: %d", maior_frequencia);
    
    return 0;
}
