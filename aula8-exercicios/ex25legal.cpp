#include <stdio.h>

int calcular(int vetor[]){
	int soma = 0;
	for (int i = 0; i < 10; i++){
		soma += vetor[i];
	}
	return soma;
}

int main(){
	int num[10];
	int soma = 0;
	
	for (int i = 0; i < 10; i++){
		printf("Informe o %d numero: ", i + 1);
		scanf("%d", &num[i]);
	}
	
	
	printf("\nA soma: %d", calcular(num));
	return 0;
}
