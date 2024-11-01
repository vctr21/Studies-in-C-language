/*Escreva um programa que calcule o produto entre um valor dado x por 2 elevado a um valor dado n.
Obs.: Utilize operadores bin ́arios.*/
#include <stdio.h>

int main() {
    int x, n, resultado;

    // Solicita os valores de x e n ao usuário
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    // Calcula x * (2^n) usando o operador de deslocamento à esquerda
    resultado = x << n;

    // Exibe o resultado
    printf("Resultado de %d * 2^%d = %d\n", x, n, resultado);

    return 0;
}
