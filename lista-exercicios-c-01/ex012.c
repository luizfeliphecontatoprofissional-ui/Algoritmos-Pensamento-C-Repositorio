#include <stdio.h>

int main() {
	float valor, desconto, valor_final;
	
	printf("Digite o valor da compra: R$ ");
	scanf("%f", &valor);
	
	if (valor > 500) {
		desconto = valor * 0.10;
	} else if (valor >= 200) {
		desconto = valor * 0.05;
	} else {
		desconto = 0;
	}
	
	valor_final = valor - desconto;
	printf("\nDesconto aplicado: R$ %.2f", desconto);
	printf("\nValor final a pagar: R$ %.2f\n", valor_final);
	
	return 0;
}
