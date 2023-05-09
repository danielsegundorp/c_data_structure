#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, k, LA, CA, LB, CB;

    //Determinando as dimensões da Matriz A
    printf("-=-=-=Programa que calcula a multiplicacao de duas matrizes (m x n) e (p x q)-=-=-=\n");
    printf("-=-=-=para que o calcula aconteca, o numero de colunas da primeira matriz(n)-=-=-=\n");
    printf("-=-=-=deve ser igual ao numero de linhas da segunda matriz(p)-=-=-=\n\n");
    printf("-=-=-=-=-=-= Determinando a dimensao da Matriz A -=-=-=-=-=-=\n");
    printf("\nInsira o numero de linhas para a Matriz A: ");
    scanf("%d", &LA);
    printf("Insira o numero de colunas para a Matriz A: ");
    scanf("%d", &CA);
    printf("\n");
    int matA[LA][CA];


    //Determinando as dimensões da Matriz B
    printf("-=-=-=-=-=-= Determinando a dimensao da Matriz B -=-=-=-=-=-=\n");
    printf("\nInsira o numero de linhas para a Matriz B: ");
    scanf("%d", &LB);
    printf("Insira o numero de colunas para a Matriz B: ");
    scanf("%d", &CB);
    int matB[LB][CB];

    //Verificação de compatibilidade
    if(CA != LB){
        printf("\n!!!imcompatibilidade de matrizes encontrada, tente novamente!!!\n\n");
        system("pause");
        return 0;
    }

    //Inserindo elementos na Matriz A
    printf("\n-=-=-=-=-=-=Inserindo elementos na Matriz A -=-=-=-=-=-=\n\n");
    for(i = 0; i < LA; i++){
        for(j = 0; j < CA; j++){
            printf("Digite um numero para a posicao [%d][%d] da Matriz A: ", i, j);
            scanf("%d", &matA[i][j]);
        }
    }

    //Inserindo elementos na Matriz B
    printf("\n-=-=-=-=-=-=Inserindo elementos na Matriz B -=-=-=-=-=-=\n\n");
    for(i = 0; i < LB; i++){
        for(j = 0;j < CB; j++){
            printf("Digite um numero para a posicao [%d][%d] da Matriz B: ", i, j);
            scanf("%d", &matB[i][j]);
        }
    }

    //Multiplicação das Matrizes A e B
    int matC[LA][CB];
    for(i = 0; i < LA; i++){
        for(j = 0; j < CB; j++){
            matC[i][j] = 0;
            for(k = 0; k < CA; k++){
                matC[i][j] += matA[i][k] * matB[k][j];
            }
        }
    }

    //Impressão da Matriz A
    printf("\n-=-=-=-=-=Elementos da Matriz A-=-=-=-=-=\n");
    for(i = 0; i < LA; i++){
        for(j = 0; j < CA; j++){
            printf("%d\t", matA[i][j]);
        }
        printf("\n\n");
    }

    //Impressão da Matriz B
    printf("-=-=-=-=-=Elementos da Matriz B-=-=-=-=-=\n");
    for(i = 0;i < LB; i++){
        for(j = 0;j < CB; j++){
            printf("%d\t", matB[i][j]);
        }
        printf("\n\n");
    }

    //Impressão da Matriz multiplicada
    printf("-=-=-=-=-=Elemetos da Matriz resultante da multiplicacao-=-=-=-=-=\n");
    for(i = 0;i < LA; i++){
        for(j = 0;j < CB; j++){
            printf("%d\t", matC[i][j]);
        }
        printf("\n");
    }


    return 0;
}
