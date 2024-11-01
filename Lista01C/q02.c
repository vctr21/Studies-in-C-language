/*Fa ̧ca um programa capaz de ler um valor real e escrevˆe-lo com apenas uma casa decimal.*/
#include <stdio.h>
int main(){
    double num;
    printf("Insira um valor real(separe a parte fracionada com .): ");
    scanf("%lf", &num);

    printf("Valor escrito com 1 casa decimal: %.1lf\n", num, num);
    
    return 0;
}
