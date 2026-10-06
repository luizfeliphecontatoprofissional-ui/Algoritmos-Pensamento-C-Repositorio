#include <stdio.h>

int main(){
	int idade, inscrita;
	
	printf("Digite a sua idade: ");
	scanf("%d", &idade);
	
	printf("Voce esta inscrito(a)? (1 para Sim / 0 para Nao)");
	scanf("%d", &inscrita);
	
	if (idade >=18 && inscrita ==1) {
		printf("\nParticipacao permitida! Bem-vindo(a) ao evento. \n");
	} else{
		printf("\nParticipacao nao permitida. \n");
	}
	
	return 0;	
}
