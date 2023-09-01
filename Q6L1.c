#include <stdio.h>

// Definição da struct "estudante"
struct Estudante {
    char nome[50];
    int matricula;
    float notas[3];
};

// Função para calcular a média das notas
float calcularMedia(struct Estudante aluno) {
    float soma = 0;
    for (int i = 0; i < 3; i++) {
        soma += aluno.notas[i];
    }
    return soma / 3;
}

// Função para determinar se um aluno está aprovado
int estaAprovado(struct Estudante aluno) {
    float media = calcularMedia(aluno);
    if (media >= 7) {
        return 1; // Aprovado
    } else {
        return 0; // Reprovado
    }
}

int main() {
    // Criando um objeto "estudante"
    struct Estudante aluno;
    
    // Preenchendo os campos da struct
    printf("Digite o nome do aluno: ");
    fgets(aluno.nome, 50, stdin);
    printf("Digite a matricula do aluno: ");
    scanf("%d", &aluno.matricula);
    printf("Digite as notas do aluno nas tres disciplinas:\n");
    for (int i = 0; i < 3; i++) {
        printf("Nota %d: ", i + 1);
        scanf("%f", &aluno.notas[i]);
    }
    
    // Calculando a média e verificando se está aprovado
    float media = calcularMedia(aluno);
    int aprovado = estaAprovado(aluno);
    
    // Exibindo os resultados
    printf("Média do aluno: %.2f\n", media);
    if (aprovado) {
        printf("Aluno aprovado!\n");
    } else {
        printf("Aluno reprovado!\n");
    }
    
    return 0;
}
