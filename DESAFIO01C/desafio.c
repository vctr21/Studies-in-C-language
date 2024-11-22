/* Questao desafio */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int main(void) {
    unsigned char armario = 0; 
    int i, op, posicao, livre;
    srand(time(NULL));

    while (1) {
        printf("\n===================\n");
        printf("Estado dos armários:\n");
        for (i = 0; i < 8; i++) {
            if (armario & (1 << i)) {
                printf("O armário %d: Ocupado\n", i + 1);
            } else {
                printf("O armário %d: Livre\n", i + 1);
            }
        }

        printf("\nMenu:\n");
        printf("1. Ocupar armário\n");
        printf("2. Liberar armário\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &op);

        if (op == 3) {
            printf("Encerrando o programa.\n");
            break;
        } else if (op == 1) {
            livre = 0;
            for ( i = 0; i < 8; i++) {
                if (!(armario & (1 << i))) {
                    livre = 1;
                    break;
                }
            }

            if (!livre) {
                printf("Todos os armários estão ocupados.\n");
            } else {
                while (1) {
                    posicao = rand() % 8;
                    if (!(armario & (1 << posicao))) {
                        armario |= (1 << posicao); 
                        printf("Armário %d ocupado.\n", posicao + 1);
                        break;
                    }
                }
            }
        } else if (op == 2) {
            printf("Digite o número do armário que deseja liberar (1-8): ");
            scanf("%d", &posicao);
            if (posicao < 1 || posicao > 8) {
                printf("Número inválido! Escolha entre 1 e 8.\n");
            } else {
                if (armario & (1 << (posicao - 1))) {
                    armario &= ~(1 << (posicao - 1)); 
                    printf("Armário %d liberado.\n", posicao);
                } else {
                    printf("O armário %d já está livre.\n", posicao);
                }
            }
        } else {
            printf("Opção inválida. Tente novamente.\n");
        }
    }

    return 0;
}