/*Escreva um programa que pegue o valor de uma conta de restaurante e imprima o valor total a ser
pago, considerando que o restaurante cobra 10% de taxa para o gar ̧com.*/

#include <stdio.h>

int main(){

    double valor;
    printf("Insira o valor da conta do restaurante: \n");
    scanf("%lf", &valor);
    
    double valorFinal = 1.1 * valor;

    printf("Valor da conta mais os 10%%: \t%.2lf\n", valorFinal);

    return 0;
}
