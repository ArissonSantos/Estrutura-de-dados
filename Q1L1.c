#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct tipo_pessoa
{
    char nome[50];
    int idade;
    float altura;
};

typedef struct tipo_pessoa pessoa;

int main(){
    
    pessoa person = {"Arisson", 20, 1.77};
    
    printf("Nome : %s\n", person.nome);
    
    printf("Idade : %d\n", person.idade);

    printf("Altura : %.2f\n", person.altura);
   

return 0;
}

