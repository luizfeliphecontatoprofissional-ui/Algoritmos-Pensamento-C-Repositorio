#include <stdio.h>

int main(){
	int x, y, *ptrA, *ptrB;
	
	printf("Digite valor de x: ");
	scanf("%d", &x);
	
	printf("Digite valor de y: ");
	scanf("%d", &y);
	
	ptrA = &x;
	ptrB = &y;
	
	if(*ptrA > *ptrB){
		printf("x e o maior valor: %d", *ptrA);
	} else if (*ptrB > *ptrA) {
		printf("y e o maior valor: %d", *ptrB);
	} else {
		printf("o valor %d e %d sao os mesmos", *ptrA, *ptrB);
	}
		
	return 0;
}