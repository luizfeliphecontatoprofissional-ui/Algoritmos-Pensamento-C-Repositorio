#include <stdio.h>

int main(){
	int num[8];
	
	for(int i = 0; i < 8; i++){
		printf("Informe posicao %d: ", i);
		scanf("%d", &num[i]);
	}
	for(int i = 0; i < 8; i++){
		printf("num[%d]: %d \n", i, num[i]);
	}
	
	int soma = 0;
	for(int i = 0; i < 8; i++) {
		soma += num[i];
	}
	float media = 0;
	media = soma / 8;
	printf("\n\nMedia: %.2f", media);
	
	return 0;
}
