#include <stdio.h>

int main(){
    int num[10];
    int maior_qtd = 0;
    int valor_mais_repetido;
    
    for (int i = 0; i < 10; i++){
        printf("Informe o %d numero: ", i + 1);
        scanf("%d", &num[i]);
    }
    
    for (int i = 0; i < 10; i++){
        int qtd = 0;
        
        for (int j = 0; j < 10; j++){
            if (num[i] == num[j]){
            qtd++;
            }
        }
    
        if (qtd > maior_qtd){
        maior_qtd = qtd;
        valor_mais_repetido = num[i];
        }
    
    }

    printf("Valor mais repetido: %d\n", valor_mais_repetido);
    printf("Quantidade: %d\n", maior_qtd);
    return 0;
}
