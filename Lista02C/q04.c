/*Fazer um programa que receba um valor n no teclado e determine o maior e o menor termo fornecido.
A condi ̧c ̃ao de termino do programa  ́e quando o usu ́ario digitar zero.*/

#include <stdio.h>

int main(void){
    int menor;
    int maior;

    int n;
    int aux = 0;

    do {
        printf("Insira o valor de n: ");
        scanf("%d", &n);

        if (aux == 0) {
            menor = n;
            maior = n;
        }

        if (n > maior) {
            maior = n;
        }

        if (n < menor) {
            menor = n;
        }

        printf("O maior é %d e o menor é %d\n", maior, menor);
        aux = 1;
    } while (n != 0);
    printf("Operação encerrada!\n");
    return 0;
}