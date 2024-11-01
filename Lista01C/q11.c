/*Escreva um programa que pe ̧ca ao usu ́ario para digitar dois n ́umeros, obtenha-os do usu ́ario e imprima
a soma, o produto, a diferen ̧ca, o quociente e o resto da divis ̃ao dos dois n ́umeros.*/

#include <stdio.h>

int main(){

    double n1;
    printf("Insira o primeiro numero: \n");
    scanf("%lf", &n1);

    double n2;
    printf("Insira o valor do segundo numero: \n");
    scanf("%lf", &n2);

    double soma = n1 + n2;
    double dif = n1 - n2;
    double mult = n1 * n2;
    double div;
    div = (n2 != 0) ? (n1 / n2) : -1;
    


    printf("Soma: \t\t%.2lf\n", soma);
    printf("Subtracao: \t%.2lf\n", dif);
    printf("Multiplicacao: \t%.2lf\n", mult);
    printf("Divisao: \t%.2lf\n", div);

    

    return 0;
}
