/*Escreva um programa que solicite 3 n ́umeros em ponto flutuante e imprima a m ́edia aritm ́etica e
geom ́etrica. (Utilize a fun ̧c ̃ao pow(base, expoente) da biblioteca math.h).*/
#include <stdio.h>
#include <math.h>

int main() {
    float num1, num2, num3;
    float media_a, media_g;

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    printf("Digite o terceiro numero: ");
    scanf("%f", &num3);

    media_a = (num1 + num2 + num3) / 3;

    media_g = pow(num1 * num2 * num3, 1.0 / 3.0);

    // Exibe os resultados
    printf("Media aritmetica: %.2f\n", media_a);
    printf("Media geometrica: %.2f\n", media_g);

    return 0;
}
