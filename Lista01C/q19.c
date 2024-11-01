/*Escreva um programa que receba um n ́umero inteiro e ent ̃ao determine e imprima se ele  ́e par ou  ́ımpar.
Obs.: N ̃ao utilizar estrutura de decis ̃ao if.*/
#include <stdio.h>

int main(){
    int num;
    /*Utilizar operador ternário para uma decisão sem else*/
    printf("Insira um numero inteiro para saber se eh par ou impar: \n");
    scanf("%d",&num);
    
    printf("O numero %d eh %s !!! \n",num,(num%2?"impar":"par"));

    return 0;
}