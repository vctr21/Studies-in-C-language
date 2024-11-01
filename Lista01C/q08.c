/*Escreva um programa que leia um valor num ́erico inteiro e apresente como resultado os seus valores
sucessor e antecessor.*/
#include <stdio.h>

int main(){

    int valor;
    printf("Insira o valor\n");
    scanf("%d", &valor);

    printf("Valor do antecessor: %d\n",(valor -1));
    printf("Valor do sucessor: %d\n",(valor+1));

    return 0;
}
