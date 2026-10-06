#include <stdio.h>

int main(){
	int n1, n2, resultado;
	
	printf("\nPrimeiro numero: ");
	scanf("%d", &n1);
	
	printf("\nSegundo numero: ");
	scanf("%d", &n2);
	
	resultado = n1 + n2;
	
	printf("\nA soma: %d", resultado);
	
	return 0;
}
