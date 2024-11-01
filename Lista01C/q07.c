/*Escreva um programa que receba um valor inteiro e apresente o resultado do valor lido elevado ao
quadrado.*/
#include <stdio.h>
#include <math.h>

int main(){
    int valor;
    printf("Insira o valor inteiro: \n");
    scanf("%d", &valor);

    printf("Valor ao quadrado: %d", (int)pow(valor,2));

    return 0;
}
