#include <stdio.h>
#include <stdlib.h>

struct tipo 
{
    int vlr_int;
    float vlr_float;
    char letra[1];
};

typedef struct tipo tipo;

int main(){

    tipo demo = {16, 26.43, "V"};

    printf("------------------------------\n");

    printf("Uma STRUCT é uma variável hetegênea\n");
    
    printf("------------------------------\n");

    printf("Ela pode armazenar valores de tipos diferentes\n");
    
    printf("------------------------------\n");

    printf("Neste exemplo criamos 3 campos na struct tipo\n");

    printf("------------------------------\n");

    printf("Os valores armazenados são:\n1 - tipo int: %d\n2- tipo float: %.2f \n3 - tipo char: %s\n",
    demo.vlr_int, demo.vlr_float, demo.letra);

return 0;

}