#include <stdio.h>

int main(){
    int num[10];
    int qtd_par = 0;
    
    for (int i = 0; i < 10; i++){
        printf("Informe o %d numero: ", i + 1);
        scanf("%d", &num[i]);
    }
    
    for (int i = 0; i < 10; i++){
        if (num[i] % 2 == 0){
            qtd_par++;
        }
    }
    
    if (qtd_par == 0){
        printf("\nNenhum numero par encontrado");
    }
    
    printf("\nA quantidade de numeros pares encontradas foi: %d", qtd_par);
    
    return 0;
}
