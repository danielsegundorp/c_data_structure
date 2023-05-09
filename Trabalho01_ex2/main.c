#include <stdio.h>
#include <stdlib.h>
#define L 2
#define C 2

int main()
{
    int i, j;
    int matA[L][C];
    int matB[L][C];
    int matC[L][C];

    printf("Inserir valores para Matriz A: \n");
    for(i = 0; i < L; i++){
        for(j = 0; j < C; j++){
            printf("Digite um numero para a posicao [%d][%d] da matriz A: ", i, j);
            scanf("%d", &matA[i][j]);
        }
    }
    printf("\nInserir valores para a Matriz B: \n");
    for(i = 0; i < L; i++){
        for(j = 0; j < C ; j++){
            printf("Digite um numero para a posicao [%d][%d] da matriz B: ", i, j);
            scanf("%d", &matB[i][j]);
        }
    }

    printf("\nResultado da soma das duas matrizes: \n");
    for(i = 0; i < L; i++){
        for(j = 0; j < C ; j++){
            matC[i][j] = matA[i][j] + matB[i][j];
            printf("%d\t", matC[i][j]);
        }
        printf("\n");
    }


    return 0;
}
