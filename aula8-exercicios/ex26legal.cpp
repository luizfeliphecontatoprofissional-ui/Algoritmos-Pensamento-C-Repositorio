#include <stdio.h>

int grande(int vetor[]){
	int maior = vetor[0];
	for (int i = 0; i < 10; i++){
		if (vetor[i] > maior) {
			maior = vetor[i];
		}
	}
	return maior;
}

int main(){
	int num[10];
	
	for (int i = 0; i < 10; i++){
		printf("Informe o %d numero: ", i + 1);
		scanf("%d", &num[i]);
	}
	
	printf("\nO maior: %d", grande(num));
	return 0;
}
