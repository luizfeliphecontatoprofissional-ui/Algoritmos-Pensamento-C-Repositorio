#include <stdio.h>

int main(){
    int num[10];
    int soma = 0;
    
    for (int i = 0; i < 10; i++){
        printf("Informe o %d numero: ", i + 1);
        scanf("%d", &num[i]);
        soma += num[i];
    }
    
    printf("A soma: %d", soma);
    return 0;
}
