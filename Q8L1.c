#include <stdio.h>
#include <string.h>

struct Produto {
    char nome[20];
    float preco;
    int quantidade;
};

void exibirProdutos(struct Produto produtos[], int totalProdutos) {
    printf("Produtos disponíveis:\n");

    for (int i = 0; i < totalProdutos; i++) {
        printf("%d. %s - R$ %.2f - Quantidade: %d\n", i+1, produtos[i].nome, produtos[i].preco, produtos[i].quantidade);
    }
}

int main() {
    int opcao;
    int totalProdutos = 3;

    struct Produto produtos[totalProdutos];

    // Preenchendo os detalhes dos produtos
    strcpy(produtos[0].nome, "Produto 1");
    produtos[0].preco = 10.50;
    produtos[0].quantidade = 5;

    strcpy(produtos[1].nome, "Produto 2");
    produtos[1].preco = 15.25;
    produtos[1].quantidade = 8;

    strcpy(produtos[2].nome, "Produto 3");
    produtos[2].preco = 20.75;
    produtos[2].quantidade = 3;

    // Exibindo os produtos disponíveis
    exibirProdutos(produtos, totalProdutos);

    // Realizando a compra
    printf("\nSelecione o número do produto que deseja comprar (ou 0 para sair): ");
    scanf("%d", &opcao);

    float totalCompra = 0;

    while (opcao != 0) {
        // Verificando se o número de produto selecionado é válido
        if (opcao < 1 || opcao > totalProdutos) {
            printf("Opção inválida! Tente novamente.\n");
        } else {
            int quantidadeDesejada;

            printf("Digite a quantidade desejada: ");
            scanf("%d", &quantidadeDesejada);

            // Verificando se a quantidade desejada está disponível em estoque
            if (quantidadeDesejada <= produtos[opcao-1].quantidade) {
                produtos[opcao-1].quantidade -= quantidadeDesejada;
                totalCompra += produtos[opcao-1].preco * quantidadeDesejada;

                printf("Compra realizada com sucesso!\n");
            } else {
                printf("Quantidade indisponível em estoque! Compra não realizada.\n");
            }
        }

        printf("\nSelecione o número do produto que deseja comprar (ou 0 para sair): ");
        scanf("%d", &opcao);
    }

    // Exibindo o valor total da compra
    printf("Total da compra: R$ %.2f\n", totalCompra);

    return 0;
}
