#include <stdio.h>

int main(){
	int x, y, *ptrA, *ptrB, soma, multiplicacao;
	
	printf("Digite valor de x: ");
	scanf("%d", &x);
	
	printf("Digite valor de y: ");
	scanf("%d", &y);
	
	ptrA = &x;
	ptrB = &y;
	
	soma = *ptrA + *ptrB;
	multiplicacao = (*ptrA) * (*ptrB);
	
	printf("A soma: %d\n", soma);
	printf("A multiplicacao: %d\n", multiplicacao);
	
	return 0;
}