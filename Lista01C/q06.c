/*Fa ̧ca um programa que leia uma quantidade de horas, minutos e segundos e imprima o total de segundos.*/
#include <stdio.h>

int calculadora(int segundos, int minutos, int horas);
int main(){
    int segundos;
    printf("Insira o valor da quantia de segundos: \n");
    scanf("%d", &segundos);

    int minutos;
    printf("Insira o valor da quantia de minutos: \n");
    scanf("%d", &minutos);

    int horas;
    printf("Insira o valor da quantia de horas: \n");
    scanf("%d", &horas);

    int resultado = calcularSegundos(segundos,minutos,horas);
    printf("Resultado em Segundos: \t%d", resultado);
    

    return 0;
}

int calculadora(int segundos, int minutos, int horas){
    return (3600 * horas) + (60 * minutos) + (segundos);
}
