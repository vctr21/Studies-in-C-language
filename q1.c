/* Faca um programa que leia um valor inteiro decimal X e escreva, na tela, este mesmo valor nas bases
hexadecimal e octal.*/

#include <stdio.h>

int main(){

    int num;
    printf("Valor inteiro decimal: ");

    scanf("%d", &num);

    printf("%d em octal: %o\n", num, num);
    printf("%d em hexadecimal: 0x%X\n", num,num);

    return 0;
}
