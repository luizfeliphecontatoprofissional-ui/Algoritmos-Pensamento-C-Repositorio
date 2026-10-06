#include <stdio.h>

int main(){
	int num[10];
	
	for(int i = 0; i < 10; i++){
		printf("Informe posicao %d: ", i);
		scanf("%d", &num[i]);
	}
	for(int i = 0; i < 10; i++){
		printf("num[%d]: %d \n", i, num[i]);
	}
	
	int maior = num[0];
	int menor = num[0];
	
	
	for (int i = 0; i < 10; i++){
		if (num[i] > maior) {
			maior = num[i];
		}
		if (num[i] < menor) {
			menor = num[i];
		}
	}
	
	int soma = 0;
	for(int i = 0; i < 10; i++) {
		soma += num[i];
	}
	float media = 0;
	media = soma / 10;
	
	printf("\nSoma: %d", soma);
	printf("\n\nMedia: %.2f", media);
	printf("\n\nO maior numero: %d", maior);
	printf("\n\nO menor numero: %d", menor);
	
	return 0;
}
