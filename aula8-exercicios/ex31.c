#include <stdio.h>

void ler_notas(float notas[5][4]) {
    printf("--- Registo de Notas (5 Alunos e 4 Avaliações) ---\n");
    for (int i = 0; i < 5; i++) {
        printf("\nNotas do Aluno %d:\n", i + 1);
        for (int j = 0; j < 4; j++) {
            printf("  Avaliação %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }
    }
}

float calcular_media_aluno(float notas[5][4], int aluno) {
    float soma = 0;
    for (int j = 0; j < 4; j++) {
        soma += notas[aluno][j];
    }
    return soma / 4.0;
}

void apresentar_relatorio(float notas[5][4]) {
    float maior_media = -1;
    int aluno_destaque = 0;

    printf("\n==================================\n");
    printf("        RELATÓRIO FINAL DE NOTAS    \n");
    printf("==================================\n");

    for (int i = 0; i < 5; i++) {
        float media = calcular_media_aluno(notas, i);
        printf("Aluno %d -> Notas: [%.1f, %.1f, %.1f, %.1f] | Média: %.2f\n", 
               i + 1, notas[i][0], notas[i][1], notas[i][2], notas[i][3], media);
        
        if (media > maior_media) {
            maior_media = media;
            aluno_destaque = i + 1;
        }
    }

    printf("----------------------------------\n");
    printf("Destaque: Aluno %d com a maior média (%.2f)\n", aluno_destaque, maior_media);
    printf("==================================\n");
}

int main() {
    float notas_alunos[5][4];

    ler_notas(notas_alunos);
    apresentar_relatorio(notas_alunos);

    return 0;
}
