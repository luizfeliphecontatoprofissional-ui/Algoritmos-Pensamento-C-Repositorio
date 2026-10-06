#include <stdio.h>

int main(){
	float lar, alt, area;
	
	printf("Digite a largura: ");
	scanf("%f", &lar);
	printf("Digite a altura: ");
	scanf("%f", &alt);
	
	area = lar * alt;
	
	printf("\nArea: %.2f", area);
	return 0;
}
