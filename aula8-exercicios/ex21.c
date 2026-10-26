#include <stdio.h>

int dobro(int a) {
    return 2 * a;
}

int main(){
    int a;
    printf("Digite um numero inteiro: ");
    scanf("%d", &a);
    
    printf("O dobro: %d", dobro(a));
    return 0;
}
