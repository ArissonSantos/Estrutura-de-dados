#include <stdio.h>
#include <math.h>

struct ponto
{
    int position_x_1;
    int position_y_1;
    float distance;
};

typedef struct ponto ponto;

int main()
{
    ponto p;

    printf("Insira a posição no eixo X: \n");
    scanf("%d", &p.position_x_1);

    printf("Insira a posição no eixo Y: ");
    scanf("%d", &p.position_y_1);

    p.distance = sqrt( pow(p.position_x_1, 2) + pow(p.position_y_1, 2) );

    printf("%f", p.distance);
    return 0;
}
