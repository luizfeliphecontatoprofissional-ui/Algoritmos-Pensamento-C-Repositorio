#include <stdio.h>

int main(){
    float notas[20][4];
    float soma = 0, media = 0;
    float maiorMedia = 0;
    int avaliacaoMaior;
    
    for (int i = 0; i < 20; i++){
        for (int j = 0; j < 4; j++){
            printf("Aluno %d, Avaliacao %d\n", i + 1, j + 1);
            scanf("%f", &notas[i][j]);
            }
        }
        
    for (int j = 0; j < 4; j++){
        soma = 0;
        for (int i = 0; i < 20; i++){
            soma += notas[i][j];
        }
        
        media = soma / 20.0;
        
        if (j == 0 || media > maiorMedia){
            maiorMedia = media;
            avaliacaoMaior = j + 1;
        }
        
        printf("Media de avaliacao %d: %.2f\n", j + 1, media);
    }
    
    printf("\nA avaliacao com maior media foi a %d, com %.2f pontos.", avaliacaoMaior, maiorMedia);
    
    return 0;
}
