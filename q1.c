/* Faca um programa que leia um valor inteiro decimal X e escreva, na tela, este mesmo valor nas bases
hexadecimal e octal.*/

#include <stdio.h>

int main(){

    int numero;
    printf("Valor inteiro decimal:");

    scanf("%d", &numero);

    printf("%d em octal: %o\n", numero, numero);
    printf("%d em hexadecimal: 0x%X\n", numero,numero);

    return 0;
}
