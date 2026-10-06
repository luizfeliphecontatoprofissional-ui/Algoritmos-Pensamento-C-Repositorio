#include <stdio.h>

int main(){
	int num[15];
	int X;
	int posicao;
	
	for(int i = 0; i < 15; i++){
		printf("Informe posicao %d: ", i);
		scanf("%d", &num[i]);
	}
	for(int i = 0; i < 15; i++){
		printf("num[%d]: %d \n", i, num[i]);
	}
	
	printf("Digite o valor de X a ser procurado: ");
	scanf("%d", &X);
	
	int achou = 0, soma = 0;
	for(int i = 0; i < 15; i++){
	    if (num[i] == X) {
	        soma += 1;
	        achou = 1;
	        posicao = i;
	    }
	}
	
	if (achou == 1){
	    printf("\n\nO valor %d foi encontrado na posicao %d", X, posicao);
	    printf("\n\nO valor %d aparece %d no vetor", X, soma);
	} else {
	    printf("\n\nO valor %d nao foi encontrado.", X);
	}

	return 0;
}
