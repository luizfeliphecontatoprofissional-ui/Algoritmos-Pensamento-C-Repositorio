#include <stdio.h>

float calcularEficiencia(float distancia, float litros){
    float resultado;
    resultado = distancia / litros;
    return resultado;
}


int main(){
    float km, l;
    
    printf("--- EFICIENCIA ---\n");
    printf("Digite a distancia percorrida(quilometros): ");
    scanf("%f", &km);
    printf("Digite a quantidade de litros consumidos: ");
    scanf("%f", &l);
    
    
    printf("Sua eficiencia foi: %.2f km/L", calcularEficiencia(km, l));
    return 0;
}
