#include <stdio.h>

int main() {
    char nome[5][20];              /*vetor com os nomes dos alunos*/
    float media[5];                /*vetor com a media de cada aluno*/
    int i, j, posicao = -1;        /*contadores e posicao da busca*/
    float nota, soma;              /*nota lida e soma das 4 notas*/

    /*ENTRADA: nome e as 4 notas de cada aluno*/
    for (i = 0; i < 5; i++) {
        printf("\nNome do aluno %d: ", i + 1);
        scanf("%s", nome[i]);
        soma = 0;                  /*zera a soma a cada novo aluno*/
        for (j = 1; j <= 4; j++) {
            printf("Nota %d: ", j);
            scanf("%f", &nota);
            soma = soma + nota;    /*acumula as notas*/
        }
        media[i] = soma / 4;       /*PROCESSAMENTO: media do aluno*/
    }

    /*SAIDA: boletim com a situacao de cada aluno*/
    printf("\n%-12s %-8s %s\n", "ALUNO", "MEDIA", "SITUACAO");
    for (i = 0; i < 5; i++) {
        printf("%-12s %-8.1f ", nome[i], media[i]);
        if (media[i] >= 7)
            printf("Aprovado\n");
        else if (media[i] >= 4)
            printf("Recuperacao\n");
        else
            printf("Reprovado\n");
    }

    /*BUSCA NO VETOR: procura o aluno reprovado com a menor me*/
    for (i = 0; i < 5; i++) {
        if (media[i] < 4) {
            if (posicao == -1 || media[i] < media[posicao])
                posicao = i;       /*guarda a posicao do pior aluno*/
        }
    }

    if (posicao == -1)
        printf("\nNenhum aluno reprovado.\n");
    else
        printf("\nReprovado com a menor media: %s (media %.1f)\n", nome[posicao], media[posicao]);

    return 0;
}
