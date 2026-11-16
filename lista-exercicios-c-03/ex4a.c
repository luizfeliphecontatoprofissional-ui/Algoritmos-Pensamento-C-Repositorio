#include <stdio.h>

struct Livro {
    char titulo[100];
    char autor[100];
    int ano;
    int quantidade;
};

int main(){
    struct Livro livros[10];
    
    for (int i = 0; i < 10; i++){
        printf("Cadastro do livro %d\n", i + 1);
        printf("O titulo do livro: ");
        scanf("%s", livros[i].titulo);
        printf("O autor do livro: ");
        scanf("%s", livros[i].autor);
        printf("O ano do livro: ");
        scanf("%d", &livros[i].ano);
        printf("A quantidade de livros: ");
        scanf("%d", &livros[i].quantidade);
    }
    
    int maisAntigo = 0;
    
    for (int i = 1; i < 10; i++) {
        if (livros[i].ano < livros[maisAntigo].ano) {
            maisAntigo = i;
        }
    }
    
    printf("\nLivro mais antigo: %s", livros[maisAntigo].titulo);
    printf("\nAno de publicacao: %d", livros[maisAntigo].ano);
    
}
