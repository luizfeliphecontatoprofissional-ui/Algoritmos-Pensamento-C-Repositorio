#include <stdio.h>

int achar(int vetor[], int x, int tamanho){
	for (int i = 0; i < tamanho; i++){
		if (vetor[i] == x) {
			return 1;
		}
	}
	return 0;
}

int main(){
	int num[5];
	int x;
	
	for (int i = 0; i < 5; i++){
		printf("Informe o %d numero: ", i + 1);
		scanf("%d", &num[i]);
	}
	
	printf("Qual numero voce deseja buscar? ");
	scanf("%d", &x);
	
	if (achar(num, x, 5) == 1){
		printf("O numero %d esta presente no vetor!\n", x);
	} else {
		printf("O numero %d nao esta presente no vetor.\n", x);
	}
	
	return 0;
}
