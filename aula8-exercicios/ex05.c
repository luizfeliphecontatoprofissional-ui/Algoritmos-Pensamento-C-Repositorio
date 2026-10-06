#include <stdio.h>

int main(){
    float num; 
    float soma = 0;
    int qtd = 0;
    float media;
    
    for (;;){
        printf("Digite precos de produtos(digite um preco negativo para sair): ");
        scanf("%f", &num);
        
        if (num < 0){
            break;
        }
        soma += num;
        qtd++;
    }
    
    
    if (qtd > 0) {
        media = soma / qtd;
        printf("A media de precos foi: %.2f", media);
    } else {
        printf("Nenhum preco valido foi inserido.\n");
    }
    
    return 0;
}
