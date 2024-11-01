/*Elabore um programa que apresente o valor da convers ̃ao em d ́olar de um valor lido em real. O
programa deve solicitar o valor da cota ̧c ̃ao do d ́olar e tamb ́em a quantidade de reais que o usu ́ario
deseja converter.*/
#include <stdio.h>

int main(){

    double qtdeR$;
    printf("Insira o valor em real\n");
    scanf("%lf", &qtdeR$);

    double cotacao;
    printf("Insira quantos reais vale 1 dolar\n");
    scanf("%lf", &cotacao);

    printf("Valor em dolares: %.2lf\n", cotacao*qtdeR$);
    

    return 0;
}
