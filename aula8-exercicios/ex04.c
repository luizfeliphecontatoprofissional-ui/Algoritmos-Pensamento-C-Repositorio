#include <stdio.h>

int main(){
    int num,  soma = 0, qtd = 0;
    
    for (;;){
        printf("Digite um numero(aperte 0 para sair): ");
        scanf("%d", &num);
        
        if (num == 0){
            break;
        }
        soma += num;
        qtd++;
    }
    
    printf("\nA soma: %d", soma);
    printf("\nA quantidade de numeros informados: %d", qtd);
    
    return 0;
}
