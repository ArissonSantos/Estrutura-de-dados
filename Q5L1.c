#include <stdio.h>
#include <string.h>

#define MAX_LIVROS 100

struct livro {
    char titulo[50];
    char autor[50];
    int ano_publicacao;
};

struct livro livros[MAX_LIVROS];
int total_livros = 0;

void adicionarLivro() {
    if (total_livros == MAX_LIVROS) {
        printf("A capacidade máxima foi atingida. Impossível adicionar mais livros.\n");
        return;
    }

    struct livro novo_livro;

    printf("Título do livro: ");
    scanf("%s", novo_livro.titulo);

    printf("Autor do livro: ");
    scanf("%s", novo_livro.autor);

    printf("Ano de publicação: ");
    scanf("%d", &novo_livro.ano_publicacao);

    livros[total_livros] = novo_livro;
    total_livros++;

    printf("Livro adicionado com sucesso!\n");
}

void listarLivros() {
    if (total_livros == 0) {
        printf("Nenhum livro cadastrado.\n");
        return;
    }

    printf("Lista de livros cadastrados:\n");

    for (int i = 0; i < total_livros; i++) {
        printf("Livro %d:\n", i + 1);
        printf("Título: %s\n", livros[i].titulo);
        printf("Autor: %s\n", livros[i].autor);
        printf("Ano de publicação: %d\n", livros[i].ano_publicacao);
        printf("\n");
    }
}

void buscarLivrosPorAutor() {
    char autor_desejado[50];
    int livros_encontrados = 0;

    printf("Digite o autor que deseja buscar: ");
    scanf("%s", autor_desejado);

    printf("Livros encontrados de %s:\n", autor_desejado);

    for (int i = 0; i < total_livros; i++) {
        if (strcmp(livros[i].autor, autor_desejado) == 0) {
            printf("Livro %d:\n", i + 1);
            printf("Título: %s\n", livros[i].titulo);
            printf("Autor: %s\n", livros[i].autor);
            printf("Ano de publicação: %d\n", livros[i].ano_publicacao);
            printf("\n");
            livros_encontrados++;
        }
    }

    if (livros_encontrados == 0) {
        printf("Nenhum livro encontrado para o autor %s.\n", autor_desejado);
    }
}

int main() {
    int opcao;

    do {
        printf("Selecione uma opção:\n");
        printf("1. Adicionar livro\n");
        printf("2. Listar livros cadastrados\n");
        printf("3. Buscar livros por autor\n");
        printf("0. Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                adicionarLivro();
                break;
            case 2:
                listarLivros();
                break;
            case 3:
                buscarLivrosPorAutor();
                break;
            case 0:
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opção inválida.\n");
                break;
        }

        printf("\n");
    } while (opcao != 0);

    return 0;
}
