/*Escreva um programa que leia duas vari ́aveis A e B e efetue a troca dos valores. O objetivo  ́e que a
vari ́avel A passe a conter o valor de B e a vari ́avel B passe a possuir o valor de A. Apresente os valores
ap ́os a efetiva ̧c ̃ao do processamento da troca.*/

#include <stdio.h>
int main(){

    int A;
    printf("Insira o primeiro valor: \n");
    scanf("%d", &A);

    int B;
    printf("Insira o segundo valor: \n");
    scanf("%d", &B);


    int C = A;
    A = B;
    B = C;
    printf("A eh igual a : %d\n", A);
    printf("B eh igual a : %d\n", B);

    return 0;
}
