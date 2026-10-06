#include <stdio.h>

int main() {
	float valor, desconto, valor_final;
	int percentual;
	
	printf("Digite o valor da compra: R$ ");
	scanf("%f", &valor);
	
	if (valor > 500) {
		percentual = 10;
	} else if (valor >= 200) {
		percentual = 5;
	} else {
		percentual = 0;
	}
	
	desconto = valor * (percentual / 100.0);
	valor_final = valor - desconto;
	
	
	printf("\n--- RESUMO DA COMPRA ---");
	printf("\na. Percentual de desconto: %d%%", percentual);
	printf("\nb. Desconto aplicado: R$ %.2f", desconto);
	printf("\nc. Valor final a pagar: R$ %.2f\n", valor_final);
	
	return 0;
}
