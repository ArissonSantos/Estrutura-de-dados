#include <stdio.h>
#include <time.h>

// Definição da estrutura Funcionario
struct Funcionario {
    char nome[50];
    char cargo[50];
    float salario;
    time_t data_admissao;
};

// Função para dar um aumento de salário
void darAumentoSalario(struct Funcionario *funcionario, float aumento) {
    funcionario->salario += aumento;
}

// Função para calcular quanto tempo o funcionário está na empresa
int calcularTempoEmpresa(struct Funcionario funcionario) {
    time_t agora;
    time(&agora);
    
    double segundos = difftime(agora, funcionario.data_admissao);
    double dias = segundos / (60 * 60 * 24);
    
    return (int) dias;
}

int main() {
    // Criando um funcionário
    struct Funcionario funcionario;
    strcpy(funcionario.nome, "João");
    strcpy(funcionario.cargo, "Desenvolvedor");
    funcionario.salario = 3000;
    time(&funcionario.data_admissao);
    
    // Imprimindo os dados atuais do funcionário
    printf("Nome: %s\n", funcionario.nome);
    printf("Cargo: %s\n", funcionario.cargo);
    printf("Salário: %.2f\n", funcionario.salario);
    
    // Dando um aumento de salário de 500
    darAumentoSalario(&funcionario, 500);
    printf("Salário após o aumento: %.2f\n", funcionario.salario);
    
    // Calculando o tempo que o funcionário está na empresa
    int tempoEmpresa = calcularTempoEmpresa(funcionario);
    printf("Tempo na empresa (em dias): %d\n", tempoEmpresa);
    
    return 0;
}
