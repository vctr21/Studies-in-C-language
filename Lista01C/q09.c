/*Escreva um programa que calcule e apresente o valor do volume de um caixa retangular utilizando a
f ́ormula VOLUME = COMPRIMENTO * LARGURA * ALTURA.*/

#include <stdio.h>

double calculadora(double comprimento, double altura, double largura);
int main(){

    double comprimento;
    printf("Insira o valor para o comprimento: \n");
    scanf("%lf", &comprimento);

    double altura;
    printf("Insira o valor para a altura: \n");
    scanf("%lf", &altura);

    double largura;
    printf("Insira o valor para a largura: \n");
    scanf("%lf", &largura);

    double volume = calculadora(comprimento,altura,largura);
    printf("Volume da caixa retangular eh : %.2lf cm cubicos\n ", volume);
    

    return 0;
}

double calculadora(double comprimento, double altura, double largura){
    return altura * largura * comprimento;
}
