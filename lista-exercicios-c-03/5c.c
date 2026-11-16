#include <stdio.h>

int main(){
	int numeros[5];
	int numero, contador = 0;
	int *ptr;
	
	for (int i = 0; i < 5; i++){
		printf("Digite o %d numero: ", i + 1);
		scanf("%d", &numeros[i]);
	}
	
	printf("Digite o numero para verificacao: ");
	scanf("%d", &numero);
	
	ptr = &numeros[0];
	
	for (int i = 0; i < 5; i++){
		if (*(ptr + i) % numero == 0){
			contador ++;
		}
	}
	
	printf("Quantidade de multiplos de %d: %d", numero, contador);
	
	return 0;
}