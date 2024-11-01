/*Fazer um programa para ler as coordenadas x e y de dois pontos e calcular a distˆancia entre os dois
pontos no plano. (Utilize a fun ̧c ̃ao sqrt (numero), biblioteca math.h).

d =
p
(x2 − x1)
2 + (y2 − y1)

2*/
#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2, distancia;

    printf("Digite as coordenadas do primeiro ponto (x1 y1): ");
    scanf("%f %f", &x1, &y1);

    printf("Digite as coordenadas do segundo ponto (x2 y2): ");
    scanf("%f %f", &x2, &y2);

    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("A distancia entre os pontos é: %.2f\n", distancia);

    return 0;
}
