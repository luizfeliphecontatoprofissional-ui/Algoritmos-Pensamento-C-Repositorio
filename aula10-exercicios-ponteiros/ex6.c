#include <stdio.h>

int main(){
	int numeros[5], *ptr;
	int soma = 0;
	
	for (int i = 0; i < 5; i++){
		printf("Digite o numero %d: ", i + 1);
		scanf("%d", &numeros[i]);
	}
	
	ptr = &numeros[0];
	
	for (int i = 0; i < 5; i++) {
		printf("%d\n", *(ptr + i));
		soma += *(ptr + i);
	}
	
	printf("\nA soma: %d", soma);
	
	return 0;
}