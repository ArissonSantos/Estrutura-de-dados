#include <stdio.h>

typedef struct {
    double dolares;
    double euros;
} Moeda;

int main() {
    Moeda moeda;
    double valor;

    printf("Digite a quantidade de dólares: ");
    scanf("%lf", &(moeda.dolares));

    printf("Digite a quantidade de euros: ");
    scanf("%lf", &(moeda.euros));

    int escolha;
    printf("Escolha a moeda para conversão: \n");
    printf("1 - Dólares para Euros\n");
    printf("2 - Euros para Dólares\n");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            printf("Digite o valor em dólares: ");
            scanf("%lf", &valor);
            printf("%.2lf dólares equivale a %.2lf euros\n", valor, valor * (moeda.euros / moeda.dolares));
            break;
        case 2:
            printf("Digite o valor em euros: ");
            scanf("%lf", &valor);
            printf("%.2lf euros equivale a %.2lf dólares\n", valor, valor * (moeda.dolares / moeda.euros));
            break;
        default:
            printf("Escolha inválida!\n");
    }

    return 0;
}
