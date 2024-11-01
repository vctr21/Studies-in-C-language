/*Uma empresa contrata um vendedor a R$ 50,25 por dia. Crie um programa que solicite o n ́umero de
dias trabalhados pelo vendedor e imprima o valor l ́ıquido a ser pago ao mesmo, sabendo que se ele
trabalhou at ́e 10 dias n ̃ao tem direito `a gratifica ̧c ̃ao, se ele trabalhou acima de 10 dias e at ́e 20 dias
tem direito `a gratifica ̧c ̃ao de 20%, se ele trabalhou acima de 20 dias tem direito `a gratifica ̧c ̃ao de 30%.
Sempre s ̃ao descontados 10% de imposto de renda em cima do valor bruto.*/
#include <stdio.h>

double calcularSalario(int diasTrabalhados);
int main(){
    int diasTrabalhados;
    printf("Quantos dias foram trabalhados?: \n");
    scanf("%d", &diasTrabalhados);

    double salario = calcularSalario(diasTrabalhados);

    if (diasTrabalhados < 0) {
        printf("Número de dias trabalhados não pode ser negativo.\n");
        return 1;
    }

    printf("Salario Final eh igual a : %.2lf\n", salario);

    return 0;
}
double calcularSalario(int diasTrabalhados){
    double salarioFinal;

    if (diasTrabalhados <= 10)
    {       salarioFinal = 0.9  * (50.25 * diasTrabalhados);
    } 

    else if (diasTrabalhados > 10 && diasTrabalhados <= 20)
    {       salarioFinal = 1.2 * 0.9 * (50.25 * diasTrabalhados);

    } 

    else if (diasTrabalhados > 20)
    {       salarioFinal = 1.3 * 0.9 * (50.25 * diasTrabalhados);
       
    }
        
    return salarioFinal;
}
