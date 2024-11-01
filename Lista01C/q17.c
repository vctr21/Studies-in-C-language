/*Escreva um programa que leia o raio de um c ́ırculo e imprima seu diˆametro, o valor de sua circunferˆencia
e sua  ́area. Use o valor de 3,14159 para “pi”. Fa ̧ca cada um destes c ́alculos dentro da instru ̧c ̃oes (ou
instru ̧c ̃oes) printf e use o especificador de convers ̃ao %f.*/
#include <stdio.h>

#define PI 3.14159
int main(){


    float raio;
    printf("Insira o valor do raio: \n");
    scanf("%f", &raio);

    printf("Diametro eh igual a: %f\n", raio * 2);
    printf("Circunferencia eh igual a : %f\n", 2 * PI * raio);
    printf("O valor da area eh igual a: %f\n", PI * raio *raio);


    return 0;
}

