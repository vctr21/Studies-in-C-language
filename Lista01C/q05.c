/*Fazer um programa para ler a altura (em metros) e o sexo de uma pessoa e calcular o seu peso ideal
atrav ́es da seguinte f ́ormula:
para homens: 72.7 * altura - 58
para mulheres: 62.1 * altura - 44.7*/

#include <stdio.h>

double calculadora(char genero, double altura);

int main(){
    char genero;
    printf("Insira M para masculino ou F para feminino: \n");
    scanf("%c", &genero);

    double altura;
    printf("Insira a altura em metros: \n");
    scanf("%lf", &altura);

    double peso = calculadora(genero, altura);
    printf("O peso ideal eh %.2lf\n", peso);
    

    return 0;
}

double calculadora(char genero, double altura){

    double peso;
    if (genero == 'M'){
        peso = (72.7 * altura) - 58;
    }
    
    if (genero == 'F'){
        peso = (62.1 * altura) - 44.7;
    }
    
    return peso;
}
