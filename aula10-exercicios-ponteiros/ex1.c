#include <stdio.h>

int main(){
	int x, *ptr;
	
	printf("Digite valor de x: ");
	scanf("%d", &x);
	
	ptr = &x;
	
	*ptr = *ptr * 2;
	
	printf("O dobro: %d", *ptr);
	
	return 0;
}