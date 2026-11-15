#include <stdio.h>

int main(){
	int x, y, *ptrA, *ptrB, temp;
	
	printf("Digite valor de X: ");
	scanf("%d", &x);
	
	printf("Digite valor de Y: ");
	scanf("%d", &y);
	
	ptrA = &x;
	ptrB = &y;

	temp = *ptrA;
	*ptrA = *ptrB;
	*ptrB = temp;
		
	printf("Depois da troca:\n");	
	printf("X: %d\n", x);
	printf("Y: %d\n", y);
	
	return 0;
}