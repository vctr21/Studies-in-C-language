/*Sabendo que os argumentos da fun ̧c ̃ao “printf” podem ser express ̃oes (a+b, a/b, a*b...), e n ̃ao somente
argumentos, fa ̧ca um programa capaz de ler um valor inteiro X e escrever seu triplo, seu quadrado, e
seu meio.*/
#include <stdio.h>
int main(){

    int num;
    printf("Insira um valor decilmal: \n");
    scanf("%d", &num);

    
    printf("O valor do Triplo de %d eh %d \n",num , (3 * num));
    printf("O Valor do Quadrado de %d eh %d \n",num , num * num);
    printf("O Valor da Metade de %d eh %d \n", num, num/2);

    return 0;
}
