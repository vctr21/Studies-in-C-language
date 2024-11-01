/*Escreva um programa que receba a entrada de um n ́umero de trˆes d ́ıgitos, separe o n ́umero em seus
d ́ıgitos componentes e reconstrua um n ́umero com os componentes na ordem inversa. Exemplo: para
entrada de 123, a resposta do programa seria 321.*/

#include <stdio.h>

int main(){
    int num, centenas, dezenas, unidades, invertido;

    printf("Digite um numero de tres digitos: ");
    scanf("%d", &num);

    if (num < 100 || num > 999) {
        printf("O numero deve ter  tres digitos\n");
        return 1;
    }

    centenas = num / 100;      
    dezenas = (num / 10) % 10; 
    unidades = num % 10;       

   
    invertido = (unidades * 100) + (dezenas * 10) + centenas;

   
    printf("O numero invertido de %d eh %d\n", num,invertido);

    return 0;
}
