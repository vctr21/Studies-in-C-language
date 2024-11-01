/*Escreva um programa que leia um tempo em segundos e imprima quantas horas, minutos e segundos
h ́a neste tempo.*/
#include <stdio.h>

int main() {
    int tempo, horas, minutos, segundos;
    printf("Digite o tempo em segundos: ");
    scanf("%d", &tempo);

    horas = tempo / 3600;
    tempo = tempo % 3600;
    minutos = tempo / 60;
    segundos = tempo % 60;

    printf("Horas: %d, Minutos: %d, Segundos: %d\n", horas, minutos, segundos);

    return 0;
}
