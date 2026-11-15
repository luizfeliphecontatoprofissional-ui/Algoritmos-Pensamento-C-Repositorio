#include <stdio.h>

int main(){
	int numeros[5], *ptr;
	
	for (int i = 0; i < 5; i++){
		printf("Digite o numero %d: ", i + 1);
		scanf("%d", &numeros[i]);
	}
	
	ptr = &numeros[0];
	
	for (int i = 0; i < 5; i++) {
		printf("%d\n", *(ptr + i));
	}
	
	return 0;
}