/*Escrever um programa que receba um valor inteiro do usu ́ario e apresente o seu valor absoluto (m ́odulo).
N ̃ao utilize estrutura de decis ̃ao if.*/
#include <stdio.h>


int modulo(int valor);
int main(){

    int valor;
    printf("Qual o valor do numero inteiro?\n");
    scanf("%d", &valor);


    int moduloDoNumero = modulo(valor);
    printf("Modulo do numero eh: %d\n", moduloDoNumero);



    return 0;
}

int modulo(int valor){
  return (valor < 0) ? -valor : valor;
}

