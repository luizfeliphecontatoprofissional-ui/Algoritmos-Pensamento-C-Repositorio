#include <stdio.h>

int main(){
	int cartao;
	float valor;
	
	printf("Voce esta inscrito(a)? (1 para Sim / 0 para Nao): ");
	scanf("%d", &cartao);
	
	printf("Digite o valor total da compra: R$ ");
	scanf("%f", &valor);
	
	if (cartao == 1 || valor > 500) {
		printf("\nParabens! Voce tem direito a promocao.\n");
	} else {
		printf("\nSem direito a promocao desta vez.\n");
	}
	
	return 0;
}
