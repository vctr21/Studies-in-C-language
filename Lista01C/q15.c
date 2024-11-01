/*Desenvolva um programa que calcule o salario liquido de um professor. Para elaborar o programa,  ́e
necess ́ario possuir alguns dados, tais como o valor da hora aula, n ́umero de horas trabalhadas no mˆes e
percentual de desconto do INSS. Em primeiro lugar, deve-se estabelecer o seu sal ́ario bruto para fazer
o desconto e ter o valor do salario liquido. Obs.: o programa deve informar o salario bruto e salario
liquido do professor.*/
#include <stdio.h>
double calcularSalarioBruto(int numeroDeHoras, double valorDaHora);
double calcularSalarioLiquido(double salarioBruto);

int main(){

    int numeroDeHoras;
    printf("Quantas horas trabalhadas?\n");
    scanf("%d", &numeroDeHoras);

    double valorDaHora;
    printf("Qual o valor da hora-aula?\n");
    scanf("%lf", &valorDaHora);

    double salarioBruto = calcularSalarioBruto(numeroDeHoras, valorDaHora);
    double salarioLiquido = calcularSalarioLiquido(salarioBruto);

    printf("Salario Bruto eh igual a: %.2lf\n", salarioBruto);
    printf("Salario Liquido eh igual a: %.2lf\n", salarioLiquido);



    return 0;
}

double calcularSalarioBruto(int numeroDeHoras, double valorDaHora){

    return numeroDeHoras * valorDaHora;
}

double calcularSalarioLiquido(double salarioBruto){
   double taxaImpostoInss;

    if (salarioBruto <= 1412.00) {
        taxaImpostoInss = 0.075;  
    } else if (salarioBruto <= 2666.68) {
        taxaImpostoInss = 0.09;   
    } else if (salarioBruto <= 4000.03) {
        taxaImpostoInss = 0.12;  
    } else if (salarioBruto <= 7786.02) {
        taxaImpostoInss = 0.14;   
    }

    double desconto = salarioBruto * taxaImpostoInss;
    return salarioBruto - desconto;
}

