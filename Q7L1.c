#include <stdio.h>

// Definindo a estrutura ContaBancaria
struct ContaBancaria {
    char nomeTitular[50];
    int numeroConta;
    float saldo;
};

// Função para depositar dinheiro na conta
void depositar(struct ContaBancaria* conta, float valor) {
    conta->saldo += valor;
    printf("Depósito de %.2f realizado com sucesso.\n", valor);
}

// Função para sacar dinheiro da conta
void sacar(struct ContaBancaria* conta, float valor) {
    if (conta->saldo >= valor) {
        conta->saldo -= valor;
        printf("Saque de %.2f realizado com sucesso.\n", valor);
    } else {
        printf("Saldo insuficiente para sacar %.2f.\n", valor);
    }
}

// Função para verificar saldo da conta
void verificarSaldo(struct ContaBancaria conta) {
    printf("Saldo atual: %.2f\n", conta.saldo);
}

int main() {
    // Criando uma instância da ContaBancaria
    struct ContaBancaria minhaConta;
    
    // Preenchendo os dados da conta
    strcpy(minhaConta.nomeTitular, "João da Silva");
    minhaConta.numeroConta = 123456;
    minhaConta.saldo = 1000.0;
    
    // Exemplo de uso das funções
    depositar(&minhaConta, 500.0);
    sacar(&minhaConta, 200.0);
    verificarSaldo(minhaConta);
    
    return 0;
}
