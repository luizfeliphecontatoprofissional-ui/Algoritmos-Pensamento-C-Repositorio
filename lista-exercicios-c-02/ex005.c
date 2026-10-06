#include <stdio.h>

int main(){
	int num[10];
	int qtd_par = 0;
	int qtd_impar = 0;
	
	for(int i = 0; i < 10; i++){
		printf("Informe posicao %d: ", i);
		scanf("%d", &num[i]);
	}
	for(int i = 0; i < 10; i++){
		printf("num[%d]: %d \n", i, num[i]);
	}
	
	for (int i = 0; i < 10; i ++){
		if (num[i] % 2 == 0){
			qtd_par++;
		} else {
			qtd_impar++;
		}
	}
	
	printf("\n\nQuantidade de pares: %d\n", qtd_par);
	printf("\n\nQuantidade de impares: %d\n", qtd_impar);
	return 0;
}
