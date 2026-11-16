#include <stdio.h>

int main(){
    int presencas[10];
    int atual = 0;
    int maior = 0;
    
    for (int i = 0; i < 10; i++){
    printf("O aluno esteve presente no dia %d (0 para falta, 1 para presente): ", i + 1);
    scanf("%d", &presencas[i]);
    }
    
    for (int i = 0; i < 10; i++){
        if (presencas[i] == 1) {
            atual += 1;
        } else {
            atual = 0;
        }
        
        if (atual > maior) {
            maior = atual;
        }
    }
    
    printf("\nMaior sequencia se presencas: %d dias", maior);
    
    return 0;
}
