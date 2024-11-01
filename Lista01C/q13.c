/*Escreva um programa que leia uma temperatura em graus Celsius e apresente convertida em graus
Fahrenheit. A f ́ormula de vers ̃ao  ́e F = (9 * C + 160) / 5, sendo F a temperatura Fahrenheit e C a
temperatura em Celsius.*/
#include <stdio.h>

double calculadora(double celsius);
int main(){

    double c;
    printf("Insira a temperatura em graus celsius: \n");        
    scanf("%lf", &c);
    
    double f = calculadora(c);
    printf("Temperatura em Fahrenheit: %.2lf\n", f);

    return 0;
}

double calculadora(double c){
    return (9.0 / 5.0) * c + 32.0;
}
