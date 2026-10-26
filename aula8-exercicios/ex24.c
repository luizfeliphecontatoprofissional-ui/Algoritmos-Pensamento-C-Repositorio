#include <stdio.h>

int parouimpar(int n1) {
    if (n1 % 2 == 0){
        return 1;
    } else {
        return 0;
    }
}

int main(){
    int n1;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n1);

    printf("O resultado da funcao e: %d (1 para par, 0 para impar)\n", parouimpar(n1));
    return 0;
}
