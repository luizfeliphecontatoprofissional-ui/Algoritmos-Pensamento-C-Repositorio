#include <stdio.h>

int main(){
	int num[5];
	
	for(int i = 0; i < 5; i++){
		printf("Informe posicao %d: ", i);
		scanf("%d", &num[i]);
	}
	for(int i = 0; i < 5; i++){
		printf("num[%d]: %d \n", i, num[i]);
	}
	
	return 0;
}
