#include <stdio.h>

int main(){
	int qntd;
	float preco, resultado;
	
	printf("Qual o preco do produto? ");
	scanf("%f", &preco);
	printf("Qual a quantidade de produtos comprados? ");
	scanf("%d", &qntd);	
	
	resultado = qntd * preco;
	
	printf("\nPreco total: %.2f", resultado);
	
	return 0;
}
