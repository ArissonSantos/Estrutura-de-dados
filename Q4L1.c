#include <stdio.h>
#include <string.h>

#define MAX_CONTATOS 100

struct Contato {
    char nome[30];
    char telefone[15];
};

int main() {
    struct Contato contatos[MAX_CONTATOS];
    int totalContatos = 0;

    int opcao;
    while (1) {
        printf("\nMenu:\n");
        printf("1. Adicionar contato\n");
        printf("2. Listar contatos\n");
        printf("3. Buscar contato\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            if (totalContatos < MAX_CONTATOS) {
                printf("\nInforme o nome: ");
                scanf("%s", contatos[totalContatos].nome);
                printf("Informe o telefone: ");
                scanf("%s", contatos[totalContatos].telefone);
                totalContatos++;
                printf("Contato adicionado com sucesso!\n");
            } else {
                printf("\nLimite maximo de contatos atingido!\n");
            }
        } else if (opcao == 2) {
            if (totalContatos == 0) {
                printf("\nNenhum contato adicionado.\n");
            } else {
                printf("\nLista de contatos:\n");
                for (int i = 0; i < totalContatos; i++) {
                    printf("Nome: %s | Telefone: %s\n", contatos[i].nome, contatos[i].telefone);
                }
            }
        } else if (opcao == 3) {
            if (totalContatos == 0) {
                printf("\nNenhum contato adicionado.\n");
            } else {
                char nomeBusca[30];
                printf("\nInforme o nome do contato a ser buscado: ");
                scanf("%s", nomeBusca);

                int encontrado = 0;
                for (int i = 0; i < totalContatos; i++) {
                    if (strcmp(nomeBusca, contatos[i].nome) == 0) {
                        printf("Nome: %s | Telefone: %s\n", contatos[i].nome, contatos[i].telefone);
                        encontrado = 1;
                        break;
                    }
                }

                if (!encontrado) {
                    printf("Contato nao encontrado.\n");
                }
            }
        } else if (opcao == 4) {
            printf("\nEncerrando o programa...\n");
            break;
        } else {
            printf("\nOpcao invalida!\n");
        }
    }

    return 0;
}
