#include <stdio.h>
#include <stdlib.h>
#define L 3
#define C 3

int main()
{
    int i, j, maior, linha_maior, soma;
    int mat[L][C];
    maior = 0;

    for(i = 0; i < L; i++){
        for(j = 0; j < C; j++){
            printf("Digite um numero para a posicao [%d][%d] da matriz: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    for(i = 0;i < L; i++){
        soma = 0;
        for(j = 0; j < C; j++){
            soma += mat[i][j];
        }
        if(soma > maior){
            maior = soma;
            linha_maior = i;
        }
    }

    for(i = 0; i < L; i++){
        for(j = 0; j < C; j++){
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
    printf("\nLinha de maior soma: %d", linha_maior + 1);
    printf("\nSoma total da linha: %d\n", maior);


    return 0;
}
