#include <stdio.h>

float soma = 0;
float media(float n1, float n2, float n3) {
    soma = n1 + n2 + n3;
    return soma / 3;
}


int main(){
    float n1, n2, n3;
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);
    
    printf("A media foi: %.2f", media(n1, n2, n3));
    return 0;
}
