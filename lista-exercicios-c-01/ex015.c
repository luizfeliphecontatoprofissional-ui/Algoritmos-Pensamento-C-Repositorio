#include <stdio.h>

int main() {
    float a, b, c;

    printf("Digite o primeiro lado de um triangulo: ");
    scanf("%f", &a);
    printf("Digite o segundo lado de um triangulo: ");
    scanf("%f", &b);
    printf("Digite o terceiro lado de um triangulo: ");
    scanf("%f", &c);
    
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            printf("Os lados formam um Triangulo Equilatero.\n");
        } else if (a == b || a == c || b == c) {
            printf("Os lados formam um Triangulo Isosceles.\n");
        } else {
            printf("Os lados formam um Triangulo Escaleno.\n");
        }
    } else {
        printf("Os valores informados NAO formam um triangulo.\n");
    }

    return 0;
}
