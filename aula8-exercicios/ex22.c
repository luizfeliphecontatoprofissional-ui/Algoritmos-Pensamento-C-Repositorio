#include <stdio.h>

int maior(int a, int b) {
    if (a > b) {
        return a;     
    } else {
        return b;
    }
    
}


int main(){
    int a;
    int b;
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &a);
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &b);
    
    printf("O maior número foi o: %d", maior(a, b));
    return 0;
}
