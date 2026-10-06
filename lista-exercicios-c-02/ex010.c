#include <stdio.h>

int main(){
	int num[10];
	int X;
	int posicao;
	
	for(int i = 0; i < 10; i++){
		printf("Informe posicao %d: ", i);
		scanf("%d", &num[i]);
	}
	for(int i = 0; i < 10; i++){
		printf("num[%d]: %d \n", i, num[i]);
	}
	
	printf("Digite o valor de X a ser procurado: ");
	scanf("%d", &X);
	
	int achou = 0;
	for(int i = 0; i < 10; i++){
	    if (num[i] == X) {
	        achou = 1;
	        posicao = i;
	    }
	}
	
	if (achou == 1){
	    printf("\nO valor %d foi encontrado na posicao %d", X, posicao);
	} else {
	    printf("\nO valor %d nao foi encontrado.", X);
	}
	
	return 0;
}
