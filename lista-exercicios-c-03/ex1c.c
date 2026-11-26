#include <stdio.h>

int main(){
    int reproducoes[30];
    int crescimento = 0;
    
    for (int i = 0; i < 30; i++){
        printf("Informe as reproducoes  do dia %d: ", i + 1);
        scanf("%d", &reproducoes[i]);
    }
    
    for (int i = 1; i < 30; i++){
        if (reproducoes[i] > reproducoes[i - 1]){
            crescimento++;
            printf("Houve crescimento no dia %d\n", i + 1);
        }
    }
    
    printf("\nTotal de dias com crescimento: %d", crescimento);
    
    return 0;
}
