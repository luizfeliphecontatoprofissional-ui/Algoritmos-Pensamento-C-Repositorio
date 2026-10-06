#include <stdio.h>

int main(){
    int N;
    int portres = 0;
    int primo = 0;
    
    printf("Digite um numero: ");
    scanf("%d", &N);
    
    for (int i = 0; i <= N; i++) {
        if (i % 3 == 0) {
            portres++;
        }
        
        if (i >= 2){
            int ehPrimo = 1;
            
            for (int j = 2; j < i; j++){
                if (i % j == 0){
                    ehPrimo = 0;
                }
            }
            
            if (ehPrimo == 1){
                primo++;
            }
        }
    }
    
    printf("\nA quantidade de numeros divisiveis por 3 entre 0 e N: %d", portres);
    printf("\nA quantidade de numeros primos entre 0 e N: %d", primo);
    return 0;
}
