#include <stdio.h>

int main(){
	int num[10];
	int qtd_par = 0;
	
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
		}
	}
	
	printf("Quantidade de pares: %d\n", qtd_par);
	return 0;
}
