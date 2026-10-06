#include <stdio.h>

int main(){
	int num;
	printf("Digite um numero inteiro: ");
	scanf("%d", &num);
	
	if (num >= 1) {
		printf("Positivo\n");
	} else if (num == 0) {
		printf("Zero\n");
	} else {
		printf("Negativo\n");
	}
	
	return 0;
}
