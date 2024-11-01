/*Escreva um programa que leia dois inteiros e ent ̃ao determine e imprima se o primeiro  ́e m ́ultiplo do
segundo. Obs.: N ̃ao utilizar estrutura de decis ̃ao if.*/
#include <stdio.h>

int main(){
    int num1,num2;
    /*Utilizar operador ternário para uma decisão sem else*/
    printf("Insira o primeiro numero: \n");
    scanf("%d",&num1);

    printf("Insira o segundo numero: \n");
    scanf("%d",&num2);

    printf("O numero %d eh multiplo de %d? %s\n",num1,num2,(num1%num2?"Nao":"Sim"));
    
    return 0;
}