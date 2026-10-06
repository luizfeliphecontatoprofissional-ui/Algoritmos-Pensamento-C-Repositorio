#include <stdio.h>

int main(){
	int n1, n2, n3;
	printf("Digite o primeiro numero inteiro: ");
	scanf("%d", &n1);
	printf("Digite o segundo numero inteiro: ");
	scanf("%d", &n2);
	printf("Digite o terceiro numero inteiro: ");
	scanf("%d", &n3);
	
	if (n1 > n2 && n1 > n3){
		printf("O primeiro numero e o maior!");
	} else if (n2 > n1 && n2 > n3){
		printf("O segundo numero e o maior!");
	} else if (n3 > n1 && n3 > n2){
		printf("O terceiro numero e o maior!");
	} else {
		printf("Os numeros sao iguais!");
	}
		
	return 0;	
}
